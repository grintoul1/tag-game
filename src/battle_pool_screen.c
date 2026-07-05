#include "global.h"
#include "battle.h"
#include "battle_pool_screen.h"
#include "battle_pool.h"
#include "sprite.h"
#include "event_data.h"
#include "overworld.h"
#include "random.h"
#include "battle_tower.h"
#include "text.h"
#include "palette.h"
#include "task.h"
#include "main.h"
#include "malloc.h"
#include "bg.h"
#include "gpu_regs.h"
#include "string_util.h"
#include "international_string_util.h"
#include "window.h"
#include "data.h"
#include "decompress.h"
#include "pokemon_summary_screen.h"
#include "sound.h"
#include "party_menu.h"
#include "pokedex.h"
#include "util.h"
#include "trainer_pokemon_sprites.h"
#include "starter_choose.h"
#include "strings.h"
#include "graphics.h"
#include "constants/battle_frontier.h"
#include "constants/battle_tent.h"
#include "constants/songs.h"
#include "constants/rgb.h"

// Select_ refers to the first Pokémon selection screen where you choose your initial 3 rental Pokémon.
// Swap_   refers to the subsequent selection screens where you can swap a Pokémon with one from the beaten trainer

// Note that, generally, "Action" will refer to the immediate actions that can be taken on each screen,
// i.e. selecting a Pokémon or selecting the Cancel button
// The "Options menu" will refer to the popup menu that shows when some actions have been selected

#define SWAP_PLAYER_SCREEN 0  // The screen where the player selects which of their Pokémon to swap away
#define SWAP_ENEMY_SCREEN  1  // The screen where the player selects which new Pokémon from the defeated party to swap for
#define SWAP_PARTY_SCREEN_ELITE_FOUR 2  // The screen where the player selects which of their Pokémon to swap away
#define SWAP_POOL_SCREEN_ELITE_FOUR  3  // The screen where the player selects which new Pokémon from the defeated party to swap for

#define SELECTABLE_MONS_COUNT 6

#define PALNUM_FADE_TEXT 14
#define PALNUM_TEXT      15

enum {
    PALTAG_BALL_GRAY = 100,
    PALTAG_BALL_SELECTED,
    PALTAG_INTERFACE,
    PALTAG_MON_PIC_BG,
};

enum {
    GFXTAG_BALL = 100,
    GFXTAG_ARROW,
    GFXTAG_MENU_HIGHLIGHT_LEFT,
    GFXTAG_MENU_HIGHLIGHT_RIGHT,
    GFXTAG_ACTION_BOX_LEFT,
    GFXTAG_ACTION_BOX_RIGHT,
    GFXTAG_ACTION_HIGHLIGHT_LEFT,
    GFXTAG_ACTION_HIGHLIGHT_MIDDLE,
    GFXTAG_ACTION_HIGHLIGHT_RIGHT,
    GFXTAG_MON_PIC_BG_ANIM,
};

// Tasks in this file universally use data[0] as a state for switches
#define tState   data[0]

// States for both Select/Swap versions of Task_FadeSpeciesName
enum {
    FADESTATE_INIT,
    FADESTATE_RUN,
    FADESTATE_DELAY
};

// Return states for the Select Actions
enum {
    SELECT_SUMMARY,
    SELECT_CONTINUE_CHOOSING,
    SELECT_CONFIRM_MONS,
    SELECT_INVALID_MON,
};

struct PoolSelectableMon
{
    u16 monId;
    u16 ballSpriteId;
    u8 selectedId; // 0 - not selected, 1 - first Pokémon, 2 - second Pokémon, 3 - third Pokémon
    struct Pokemon monData;
};

struct PoolMonPic
{
    u8 monSpriteId;
    u8 bgSpriteId;
};

struct PoolSelectScreen
{
    u8 menuCursorPos;
    u8 menuCursor1SpriteId;
    u8 menuCursor2SpriteId;
    u8 cursorPos;
    u8 cursorSpriteId;
    u8 selectingMonsState;
    bool8 fromSummaryScreen;
    u8 yesNoCursorPos;
    u8 unused;
    struct PoolSelectableMon mons[SELECTABLE_MONS_COUNT];
    struct PoolMonPic monPics[FRONTIER_PARTY_SIZE]; // Array so all chosen mons can be shown at once
    bool8 monPicAnimating;
    u8 fadeSpeciesNameTaskId;
    bool8 fadeSpeciesNameActive;
    u16 speciesNameColorBackup;
    bool8 fadeSpeciesNameFadeOut;
    u8 fadeSpeciesNameCoeffDelay;
    u8 fadeSpeciesNameCoeff;
    u8 faceSpeciesNameDelay;
};

struct SwapScreenAction
{
    u8 id;
    TaskFunc func;
};

struct FactorySwapScreen
{
    u8 menuCursorPos;
    u8 menuCursor1SpriteId;
    u8 menuCursor2SpriteId;
    u8 cursorPos;
    u8 cursorSpriteId;
    u8 ballSpriteIds[FRONTIER_PARTY_SIZE];
    u8 pkmnForSwapButtonSpriteIds[2][3]; // For this and sprite ID array below, [0][i] is the button background, [1][i] is the button highlight
    u8 cancelButtonSpriteIds[2][2];
    u8 playerMonId;
    u8 enemyMonId;
    bool8 inEnemyScreen;
    bool8 fromSummaryScreen;
    u8 yesNoCursorPos;
    u8 actionsCount;
    const struct SwapScreenAction *actionsData;
    u8 unused[4];
    bool8 monSwapped;
    u8 fadeSpeciesNameTaskId;
    bool8 fadeSpeciesNameActive;
    u16 speciesNameColorBackup;
    bool8 fadeSpeciesNameFadeOut;
    u8 fadeSpeciesNameCoeffDelay;
    u8 fadeSpeciesNameCoeff;
    u8 faceSpeciesNameDelay;
    struct PoolMonPic monPic;
    bool8 monPicAnimating;
};

static void SpriteCB_Pokeball(struct Sprite *);
static void SpriteCB_OpenMonPic(struct Sprite *);
static void OpenMonPic(u8 *, bool8 *, bool8);
static void HideMonPic(struct PoolMonPic, bool8 *);
static void CloseMonPic(struct PoolMonPic, bool8 *, bool8);
static void Task_OpenMonPic(u8);
static void Task_CloseMonPic(u8);

// Select screen
static void CB2_InitSelectScreen(void);
static void Select_SetWinRegs(s16, s16, s16, s16);
static void Select_InitMonsData(void);
static void Select_InitAllSprites(void);
static void Select_ReshowMonSprite(void);
static void Select_PrintSelectMonString(void);
static void Select_PrintMonSpecies(void);
static void Select_PrintMonCategory(void);
static void Select_PrintRentalPkmnString(void);
static void Select_CopyMonsToPlayerParty(void);
static void Select_ShowChosenMons(void);
static void Select_ShowYesNoOptions(void);
static void Select_HideChosenMons(void);
static void Select_ShowMenuOptions(void);
static void Select_PrintMenuOptions(void);
static void Select_PrintYesNoOptions(void);
static void Select_Task_FadeSpeciesName(u8);
static void Select_Task_OpenChosenMonPics(u8);
static void Select_Task_HandleChooseMons(u8);
static void Select_Task_HandleMenu(u8);
static void CreateFrontierPoolSelectableMons(u8);
static void CreateSlateportTentSelectableMons(u8);
static void Select_SetBallSpritePaletteNum(u8);
static void Select_ErasePopupMenu(u8);
static u8 Select_RunMenuOptionFunc(void);
static u8 Select_DeclineChosenMons(void);
static u8 Select_OptionSummary(void);
static u8 Select_OptionOthers(void);
static u8 Select_OptionRentDeselect(void);
static bool32 Select_AreSpeciesValid(u16);

// Swap screen
static void CB2_InitSwapScreen(void);
static void Swap_DestroyAllSprites(void);
static void Swap_ShowYesNoOptions(void);
static void Swap_HideActionButtonHighlights(void);
static void Swap_EraseSpeciesWindow(void);
static void Swap_UpdateYesNoCursorPosition(s8);
static void Swap_UpdateMenuCursorPosition(s8);
static void Swap_ErasePopupMenu(u8);
static void Swap_Task_ScreenInfoTransitionIn(u8);
static void Swap_Task_HandleChooseMons(u8);
static void Swap_Task_ScreenInfoTransitionOut(u8);
static void Swap_PrintOnInfoWindow(const u8 *);
static void Swap_ShowMenuOptions(void);
static void Swap_PrintMenuOptions(void);
static void Swap_PrintYesNoOptions(void);
static void Swap_PrintMonSpecies(void);
static void Swap_PrintMonSpeciesAtFade(void);
static void Swap_PrintMonSpeciesForTransition(void);
static void Swap_PrintMonCategory(void);
static void Swap_InitAllSprites(void);
static void Swap_PrintPkmnSwap(void);
static void Swap_EraseSpeciesAtFadeWindow(void);
static void Swap_EraseActionFadeWindow(void);
static void Swap_ShowSummaryMonSprite(void);
static void Swap_UpdateActionCursorPosition(s8);
static void Swap_UpdateBallCursorPosition(s8);
static void Swap_RunMenuOptionFunc(u8);
static void Swap_OptionSwap(u8);
static void Swap_OptionSummary(u8);
static void Swap_OptionRechoose(u8);
static void Swap_RunActionFunc(u8);
static void Swap_TaskCantHaveSameMons(u8);
static void Swap_CreateMonSprite(void);
static void Swap_PrintActionStrings(void);
static void Swap_PrintActionStrings2(void);
static void Swap_PrintOneActionString(u8);
static void Swap_InitActions(u8);
static void Swap_HighlightActionButton(u8);
static bool8 Swap_AlreadyHasSameSpecies(u8);
static void Swap_ActionMon(u8);
static void Swap_ActionCancel(u8);
static void Swap_ActionPkmnForSwap(u8);
static u8 GetNumPastRentalsRank(u8 battleMode, u8 lvlMode);

static EWRAM_DATA u8 *sSelectMenuTilesetBuffer = NULL;
static EWRAM_DATA u8 *sSelectMonPicBgTilesetBuffer = NULL;
static EWRAM_DATA u8 *sSelectMenuTilemapBuffer = NULL;
static EWRAM_DATA u8 *sSelectMonPicBgTilemapBuffer = NULL;
static EWRAM_DATA struct Pokemon *sPoolSelectMons = NULL;
static EWRAM_DATA u8 *sSwapMenuTilesetBuffer = NULL;
static EWRAM_DATA u8 *sSwapMonPicBgTilesetBuffer = NULL;
static EWRAM_DATA u8 *sSwapMenuTilemapBuffer = NULL;
static EWRAM_DATA u8 *sSwapMonPicBgTilemapBuffer = NULL;

static struct PoolSelectScreen *sPoolSelectScreen;
static TaskFunc sSwap_CurrentOptionFunc;
static struct FactorySwapScreen *sPoolSwapScreen;

COMMON_DATA u8 (*gPoolSelect_CurrentOptionFunc)(void) = NULL;

static const u16 sPokeballGray_Pal[]         = INCGFX_U16("graphics/battle_frontier/factory_screen/pokeball_gray.pal", ".gbapal");
static const u16 sPokeballSelected_Pal[]     = INCGFX_U16("graphics/battle_frontier/factory_screen/pokeball_selected.pal", ".gbapal");
static const u16 sInterface_Pal[]            = INCGFX_U16("graphics/battle_frontier/factory_screen/interface.pal", ".gbapal"); // Arrow, menu/action highlights, action box, etc
static const u8 sPokeball_Gfx[]              = INCGFX_U8("graphics/battle_frontier/factory_screen/pokeball.png", ".4bpp"); // Unused, gPokeballSelection_Gfx used instead
static const u8 sArrow_Gfx[]                 = INCGFX_U8("graphics/battle_frontier/factory_screen/arrow.png", ".4bpp");
static const u8 sMenuHighlightLeft_Gfx[]     = INCGFX_U8("graphics/battle_frontier/factory_screen/menu_highlight_left.png", ".4bpp");
static const u8 sMenuHighlightRight_Gfx[]    = INCGFX_U8("graphics/battle_frontier/factory_screen/menu_highlight_right.png", ".4bpp");
static const u8 sActionBoxLeft_Gfx[]         = INCGFX_U8("graphics/battle_frontier/factory_screen/action_box_left.png", ".4bpp");
static const u8 sActionBoxRight_Gfx[]        = INCGFX_U8("graphics/battle_frontier/factory_screen/action_box_right.png", ".4bpp");
static const u8 sActionHighlightLeft_Gfx[]   = INCGFX_U8("graphics/battle_frontier/factory_screen/action_highlight_left.png", ".4bpp");
static const u8 sActionHighlightMiddle_Gfx[] = INCGFX_U8("graphics/battle_frontier/factory_screen/action_highlight_middle.png", ".4bpp");
static const u8 sActionHighlightRight_Gfx[]  = INCGFX_U8("graphics/battle_frontier/factory_screen/action_highlight_right.png", ".4bpp");
static const u8 sMonPicBgAnim_Gfx[]          = INCGFX_U8("graphics/battle_frontier/factory_screen/mon_pic_bg_anim.png", ".4bpp");
static const u8 sMonPicBg_Tilemap[]          = INCBIN_U8( "graphics/battle_frontier/factory_screen/mon_pic_bg.bin");
static const u16 sMonPicBg_Gfx[]             = INCGFX_U16("graphics/battle_frontier/factory_screen/mon_pic_bg.png", ".4bpp");
static const u16 sMonPicBg_Pal[]             = INCGFX_U16("graphics/battle_frontier/factory_screen/mon_pic_bg.png", ".gbapal");

static const struct SpriteSheet sSelect_SpriteSheets[] =
{
    {sArrow_Gfx,              sizeof(sArrow_Gfx),              GFXTAG_ARROW},
    {sMenuHighlightLeft_Gfx,  sizeof(sMenuHighlightLeft_Gfx),  GFXTAG_MENU_HIGHLIGHT_LEFT},
    {sMenuHighlightRight_Gfx, sizeof(sMenuHighlightRight_Gfx), GFXTAG_MENU_HIGHLIGHT_RIGHT},
    {sMonPicBgAnim_Gfx,       sizeof(sMonPicBgAnim_Gfx),       GFXTAG_MON_PIC_BG_ANIM},
    {},
};

static const struct CompressedSpriteSheet sSelect_BallGfx[] =
{
    {gPokeballSelection_Gfx, 0x800, GFXTAG_BALL},
    {},
};

static const struct SpritePalette sSelect_SpritePalettes[] =
{
    {sPokeballGray_Pal,     PALTAG_BALL_GRAY},
    {sPokeballSelected_Pal, PALTAG_BALL_SELECTED},
    {sInterface_Pal,        PALTAG_INTERFACE},
    {sMonPicBg_Pal,         PALTAG_MON_PIC_BG},
    {},
};

u8 static (*const sSelect_MenuOptionFuncs[])(void) =
{
    Select_OptionSummary,
    Select_OptionRentDeselect,
    Select_OptionOthers
};

static const struct BgTemplate sSelect_BgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 24,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
    {
        .bg = 1,
        .charBaseIndex = 1,
        .mapBaseIndex = 25,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 3,
        .baseTile = 0
    },
    {
        .bg = 3,
        .charBaseIndex = 2,
        .mapBaseIndex = 27,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0
    },
};

enum {
    SELECT_WIN_TITLE,
    SELECT_WIN_SPECIES,
    SELECT_WIN_INFO,
    SELECT_WIN_OPTIONS,
    SELECT_WIN_YES_NO,
    SELECT_WIN_MON_CATEGORY,
};

static const struct WindowTemplate sSelect_WindowTemplates[] =
{
    [SELECT_WIN_TITLE] = {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 12,
        .height = 2,
        .paletteNum = PALNUM_TEXT,
        .baseBlock = 0x0001,
    },
    [SELECT_WIN_SPECIES] = {
        .bg = 0,
        .tilemapLeft = 19,
        .tilemapTop = 2,
        .width = 11,
        .height = 2,
        .paletteNum = PALNUM_FADE_TEXT,
        .baseBlock = 0x0019,
    },
    [SELECT_WIN_INFO] = {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 15,
        .width = 20,
        .height = 3,
        .paletteNum = PALNUM_TEXT,
        .baseBlock = 0x002f,
    },
    [SELECT_WIN_OPTIONS] = {
        .bg = 0,
        .tilemapLeft = 22,
        .tilemapTop = 14,
        .width = 8,
        .height = 6,
        .paletteNum = PALNUM_TEXT,
        .baseBlock = 0x006b,
    },
    [SELECT_WIN_YES_NO] = {
        .bg = 0,
        .tilemapLeft = 22,
        .tilemapTop = 14,
        .width = 8,
        .height = 4,
        .paletteNum = PALNUM_TEXT,
        .baseBlock = 0x009b,
    },
    [SELECT_WIN_MON_CATEGORY] = {
        .bg = 0,
        .tilemapLeft = 15,
        .tilemapTop = 0,
        .width = 15,
        .height = 2,
        .paletteNum = PALNUM_TEXT,
        .baseBlock = 0x00bb,
    },
    DUMMY_WIN_TEMPLATE,
};

static const u16 sSelectText_Pal[] = INCGFX_U16("graphics/battle_frontier/factory_screen/text.pal", ".gbapal");
static const u8 sMenuOptionTextColors[] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_TRANSPARENT};
static const u8 sSpeciesNameTextColors[] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_RED, TEXT_COLOR_TRANSPARENT};

static const struct OamData sOam_Select_Pokeball =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 3,
    .paletteNum = 0,
    .affineParam = 0,
};

static const struct OamData sOam_Select_Arrow =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(16x16),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(16x16),
    .tileNum = 0,
    .priority = 3,
    .paletteNum = 0,
    .affineParam = 0,
};

static const struct OamData sOam_Select_MenuHighlight =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x16),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x16),
    .tileNum = 0,
    .priority = 2,
    .paletteNum = 0,
    .affineParam = 0,
};

static const struct OamData sOam_Select_MonPicBgAnim =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_DOUBLE,
    .objMode = ST_OAM_OBJ_BLEND,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x64),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 1,
};

static const union AnimCmd sAnim_Select_Interface[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Select_MonPicBgAnim[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Select_Pokeball_Still[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Select_Pokeball_Moving[] =
{
    ANIMCMD_FRAME(16, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(32, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(16, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(32, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(0, 32),
    ANIMCMD_FRAME(16, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(32, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(16, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(32, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnims_Select_Interface[] =
{
    sAnim_Select_Interface,
};

static const union AnimCmd *const sAnims_Select_MonPicBgAnim[] =
{
    sAnim_Select_MonPicBgAnim,
};

static const union AnimCmd *const sAnims_Select_Pokeball[] =
{
    sAnim_Select_Pokeball_Still,
    sAnim_Select_Pokeball_Moving,
};

static const union AffineAnimCmd sAffineAnim_Select_MonPicBg_Opening[] =
{
    AFFINEANIMCMD_FRAME(5, 5, 0, 0),
    AFFINEANIMCMD_FRAME(0, 0, 0, 1),
    AFFINEANIMCMD_FRAME(16, 5, 0, 0),
    AFFINEANIMCMD_FRAME(0, 0, 0, 1),
    AFFINEANIMCMD_FRAME(32, 5, 0, 0),
    AFFINEANIMCMD_FRAME(0, 0, 0, 1),
    AFFINEANIMCMD_FRAME(64, 5, 0, 0),
    AFFINEANIMCMD_FRAME(0, 0, 0, 1),
    AFFINEANIMCMD_FRAME(128, 5, 0, 0),
    AFFINEANIMCMD_FRAME(0, 0, 0, 1),
    AFFINEANIMCMD_FRAME(256, 5, 0, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_Select_MonPicBg_Closing[] =
{
    AFFINEANIMCMD_FRAME(128, 5, 0, 0),
    AFFINEANIMCMD_FRAME(0, 0, 0, 1),
    AFFINEANIMCMD_FRAME(64, 5, 0, 0),
    AFFINEANIMCMD_FRAME(0, 0, 0, 1),
    AFFINEANIMCMD_FRAME(32, 5, 0, 0),
    AFFINEANIMCMD_FRAME(0, 0, 0, 1),
    AFFINEANIMCMD_FRAME(16, 5, 0, 0),
    AFFINEANIMCMD_FRAME(0, 0, 0, 1),
    AFFINEANIMCMD_FRAME(5, 5, 0, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_Select_MonPicBg_Open[] =
{
    AFFINEANIMCMD_FRAME(256, 256, 0, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd *const sAffineAnims_Select_MonPicBgAnim[] =
{
    sAffineAnim_Select_MonPicBg_Opening,
    sAffineAnim_Select_MonPicBg_Closing,
    sAffineAnim_Select_MonPicBg_Open,
};

static const struct SpriteTemplate sSpriteTemplate_Select_Pokeball =
{
    .tileTag = GFXTAG_BALL,
    .paletteTag = PALTAG_BALL_GRAY,
    .oam = &sOam_Select_Pokeball,
    .anims = sAnims_Select_Pokeball,
    .callback = SpriteCB_Pokeball
};

static const struct SpriteTemplate sSpriteTemplate_Select_Arrow =
{
    .tileTag = GFXTAG_ARROW,
    .paletteTag = PALTAG_INTERFACE,
    .oam = &sOam_Select_Arrow,
    .anims = sAnims_Select_Interface,
};

static const struct SpriteTemplate sSpriteTemplate_Select_MenuHighlightLeft =
{
    .tileTag = GFXTAG_MENU_HIGHLIGHT_LEFT,
    .paletteTag = PALTAG_INTERFACE,
    .oam = &sOam_Select_MenuHighlight,
    .anims = sAnims_Select_Interface,
};

static const struct SpriteTemplate sSpriteTemplate_Select_MenuHighlightRight =
{
    .tileTag = GFXTAG_MENU_HIGHLIGHT_RIGHT,
    .paletteTag = PALTAG_INTERFACE,
    .oam = &sOam_Select_MenuHighlight,
    .anims = sAnims_Select_Interface,
};

static const struct SpriteTemplate sSpriteTemplate_Select_MonPicBgAnim =
{
    .tileTag = GFXTAG_MON_PIC_BG_ANIM,
    .paletteTag = PALTAG_MON_PIC_BG,
    .oam = &sOam_Select_MonPicBgAnim,
    .anims = sAnims_Select_MonPicBgAnim,
    .affineAnims = sAffineAnims_Select_MonPicBgAnim,
};

static const struct SpriteSheet sSwap_SpriteSheets[] =
{
    {sArrow_Gfx,                 sizeof(sArrow_Gfx),                 GFXTAG_ARROW},
    {sMenuHighlightLeft_Gfx,     sizeof(sMenuHighlightLeft_Gfx),     GFXTAG_MENU_HIGHLIGHT_LEFT},
    {sMenuHighlightRight_Gfx,    sizeof(sMenuHighlightRight_Gfx),    GFXTAG_MENU_HIGHLIGHT_RIGHT},
    {sActionBoxLeft_Gfx,         sizeof(sActionBoxLeft_Gfx),         GFXTAG_ACTION_BOX_LEFT},
    {sActionBoxRight_Gfx,        sizeof(sActionBoxRight_Gfx),        GFXTAG_ACTION_BOX_RIGHT},
#ifdef BUGFIX
    {sActionHighlightLeft_Gfx,   sizeof(sActionHighlightLeft_Gfx),   GFXTAG_ACTION_HIGHLIGHT_LEFT},
#else
    {sActionHighlightLeft_Gfx,   8 * TILE_SIZE_4BPP, /* Incorrect size */ GFXTAG_ACTION_HIGHLIGHT_LEFT},
#endif
    {sActionHighlightMiddle_Gfx, sizeof(sActionHighlightMiddle_Gfx), GFXTAG_ACTION_HIGHLIGHT_MIDDLE},
    {sActionHighlightRight_Gfx,  sizeof(sActionHighlightRight_Gfx),  GFXTAG_ACTION_HIGHLIGHT_RIGHT},
    {sMonPicBgAnim_Gfx,          sizeof(sMonPicBgAnim_Gfx),          GFXTAG_MON_PIC_BG_ANIM},
    {},
};

static const struct CompressedSpriteSheet sSwap_BallGfx[] =
{
    {gPokeballSelection_Gfx, 0x800, GFXTAG_BALL},
    {},
};

static const struct SpritePalette sSwap_SpritePalettes[] =
{
    {sPokeballGray_Pal,     PALTAG_BALL_GRAY},
    {sPokeballSelected_Pal, PALTAG_BALL_SELECTED},
    {sInterface_Pal,        PALTAG_INTERFACE},
    {sMonPicBg_Pal,         PALTAG_MON_PIC_BG},
    {},
};

static const struct OamData sOam_Swap_Pokeball =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 3,
    .paletteNum = 0,
    .affineParam = 0,
};

static const struct OamData sOam_Swap_Arrow =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(16x16),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(16x16),
    .tileNum = 0,
    .priority = 3,
    .paletteNum = 0,
    .affineParam = 0,
};

static const struct OamData sOam_Swap_MenuHighlight =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x16),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x16),
    .tileNum = 0,
    .priority = 2,
    .paletteNum = 0,
    .affineParam = 0,
};

static const struct OamData sOam_Swap_MonPicBgAnim =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_DOUBLE,
    .objMode = ST_OAM_OBJ_BLEND,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x64),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 1,
};

static const union AnimCmd sAnim_Swap_Interface[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swap_MonPicBgAnim[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swap_Pokeball_Still[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swap_Pokeball_Moving[] =
{
    ANIMCMD_FRAME(16, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(32, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(16, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(32, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(0, 32),
    ANIMCMD_FRAME(16, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(32, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(16, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(32, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnims_Swap_Interface[] =
{
    sAnim_Swap_Interface,
};

static const union AnimCmd *const sAnims_Swap_MonPicBgAnim[] =
{
    sAnim_Swap_MonPicBgAnim,
};

static const union AnimCmd *const sAnims_Swap_Pokeball[] =
{
    sAnim_Swap_Pokeball_Still,
    sAnim_Swap_Pokeball_Moving,
};

static const union AffineAnimCmd sAffineAnim_Swap_MonPicBg_Opening[] =
{
    AFFINEANIMCMD_FRAME(5, 5, 0, 0),
    AFFINEANIMCMD_FRAME(0, 0, 0, 1),
    AFFINEANIMCMD_FRAME(16, 5, 0, 0),
    AFFINEANIMCMD_FRAME(0, 0, 0, 1),
    AFFINEANIMCMD_FRAME(32, 5, 0, 0),
    AFFINEANIMCMD_FRAME(0, 0, 0, 1),
    AFFINEANIMCMD_FRAME(64, 5, 0, 0),
    AFFINEANIMCMD_FRAME(0, 0, 0, 1),
    AFFINEANIMCMD_FRAME(128, 5, 0, 0),
    AFFINEANIMCMD_FRAME(0, 0, 0, 1),
    AFFINEANIMCMD_FRAME(256, 5, 0, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_Swap_MonPicBg_Closing[] =
{
    AFFINEANIMCMD_FRAME(128, 5, 0, 0),
    AFFINEANIMCMD_FRAME(0, 0, 0, 1),
    AFFINEANIMCMD_FRAME(64, 5, 0, 0),
    AFFINEANIMCMD_FRAME(0, 0, 0, 1),
    AFFINEANIMCMD_FRAME(32, 5, 0, 0),
    AFFINEANIMCMD_FRAME(0, 0, 0, 1),
    AFFINEANIMCMD_FRAME(16, 5, 0, 0),
    AFFINEANIMCMD_FRAME(0, 0, 0, 1),
    AFFINEANIMCMD_FRAME(5, 5, 0, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_Swap_MonPicBg_Open[] =
{
    AFFINEANIMCMD_FRAME(256, 256, 0, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd *const sAffineAnims_Swap_MonPicBgAnim[] =
{
    sAffineAnim_Swap_MonPicBg_Opening,
    sAffineAnim_Swap_MonPicBg_Closing,
    sAffineAnim_Swap_MonPicBg_Open,
};

static const struct SpriteTemplate sSpriteTemplate_Swap_Pokeball =
{
    .tileTag = GFXTAG_BALL,
    .paletteTag = PALTAG_BALL_GRAY,
    .oam = &sOam_Swap_Pokeball,
    .anims = sAnims_Swap_Pokeball,
    .callback = SpriteCB_Pokeball
};

static const struct SpriteTemplate sSpriteTemplate_Swap_Arrow =
{
    .tileTag = GFXTAG_ARROW,
    .paletteTag = PALTAG_INTERFACE,
    .oam = &sOam_Swap_Arrow,
    .anims = sAnims_Swap_Interface,
};

static const struct SpriteTemplate sSpriteTemplate_Swap_MenuHighlightLeft =
{
    .tileTag = GFXTAG_MENU_HIGHLIGHT_LEFT,
    .paletteTag = PALTAG_INTERFACE,
    .oam = &sOam_Swap_MenuHighlight,
    .anims = sAnims_Swap_Interface,
};

static const struct SpriteTemplate sSpriteTemplate_Swap_MenuHighlightRight =
{
    .tileTag = GFXTAG_MENU_HIGHLIGHT_RIGHT,
    .paletteTag = PALTAG_INTERFACE,
    .oam = &sOam_Swap_MenuHighlight,
    .anims = sAnims_Swap_Interface,
};

static const struct SpriteTemplate sSpriteTemplate_Swap_MonPicBgAnim =
{
    .tileTag = GFXTAG_MON_PIC_BG_ANIM,
    .paletteTag = PALTAG_MON_PIC_BG,
    .oam = &sOam_Swap_MonPicBgAnim,
    .anims = sAnims_Swap_MonPicBgAnim,
    .affineAnims = sAffineAnims_Swap_MonPicBgAnim,
};

static const TaskFunc sSwap_MenuOptionFuncs[] =
{
    Swap_OptionSummary,
    Swap_OptionSwap,
    Swap_OptionRechoose,
};

static const struct BgTemplate sSwap_BgTemplates[4] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 24,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0
    },
    {
        .bg = 1,
        .charBaseIndex = 1,
        .mapBaseIndex = 25,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 3,
        .baseTile = 0
    },
    {
        .bg = 2,
        .charBaseIndex = 2,
        .mapBaseIndex = 26,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
    {
        .bg = 3,
        .charBaseIndex = 2,
        .mapBaseIndex = 27,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0
    },
};

enum {
    SWAP_WIN_TITLE,
    SWAP_WIN_SPECIES,
    SWAP_WIN_INFO,
    SWAP_WIN_OPTIONS,
    SWAP_WIN_YES_NO,
    SWAP_WIN_ACTION_FADE, // Used for action text fading out during screen transition
    SWAP_WIN_UNUSED,
    SWAP_WIN_SPECIES_AT_FADE, // Used to print species name stopped at current fade level
    SWAP_WIN_MON_CATEGORY,
};

static const struct WindowTemplate sSwap_WindowTemplates[] =
{
    [SWAP_WIN_TITLE] = {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 12,
        .height = 2,
        .paletteNum = PALNUM_TEXT,
        .baseBlock = 0x0001,
    },
    [SWAP_WIN_SPECIES] = {
        .bg = 2,
        .tilemapLeft = 19,
        .tilemapTop = 2,
        .width = 11,
        .height = 2,
        .paletteNum = PALNUM_FADE_TEXT,
        .baseBlock = 0x0019,
    },
    [SWAP_WIN_INFO] = {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 15,
        .width = 20,
        .height = 3,
        .paletteNum = PALNUM_TEXT,
        .baseBlock = 0x002f,
    },
    [SWAP_WIN_OPTIONS] = {
        .bg = 0,
        .tilemapLeft = 21,
        .tilemapTop = 14,
        .width = 9,
        .height = 6,
        .paletteNum = PALNUM_TEXT,
        .baseBlock = 0x006b,
    },
    [SWAP_WIN_YES_NO] = {
        .bg = 0,
        .tilemapLeft = 22,
        .tilemapTop = 14,
        .width = 8,
        .height = 4,
        .paletteNum = PALNUM_TEXT,
        .baseBlock = 0x00a1,
    },
    [SWAP_WIN_ACTION_FADE] = {
        .bg = 2,
        .tilemapLeft = 21,
        .tilemapTop = 15,
        .width = 9,
        .height = 5,
        .paletteNum = PALNUM_FADE_TEXT,
        .baseBlock = 0x006b,
    },
    [SWAP_WIN_UNUSED] = {
        .bg = 2,
        .tilemapLeft = 10,
        .tilemapTop = 2,
        .width = 4,
        .height = 2,
        .paletteNum = PALNUM_FADE_TEXT,
        .baseBlock = 0x00c1,
    },
    [SWAP_WIN_SPECIES_AT_FADE] = {
        .bg = 0,
        .tilemapLeft = 19,
        .tilemapTop = 2,
        .width = 11,
        .height = 2,
        .paletteNum = PALNUM_TEXT,
        .baseBlock = 0x00c9,
    },
    [SWAP_WIN_MON_CATEGORY] = {
        .bg = 0,
        .tilemapLeft = 15,
        .tilemapTop = 0,
        .width = 15,
        .height = 2,
        .paletteNum = PALNUM_TEXT,
        .baseBlock = 0x00df,
    },
    DUMMY_WIN_TEMPLATE,
};

static const u16 sSwapText_Pal[] = INCGFX_U16("graphics/battle_frontier/factory_screen/text.pal", ".gbapal"); // Identical to sSelectText_Pal
static const u8 sSwapMenuOptionsTextColors[] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_TRANSPARENT};
static const u8 sSwapSpeciesNameTextColors[] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_RED, TEXT_COLOR_TRANSPARENT};

#define SWAPACTION_MON           1
#define SWAPACTION_PKMN_FOR_SWAP 2
#define SWAPACTION_CANCEL        3

static const struct SwapScreenAction sSwap_PlayerScreenActions[] =
{
    {.id = SWAPACTION_MON, .func = Swap_ActionMon},
    {.id = SWAPACTION_MON, .func = Swap_ActionMon},
    {.id = SWAPACTION_MON, .func = Swap_ActionMon},
    {.id = SWAPACTION_CANCEL, .func = Swap_ActionCancel},
};

static const struct SwapScreenAction sSwap_EnemyScreenActions[] =
{
    {.id = SWAPACTION_MON, .func = Swap_ActionMon},
    {.id = SWAPACTION_MON, .func = Swap_ActionMon},
    {.id = SWAPACTION_MON, .func = Swap_ActionMon},
    {.id = SWAPACTION_PKMN_FOR_SWAP, .func = Swap_ActionPkmnForSwap},
    {.id = SWAPACTION_CANCEL, .func = Swap_ActionCancel},
};

static void SpriteCB_Pokeball(struct Sprite *sprite)
{
    if (sprite->oam.paletteNum == IndexOfSpritePaletteTag(PALTAG_BALL_SELECTED))
    {
        // Poké Ball selected, do rocking animation
        if (sprite->animEnded)
        {
            if (sprite->data[0] != 0)
            {
                sprite->data[0]--;
            }
            else if (Random() % 5 == 0)
            {
                StartSpriteAnim(sprite, 0);
                sprite->data[0] = 32;
            }
            else
            {
                StartSpriteAnim(sprite, 1);
            }
        }
        else
        {
            StartSpriteAnimIfDifferent(sprite, 1);
        }
    }
    else
    {
        // Poké Ball not selected, remain still
        StartSpriteAnimIfDifferent(sprite, 0);
    }
}

static void CB2_SelectScreen(void)
{
    AnimateSprites();
    BuildOamBuffer();
    RunTextPrinters();
    UpdatePaletteFade();
    RunTasks();
}

static void VBlankCB_SelectScreen(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

void DoBattlePoolSelectScreen(void)
{
    sPoolSelectScreen = NULL;
    SetMainCallback2(CB2_InitSelectScreen);
}

// Main select states
// States for the main tasks of the Select_ functions after initialization, including:
// Select_Task_OpenSummaryScreen, Select_Task_HandleYesNo, Select_Task_HandleMenu, and Select_Task_HandleChooseMons
// Unnecessarily complicated, could easily have just kept states numbered in each task always starting at 0
// There's only one instance (Select_Task_HandleChooseMons) where a non-initial case is used
// Select_Task_Exit has its own straightforward states
#define STATE_CHOOSE_MONS_INIT 0
#define STATE_CHOOSE_MONS_HANDLE_INPUT 1
#define STATE_MENU_INIT 2
#define STATE_MENU_HANDLE_INPUT 3
#define STATE_YESNO_SHOW_OPTIONS 4
#define STATE_YESNO_HANDLE_INPUT 5
#define STATE_SUMMARY_FADE 6
#define STATE_SUMMARY_CLEAN 7
#define STATE_SUMMARY_SHOW 8
#define STATE_MENU_SHOW_OPTIONS 9
#define STATE_YESNO_SHOW_MONS 10
#define STATE_CHOOSE_MONS_INVALID 11
#define STATE_MENU_REINIT 12
#define STATE_MENU_RESHOW 13

static void CB2_InitSelectScreen(void)
{
    u8 taskId;

    switch (gMain.state)
    {
    case 0:
        TRY_FREE_AND_SET_NULL(sPoolSelectMons);
        SetHBlankCallback(NULL);
        SetVBlankCallback(NULL);
        CpuFill32(0, (void *)VRAM, VRAM_SIZE);
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sSelect_BgTemplates, ARRAY_COUNT(sSelect_BgTemplates));
        InitWindows(sSelect_WindowTemplates);
        DeactivateAllTextPrinters();
        gMain.state++;
        break;
    case 1:
        sSelectMenuTilesetBuffer = Alloc(sizeof(gFrontierFactoryMenu_Gfx));
#ifdef BUGFIX
        sSelectMonPicBgTilesetBuffer = AllocZeroed(sizeof(sMonPicBg_Gfx));
#else
        sSelectMonPicBgTilesetBuffer = AllocZeroed(sizeof(gFrontierFactoryMenu_Gfx)); // Incorrect size
#endif
        sSelectMenuTilemapBuffer = Alloc(BG_SCREEN_SIZE);
        sSelectMonPicBgTilemapBuffer = AllocZeroed(BG_SCREEN_SIZE);
        ChangeBgX(0, 0, BG_COORD_SET);
        ChangeBgY(0, 0, BG_COORD_SET);
        ChangeBgX(1, 0, BG_COORD_SET);
        ChangeBgY(1, 0, BG_COORD_SET);
        ChangeBgX(3, 0, BG_COORD_SET);
        ChangeBgY(3, 0, BG_COORD_SET);
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        SetGpuReg(REG_OFFSET_MOSAIC, 0);
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WIN1H, 0);
        SetGpuReg(REG_OFFSET_WIN1V, 0);
        SetGpuReg(REG_OFFSET_WININ, 0);
        SetGpuReg(REG_OFFSET_WINOUT, 0);
        gMain.state++;
        break;
    case 2:
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        FreeAllSpritePalettes();
        CpuCopy16(gFrontierFactoryMenu_Gfx, sSelectMenuTilesetBuffer, sizeof(gFrontierFactoryMenu_Gfx));
        CpuCopy16(sMonPicBg_Gfx, sSelectMonPicBgTilesetBuffer, sizeof(sMonPicBg_Gfx));
        LoadBgTiles(1, sSelectMenuTilesetBuffer, sizeof(gFrontierFactoryMenu_Gfx), 0);
        LoadBgTiles(3, sSelectMonPicBgTilesetBuffer, sizeof(sMonPicBg_Gfx), 0);
        CpuCopy16(gFrontierFactoryMenu_Tilemap, sSelectMenuTilemapBuffer, BG_SCREEN_SIZE);
        LoadBgTilemap(1, sSelectMenuTilemapBuffer, BG_SCREEN_SIZE, 0);
        LoadPalette(gFrontierFactoryMenu_Pal, 0, 2 * PLTT_SIZE_4BPP);
        LoadPalette(sSelectText_Pal, BG_PLTT_ID(PALNUM_TEXT), PLTT_SIZEOF(4));
        LoadPalette(sSelectText_Pal, BG_PLTT_ID(PALNUM_FADE_TEXT), PLTT_SIZEOF(5));
#ifdef UBFIX
        if (sPoolSelectScreen && sPoolSelectScreen->fromSummaryScreen)
#else
        if (sPoolSelectScreen->fromSummaryScreen == TRUE)
#endif
            gPlttBufferUnfaded[BG_PLTT_ID(PALNUM_FADE_TEXT) + 4] = sPoolSelectScreen->speciesNameColorBackup;
        LoadPalette(sMonPicBg_Pal, BG_PLTT_ID(2), PLTT_SIZEOF(2));
        gMain.state++;
        break;
    case 3:
        SetBgTilemapBuffer(3, sSelectMonPicBgTilemapBuffer);
        CopyToBgTilemapBufferRect(3, sMonPicBg_Tilemap, 11, 4, 8, 8);
        CopyToBgTilemapBufferRect(3, sMonPicBg_Tilemap,  2, 4, 8, 8);
        CopyToBgTilemapBufferRect(3, sMonPicBg_Tilemap, 20, 4, 8, 8);
        CopyBgTilemapBufferToVram(3);
        gMain.state++;
        break;
    case 4:
        LoadSpritePalettes(sSelect_SpritePalettes);
        LoadSpriteSheets(sSelect_SpriteSheets);
        LoadCompressedSpriteSheet(sSelect_BallGfx);
        ShowBg(0);
        ShowBg(1);
        SetVBlankCallback(VBlankCB_SelectScreen);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_BG0_ON | DISPCNT_BG1_ON | DISPCNT_OBJ_1D_MAP);
#ifdef UBFIX
        if (sPoolSelectScreen && sPoolSelectScreen->fromSummaryScreen)
#else
        if (sPoolSelectScreen->fromSummaryScreen == TRUE)
#endif
        {
            Select_SetWinRegs(88, 152, 32, 96);
            ShowBg(3);
            SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG3 | BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG1 | BLDCNT_TGT2_OBJ);
            SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(11, 4));
        }
        else
        {
            HideBg(3);
        }
        gMain.state++;
        break;
    case 5:
#ifdef UBFIX
        if (sPoolSelectScreen && sPoolSelectScreen->fromSummaryScreen)
#else
        if (sPoolSelectScreen->fromSummaryScreen == TRUE)
#endif
            sPoolSelectScreen->cursorPos = gLastViewedMonIndex;
        Select_InitMonsData();
        Select_InitAllSprites();
        if (sPoolSelectScreen->fromSummaryScreen == TRUE)
            Select_ReshowMonSprite();
        gMain.state++;
        break;
    case 6:
        Select_PrintSelectMonString();
        PutWindowTilemap(SELECT_WIN_INFO);
        gMain.state++;
        break;
    case 7:
        Select_PrintMonCategory();
        PutWindowTilemap(SELECT_WIN_MON_CATEGORY);
        gMain.state++;
        break;
    case 8:
        Select_PrintMonSpecies();
        PutWindowTilemap(SELECT_WIN_SPECIES);
        gMain.state++;
        break;
    case 9:
        Select_PrintRentalPkmnString();
        PutWindowTilemap(SELECT_WIN_TITLE);
        gMain.state++;
        break;
    case 10:
        sPoolSelectScreen->fadeSpeciesNameTaskId = CreateTask(Select_Task_FadeSpeciesName, 0);
        if (!sPoolSelectScreen->fromSummaryScreen)
        {
            gTasks[sPoolSelectScreen->fadeSpeciesNameTaskId].tState = FADESTATE_INIT;
            taskId = CreateTask(Select_Task_HandleChooseMons, 0);
            gTasks[taskId].tState = STATE_CHOOSE_MONS_INIT;
        }
        else
        {
            gTasks[sPoolSelectScreen->fadeSpeciesNameTaskId].tState = FADESTATE_RUN;
            sPoolSelectScreen->fadeSpeciesNameActive = FALSE;
            taskId = CreateTask(Select_Task_HandleMenu, 0);
            gTasks[taskId].tState = STATE_MENU_RESHOW;
        }
        SetMainCallback2(CB2_SelectScreen);
        break;
    }
}

static void Select_InitMonsData(void)
{
    u8 i;

    if (sPoolSelectScreen != NULL) 
        return;

    sPoolSelectScreen = AllocZeroed(sizeof(*sPoolSelectScreen));
    sPoolSelectScreen->cursorPos = 0;
    sPoolSelectScreen->selectingMonsState = 1;
    sPoolSelectScreen->fromSummaryScreen = FALSE;
    for (i = 0; i < SELECTABLE_MONS_COUNT; i++)
        sPoolSelectScreen->mons[i].selectedId = 0;

    if (gSaveBlock2Ptr->frontier.lvlMode != FRONTIER_LVL_TENT)
        CreateFrontierPoolSelectableMons(0);
    else
        CreateSlateportTentSelectableMons(0);
}

static void Select_InitAllSprites(void)
{
    u8 i, cursorPos;
    s16 x;

    for (i = 0; i < SELECTABLE_MONS_COUNT; i++)
    {
        sPoolSelectScreen->mons[i].ballSpriteId = CreateSprite(&sSpriteTemplate_Select_Pokeball, (35 * i) + 32, 64, 1);
        gSprites[sPoolSelectScreen->mons[i].ballSpriteId].data[0] = 0;
        Select_SetBallSpritePaletteNum(i);
    }
    cursorPos = sPoolSelectScreen->cursorPos;
    x = gSprites[sPoolSelectScreen->mons[cursorPos].ballSpriteId].x;
    sPoolSelectScreen->cursorSpriteId = CreateSprite(&sSpriteTemplate_Select_Arrow, x, 88, 0);
    sPoolSelectScreen->menuCursor1SpriteId = CreateSprite(&sSpriteTemplate_Select_MenuHighlightLeft, 176, 112, 0);
    sPoolSelectScreen->menuCursor2SpriteId = CreateSprite(&sSpriteTemplate_Select_MenuHighlightRight, 176, 144, 0);

    gSprites[sPoolSelectScreen->menuCursor1SpriteId].invisible = TRUE;
    gSprites[sPoolSelectScreen->menuCursor2SpriteId].invisible = TRUE;

    gSprites[sPoolSelectScreen->menuCursor1SpriteId].centerToCornerVecX = 0;
    gSprites[sPoolSelectScreen->menuCursor1SpriteId].centerToCornerVecY = 0;
    gSprites[sPoolSelectScreen->menuCursor2SpriteId].centerToCornerVecX = 0;
    gSprites[sPoolSelectScreen->menuCursor2SpriteId].centerToCornerVecY = 0;
}

static void Select_DestroyAllSprites(void)
{
    u8 i;

    for (i = 0; i < SELECTABLE_MONS_COUNT; i++)
        DestroySprite(&gSprites[sPoolSelectScreen->mons[i].ballSpriteId]);

    DestroySprite(&gSprites[sPoolSelectScreen->cursorSpriteId]);
    DestroySprite(&gSprites[sPoolSelectScreen->menuCursor1SpriteId]);
    DestroySprite(&gSprites[sPoolSelectScreen->menuCursor2SpriteId]);
}

static void Select_UpdateBallCursorPosition(s8 direction)
{
    u8 cursorPos;
    if (direction > 0) // Move cursor right.
    {
        if (sPoolSelectScreen->cursorPos != SELECTABLE_MONS_COUNT - 1)
            sPoolSelectScreen->cursorPos++;
        else
            sPoolSelectScreen->cursorPos = 0;
    }
    else // Move cursor left.
    {
        if (sPoolSelectScreen->cursorPos != 0)
            sPoolSelectScreen->cursorPos--;
        else
            sPoolSelectScreen->cursorPos = SELECTABLE_MONS_COUNT - 1;
    }

    cursorPos = sPoolSelectScreen->cursorPos;
    gSprites[sPoolSelectScreen->cursorSpriteId].x = gSprites[sPoolSelectScreen->mons[cursorPos].ballSpriteId].x;
}

static void Select_UpdateMenuCursorPosition(s8 direction)
{
    if (direction > 0) // Move cursor down.
    {
        if (sPoolSelectScreen->menuCursorPos != ARRAY_COUNT(sSelect_MenuOptionFuncs) - 1)
            sPoolSelectScreen->menuCursorPos++;
        else
            sPoolSelectScreen->menuCursorPos = 0;
    }
    else // Move cursor up.
    {
        if (sPoolSelectScreen->menuCursorPos != 0)
            sPoolSelectScreen->menuCursorPos--;
        else
            sPoolSelectScreen->menuCursorPos = ARRAY_COUNT(sSelect_MenuOptionFuncs) - 1;
    }

    gSprites[sPoolSelectScreen->menuCursor1SpriteId].y = (sPoolSelectScreen->menuCursorPos * 16) + 112;
    gSprites[sPoolSelectScreen->menuCursor2SpriteId].y = (sPoolSelectScreen->menuCursorPos * 16) + 112;
}

static void Select_UpdateYesNoCursorPosition(s8 direction)
{
    if (direction > 0) // Move cursor down.
    {
        if (sPoolSelectScreen->yesNoCursorPos != 1)
            sPoolSelectScreen->yesNoCursorPos++;
        else
            sPoolSelectScreen->yesNoCursorPos = 0;
    }
    else // Move cursor up.
    {
        if (sPoolSelectScreen->yesNoCursorPos != 0)
            sPoolSelectScreen->yesNoCursorPos--;
        else
            sPoolSelectScreen->yesNoCursorPos = 1;
    }

    gSprites[sPoolSelectScreen->menuCursor1SpriteId].y = (sPoolSelectScreen->yesNoCursorPos * 16) + 112;
    gSprites[sPoolSelectScreen->menuCursor2SpriteId].y = (sPoolSelectScreen->yesNoCursorPos * 16) + 112;
}

static void Select_HandleMonSelectionChange(void)
{
    u8 i, paletteNum;
    u8 cursorPos = sPoolSelectScreen->cursorPos;
    if (sPoolSelectScreen->mons[cursorPos].selectedId) // Deselect a mon.
    {
        u8 deselectedId = sPoolSelectScreen->mons[cursorPos].selectedId;
        paletteNum = IndexOfSpritePaletteTag(PALTAG_BALL_GRAY);

        // Deselect the clicked mon
        sPoolSelectScreen->mons[cursorPos].selectedId = 0;
        
        // Shift down all selections that are higher than the deselected one
        for (i = 0; i < SELECTABLE_MONS_COUNT; i++)
        {
            if (sPoolSelectScreen->mons[i].selectedId > deselectedId)
            {
                sPoolSelectScreen->mons[i].selectedId--;
                // Note: Palette doesn't change when shifting down - still selected
            }
        }
        
        sPoolSelectScreen->selectingMonsState--;
        
        // Update palette for the deselected mon
        gSprites[sPoolSelectScreen->mons[cursorPos].ballSpriteId].oam.paletteNum = paletteNum;
    }
    else // Select a mon.
    {
        paletteNum = IndexOfSpritePaletteTag(PALTAG_BALL_SELECTED);
        sPoolSelectScreen->mons[cursorPos].selectedId = sPoolSelectScreen->selectingMonsState;
        sPoolSelectScreen->selectingMonsState++;
        
        // Update palette for the selected mon
        gSprites[sPoolSelectScreen->mons[cursorPos].ballSpriteId].oam.paletteNum = paletteNum;
    }
}

static void Select_SetBallSpritePaletteNum(u8 id)
{
    u8 palNum;

    if (sPoolSelectScreen->mons[id].selectedId)
        palNum = IndexOfSpritePaletteTag(PALTAG_BALL_SELECTED);
    else
        palNum = IndexOfSpritePaletteTag(PALTAG_BALL_GRAY);

    gSprites[sPoolSelectScreen->mons[id].ballSpriteId].oam.paletteNum = palNum;
}

static void Select_Task_OpenSummaryScreen(u8 taskId)
{
    u8 i;
    u8 currMonId;

    switch (gTasks[taskId].tState)
    {
    case STATE_SUMMARY_FADE:
        gPlttBufferUnfaded[BG_PLTT_ID(PALNUM_FADE_TEXT) + 4] = gPlttBufferFaded[BG_PLTT_ID(PALNUM_FADE_TEXT) + 4];
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].tState = STATE_SUMMARY_CLEAN;
        break;
    case STATE_SUMMARY_CLEAN:
        if (!gPaletteFade.active)
        {
            DestroyTask(sPoolSelectScreen->fadeSpeciesNameTaskId);
            HideMonPic(sPoolSelectScreen->monPics[1], &sPoolSelectScreen->monPicAnimating);
            Select_DestroyAllSprites();
            FREE_AND_SET_NULL(sSelectMenuTilesetBuffer);
            FREE_AND_SET_NULL(sSelectMonPicBgTilesetBuffer);
            FREE_AND_SET_NULL(sSelectMenuTilemapBuffer);
            FREE_AND_SET_NULL(sSelectMonPicBgTilemapBuffer);
            FreeAllWindowBuffers();
            gTasks[taskId].tState = STATE_SUMMARY_SHOW;
        }
        break;
    case STATE_SUMMARY_SHOW:
        sPoolSelectScreen->speciesNameColorBackup = gPlttBufferUnfaded[BG_PLTT_ID(PALNUM_FADE_TEXT) + 4];
        DestroyTask(taskId);
        sPoolSelectScreen->fromSummaryScreen = TRUE;
        currMonId = sPoolSelectScreen->cursorPos;
        sPoolSelectMons = AllocZeroed(sizeof(struct Pokemon) * SELECTABLE_MONS_COUNT);
        for (i = 0; i < SELECTABLE_MONS_COUNT; i++)
            sPoolSelectMons[i] = gEliteFourPool[i];
        ShowPokemonSummaryScreen(SUMMARY_MODE_LOCK_MOVES, sPoolSelectMons, currMonId, SELECTABLE_MONS_COUNT - 1, CB2_InitSelectScreen);
        break;
    }
}

static void Select_Task_Exit(u8 taskId)
{
    if (sPoolSelectScreen->monPicAnimating == TRUE)
        return;

    switch (gTasks[taskId].tState)
    {
    case 0:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].tState++;
        break;
    case 1:
        if (!UpdatePaletteFade())
        {
            Select_CopyMonsToPlayerParty();
            DestroyTask(sPoolSelectScreen->fadeSpeciesNameTaskId);
            Select_DestroyAllSprites();
            FREE_AND_SET_NULL(sSelectMenuTilesetBuffer);
            FREE_AND_SET_NULL(sSelectMenuTilemapBuffer);
            FREE_AND_SET_NULL(sSelectMonPicBgTilemapBuffer);
            FREE_AND_SET_NULL(sPoolSelectScreen);
            FreeAllWindowBuffers();
            SetMainCallback2(CB2_ReturnToFieldContinueScript);
            DestroyTask(taskId);
        }
        break;
    }
}

// Handles the Yes/No prompt when confirming the 3 selected rental Pokémon
static void Select_Task_HandleYesNo(u8 taskId)
{
    if (sPoolSelectScreen->monPicAnimating == TRUE)
        return;

    switch (gTasks[taskId].tState)
    {
    case STATE_YESNO_SHOW_MONS:
        Select_ShowChosenMons();
        gTasks[taskId].tState = STATE_YESNO_SHOW_OPTIONS;
        break;
    case STATE_YESNO_SHOW_OPTIONS:
        Select_ShowYesNoOptions();
        gTasks[taskId].tState = STATE_YESNO_HANDLE_INPUT;
        break;
    case STATE_YESNO_HANDLE_INPUT:
        if (JOY_NEW(A_BUTTON))
        {
            PlaySE(SE_SELECT);
            if (sPoolSelectScreen->yesNoCursorPos == 0)
            {
                // Selected Yes, confirmed selected Pokémon
                Select_HideChosenMons();
                gTasks[taskId].tState = 0;
                gTasks[taskId].func = Select_Task_Exit;
            }
            else
            {
                // Selected No, continue choosing Pokémon
                Select_ErasePopupMenu(SELECT_WIN_YES_NO);
                Select_DeclineChosenMons();
                sPoolSelectScreen->fadeSpeciesNameActive = TRUE;
                gTasks[taskId].tState = STATE_CHOOSE_MONS_HANDLE_INPUT;
                gTasks[taskId].func = Select_Task_HandleChooseMons;
            }
        }
        else if (JOY_NEW(B_BUTTON))
        {
            // Pressed B, Continue choosing Pokémon
            PlaySE(SE_SELECT);
            Select_ErasePopupMenu(SELECT_WIN_YES_NO);
            Select_DeclineChosenMons();
            sPoolSelectScreen->fadeSpeciesNameActive = TRUE;
            gTasks[taskId].tState = STATE_CHOOSE_MONS_HANDLE_INPUT;
            gTasks[taskId].func = Select_Task_HandleChooseMons;
        }
        else if (JOY_REPEAT(DPAD_UP))
        {
            PlaySE(SE_SELECT);
            Select_UpdateYesNoCursorPosition(-1);
        }
        else if (JOY_REPEAT(DPAD_DOWN))
        {
            PlaySE(SE_SELECT);
            Select_UpdateYesNoCursorPosition(1);
        }
        break;
    }
}

// Handles the popup menu that shows when a Pokémon is selected
static void Select_Task_HandleMenu(u8 taskId)
{
    switch (gTasks[taskId].tState)
    {
    case STATE_MENU_INIT:
        if (!sPoolSelectScreen->fromSummaryScreen)
            OpenMonPic(&sPoolSelectScreen->monPics[1].bgSpriteId, &sPoolSelectScreen->monPicAnimating, FALSE);
        gTasks[taskId].tState = STATE_MENU_SHOW_OPTIONS;
        break;
    case STATE_MENU_SHOW_OPTIONS:
        if (sPoolSelectScreen->monPicAnimating != TRUE)
        {
            Select_ShowMenuOptions();
            sPoolSelectScreen->fromSummaryScreen = FALSE;
            gTasks[taskId].tState = STATE_MENU_HANDLE_INPUT;
        }
        break;
    case STATE_MENU_HANDLE_INPUT:
        if (JOY_NEW(A_BUTTON))
        {
            u8 retVal;
            PlaySE(SE_SELECT);
            retVal = Select_RunMenuOptionFunc();
            if (retVal == SELECT_CONTINUE_CHOOSING)
            {
                sPoolSelectScreen->fadeSpeciesNameActive = TRUE;
                gTasks[taskId].tState = STATE_CHOOSE_MONS_HANDLE_INPUT;
                gTasks[taskId].func = Select_Task_HandleChooseMons;
            }
            else if (retVal == SELECT_CONFIRM_MONS)
            {
                gTasks[taskId].tState = STATE_YESNO_SHOW_MONS;
                gTasks[taskId].func = Select_Task_HandleYesNo;
            }
            else if (retVal == SELECT_INVALID_MON)
            {
                gTasks[taskId].tState = STATE_CHOOSE_MONS_INVALID;
                gTasks[taskId].func = Select_Task_HandleChooseMons;
            }
            else // SELECT_SUMMARY
            {
                gTasks[taskId].tState = STATE_SUMMARY_FADE;
                gTasks[taskId].func = Select_Task_OpenSummaryScreen;
            }
        }
        else if (JOY_NEW(B_BUTTON))
        {
            switch (gMapHeader.regionMapSectionId)
            {
                case MAPSEC_MAGMA_HIDEOUT:
                case MAPSEC_AQUA_HIDEOUT:
                case MAPSEC_EVER_GRANDE_CITY:
                    if (sPoolSelectScreen->selectingMonsState != VarGet(VAR_TEMP_4))
                    { // Not enough mons selected
                        PlaySE(SE_SELECT);
                        CloseMonPic(sPoolSelectScreen->monPics[1], &sPoolSelectScreen->monPicAnimating, FALSE);
                        Select_ErasePopupMenu(SELECT_WIN_OPTIONS);
                        sPoolSelectScreen->fadeSpeciesNameActive = TRUE;
                        gTasks[taskId].tState = STATE_CHOOSE_MONS_HANDLE_INPUT;
                        gTasks[taskId].func = Select_Task_HandleChooseMons;
                    }
                    else // Correct number of mons selected
                    {
                        gTasks[taskId].tState = STATE_YESNO_SHOW_MONS;
                        gTasks[taskId].func = Select_Task_HandleYesNo;
                    }
                    break;
                default:
                    PlaySE(SE_SELECT);
                    CloseMonPic(sPoolSelectScreen->monPics[1], &sPoolSelectScreen->monPicAnimating, FALSE);
                    Select_ErasePopupMenu(SELECT_WIN_OPTIONS);
                    sPoolSelectScreen->fadeSpeciesNameActive = TRUE;
                    gTasks[taskId].tState = STATE_CHOOSE_MONS_HANDLE_INPUT;
                    gTasks[taskId].func = Select_Task_HandleChooseMons;
                    break;
            }
        }
        else if (JOY_REPEAT(DPAD_UP))
        {
            PlaySE(SE_SELECT);
            Select_UpdateMenuCursorPosition(-1);
        }
        else if (JOY_REPEAT(DPAD_DOWN))
        {
            PlaySE(SE_SELECT);
            Select_UpdateMenuCursorPosition(1);
        }
        break;
    case STATE_MENU_REINIT:
        if (!gPaletteFade.active)
        {
            if (sPoolSelectScreen->fromSummaryScreen == TRUE)
            {
                gPlttBufferFaded[BG_PLTT_ID(PALNUM_FADE_TEXT) + 4] = sPoolSelectScreen->speciesNameColorBackup;
                gPlttBufferUnfaded[BG_PLTT_ID(PALNUM_FADE_TEXT) + 4] = gPlttBufferUnfaded[BG_PLTT_ID(PALNUM_TEXT) + 4];
            }
            sPoolSelectScreen->fromSummaryScreen = FALSE;
            gTasks[taskId].tState = STATE_MENU_HANDLE_INPUT;
        }
        break;
    case STATE_MENU_RESHOW:
        Select_ShowMenuOptions();
        gTasks[taskId].tState = STATE_MENU_REINIT;
        break;
    }
}

// Handles input on the main selection screen, when no popup menu is open
static void Select_Task_HandleChooseMons(u8 taskId)
{
    if (sPoolSelectScreen->monPicAnimating == TRUE)
        return;

    switch (gTasks[taskId].tState)
    {
    case STATE_CHOOSE_MONS_INIT:
        if (!gPaletteFade.active)
        {
            gTasks[taskId].tState = STATE_CHOOSE_MONS_HANDLE_INPUT;
            sPoolSelectScreen->fadeSpeciesNameActive = TRUE;
        }
        break;
    case STATE_CHOOSE_MONS_HANDLE_INPUT:
        if (JOY_NEW(A_BUTTON))
        {
            PlaySE(SE_SELECT);
            sPoolSelectScreen->fadeSpeciesNameActive = FALSE;
            gTasks[taskId].tState = STATE_MENU_INIT;
            gTasks[taskId].func = Select_Task_HandleMenu;
        }
        else if (JOY_REPEAT(DPAD_LEFT))
        {
            PlaySE(SE_SELECT);
            Select_UpdateBallCursorPosition(-1);
            Select_PrintMonCategory();
            Select_PrintMonSpecies();
        }
        else if (JOY_REPEAT(DPAD_RIGHT))
        {
            PlaySE(SE_SELECT);
            Select_UpdateBallCursorPosition(1);
            Select_PrintMonCategory();
            Select_PrintMonSpecies();
        }
        break;
    case STATE_CHOOSE_MONS_INVALID:
        if (JOY_NEW(A_BUTTON))
        {
            PlaySE(SE_SELECT);
            CloseMonPic(sPoolSelectScreen->monPics[1], &sPoolSelectScreen->monPicAnimating, FALSE);
            Select_PrintSelectMonString();
            sPoolSelectScreen->fadeSpeciesNameActive = TRUE;
            gTasks[taskId].tState = STATE_CHOOSE_MONS_HANDLE_INPUT;
        }
        break;
    }
}

#undef STATE_CHOOSE_MONS_INIT
#undef STATE_CHOOSE_MONS_HANDLE_INPUT
#undef STATE_MENU_INIT
#undef STATE_MENU_HANDLE_INPUT
#undef STATE_YESNO_SHOW_OPTIONS
#undef STATE_YESNO_HANDLE_INPUT
#undef STATE_SUMMARY_FADE
#undef STATE_SUMMARY_CLEAN
#undef STATE_SUMMARY_SHOW
#undef STATE_MENU_SHOW_OPTIONS
#undef STATE_YESNO_SHOW_MONS
#undef STATE_CHOOSE_MONS_INVALID
#undef STATE_MENU_REINIT
#undef STATE_MENU_RESHOW

static u8 GetNumPastRentalsRank(u8 battleMode, u8 lvlMode)
{
    u8 ret;
    u8 rents = gSaveBlock2Ptr->frontier.factoryRentsCount[battleMode][lvlMode];

    if (rents < 15)
        ret = 0;
    else if (rents < 22)
        ret = 1;
    else if (rents < 29)
        ret = 2;
    else if (rents < 36)
        ret = 3;
    else if (rents < 43)
        ret = 4;
    else
        ret = 5;

    return ret;
}

static void CreateFrontierPoolSelectableMons(u8 firstMonId)
{
    u8 i = 0;
    u8 ivs = 0;
    u8 level = 0;
    u32 otId = 0;
    u8 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);
    u8 lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
    //u8 challengeNum = gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode] / 7;
    u8 rentalRank = 0;

    gFacilityTrainerMons = gBattleFrontierMons;
    if (gSaveBlock2Ptr->frontier.lvlMode != FRONTIER_LVL_50)
        level = FRONTIER_MAX_LEVEL_OPEN;
    else
        level = FRONTIER_MAX_LEVEL_50;

    rentalRank = GetNumPastRentalsRank(battleMode, lvlMode);
    otId = T1_READ_32(gSaveBlock2Ptr->playerTrainerId);

    for (i = 0; i < SELECTABLE_MONS_COUNT; i++)
    {
        u16 monId = gSaveBlock2Ptr->frontier.rentalMons[i].monId;
        sPoolSelectScreen->mons[i + firstMonId].monId = monId;
        if (i < rentalRank)
            ivs = 0; //GetFactoryMonFixedIV(challengeNum + 1, FALSE);
        else
            ivs = 0; //GetFactoryMonFixedIV(challengeNum, FALSE);

        CreateFacilityMon(&gFacilityTrainerMons[monId],
                level, ivs, otId, FLAG_FRONTIER_MON_FACTORY,
                &sPoolSelectScreen->mons[i + firstMonId].monData);
    }
}

static void CreateSlateportTentSelectableMons(u8 firstMonId)
{
    u8 i;
    u8 ivs = 0;
    u8 level = TENT_MIN_LEVEL;
    u32 otId = 0;

    gFacilityTrainerMons = gSlateportBattleTentMons;
    otId = T1_READ_32(gSaveBlock2Ptr->playerTrainerId);

    for (i = 0; i < SELECTABLE_MONS_COUNT; i++)
    {
        u16 monId = gSaveBlock2Ptr->frontier.rentalMons[i].monId;
        sPoolSelectScreen->mons[i + firstMonId].monId = monId;
        CreateFacilityMon(&gFacilityTrainerMons[monId], level, ivs, otId, 0, &sPoolSelectScreen->mons[i + firstMonId].monData);
    }
}

static void Select_CopyMonsToPlayerParty(void)
{
    u8 i, j, k;

    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
    {
        for (j = 0; j < SELECTABLE_MONS_COUNT; j++)
        {
            if (sPoolSelectScreen->mons[j].selectedId == i + 1) // In selectedId order
            {
                for (k = 0; k < PARTY_SIZE; k++)
                {
                    if (GetMonData(&gParties[B_TRAINER_PLAYER][k], MON_DATA_SPECIES, NULL) == SPECIES_NONE) // If player party slot is empty
                    {
                        // Copy mon to player party slot
                        CopyMon(&gParties[B_TRAINER_PLAYER][k], &gEliteFourPool[j], sizeof(*&gEliteFourPool[j]));
                        ZeroMonData(&gEliteFourPool[j]);
                        break;
                    }
                }
                break;
            }
        }
    }
    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (sPoolSelectScreen->mons[i].selectedId != 0)
        {
            for (k = 0; k < PARTY_SIZE; k++)
            {
                if (GetMonData(&gParties[B_TRAINER_OPPONENT_A][k], MON_DATA_SPECIES, NULL) != SPECIES_NONE)
                {
                    CopyMon(&gEliteFourPool[i], &gParties[B_TRAINER_OPPONENT_A][k], sizeof(*&gParties[B_TRAINER_OPPONENT_A][k]));
                    ZeroMonData(&gParties[B_TRAINER_OPPONENT_A][k]);
                    sPoolSelectScreen->mons[i].selectedId = 0;
                    break;
                }
            }
        }
    }
    CalculatePlayerPartyCount();
}

static void Select_ShowMenuOptions(void)
{
    if (!sPoolSelectScreen->fromSummaryScreen)
        sPoolSelectScreen->menuCursorPos = 0;

    gSprites[sPoolSelectScreen->menuCursor1SpriteId].x = 176;
    gSprites[sPoolSelectScreen->menuCursor1SpriteId].y = (sPoolSelectScreen->menuCursorPos * 16) + 112;
    gSprites[sPoolSelectScreen->menuCursor2SpriteId].x = 208;
    gSprites[sPoolSelectScreen->menuCursor2SpriteId].y = (sPoolSelectScreen->menuCursorPos * 16) + 112;

    gSprites[sPoolSelectScreen->menuCursor1SpriteId].invisible = FALSE;
    gSprites[sPoolSelectScreen->menuCursor2SpriteId].invisible = FALSE;

    Select_PrintMenuOptions();
}

static void Select_ShowYesNoOptions(void)
{
    sPoolSelectScreen->yesNoCursorPos = 0;

    gSprites[sPoolSelectScreen->menuCursor1SpriteId].x = 176;
    gSprites[sPoolSelectScreen->menuCursor1SpriteId].y = 112;
    gSprites[sPoolSelectScreen->menuCursor2SpriteId].x = 208;
    gSprites[sPoolSelectScreen->menuCursor2SpriteId].y = 112;

    gSprites[sPoolSelectScreen->menuCursor1SpriteId].invisible = FALSE;
    gSprites[sPoolSelectScreen->menuCursor2SpriteId].invisible = FALSE;

    Select_PrintYesNoOptions();
}

static void Select_ErasePopupMenu(u8 windowId)
{
    gSprites[sPoolSelectScreen->menuCursor1SpriteId].invisible = TRUE;
    gSprites[sPoolSelectScreen->menuCursor2SpriteId].invisible = TRUE;
    FillWindowPixelBuffer(windowId, PIXEL_FILL(0));
    CopyWindowToVram(windowId, COPYWIN_GFX);
    ClearWindowTilemap(windowId);
}

static void Select_PrintRentalPkmnString(void)
{
    FillWindowPixelBuffer(SELECT_WIN_TITLE, PIXEL_FILL(0));
    AddTextPrinterParameterized(SELECT_WIN_TITLE, FONT_NORMAL, gText_RentalPkmn2, 2, 1, 0, NULL);
    CopyWindowToVram(SELECT_WIN_TITLE, COPYWIN_FULL);
}

static void Select_PrintMonSpecies(void)
{
    u16 species;
    u8 x;
    u8 monId = sPoolSelectScreen->cursorPos;

    FillWindowPixelBuffer(SELECT_WIN_SPECIES, PIXEL_FILL(0));
    species = GetMonData(&gEliteFourPool[monId], MON_DATA_SPECIES, NULL);
    StringCopy(gStringVar4, GetSpeciesName(species));
    x = GetStringRightAlignXOffset(FONT_NORMAL, gStringVar4, 86);
    AddTextPrinterParameterized3(SELECT_WIN_SPECIES, FONT_NORMAL, x, 1, sSpeciesNameTextColors, 0, gStringVar4);
    CopyWindowToVram(SELECT_WIN_SPECIES, COPYWIN_GFX);
}

static void Select_PrintSelectMonString(void)
{
    const u8 *str = NULL;

    FillWindowPixelBuffer(SELECT_WIN_INFO, PIXEL_FILL(0));
    if (sPoolSelectScreen->selectingMonsState == VarGet(VAR_TEMP_4))
        str = gText_TheseThreePkmnOkay;
    else if (sPoolSelectScreen->selectingMonsState == 1)
        str = gText_SelectFirstPkmn;
    else if (sPoolSelectScreen->selectingMonsState == 2)
        str = gText_SelectSecondPkmn;
    else if (sPoolSelectScreen->selectingMonsState == 3)
        str = gText_SelectThirdPkmn;
    else
        str = gText_TheseThreePkmnOkay;

    AddTextPrinterParameterized(SELECT_WIN_INFO, FONT_NORMAL, str, 2, 5, 0, NULL);
    CopyWindowToVram(SELECT_WIN_INFO, COPYWIN_GFX);
}

static void Select_PrintCantSelectSameMon(void)
{
    FillWindowPixelBuffer(SELECT_WIN_INFO, PIXEL_FILL(0));
    AddTextPrinterParameterized(SELECT_WIN_INFO, FONT_NORMAL, gText_CantSelectSamePkmn, 2, 5, 0, NULL);
    CopyWindowToVram(SELECT_WIN_INFO, COPYWIN_GFX);
}

static void Select_PrintMenuOptions(void)
{
    u8 selectedId = sPoolSelectScreen->mons[sPoolSelectScreen->cursorPos].selectedId;

    PutWindowTilemap(SELECT_WIN_OPTIONS);
    FillWindowPixelBuffer(SELECT_WIN_OPTIONS, PIXEL_FILL(0));
    AddTextPrinterParameterized3(SELECT_WIN_OPTIONS, FONT_NORMAL, 7, 1, sMenuOptionTextColors, 0, gText_Summary);
    if (selectedId != 0)
        AddTextPrinterParameterized3(SELECT_WIN_OPTIONS, FONT_NORMAL, 7, 17, sMenuOptionTextColors, 0, gText_Deselect);
    else
        AddTextPrinterParameterized3(SELECT_WIN_OPTIONS, FONT_NORMAL, 7, 17, sMenuOptionTextColors, 0, gText_Rent);

    AddTextPrinterParameterized3(SELECT_WIN_OPTIONS, FONT_NORMAL, 7, 33, sMenuOptionTextColors, 0, gText_Others2);
    CopyWindowToVram(SELECT_WIN_OPTIONS, COPYWIN_FULL);
}

static void Select_PrintYesNoOptions(void)
{
    PutWindowTilemap(SELECT_WIN_YES_NO);
    FillWindowPixelBuffer(SELECT_WIN_YES_NO, PIXEL_FILL(0));
    AddTextPrinterParameterized3(SELECT_WIN_YES_NO, FONT_NORMAL, 7, 1, sMenuOptionTextColors, 0, gText_Yes2);
    AddTextPrinterParameterized3(SELECT_WIN_YES_NO, FONT_NORMAL, 7, 17, sMenuOptionTextColors, 0, gText_No2);
    CopyWindowToVram(SELECT_WIN_YES_NO, COPYWIN_FULL);
}

static u8 Select_RunMenuOptionFunc(void)
{
    gPoolSelect_CurrentOptionFunc = sSelect_MenuOptionFuncs[sPoolSelectScreen->menuCursorPos];
    return gPoolSelect_CurrentOptionFunc();
}

static u8 Select_OptionRentDeselect(void)
{
    u8 selectedId = sPoolSelectScreen->mons[sPoolSelectScreen->cursorPos].selectedId;
    //u16 monId = sPoolSelectScreen->mons[sPoolSelectScreen->cursorPos].monId;
    u16 species = GetMonData(&sPoolSelectScreen->mons[sPoolSelectScreen->cursorPos].monData, MON_DATA_SPECIES_OR_EGG);
    // Hideout and selecting mons for wrong trainer
    if ((VarGet(VAR_TEMP_3) == 3
    && (sPoolSelectScreen->cursorPos == 0
    || sPoolSelectScreen->cursorPos == 1
    || sPoolSelectScreen->cursorPos == 2))
    || (VarGet(VAR_TEMP_3) == 2
    && (sPoolSelectScreen->cursorPos == 3
    || sPoolSelectScreen->cursorPos == 4
    || sPoolSelectScreen->cursorPos == 5))
    || (sPoolSelectScreen->selectingMonsState == VarGet(VAR_TEMP_4)))
    {
        Select_PrintCantSelectSameMon();
        Select_ErasePopupMenu(SELECT_WIN_OPTIONS);
        return SELECT_INVALID_MON;
    }
    else if ((selectedId == 0 && (species == SPECIES_NONE || species == SPECIES_EGG)))
    {
        Select_PrintCantSelectSameMon();
        Select_ErasePopupMenu(SELECT_WIN_OPTIONS);
        return SELECT_INVALID_MON;
    }
    else
    {
        CloseMonPic(sPoolSelectScreen->monPics[1], &sPoolSelectScreen->monPicAnimating, FALSE);
        Select_HandleMonSelectionChange();
        Select_PrintSelectMonString();
        Select_ErasePopupMenu(SELECT_WIN_OPTIONS);
        if ((sPoolSelectScreen->selectingMonsState > FRONTIER_PARTY_SIZE)
         || ((sPoolSelectScreen->selectingMonsState >= (VarGet(VAR_TEMP_4)))
         && ((VarGet(VAR_TEMP_3) == 2) || (VarGet(VAR_TEMP_3) == 3)
         || InEliteFour())))
            return SELECT_CONFIRM_MONS;
        else
            return SELECT_CONTINUE_CHOOSING;
    }
}

static u8 Select_DeclineChosenMons(void)
{
    u8 i;
    u8 lastSelectedId = sPoolSelectScreen->selectingMonsState - 1;
    
    // Hide BEFORE decrementing, so the Hide/Close functions see the correct count
    Select_HideChosenMons();
    
    // Decrement after hiding
    sPoolSelectScreen->selectingMonsState--;
    
    // Find and deselect the mon with the highest selection ID
    for (i = 0; i < SELECTABLE_MONS_COUNT; i++)
    {
        if (sPoolSelectScreen->mons[i].selectedId == lastSelectedId)
        {
            sPoolSelectScreen->mons[i].selectedId = 0;
            // Update palette for the deselected mon
            gSprites[sPoolSelectScreen->mons[i].ballSpriteId].oam.paletteNum = IndexOfSpritePaletteTag(PALTAG_BALL_GRAY);
            break;
        }
    }
    
    Select_PrintSelectMonString();
    Select_ErasePopupMenu(SELECT_WIN_OPTIONS);
    
    if ((sPoolSelectScreen->selectingMonsState > FRONTIER_PARTY_SIZE))
        return 2;
    else
        return 1;
}

static u8 Select_OptionSummary(void)
{
    return SELECT_SUMMARY;
}

static u8 Select_OptionOthers(void)
{
    CloseMonPic(sPoolSelectScreen->monPics[1], &sPoolSelectScreen->monPicAnimating, FALSE);
    Select_ErasePopupMenu(SELECT_WIN_OPTIONS);
    return SELECT_CONTINUE_CHOOSING;
}

static void Select_PrintMonCategory(void)
{
    u16 species;
    u8 text[30];
    u8 x;
    u8 monId = sPoolSelectScreen->cursorPos;
    if (monId < SELECTABLE_MONS_COUNT)
    {
        PutWindowTilemap(SELECT_WIN_MON_CATEGORY);
        FillWindowPixelBuffer(SELECT_WIN_MON_CATEGORY, PIXEL_FILL(0));
        species = GetMonData(&gEliteFourPool[monId], MON_DATA_SPECIES, NULL);
        CopyMonCategoryText(species, text);
        x = GetStringRightAlignXOffset(FONT_NORMAL, text, 118);
        AddTextPrinterParameterized(SELECT_WIN_MON_CATEGORY, FONT_NORMAL, text, x, 1, 0, NULL);
        CopyWindowToVram(SELECT_WIN_MON_CATEGORY, COPYWIN_GFX);
    }
}

static void Select_CreateMonSprite(void)
{
    u8 monId = sPoolSelectScreen->cursorPos;
    struct Pokemon *mon = &gEliteFourPool[monId];
    u16 species = GetMonData(mon, MON_DATA_SPECIES, NULL);
    u32 personality = GetMonData(mon, MON_DATA_PERSONALITY, NULL);
    bool8 isShiny = GetMonData(mon, MON_DATA_IS_SHINY, NULL);

    sPoolSelectScreen->monPics[1].monSpriteId = CreateMonPicSprite(species, isShiny, personality, TRUE, 88, 32, 15, TAG_NONE);
    gSprites[sPoolSelectScreen->monPics[1].monSpriteId].centerToCornerVecX = 0;
    gSprites[sPoolSelectScreen->monPics[1].monSpriteId].centerToCornerVecY = 0;

    sPoolSelectScreen->monPicAnimating = FALSE;
}

static void Select_SetMonPicAnimating(bool8 animating)
{
    sPoolSelectScreen->monPicAnimating = animating;
}

static void Select_ReshowMonSprite(void)
{
    struct Pokemon *mon;
    u16 species;
    u32 personality;
    bool8 isShiny;

    sPoolSelectScreen->monPics[1].bgSpriteId = CreateSprite(&sSpriteTemplate_Select_MonPicBgAnim, 120, 64, 1);
    StartSpriteAffineAnim(&gSprites[sPoolSelectScreen->monPics[1].bgSpriteId], 2);

    mon = &gEliteFourPool[sPoolSelectScreen->cursorPos];
    species = GetMonData(mon, MON_DATA_SPECIES, NULL);
    personality = GetMonData(mon, MON_DATA_PERSONALITY, NULL);
    isShiny = GetMonData(mon, MON_DATA_IS_SHINY, NULL);

    sPoolSelectScreen->monPics[1].monSpriteId = CreateMonPicSprite(species, isShiny, personality, TRUE, 88, 32, 15, TAG_NONE);
    gSprites[sPoolSelectScreen->monPics[1].monSpriteId].centerToCornerVecX = 0;
    gSprites[sPoolSelectScreen->monPics[1].monSpriteId].centerToCornerVecY = 0;

    gSprites[sPoolSelectScreen->monPics[1].bgSpriteId].invisible = TRUE;
}

static void Select_CreateChosenMonsSprites(void)
{
    u8 i, j;
    u8 numSelected = sPoolSelectScreen->selectingMonsState - 1;

    // Only create sprites for the number of mons actually selected
    for (i = 0; i < numSelected; i++)
    {
        for (j = 0; j < SELECTABLE_MONS_COUNT; j++)
        {
            if (sPoolSelectScreen->mons[j].selectedId == i + 1)
            {
                struct Pokemon *mon = &gEliteFourPool[j];
                u16 species = GetMonData(mon, MON_DATA_SPECIES, NULL);
                u32 personality = GetMonData(mon, MON_DATA_PERSONALITY, NULL);
                bool8 isShiny = GetMonData(mon, MON_DATA_IS_SHINY, NULL);

                sPoolSelectScreen->monPics[i].monSpriteId = CreateMonPicSprite(species, isShiny, personality, TRUE, (i * 72) + 16, 32, i + 13, TAG_NONE);
                gSprites[sPoolSelectScreen->monPics[i].monSpriteId].centerToCornerVecX = 0;
                gSprites[sPoolSelectScreen->monPics[i].monSpriteId].centerToCornerVecY = 0;
                break;
            }
        }
    }
    sPoolSelectScreen->monPicAnimating = FALSE;
}

static void SpriteCB_OpenChosenMonPics(struct Sprite *sprite)
{
    u8 i;
    u8 taskId;
    u8 numSelected = sPoolSelectScreen->selectingMonsState - 1;
    bool8 allEnded = TRUE;

    // Check if all created sprites have finished animating
    for (i = 0; i < numSelected; i++)
    {
        if (!gSprites[sPoolSelectScreen->monPics[i].bgSpriteId].affineAnimEnded)
        {
            allEnded = FALSE;
            break;
        }
    }

    if (allEnded)
    {
        // Make all created sprites invisible
        for (i = 0; i < numSelected; i++)
        {
            gSprites[sPoolSelectScreen->monPics[i].bgSpriteId].invisible = TRUE;
        }

        taskId = CreateTask(Select_Task_OpenChosenMonPics, 1);
        gTasks[taskId].func(taskId);

        sprite->callback = SpriteCallbackDummy;
    }
}

static void SpriteCB_CloseChosenMonPics(struct Sprite *sprite)
{
    u8 numSelected = sPoolSelectScreen->selectingMonsState - 1;
    bool8 allEnded = TRUE;
    u8 i;
    
    // Check if all created sprites have finished animating
    for (i = 0; i < numSelected; i++)
    {
        if (!gSprites[sPoolSelectScreen->monPics[i].bgSpriteId].affineAnimEnded)
        {
            allEnded = FALSE;
            break;
        }
    }
    
    if (allEnded)
    {
        // Free matrices and destroy only the sprites that were created
        for (i = 0; i < numSelected; i++)
        {
            FreeOamMatrix(gSprites[sPoolSelectScreen->monPics[i].bgSpriteId].oam.matrixNum);
            DestroySprite(&gSprites[sPoolSelectScreen->monPics[i].bgSpriteId]);
        }

        sPoolSelectScreen->monPicAnimating = FALSE;
    }
}

// Task data for Select_Task_OpenChosenMonPics, Select_Task_CloseChosenMonPics, Task_CloseMonPic, and Task_OpenMonPic
#define tWinLeft      data[3]
#ifndef UBFIX
#define tWinRight     data[24] // UB: Typo? Likely meant data[4], 24 is out of bounds
#else
#define tWinRight     data[4]
#endif
#define tWinTop       data[5]
#define tWinBottom    data[8]
#define tSpriteId     data[6] // TODO: Clarify, what sprite
#define tIsSwapScreen data[7]

static void Select_Task_OpenChosenMonPics(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    switch (task->tState)
    {
    case 0:
        task->tWinLeft = 16;
        task->tWinRight = DISPLAY_WIDTH - 16;
        task->tWinTop = 64;
        task->tWinBottom = 65;
        SetGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON);
        SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(task->tWinLeft, task->tWinRight));
        SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(task->tWinTop, task->tWinBottom));
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG_ALL | WININ_WIN0_CLR | WININ_WIN0_OBJ);
        SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG0 | WINOUT_WIN01_BG1 | WINOUT_WIN01_BG2 | WINOUT_WIN01_CLR | WINOUT_WIN01_OBJ);
        break;
    case 1:
        ShowBg(3);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG3 | BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG1 | BLDCNT_TGT2_OBJ);
        SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(11, 4));
        break;
    case 2:
        task->tWinTop -= 4;
        task->tWinBottom += 4;
        if (task->tWinTop <= 32 || task->tWinBottom >= 96)
        {
            task->tWinTop = 32;
            task->tWinBottom = 96;
            ClearGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON);
        }
        SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(task->tWinTop, task->tWinBottom));
        if (task->tWinTop != 32)
            return;
        break;
    default:
        DestroyTask(taskId);
        Select_CreateChosenMonsSprites();
        return;
    }
    task->tState++;
}

static void Select_Task_CloseChosenMonPics(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    switch (task->tState)
    {
    case 0:
        task->tWinLeft = 16;
        task->tWinRight = DISPLAY_WIDTH - 16;
        task->tWinTop = 32;
        task->tWinBottom = 96;
        SetGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON);
        SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(task->tWinLeft, task->tWinRight));
        SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(task->tWinTop, task->tWinBottom));
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG_ALL | WININ_WIN0_CLR | WININ_WIN0_OBJ);
        SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG0 | WINOUT_WIN01_BG1 | WINOUT_WIN01_BG2 | WINOUT_WIN01_CLR | WINOUT_WIN01_OBJ);
        task->tState++;
        break;
    case 1:
        task->tWinTop += 4;
        task->tWinBottom -= 4;
        if (task->tWinTop >= 64 || task->tWinBottom <= 65)
        {
            task->tWinTop = 64;
            task->tWinBottom = 65;
        }
        SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(task->tWinTop, task->tWinBottom));
        if (task->tWinTop == 64)
            task->tState++;
        break;
    default:
        {
            u8 i;
            u8 numSelected = sPoolSelectScreen->selectingMonsState - 1;
            
            HideBg(3);
            
            // Set up and animate only the sprites that were created
            for (i = 0; i < numSelected; i++)
            {
                gSprites[sPoolSelectScreen->monPics[i].bgSpriteId].invisible = FALSE;
                gSprites[sPoolSelectScreen->monPics[i].bgSpriteId].callback = (i == numSelected - 1) ? SpriteCB_CloseChosenMonPics : SpriteCallbackDummy;
                StartSpriteAffineAnim(&gSprites[sPoolSelectScreen->monPics[i].bgSpriteId], 1);
            }
            
            ClearGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON);
            DestroyTask(taskId);
        }
        break;
    }
}

static void Select_ShowChosenMons(void)
{
    u8 numSelected = sPoolSelectScreen->selectingMonsState - 1;
    
    // Only create bg sprites for the number of mons actually selected
    if (numSelected >= 1)
    {
        sPoolSelectScreen->monPics[0].bgSpriteId = CreateSprite(&sSpriteTemplate_Select_MonPicBgAnim,  44, 64, 1);
        gSprites[sPoolSelectScreen->monPics[0].bgSpriteId].callback = (numSelected == 1) ? SpriteCB_OpenChosenMonPics : SpriteCallbackDummy;
    }
    if (numSelected >= 2)
    {
        sPoolSelectScreen->monPics[1].bgSpriteId = CreateSprite(&sSpriteTemplate_Select_MonPicBgAnim, 120, 64, 1);
        gSprites[sPoolSelectScreen->monPics[1].bgSpriteId].callback = (numSelected == 2) ? SpriteCB_OpenChosenMonPics : SpriteCallbackDummy;
    }
    if (numSelected >= 3)
    {
        sPoolSelectScreen->monPics[2].bgSpriteId = CreateSprite(&sSpriteTemplate_Select_MonPicBgAnim, 196, 64, 1);
        gSprites[sPoolSelectScreen->monPics[2].bgSpriteId].callback = SpriteCallbackDummy;
        gSprites[sPoolSelectScreen->monPics[1].bgSpriteId].callback = SpriteCB_OpenChosenMonPics;
    }

    sPoolSelectScreen->monPicAnimating = TRUE;
}

static void Select_HideChosenMons(void)
{
    u8 i;
    u8 taskId;
    u8 numSelected = sPoolSelectScreen->selectingMonsState - 1;

    // Free only the mon sprites that were actually created
    for (i = 0; i < numSelected; i++)
    {
        FreeAndDestroyMonPicSprite(sPoolSelectScreen->monPics[i].monSpriteId);
    }

    taskId = CreateTask(Select_Task_CloseChosenMonPics, 1);
    gTasks[taskId].func(taskId);

    sPoolSelectScreen->monPicAnimating = TRUE;
}

static void Select_SetWinRegs(s16 mWin0H, s16 nWin0H, s16 mWin0V, s16 nWin0V)
{
    SetGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON);
    SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(mWin0H, nWin0H));
    SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(mWin0V, nWin0V));
    SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG_ALL | WININ_WIN0_CLR | WININ_WIN0_OBJ);
    SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG0 | WINOUT_WIN01_BG1 | WINOUT_WIN01_BG2 | WINOUT_WIN01_CLR | WINOUT_WIN01_OBJ);
}

static bool32 UNUSED Select_AreSpeciesValid(u16 monId)
{
    u8 i, j;
    u32 species = gFacilityTrainerMons[monId].species;
    u8 selectState = sPoolSelectScreen->selectingMonsState;

    for (i = 1; i < selectState; i++)
    {
        for (j = 0; j < SELECTABLE_MONS_COUNT; j++)
        {
            if (sPoolSelectScreen->mons[j].selectedId == i)
            {
                if (gFacilityTrainerMons[sPoolSelectScreen->mons[j].monId].species == species)
                    return FALSE;

                break;
            }
        }
    }
    return TRUE;
}

static void Select_Task_FadeSpeciesName(u8 taskId)
{
    switch (gTasks[taskId].tState)
    {
    case FADESTATE_INIT:
        sPoolSelectScreen->fadeSpeciesNameCoeffDelay = 0;
        sPoolSelectScreen->fadeSpeciesNameCoeff = 0;
        sPoolSelectScreen->fadeSpeciesNameFadeOut = TRUE;
        gTasks[taskId].tState = FADESTATE_RUN;
        break;
    case FADESTATE_RUN:
        if (sPoolSelectScreen->fadeSpeciesNameActive)
        {
            if (sPoolSelectScreen->faceSpeciesNameDelay)
            {
                gTasks[taskId].tState = FADESTATE_DELAY;
            }
            else
            {
                sPoolSelectScreen->fadeSpeciesNameCoeffDelay++;
                if (sPoolSelectScreen->fadeSpeciesNameCoeffDelay > 6)
                {
                    sPoolSelectScreen->fadeSpeciesNameCoeffDelay = 0;
                    if (!sPoolSelectScreen->fadeSpeciesNameFadeOut)
                        sPoolSelectScreen->fadeSpeciesNameCoeff--;
                    else
                        sPoolSelectScreen->fadeSpeciesNameCoeff++;
                }
                BlendPalettes(1 << PALNUM_FADE_TEXT, sPoolSelectScreen->fadeSpeciesNameCoeff, 0);
                if (sPoolSelectScreen->fadeSpeciesNameCoeff > 5)
                {
                    sPoolSelectScreen->fadeSpeciesNameFadeOut = FALSE;
                }
                else if (sPoolSelectScreen->fadeSpeciesNameCoeff == 0)
                {
                    gTasks[taskId].tState = FADESTATE_DELAY;
                    sPoolSelectScreen->fadeSpeciesNameFadeOut = TRUE;
                }
            }
        }
        break;
    case FADESTATE_DELAY:
        if (sPoolSelectScreen->faceSpeciesNameDelay > 14)
        {
            sPoolSelectScreen->faceSpeciesNameDelay = 0;
            gTasks[taskId].tState = FADESTATE_RUN;
        }
        else
        {
            sPoolSelectScreen->faceSpeciesNameDelay++;
        }
        break;
    }
}

// Swap Screen's section begins here.

static void Swap_CB2(void)
{
    AnimateSprites();
    BuildOamBuffer();
    RunTextPrinters();
    UpdatePaletteFade();
    RunTasks();
}

static void Swap_VblankCb(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void CopySwappedMonData(void)
{
    u8 friendship;

    gParties[B_TRAINER_PLAYER][sPoolSwapScreen->playerMonId] = gParties[B_TRAINER_OPPONENT_A][sPoolSwapScreen->enemyMonId];
    friendship = 0;
    SetMonData(&gParties[B_TRAINER_PLAYER][sPoolSwapScreen->playerMonId], MON_DATA_FRIENDSHIP, &friendship);
    gSaveBlock2Ptr->frontier.rentalMons[sPoolSwapScreen->playerMonId].monId = gSaveBlock2Ptr->frontier.rentalMons[sPoolSwapScreen->enemyMonId + FRONTIER_PARTY_SIZE].monId;
    gSaveBlock2Ptr->frontier.rentalMons[sPoolSwapScreen->playerMonId].ivs = gSaveBlock2Ptr->frontier.rentalMons[sPoolSwapScreen->enemyMonId + FRONTIER_PARTY_SIZE].ivs;
    gSaveBlock2Ptr->frontier.rentalMons[sPoolSwapScreen->playerMonId].personality = GetMonData(&gParties[B_TRAINER_OPPONENT_A][sPoolSwapScreen->enemyMonId], MON_DATA_PERSONALITY, NULL);
    gSaveBlock2Ptr->frontier.rentalMons[sPoolSwapScreen->playerMonId].abilityNum = GetBoxMonData(&gParties[B_TRAINER_OPPONENT_A][sPoolSwapScreen->enemyMonId].box, MON_DATA_ABILITY_NUM, NULL);
}

// Main swap states
// States for the main tasks of the Swap_ functions after initialization, including:
// Swap_Task_OpenSummaryScreen, Swap_Task_HandleYesNo, Swap_Task_HandleMenu, and Swap_Task_HandleChooseMons
// Tasks sharing states was unnecessary, see "Main select states"
#define STATE_CHOOSE_MONS_INIT 0
#define STATE_CHOOSE_MONS_HANDLE_INPUT 1
#define STATE_MENU_INIT 2
#define STATE_MENU_HANDLE_INPUT 3
#define STATE_YESNO_SHOW  4
#define STATE_YESNO_HANDLE_INPUT 5
#define STATE_SUMMARY_FADE 6
#define STATE_SUMMARY_CLEAN 7
#define STATE_SUMMARY_SHOW 8
#define STATE_MENU_SHOW_OPTIONS 9

static void Swap_Task_OpenSummaryScreen(u8 taskId)
{
    switch (gTasks[taskId].tState)
    {
    case STATE_SUMMARY_FADE:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].tState = STATE_SUMMARY_CLEAN;
        break;
    case STATE_SUMMARY_CLEAN:
        if (!gPaletteFade.active)
        {
            DestroyTask(sPoolSwapScreen->fadeSpeciesNameTaskId);
            HideMonPic(sPoolSwapScreen->monPic, &sPoolSwapScreen->monPicAnimating);
            Swap_DestroyAllSprites();
            FREE_AND_SET_NULL(sSwapMenuTilesetBuffer);
            FREE_AND_SET_NULL(sSwapMonPicBgTilesetBuffer);
            FREE_AND_SET_NULL(sSwapMenuTilemapBuffer);
            FREE_AND_SET_NULL(sSwapMonPicBgTilemapBuffer);
            FreeAllWindowBuffers();
            gTasks[taskId].tState = STATE_SUMMARY_SHOW;
        }
        break;
    case STATE_SUMMARY_SHOW:
        DestroyTask(taskId);
        sPoolSwapScreen->fromSummaryScreen = TRUE;
        sPoolSwapScreen->speciesNameColorBackup = gPlttBufferUnfaded[BG_PLTT_ID(PALNUM_TEXT) + 4];
        ShowPokemonSummaryScreen(SUMMARY_MODE_NORMAL, gParties[B_TRAINER_PLAYER], sPoolSwapScreen->cursorPos, FRONTIER_PARTY_SIZE - 1, CB2_InitSwapScreen);
        break;
    }
}

static void Swap_Task_Exit(u8 taskId)
{
    if (sPoolSwapScreen->monPicAnimating == TRUE)
        return;

    switch (gTasks[taskId].tState)
    {
    case 0:
        // Set return value for script
        // TRUE if player kept their current Pokémon
        if (sPoolSwapScreen->monSwapped == TRUE)
        {
            gTasks[taskId].tState++;
            gSpecialVar_Result = FALSE;
        }
        else
        {
            gTasks[taskId].tState = 2;
            gSpecialVar_Result = TRUE;
        }
        break;
    case 1:
        if (sPoolSwapScreen->monSwapped == TRUE)
        {
            sPoolSwapScreen->enemyMonId = sPoolSwapScreen->cursorPos;
            CopySwappedMonData();
        }
        gTasks[taskId].tState++;
        break;
    case 2:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].tState++;
        break;
    case 3:
        if (!UpdatePaletteFade())
        {
            DestroyTask(sPoolSwapScreen->fadeSpeciesNameTaskId);
            Swap_DestroyAllSprites();
            FREE_AND_SET_NULL(sSwapMenuTilesetBuffer);
            FREE_AND_SET_NULL(sSwapMonPicBgTilesetBuffer);
            FREE_AND_SET_NULL(sSwapMenuTilemapBuffer);
            FREE_AND_SET_NULL(sSwapMonPicBgTilemapBuffer);
            FREE_AND_SET_NULL(sPoolSwapScreen);
            FreeAllWindowBuffers();
            SetMainCallback2(CB2_ReturnToFieldContinueScript);
            DestroyTask(taskId);
        }
        break;
    }
}

#define tSaidYes           data[1]
#define tFollowUpTaskState data[5]
#define tFollowUpTaskPtrHi data[6]
#define tFollowUpTaskPtrLo data[7]

static void Swap_Task_HandleYesNo(u8 taskId)
{
    u16 loPtr, hiPtr;

    if (sPoolSwapScreen->monPicAnimating == TRUE)
        return;

    switch (gTasks[taskId].tState)
    {
    case STATE_YESNO_SHOW:
        Swap_ShowYesNoOptions();
        gTasks[taskId].tState = STATE_YESNO_HANDLE_INPUT;
        break;
    case STATE_YESNO_HANDLE_INPUT:
        if (JOY_NEW(A_BUTTON))
        {
            PlaySE(SE_SELECT);
            if (sPoolSwapScreen->yesNoCursorPos == 0)
            {
                // Selected Yes
                gTasks[taskId].tSaidYes = TRUE;
                hiPtr = gTasks[taskId].tFollowUpTaskPtrHi;
                loPtr = gTasks[taskId].tFollowUpTaskPtrLo;
                gTasks[taskId].func = (void *)((hiPtr << 16) | loPtr);
            }
            else
            {
                // Selected No
                gTasks[taskId].tSaidYes = FALSE;
                Swap_ErasePopupMenu(SWAP_WIN_YES_NO);
                hiPtr = gTasks[taskId].tFollowUpTaskPtrHi;
                loPtr = gTasks[taskId].tFollowUpTaskPtrLo;
                gTasks[taskId].func = (void *)((hiPtr << 16) | loPtr);
            }
        }
        else if (JOY_NEW(B_BUTTON))
        {
            PlaySE(SE_SELECT);
            gTasks[taskId].tSaidYes = FALSE;
            Swap_ErasePopupMenu(SWAP_WIN_YES_NO);
            hiPtr = gTasks[taskId].tFollowUpTaskPtrHi;
            loPtr = gTasks[taskId].tFollowUpTaskPtrLo;
            gTasks[taskId].func = (void *)((hiPtr << 16) | loPtr);
        }
        else if (JOY_REPEAT(DPAD_UP))
        {
            PlaySE(SE_SELECT);
            Swap_UpdateYesNoCursorPosition(-1);
        }
        else if (JOY_REPEAT(DPAD_DOWN))
        {
            PlaySE(SE_SELECT);
            Swap_UpdateYesNoCursorPosition(1);
        }
        break;
    }
}

static void Swap_HandleQuitSwappingResponse(u8 taskId)
{
    if (gTasks[taskId].tSaidYes == TRUE)
    {
        gTasks[taskId].tState = 0;
        gTasks[taskId].func = Swap_Task_Exit;
    }
    else
    {
        gTasks[taskId].tState = 0;
        gTasks[taskId].tFollowUpTaskPtrHi = (u32)(Swap_Task_HandleChooseMons) >> 16;
        gTasks[taskId].tFollowUpTaskPtrLo = (u32)(Swap_Task_HandleChooseMons);
        gTasks[taskId].tFollowUpTaskState = STATE_CHOOSE_MONS_HANDLE_INPUT;
        gTasks[taskId].func = Swap_Task_ScreenInfoTransitionIn;
    }
}

static void Swap_AskQuitSwapping(u8 taskId)
{
    if (gTasks[taskId].tState == 0)
    {
        Swap_PrintOnInfoWindow(gText_QuitSwapping);
        sPoolSwapScreen->monSwapped = FALSE;
        gTasks[taskId].tState = STATE_YESNO_SHOW;
        gTasks[taskId].tFollowUpTaskPtrHi = (u32)(Swap_HandleQuitSwappingResponse) >> 16;
        gTasks[taskId].tFollowUpTaskPtrLo = (u32)(Swap_HandleQuitSwappingResponse);
        gTasks[taskId].func = Swap_Task_HandleYesNo;
    }
}

static void Swap_HandleAcceptMonResponse(u8 taskId)
{
    CloseMonPic(sPoolSwapScreen->monPic, &sPoolSwapScreen->monPicAnimating, TRUE);
    if (gTasks[taskId].tSaidYes == TRUE)
    {
        gTasks[taskId].tState = 0;
        gTasks[taskId].func = Swap_Task_Exit;
    }
    else
    {
        gTasks[taskId].tState = 0;
        gTasks[taskId].tFollowUpTaskPtrHi = (u32)(Swap_Task_HandleChooseMons) >> 16;
        gTasks[taskId].tFollowUpTaskPtrLo = (u32)(Swap_Task_HandleChooseMons);
        gTasks[taskId].tFollowUpTaskState = STATE_CHOOSE_MONS_HANDLE_INPUT;
        gTasks[taskId].func = Swap_Task_ScreenInfoTransitionIn;
    }
}

static void Swap_AskAcceptMon(u8 taskId)
{
    if (gTasks[taskId].tState == 0)
    {
        OpenMonPic(&sPoolSwapScreen->monPic.bgSpriteId, &sPoolSwapScreen->monPicAnimating, TRUE);
        Swap_PrintOnInfoWindow(gText_AcceptThisPkmn);
        sPoolSwapScreen->monSwapped = TRUE;
        gTasks[taskId].tState = STATE_YESNO_SHOW;
        gTasks[taskId].tFollowUpTaskPtrHi = (u32)(Swap_HandleAcceptMonResponse) >> 16;
        gTasks[taskId].tFollowUpTaskPtrLo = (u32)(Swap_HandleAcceptMonResponse);
        gTasks[taskId].func = Swap_Task_HandleYesNo;
    }
}

static void Swap_Task_HandleMenu(u8 taskId)
{
    switch (gTasks[taskId].tState)
    {
    case STATE_MENU_INIT:
        if (!sPoolSwapScreen->fromSummaryScreen)
            OpenMonPic(&sPoolSwapScreen->monPic.bgSpriteId, &sPoolSwapScreen->monPicAnimating, TRUE);
        gTasks[taskId].tState = STATE_MENU_SHOW_OPTIONS;
        break;
    case STATE_MENU_SHOW_OPTIONS:
        if (sPoolSwapScreen->monPicAnimating != TRUE)
        {
            Swap_ShowMenuOptions();
            gTasks[taskId].tState = STATE_MENU_HANDLE_INPUT;
        }
        break;
    case STATE_MENU_HANDLE_INPUT:
        if (sPoolSwapScreen->monPicAnimating != TRUE)
        {
            if (JOY_NEW(A_BUTTON))
            {
                PlaySE(SE_SELECT);
                Swap_RunMenuOptionFunc(taskId);
            }
            else if (JOY_NEW(B_BUTTON))
            {
                PlaySE(SE_SELECT);
                CloseMonPic(sPoolSwapScreen->monPic, &sPoolSwapScreen->monPicAnimating, TRUE);
                Swap_ErasePopupMenu(SWAP_WIN_OPTIONS);
                gTasks[taskId].tState = 0;
                gTasks[taskId].tFollowUpTaskPtrHi = (u32)(Swap_Task_HandleChooseMons) >> 16;
                gTasks[taskId].tFollowUpTaskPtrLo = (u32)(Swap_Task_HandleChooseMons);
                gTasks[taskId].tFollowUpTaskState = STATE_CHOOSE_MONS_HANDLE_INPUT;
                gTasks[taskId].func = Swap_Task_ScreenInfoTransitionIn;
            }
            else if (JOY_REPEAT(DPAD_UP))
            {
                Swap_UpdateMenuCursorPosition(-1);
            }
            else if (JOY_REPEAT(DPAD_DOWN))
            {
                Swap_UpdateMenuCursorPosition(1);
            }
        }
        break;
    }
}

// Handles input on the two main swap screens (choosing a current pokeon to get rid of, and choosing a new Pokémon to receive)
static void Swap_Task_HandleChooseMons(u8 taskId)
{
    switch (gTasks[taskId].tState)
    {
    case STATE_CHOOSE_MONS_INIT:
        if (!gPaletteFade.active)
        {
            sPoolSwapScreen->fadeSpeciesNameActive = TRUE;
            gTasks[taskId].tState = STATE_CHOOSE_MONS_HANDLE_INPUT;
        }
        break;
    case STATE_CHOOSE_MONS_HANDLE_INPUT:
        if (JOY_NEW(A_BUTTON))
        {
            // Run whatever action is currently selected (a Poké Ball, the Cancel button, etc.)
            PlaySE(SE_SELECT);
            sPoolSwapScreen->fadeSpeciesNameActive = FALSE;
            Swap_PrintMonSpeciesAtFade();
            Swap_EraseSpeciesWindow();
            Swap_RunActionFunc(taskId);
        }
        else if (JOY_NEW(B_BUTTON))
        {
            // Ask if player wants to quit swapping
            PlaySE(SE_SELECT);
            sPoolSwapScreen->fadeSpeciesNameActive = FALSE;
            Swap_PrintMonSpeciesAtFade();
            Swap_EraseSpeciesWindow();
            gTasks[taskId].tFollowUpTaskPtrHi = (u32)(Swap_AskQuitSwapping) >> 16;
            gTasks[taskId].tFollowUpTaskPtrLo = (u32)(Swap_AskQuitSwapping);
            gTasks[taskId].tState = 0;
            gTasks[taskId].tFollowUpTaskState = 0;
            gTasks[taskId].func = Swap_Task_ScreenInfoTransitionOut;
        }
        else if (JOY_REPEAT(DPAD_LEFT))
        {
            Swap_UpdateBallCursorPosition(-1);
            Swap_PrintMonCategory();
            Swap_PrintMonSpecies();
        }
        else if (JOY_REPEAT(DPAD_RIGHT))
        {
            Swap_UpdateBallCursorPosition(1);
            Swap_PrintMonCategory();
            Swap_PrintMonSpecies();
        }
        else if (JOY_REPEAT(DPAD_DOWN))
        {
            Swap_UpdateActionCursorPosition(1);
            Swap_PrintMonCategory();
            Swap_PrintMonSpecies();
        }
        else if (JOY_REPEAT(DPAD_UP))
        {
            Swap_UpdateActionCursorPosition(-1);
            Swap_PrintMonCategory();
            Swap_PrintMonSpecies();
        }
        break;
    }
}

static void Swap_Task_FadeSpeciesName(u8 taskId)
{
    switch (gTasks[taskId].tState)
    {
    case FADESTATE_INIT:
        sPoolSwapScreen->fadeSpeciesNameCoeffDelay = 0;
        sPoolSwapScreen->fadeSpeciesNameCoeff = 0;
        sPoolSwapScreen->fadeSpeciesNameFadeOut = TRUE;
        gTasks[taskId].tState = FADESTATE_RUN;
        break;
    case FADESTATE_RUN:
        if (sPoolSwapScreen->fadeSpeciesNameActive)
        {
            if (sPoolSwapScreen->faceSpeciesNameDelay)
            {
                gTasks[taskId].tState = FADESTATE_DELAY;
            }
            else
            {
                sPoolSwapScreen->fadeSpeciesNameCoeffDelay++;
                if (sPoolSwapScreen->fadeSpeciesNameCoeffDelay > 6)
                {
                    sPoolSwapScreen->fadeSpeciesNameCoeffDelay = 0;
                    if (!sPoolSwapScreen->fadeSpeciesNameFadeOut)
                        sPoolSwapScreen->fadeSpeciesNameCoeff--;
                    else
                        sPoolSwapScreen->fadeSpeciesNameCoeff++;
                }
                BlendPalettes(1 << PALNUM_FADE_TEXT, sPoolSwapScreen->fadeSpeciesNameCoeff, 0);
                if (sPoolSwapScreen->fadeSpeciesNameCoeff > 5)
                {
                    sPoolSwapScreen->fadeSpeciesNameFadeOut = FALSE;
                }
                else if (sPoolSwapScreen->fadeSpeciesNameCoeff == 0)
                {
                    gTasks[taskId].tState = FADESTATE_DELAY;
                    sPoolSwapScreen->fadeSpeciesNameFadeOut = TRUE;
                }
            }
        }
        break;
    case FADESTATE_DELAY:
        if (sPoolSwapScreen->faceSpeciesNameDelay > 14)
        {
            sPoolSwapScreen->faceSpeciesNameDelay = 0;
            gTasks[taskId].tState = FADESTATE_RUN;
        }
        else
        {
            sPoolSwapScreen->faceSpeciesNameDelay++;
        }
        break;
    }
}

#define tFadeOutFinished data[4]

static void Swap_Task_FadeOutSpeciesName(u8 taskId)
{
    switch (gTasks[taskId].tState)
    {
    case 0:
        sPoolSwapScreen->fadeSpeciesNameCoeffDelay = 0;
        gTasks[taskId].tFadeOutFinished = FALSE;
        gTasks[taskId].tState++;
        break;
    case 1:
        LoadPalette(&gPlttBufferUnfaded[BG_PLTT_ID(PALNUM_TEXT)], BG_PLTT_ID(PALNUM_FADE_TEXT), PLTT_SIZEOF(5));
        gTasks[taskId].tState++;
        break;
    case 2:
        if (sPoolSwapScreen->fadeSpeciesNameCoeff > 15)
        {
            gTasks[taskId].tFadeOutFinished = TRUE;
            gTasks[taskId].tState++;
        }
        sPoolSwapScreen->fadeSpeciesNameCoeffDelay++;
        if (sPoolSwapScreen->fadeSpeciesNameCoeffDelay > 3)
        {
            sPoolSwapScreen->fadeSpeciesNameCoeffDelay = 0;
            gPlttBufferUnfaded[BG_PLTT_ID(PALNUM_TEXT) + 4] = gPlttBufferFaded[BG_PLTT_ID(PALNUM_FADE_TEXT) + 4];
            sPoolSwapScreen->fadeSpeciesNameCoeff++;
        }
        BlendPalettes(1 << PALNUM_FADE_TEXT, sPoolSwapScreen->fadeSpeciesNameCoeff, 0);
        break;
    }
}

// Slide current pokeballs offscreen to the right and new pokeballs onscreen from
// the left during transition between player's/enemy's party screens
#define tBallCycled(i) data[(i) + 1]
static void Swap_Task_SlideCycleBalls(u8 taskId)
{
    s8 i;
    u8 lastX;
    bool8 finished;

    switch (gTasks[taskId].tState)
    {
    case 0:
        gTasks[taskId].tBallCycled(0) = FALSE;
        gTasks[taskId].tBallCycled(1) = FALSE;
        gTasks[taskId].tBallCycled(2) = FALSE;
        gTasks[taskId].tState = 1;
        break;
    case 1:
        lastX = 0;
        for (i = FRONTIER_PARTY_SIZE - 1; i >= 0; i--)
        {
            if (i != FRONTIER_PARTY_SIZE - 1)
            {
                u8 posX = lastX - gSprites[sPoolSwapScreen->ballSpriteIds[i]].x;
                if (posX == 16 || gTasks[taskId].tBallCycled(i + 1) == TRUE)
                {
                    lastX = gSprites[sPoolSwapScreen->ballSpriteIds[i]].x;
                    gSprites[sPoolSwapScreen->ballSpriteIds[i]].x += 10;
                }
                else if (posX > 16)
                {
                    gSprites[sPoolSwapScreen->ballSpriteIds[i]].x = gSprites[sPoolSwapScreen->ballSpriteIds[i + 1]].x - 48;
                }
            }
            else
            {
                lastX = gSprites[sPoolSwapScreen->ballSpriteIds[i]].x;
                gSprites[sPoolSwapScreen->ballSpriteIds[i]].x += 10;
            }

            if (gTasks[taskId].tBallCycled(i) == TRUE)
            {
                // New ball coming in from left, check if it has reached dest
                if (gSprites[sPoolSwapScreen->ballSpriteIds[i]].x > (i * 48) + 72)
                {
                    // Overshot dest, set x and finish
                    gSprites[sPoolSwapScreen->ballSpriteIds[i]].x = (i * 48) + 72;
                    finished = TRUE;
                }
                else if (gSprites[sPoolSwapScreen->ballSpriteIds[i]].x == (i * 48) + 72)
                {
                    finished = TRUE;
                }
                else
                {
                    finished = FALSE;
                }
            }
            else
            {
                finished = FALSE;
            }

            if (gSprites[sPoolSwapScreen->ballSpriteIds[i]].x - 16 > DISPLAY_WIDTH)
            {
                // Ball is offscreen right, cycle its palette and move to left side of screen
                lastX = gSprites[sPoolSwapScreen->ballSpriteIds[i]].x;
                gSprites[sPoolSwapScreen->ballSpriteIds[i]].x = -16;
                if (sPoolSwapScreen->inEnemyScreen == TRUE)
                    gSprites[sPoolSwapScreen->ballSpriteIds[i]].oam.paletteNum = IndexOfSpritePaletteTag(PALTAG_BALL_SELECTED);
                else
                    gSprites[sPoolSwapScreen->ballSpriteIds[i]].oam.paletteNum = IndexOfSpritePaletteTag(PALTAG_BALL_GRAY);

                gTasks[taskId].tBallCycled(i) = TRUE;
            }
        }
        if (finished == TRUE)
            DestroyTask(taskId);
        break;
    }
}

// For sliding the action buttons (Cancel, Pkmn for Swap) on/off screen

#define SLIDE_BUTTON_PKMN   0
#define SLIDE_BUTTON_CANCEL 1

#define tTaskId     data[1]
#define tSlidingOn  data[2]
#define tXIncrement data[3]

// Data to be used by the task that creates this task
#define tSecondSlideDelay    data[2]
#define tSlideFinishedPkmn   data[3]
#define tSlideFinishedCancel data[4]

static void Swap_Task_SlideButtonOnOffScreen(u8 taskId)
{
    u8 i, j;
    s32 posX = 0;
    s8 deltaX = gTasks[taskId].tXIncrement;
    bool8 sliding;
    s16 currPosX;
    u8 prevTaskId;

    if (gTasks[taskId].tSlidingOn == TRUE)
        deltaX *= -1;

    switch (gTasks[taskId].tState)
    {
    case SLIDE_BUTTON_PKMN:
        currPosX = gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[0][0]].x;
        if (!gTasks[taskId].tSlidingOn)
        {
            // Sliding "Pkmn for Swap" offscreen
            if (currPosX + deltaX < DISPLAY_WIDTH)
            {
                sliding = TRUE;
            }
            else
            {
                sliding = FALSE;
                posX = DISPLAY_WIDTH;
            }
        }
        else
        {
            // Sliding "Pkmn for Swap" onscreen
            if (currPosX + deltaX > 160)
            {
                sliding = TRUE;
            }
            else
            {
                sliding = FALSE;
                posX = 160;
            }
        }

        if (sliding == TRUE)
        {
            // Do movement
            for (i = 0; i < ARRAY_COUNT(sPoolSwapScreen->pkmnForSwapButtonSpriteIds[0]); i++)
            {
                for (j = 0; j < ARRAY_COUNT(sPoolSwapScreen->pkmnForSwapButtonSpriteIds); j++)
                    gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[j][i]].x += deltaX;
            }
        }
        else
        {
            // Set final position
            for (j = 0; j < ARRAY_COUNT(sPoolSwapScreen->pkmnForSwapButtonSpriteIds); j++)
            {
                gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[j][0]].x = posX;
                gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[j][1]].x = posX + 16;
                gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[j][2]].x = posX + 48;
            }
            prevTaskId = gTasks[taskId].tTaskId;
            gTasks[prevTaskId].tSlideFinishedPkmn = TRUE;
            DestroyTask(taskId);
        }
        break;
    case SLIDE_BUTTON_CANCEL:
        currPosX = gSprites[sPoolSwapScreen->cancelButtonSpriteIds[0][0]].x;
        if (!gTasks[taskId].tSlidingOn)
        {
            // Sliding "Cancel" offscreen
            if (currPosX + deltaX < DISPLAY_WIDTH)
            {
                sliding = TRUE;
            }
            else
            {
                sliding = FALSE;
                posX = DISPLAY_WIDTH;
            }
        }
        else
        {
            // Sliding "Cancel" onscreen
            if (currPosX + deltaX > 192)
            {
                sliding = TRUE;
            }
            else
            {
                sliding = FALSE;
                posX = 192;
            }
        }

        if (sliding == TRUE)
        {
            // Do movement
            for (i = 0; i < ARRAY_COUNT(sPoolSwapScreen->cancelButtonSpriteIds); i++)
            {
                for (j = 0; j < ARRAY_COUNT(sPoolSwapScreen->cancelButtonSpriteIds[0]); j++)
                    gSprites[sPoolSwapScreen->cancelButtonSpriteIds[j][i]].x += deltaX;
            }
        }
        else
        {
            // Set final position
            for (j = 0; j < ARRAY_COUNT(sPoolSwapScreen->cancelButtonSpriteIds); j++)
            {
                gSprites[sPoolSwapScreen->cancelButtonSpriteIds[j][0]].x = posX;
                gSprites[sPoolSwapScreen->cancelButtonSpriteIds[j][1]].x = posX + 16;
            }
            prevTaskId = gTasks[taskId].tTaskId;
            gTasks[prevTaskId].tSlideFinishedCancel = TRUE;
            DestroyTask(taskId);
        }
        break;
    }
}

// Slide action buttons offscreen
static void Swap_Task_ScreenInfoTransitionOut(u8 taskId)
{
    u8 slideTaskId;
    u16 hiPtr, loPtr;

    switch (gTasks[taskId].tState)
    {
    case 0:
        LoadPalette(sSwapText_Pal, BG_PLTT_ID(PALNUM_FADE_TEXT), sizeof(sSwapText_Pal));
        Swap_PrintActionStrings();
        PutWindowTilemap(SWAP_WIN_ACTION_FADE);
        gTasks[taskId].tState++;
        break;
    case 1:
        Swap_ErasePopupMenu(SWAP_WIN_OPTIONS);
        gTasks[taskId].tState++;
        break;
    case 2:
        BeginNormalPaletteFade(1 << PALNUM_FADE_TEXT, 0, 0, 16, sPokeballGray_Pal[37]);
        gTasks[taskId].tState++;
        break;
    case 3:
        if (!gPaletteFade.active)
        {
            FillWindowPixelBuffer(SWAP_WIN_ACTION_FADE, PIXEL_FILL(0));
            CopyWindowToVram(SWAP_WIN_ACTION_FADE, COPYWIN_GFX);
            if (sPoolSwapScreen->inEnemyScreen == TRUE)
            {
                // Start "Pkmn for Swap" button slide offscreen
                slideTaskId = CreateTask(Swap_Task_SlideButtonOnOffScreen, 0);
                gTasks[taskId].tSlideFinishedPkmn = FALSE;
                gTasks[slideTaskId].tTaskId = taskId;
                gTasks[slideTaskId].tState = SLIDE_BUTTON_PKMN;
                gTasks[slideTaskId].tSlidingOn = FALSE;
                gTasks[slideTaskId].tXIncrement = 6;
                gTasks[taskId].tSecondSlideDelay = 5;
                gTasks[taskId].tState++;
            }
            else
            {
                // Start "Cancel" button slide offscreen
                slideTaskId = CreateTask(Swap_Task_SlideButtonOnOffScreen, 0);
                gTasks[taskId].tSlideFinishedPkmn = TRUE;
                gTasks[taskId].tSlideFinishedCancel = FALSE;
                gTasks[slideTaskId].tTaskId = taskId;
                gTasks[slideTaskId].tState = SLIDE_BUTTON_CANCEL;
                gTasks[slideTaskId].tSlidingOn = FALSE;
                gTasks[slideTaskId].tXIncrement = 6;
                gTasks[taskId].tState += 2;
            }
        }
        break;
    case 4:
        // Start "Cancel" button slide offscreen for screens with both buttons
        if (gTasks[taskId].tSecondSlideDelay == 0)
        {
            slideTaskId = CreateTask(Swap_Task_SlideButtonOnOffScreen, 0);
            gTasks[taskId].tSlideFinishedCancel = FALSE;
            gTasks[slideTaskId].tTaskId = taskId;
            gTasks[slideTaskId].tState = SLIDE_BUTTON_CANCEL;
            gTasks[slideTaskId].tSlidingOn = FALSE;
            gTasks[slideTaskId].tXIncrement = 6;
            gTasks[taskId].tState++;
        }
        else
        {
            gTasks[taskId].tSecondSlideDelay--;
        }
        break;
    case 5:
        if (gTasks[taskId].tSlideFinishedPkmn == TRUE
         && gTasks[taskId].tSlideFinishedCancel == TRUE)
        {
            gTasks[taskId].tState = gTasks[taskId].tFollowUpTaskState;
            hiPtr = gTasks[taskId].tFollowUpTaskPtrHi;
            loPtr = gTasks[taskId].tFollowUpTaskPtrLo;
            gTasks[taskId].func = (void *)((hiPtr << 16) | (loPtr));
        }
        break;
    }
}

// Slide action buttons onscreen, reprint swap dialogue and mon info
static void Swap_Task_ScreenInfoTransitionIn(u8 taskId)
{
    u8 slideTaskId;
    u16 hiPtr, loPtr;
    if (sPoolSwapScreen->monPicAnimating == TRUE)
        return;

    switch (gTasks[taskId].tState)
    {
    case 0:
        if (sPoolSwapScreen->inEnemyScreen == TRUE)
        {
            // Start "Pkmn for Swap" button slide onscreen
            slideTaskId = CreateTask(Swap_Task_SlideButtonOnOffScreen, 0);
            gTasks[taskId].tSlideFinishedPkmn = FALSE;
            gTasks[slideTaskId].tTaskId = taskId;
            gTasks[slideTaskId].tState = SLIDE_BUTTON_PKMN;
            gTasks[slideTaskId].tSlidingOn = TRUE;
            gTasks[slideTaskId].tXIncrement = 6;
            gTasks[taskId].tSecondSlideDelay = 10;
            gTasks[taskId].tState++;
        }
        else
        {
            // Start "Cancel" button slide onscreen
            slideTaskId = CreateTask(Swap_Task_SlideButtonOnOffScreen, 0);
            gTasks[taskId].tSlideFinishedPkmn = TRUE;
            gTasks[taskId].tSlideFinishedCancel = FALSE;
            gTasks[slideTaskId].tTaskId = taskId;
            gTasks[slideTaskId].tState = SLIDE_BUTTON_CANCEL;
            gTasks[slideTaskId].tSlidingOn = TRUE;
            gTasks[slideTaskId].tXIncrement = 6;
            gTasks[taskId].tState += 2;
        }
        break;
    case 1:
        // Start "Cancel" button slide onscreen for screens with both buttons
        if (gTasks[taskId].tSecondSlideDelay == 0)
        {
            slideTaskId = CreateTask(Swap_Task_SlideButtonOnOffScreen, 0);
            gTasks[taskId].tSlideFinishedCancel = FALSE;
            gTasks[slideTaskId].tTaskId = taskId;
            gTasks[slideTaskId].tState = SLIDE_BUTTON_CANCEL;
            gTasks[slideTaskId].tSlidingOn = TRUE;
            gTasks[slideTaskId].tXIncrement = 6;
            gTasks[taskId].tState++;
        }
        else
        {
            gTasks[taskId].tSecondSlideDelay--;
        }
        break;
    case 2:
        if (gTasks[taskId].tSlideFinishedPkmn == TRUE
         && gTasks[taskId].tSlideFinishedCancel == TRUE)
        {
            gPlttBufferFaded[BG_PLTT_ID(PALNUM_FADE_TEXT) + 2] = sPokeballGray_Pal[37];
            Swap_PrintActionStrings();
            PutWindowTilemap(SWAP_WIN_ACTION_FADE);
            gTasks[taskId].tState++;
        }
        break;
    case 3:
        BeginNormalPaletteFade(1 << PALNUM_FADE_TEXT, 0, 16, 0, sPokeballGray_Pal[37]);
        gTasks[taskId].tState++;
        break;
    case 4:
        if (!gPaletteFade.active)
        {
            Swap_PrintOneActionString(0);
            gTasks[taskId].tState++;
        }
        break;
    case 5:
        Swap_PrintOneActionString(1);
        PutWindowTilemap(SWAP_WIN_OPTIONS);
        gTasks[taskId].tState++;
        break;
    case 6:
        FillWindowPixelBuffer(SWAP_WIN_ACTION_FADE, PIXEL_FILL(0));
        CopyWindowToVram(SWAP_WIN_ACTION_FADE, COPYWIN_GFX);
        gTasks[taskId].tState++;
        break;
    case 7:
        if (!sPoolSwapScreen->inEnemyScreen)
            Swap_PrintOnInfoWindow(gText_SelectPkmnToSwap);
        else
            Swap_PrintOnInfoWindow(gText_SelectPkmnToAccept);
        if (sPoolSwapScreen->cursorPos < FRONTIER_PARTY_SIZE)
            gSprites[sPoolSwapScreen->cursorSpriteId].invisible = FALSE;
        Swap_PrintMonCategory();
        gTasks[taskId].tState++;
        break;
    case 8:
        Swap_PrintMonSpeciesForTransition();
        Swap_EraseSpeciesAtFadeWindow();
        sPoolSwapScreen->fadeSpeciesNameActive = TRUE;
        gTasks[taskId].tState = gTasks[taskId].tFollowUpTaskState;
        hiPtr = gTasks[taskId].tFollowUpTaskPtrHi;
        loPtr = gTasks[taskId].tFollowUpTaskPtrLo;
        gTasks[taskId].func = (void *)((hiPtr << 16) | (loPtr));
        break;
    }
}

#undef tTaskId
#undef tSlidingOn
#undef tXIncrement
#undef tSlideFinishedPkmn
#undef tSlideFinishedCancel

// For switching between the swap screens with the player's / enemy's parties
static void Swap_Task_SwitchPartyScreen(u8 taskId)
{
    u8 i;
    if (sPoolSwapScreen->monPicAnimating == TRUE)
        return;

    switch (gTasks[taskId].tState)
    {
    case 0:
        Swap_PrintMonSpeciesForTransition();
        gTasks[taskId].tState++;
        break;
    case 1:
        Swap_EraseSpeciesAtFadeWindow();
        gSprites[sPoolSwapScreen->cursorSpriteId].invisible = TRUE;
        gTasks[taskId].tState++;
        break;
    case 2:
        CreateTask(Swap_Task_SlideCycleBalls, 0);
        gTasks[sPoolSwapScreen->fadeSpeciesNameTaskId].func = Swap_Task_FadeOutSpeciesName;
        gTasks[taskId].tState++;
        break;
    case 3:
        if (!FuncIsActiveTask(Swap_Task_SlideCycleBalls)
         && gTasks[sPoolSwapScreen->fadeSpeciesNameTaskId].tFadeOutFinished == TRUE)
        {
            Swap_EraseSpeciesWindow();
            if (!sPoolSwapScreen->inEnemyScreen)
            {
                Swap_InitActions(SWAP_ENEMY_SCREEN);
            }
            else
            {
                Swap_InitActions(SWAP_PLAYER_SCREEN);

                // Hide "Pkmn for Swap" button
                for (i = 0; i < ARRAY_COUNT(sPoolSwapScreen->pkmnForSwapButtonSpriteIds[0]); i++)
                    gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[1][i]].invisible = TRUE;
            }
            gSprites[sPoolSwapScreen->cursorSpriteId].x = gSprites[sPoolSwapScreen->ballSpriteIds[sPoolSwapScreen->cursorPos]].x;
            gTasks[sPoolSwapScreen->fadeSpeciesNameTaskId].func = Swap_Task_FadeSpeciesName;
            sPoolSwapScreen->fadeSpeciesNameCoeffDelay = 0;
            sPoolSwapScreen->fadeSpeciesNameCoeff = 6;
            sPoolSwapScreen->fadeSpeciesNameFadeOut = FALSE;
            gTasks[sPoolSwapScreen->fadeSpeciesNameTaskId].tState = FADESTATE_RUN;
            gTasks[taskId].tState++;
        }
        break;
    case 4:
        gTasks[taskId].tState = 0;
        gTasks[taskId].tFollowUpTaskPtrHi = (u32)(Swap_Task_HandleChooseMons) >> 16;
        gTasks[taskId].tFollowUpTaskPtrLo = (u32)(Swap_Task_HandleChooseMons);
        gTasks[taskId].tFollowUpTaskState = STATE_CHOOSE_MONS_HANDLE_INPUT;
        gTasks[taskId].func = Swap_Task_ScreenInfoTransitionIn;
        break;
    }
}

#undef tFadeOutFinished

static void Swap_InitStruct(void)
{
    if (sPoolSwapScreen == NULL)
    {
        sPoolSwapScreen = AllocZeroed(sizeof(*sPoolSwapScreen));
        sPoolSwapScreen->cursorPos = 0;
        sPoolSwapScreen->monPicAnimating = FALSE;
        sPoolSwapScreen->fromSummaryScreen = FALSE;
    }
}

void DoBattlePoolSwapScreen(void)
{
    sPoolSwapScreen = NULL;
    SetMainCallback2(CB2_InitSwapScreen);
}

static void CB2_InitSwapScreen(void)
{
    u8 taskId;

    switch (gMain.state)
    {
    case 0:
        SetHBlankCallback(NULL);
        SetVBlankCallback(NULL);
        CpuFill32(0, (void *)VRAM, VRAM_SIZE);
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sSwap_BgTemplates, ARRAY_COUNT(sSwap_BgTemplates));
        InitWindows(sSwap_WindowTemplates);
        DeactivateAllTextPrinters();
        gMain.state++;
        break;
    case 1:
        sSwapMenuTilesetBuffer = Alloc(sizeof(gFrontierFactoryMenu_Gfx));
#ifdef BUGFIX
        sSwapMonPicBgTilesetBuffer = AllocZeroed(sizeof(sMonPicBg_Gfx));
#else
        sSwapMonPicBgTilesetBuffer = AllocZeroed(sizeof(gFrontierFactoryMenu_Gfx)); // Incorrect size
#endif
        sSwapMenuTilemapBuffer = Alloc(BG_SCREEN_SIZE);
        sSwapMonPicBgTilemapBuffer = AllocZeroed(BG_SCREEN_SIZE);
        ChangeBgX(0, 0, BG_COORD_SET);
        ChangeBgY(0, 0, BG_COORD_SET);
        ChangeBgX(1, 0, BG_COORD_SET);
        ChangeBgY(1, 0, BG_COORD_SET);
        ChangeBgX(2, 0, BG_COORD_SET);
        ChangeBgY(2, 0, BG_COORD_SET);
        ChangeBgX(3, 0, BG_COORD_SET);
        ChangeBgY(3, 0, BG_COORD_SET);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        SetGpuReg(REG_OFFSET_MOSAIC, 0);
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WIN1H, 0);
        SetGpuReg(REG_OFFSET_WIN1V, 0);
        SetGpuReg(REG_OFFSET_WININ, 0);
        SetGpuReg(REG_OFFSET_WINOUT, 0);
        gMain.state++;
        break;
    case 2:
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        FreeAllSpritePalettes();
        ResetAllPicSprites();
        CpuCopy16(gFrontierFactoryMenu_Gfx, sSwapMenuTilesetBuffer, sizeof(gFrontierFactoryMenu_Gfx));
        CpuCopy16(sMonPicBg_Gfx, sSwapMonPicBgTilesetBuffer, sizeof(sMonPicBg_Gfx));
        LoadBgTiles(1, sSwapMenuTilesetBuffer, sizeof(gFrontierFactoryMenu_Gfx), 0);
        LoadBgTiles(3, sSwapMonPicBgTilesetBuffer, sizeof(sMonPicBg_Gfx), 0);
        CpuCopy16(gFrontierFactoryMenu_Tilemap, sSwapMenuTilemapBuffer, BG_SCREEN_SIZE);
        LoadBgTilemap(1, sSwapMenuTilemapBuffer, BG_SCREEN_SIZE, 0);
        LoadPalette(gFrontierFactoryMenu_Pal, 0, 2 * PLTT_SIZE_4BPP);
        LoadPalette(sSwapText_Pal, BG_PLTT_ID(PALNUM_TEXT), sizeof(sSwapText_Pal));
        LoadPalette(sSwapText_Pal, BG_PLTT_ID(PALNUM_FADE_TEXT), sizeof(sSwapText_Pal));
        LoadPalette(sMonPicBg_Pal, BG_PLTT_ID(2), PLTT_SIZEOF(2));
        gMain.state++;
        break;
    case 3:
        SetBgTilemapBuffer(3, sSwapMonPicBgTilemapBuffer);
        CopyToBgTilemapBufferRect(3, sMonPicBg_Tilemap, 11, 4, 8, 8);
        CopyBgTilemapBufferToVram(3);
        gMain.state++;
        break;
    case 4:
        LoadSpritePalettes(sSwap_SpritePalettes);
        LoadSpriteSheets(sSwap_SpriteSheets);
        LoadCompressedSpriteSheet(sSwap_BallGfx);
        SetVBlankCallback(Swap_VblankCb);
        gMain.state++;
        break;
    case 5:
#ifdef UBFIX
        if (sPoolSwapScreen && sPoolSwapScreen->fromSummaryScreen)
#else
        if (sPoolSwapScreen->fromSummaryScreen == TRUE)
#endif
            sPoolSwapScreen->cursorPos = gLastViewedMonIndex;
        gMain.state++;
        break;
    case 6:
        Swap_InitStruct();
        Swap_InitAllSprites();
        if (sPoolSwapScreen->fromSummaryScreen == TRUE)
            Swap_ShowSummaryMonSprite();
        Swap_InitActions(SWAP_PLAYER_SCREEN);
        gMain.state++;
        break;
    case 7:
        Swap_PrintOnInfoWindow(gText_SelectPkmnToSwap);
        PutWindowTilemap(SWAP_WIN_INFO);
        gMain.state++;
        break;
    case 8:
        Swap_PrintMonCategory();
        PutWindowTilemap(SWAP_WIN_MON_CATEGORY);
        gMain.state++;
        break;
    case 9:
        if (!sPoolSwapScreen->fromSummaryScreen)
            Swap_PrintMonSpecies();
        PutWindowTilemap(SWAP_WIN_SPECIES);
        gMain.state++;
        break;
    case 10:
        Swap_PrintPkmnSwap();
        PutWindowTilemap(SWAP_WIN_TITLE);
        gMain.state++;
        break;
    case 11:
        gMain.state++;
        break;
    case 12:
        if (sPoolSwapScreen->fromSummaryScreen)
            Swap_PrintMonSpeciesAtFade();
        gMain.state++;
        break;
    case 13:
        Swap_PrintActionStrings2();
        PutWindowTilemap(SWAP_WIN_OPTIONS);
        gMain.state++;
        break;
    case 14:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
        ShowBg(0);
        ShowBg(1);
        ShowBg(2);
        if (sPoolSwapScreen->fromSummaryScreen == TRUE)
        {
            ShowBg(3);
            SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG3 | BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG1 | BLDCNT_TGT2_OBJ);
            SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(11, 4));
        }
        else
        {
            HideBg(3);
        }
        gMain.state++;
        break;
    case 15:
        sPoolSwapScreen->fadeSpeciesNameTaskId = CreateTask(Swap_Task_FadeSpeciesName, 0);
        if (!sPoolSwapScreen->fromSummaryScreen)
        {
            gTasks[sPoolSwapScreen->fadeSpeciesNameTaskId].tState = FADESTATE_INIT;
            taskId = CreateTask(Swap_Task_HandleChooseMons, 0);
            gTasks[taskId].tState = STATE_CHOOSE_MONS_INIT;
        }
        else
        {
            Swap_EraseActionFadeWindow();
            gTasks[sPoolSwapScreen->fadeSpeciesNameTaskId].tState = FADESTATE_RUN;
            sPoolSwapScreen->fadeSpeciesNameActive = FALSE;
            taskId = CreateTask(Swap_Task_HandleMenu, 0);
            gTasks[taskId].tState = STATE_MENU_INIT;
        }
        SetMainCallback2(Swap_CB2);
        break;
    }
}

static void Swap_InitAllSprites(void)
{
    u8 i;
    u8 x;
    struct SpriteTemplate spriteTemplate;

    spriteTemplate = sSpriteTemplate_Swap_Pokeball;
    spriteTemplate.paletteTag = PALTAG_BALL_SELECTED;

    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
    {
        sPoolSwapScreen->ballSpriteIds[i] = CreateSprite(&spriteTemplate, (48 * i) + 72, 64, 1);
        gSprites[sPoolSwapScreen->ballSpriteIds[i]].data[0] = 0;
    }
    sPoolSwapScreen->cursorSpriteId = CreateSprite(&sSpriteTemplate_Swap_Arrow, gSprites[sPoolSwapScreen->ballSpriteIds[sPoolSwapScreen->cursorPos]].x, 88, 0);
    sPoolSwapScreen->menuCursor1SpriteId = CreateSprite(&sSpriteTemplate_Swap_MenuHighlightLeft, 176, 112, 0);
    sPoolSwapScreen->menuCursor2SpriteId = CreateSprite(&sSpriteTemplate_Swap_MenuHighlightRight, 176, 144, 0);
    gSprites[sPoolSwapScreen->menuCursor1SpriteId].invisible = TRUE;
    gSprites[sPoolSwapScreen->menuCursor2SpriteId].invisible = TRUE;
    gSprites[sPoolSwapScreen->menuCursor1SpriteId].centerToCornerVecX = 0;
    gSprites[sPoolSwapScreen->menuCursor1SpriteId].centerToCornerVecY = 0;
    gSprites[sPoolSwapScreen->menuCursor2SpriteId].centerToCornerVecX = 0;
    gSprites[sPoolSwapScreen->menuCursor2SpriteId].centerToCornerVecY = 0;

    if (sPoolSwapScreen->fromSummaryScreen == TRUE)
        x = DISPLAY_WIDTH;
    else
        x = DISPLAY_WIDTH - 48;

    // Unusual way to create sprites
    // The sprite template for the selector arrow is re-used
    // with the tiles swapped out
    spriteTemplate = sSpriteTemplate_Swap_Arrow;
    spriteTemplate.tileTag = GFXTAG_ACTION_BOX_LEFT;
    sPoolSwapScreen->pkmnForSwapButtonSpriteIds[0][0] = CreateSprite(&spriteTemplate, DISPLAY_WIDTH, 120, 10);

    spriteTemplate = sSpriteTemplate_Swap_MenuHighlightLeft;
    spriteTemplate.tileTag = GFXTAG_ACTION_BOX_RIGHT;
    sPoolSwapScreen->pkmnForSwapButtonSpriteIds[0][1] = CreateSprite(&spriteTemplate, DISPLAY_WIDTH + 16, 120, 10);
    sPoolSwapScreen->pkmnForSwapButtonSpriteIds[0][2] = CreateSprite(&spriteTemplate, DISPLAY_WIDTH + 48, 120, 10);

    spriteTemplate = sSpriteTemplate_Swap_Arrow;
    spriteTemplate.tileTag = GFXTAG_ACTION_HIGHLIGHT_LEFT;
    sPoolSwapScreen->pkmnForSwapButtonSpriteIds[1][0] = CreateSprite(&spriteTemplate, DISPLAY_WIDTH, 120, 1);

    spriteTemplate = sSpriteTemplate_Swap_MenuHighlightLeft;
    spriteTemplate.tileTag = GFXTAG_ACTION_HIGHLIGHT_MIDDLE;
    sPoolSwapScreen->pkmnForSwapButtonSpriteIds[1][1] = CreateSprite(&spriteTemplate, DISPLAY_WIDTH + 16, 120, 1);
    spriteTemplate.tileTag = GFXTAG_ACTION_HIGHLIGHT_RIGHT;
    sPoolSwapScreen->pkmnForSwapButtonSpriteIds[1][2] = CreateSprite(&spriteTemplate, DISPLAY_WIDTH + 48, 120, 1);

    spriteTemplate = sSpriteTemplate_Swap_Arrow;
    spriteTemplate.tileTag = GFXTAG_ACTION_BOX_LEFT;
    sPoolSwapScreen->cancelButtonSpriteIds[0][0] = CreateSprite(&spriteTemplate, x, 144, 10);

    spriteTemplate = sSpriteTemplate_Swap_MenuHighlightLeft;
    spriteTemplate.tileTag = GFXTAG_ACTION_BOX_RIGHT;
    sPoolSwapScreen->cancelButtonSpriteIds[0][1] = CreateSprite(&spriteTemplate, x + 16, 144, 10);

    spriteTemplate = sSpriteTemplate_Swap_Arrow;
    spriteTemplate.tileTag = GFXTAG_ACTION_HIGHLIGHT_LEFT;
    sPoolSwapScreen->cancelButtonSpriteIds[1][0] = CreateSprite(&spriteTemplate, x, 144, 1);

    spriteTemplate = sSpriteTemplate_Swap_MenuHighlightLeft;
    spriteTemplate.tileTag = GFXTAG_ACTION_HIGHLIGHT_RIGHT;
    sPoolSwapScreen->cancelButtonSpriteIds[1][1] = CreateSprite(&spriteTemplate, x + 16, 144, 1);

    for (i = 0; i < 2; i++)
    {
        gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[i][0]].centerToCornerVecX = 0;
        gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[i][0]].centerToCornerVecY = 0;
        gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[i][1]].centerToCornerVecX = 0;
        gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[i][1]].centerToCornerVecY = 0;
        gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[i][2]].centerToCornerVecX = 0;
        gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[i][2]].centerToCornerVecY = 0;
        gSprites[sPoolSwapScreen->cancelButtonSpriteIds[i][0]].centerToCornerVecX = 0;
        gSprites[sPoolSwapScreen->cancelButtonSpriteIds[i][0]].centerToCornerVecY = 0;
        gSprites[sPoolSwapScreen->cancelButtonSpriteIds[i][1]].centerToCornerVecX = 0;
        gSprites[sPoolSwapScreen->cancelButtonSpriteIds[i][1]].centerToCornerVecY = 0;

        gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[i][0]].invisible = TRUE;
        gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[i][1]].invisible = TRUE;
        gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[i][2]].invisible = TRUE;
        gSprites[sPoolSwapScreen->cancelButtonSpriteIds[i][0]].invisible = TRUE;
        gSprites[sPoolSwapScreen->cancelButtonSpriteIds[i][1]].invisible = TRUE;
    }

    gSprites[sPoolSwapScreen->cancelButtonSpriteIds[0][0]].invisible = FALSE;
    gSprites[sPoolSwapScreen->cancelButtonSpriteIds[0][1]].invisible = FALSE;
    gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[0][0]].invisible = FALSE;
    gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[0][1]].invisible = FALSE;
    gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[0][2]].invisible = FALSE;
}

static void Swap_DestroyAllSprites(void)
{
    u8 i, j;

    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
        DestroySprite(&gSprites[sPoolSwapScreen->ballSpriteIds[i]]);
    DestroySprite(&gSprites[sPoolSwapScreen->cursorSpriteId]);
    DestroySprite(&gSprites[sPoolSwapScreen->menuCursor1SpriteId]);
    DestroySprite(&gSprites[sPoolSwapScreen->menuCursor2SpriteId]);
    for (i = 0; i < ARRAY_COUNT(sPoolSwapScreen->pkmnForSwapButtonSpriteIds); i++)
    {
        for (j = 0; j < ARRAY_COUNT(sPoolSwapScreen->pkmnForSwapButtonSpriteIds[0]); j++)
            DestroySprite(&gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[i][j]]);
    }
    for (i = 0; i < ARRAY_COUNT(sPoolSwapScreen->cancelButtonSpriteIds); i++)
    {
        for (j = 0; j < ARRAY_COUNT(sPoolSwapScreen->cancelButtonSpriteIds[0]); j++)
            DestroySprite(&gSprites[sPoolSwapScreen->cancelButtonSpriteIds[i][j]]);
    }
}

static void Swap_HandleActionCursorChange(u8 cursorId)
{
    if (cursorId < FRONTIER_PARTY_SIZE)
    {
        // Cursor is on one of the Pokémon
        gSprites[sPoolSwapScreen->cursorSpriteId].invisible = FALSE;
        Swap_HideActionButtonHighlights();
        gSprites[sPoolSwapScreen->cursorSpriteId].x = gSprites[sPoolSwapScreen->ballSpriteIds[cursorId]].x;
    }
    else
    {
        // Cursor is on an action button
        gSprites[sPoolSwapScreen->cursorSpriteId].invisible = TRUE;
        Swap_HighlightActionButton(sPoolSwapScreen->actionsData[cursorId].id);
    }
}

static void Swap_UpdateBallCursorPosition(s8 direction)
{
    u8 cursorPos;
    PlaySE(SE_SELECT);
    if (direction > 0) // Move cursor right.
    {
        if (sPoolSwapScreen->cursorPos + 1 != sPoolSwapScreen->actionsCount)
            sPoolSwapScreen->cursorPos++;
        else
            sPoolSwapScreen->cursorPos = 0;
    }
    else // Move cursor left.
    {
        if (sPoolSwapScreen->cursorPos != 0)
            sPoolSwapScreen->cursorPos--;
        else
            sPoolSwapScreen->cursorPos = sPoolSwapScreen->actionsCount - 1;
    }

    cursorPos = sPoolSwapScreen->cursorPos;
    Swap_HandleActionCursorChange(cursorPos);
}

static void Swap_UpdateActionCursorPosition(s8 direction)
{
    u8 cursorPos;
    PlaySE(SE_SELECT);
    if (direction > 0) // Move cursor down.
    {
        if (sPoolSwapScreen->cursorPos < FRONTIER_PARTY_SIZE)
            sPoolSwapScreen->cursorPos = FRONTIER_PARTY_SIZE;
        else if (sPoolSwapScreen->cursorPos + 1 != sPoolSwapScreen->actionsCount)
            sPoolSwapScreen->cursorPos++;
        else
            sPoolSwapScreen->cursorPos = 0;
    }
    else // Move cursor up.
    {
        if (sPoolSwapScreen->cursorPos < FRONTIER_PARTY_SIZE)
            sPoolSwapScreen->cursorPos = sPoolSwapScreen->actionsCount - 1;
        else if (sPoolSwapScreen->cursorPos != 0)
            sPoolSwapScreen->cursorPos--;
        else
            sPoolSwapScreen->cursorPos = sPoolSwapScreen->actionsCount - 1;
    }

    cursorPos = sPoolSwapScreen->cursorPos;
    Swap_HandleActionCursorChange(cursorPos);
}

static void Swap_UpdateYesNoCursorPosition(s8 direction)
{
    if (direction > 0) // Move cursor down.
    {
        if (sPoolSwapScreen->yesNoCursorPos != 1)
            sPoolSwapScreen->yesNoCursorPos++;
        else
            sPoolSwapScreen->yesNoCursorPos = 0;
    }
    else // Move cursor up.
    {
        if (sPoolSwapScreen->yesNoCursorPos != 0)
            sPoolSwapScreen->yesNoCursorPos--;
        else
            sPoolSwapScreen->yesNoCursorPos = 1;
    }

    gSprites[sPoolSwapScreen->menuCursor1SpriteId].y = (sPoolSwapScreen->yesNoCursorPos * 16) + 112;
    gSprites[sPoolSwapScreen->menuCursor2SpriteId].y = (sPoolSwapScreen->yesNoCursorPos * 16) + 112;
}

static void Swap_UpdateMenuCursorPosition(s8 direction)
{
    PlaySE(SE_SELECT);
    if (direction > 0) // Move cursor down.
    {
        if (sPoolSwapScreen->menuCursorPos != ARRAY_COUNT(sSwap_MenuOptionFuncs) - 1)
            sPoolSwapScreen->menuCursorPos++;
        else
            sPoolSwapScreen->menuCursorPos = 0;
    }
    else // Move cursor up.
    {
        if (sPoolSwapScreen->menuCursorPos != 0)
            sPoolSwapScreen->menuCursorPos--;
        else
            sPoolSwapScreen->menuCursorPos = ARRAY_COUNT(sSwap_MenuOptionFuncs) - 1;
    }

    gSprites[sPoolSwapScreen->menuCursor1SpriteId].y = (sPoolSwapScreen->menuCursorPos * 16) + 112;
    gSprites[sPoolSwapScreen->menuCursor2SpriteId].y = (sPoolSwapScreen->menuCursorPos * 16) + 112;
}

static void Swap_HighlightActionButton(u8 actionId)
{
    u8 i;

    for (i = 0; i < ARRAY_COUNT(sPoolSwapScreen->pkmnForSwapButtonSpriteIds[0]); i++)
    {
        if (actionId == SWAPACTION_PKMN_FOR_SWAP)
        {
            // Show button highlight on "Pkmn for Swap"
            gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[1][i]].invisible = FALSE;

            // Hide button highlight on Cancel
            if (i < ARRAY_COUNT(sPoolSwapScreen->cancelButtonSpriteIds[0]))
                gSprites[sPoolSwapScreen->cancelButtonSpriteIds[1][i]].invisible = TRUE;
        }
        else if (actionId == SWAPACTION_CANCEL)
        {
            // Show button highlight on Cancel
            if (i < ARRAY_COUNT(sPoolSwapScreen->cancelButtonSpriteIds[0]))
                gSprites[sPoolSwapScreen->cancelButtonSpriteIds[1][i]].invisible = FALSE;

            // Hide button highlight on "Pkmn for Swap"
            gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[1][i]].invisible = TRUE;
        }
    }
}

static void Swap_HideActionButtonHighlights(void)
{
    u8 i;

    for (i = 0; i < ARRAY_COUNT(sPoolSwapScreen->pkmnForSwapButtonSpriteIds[0]); i++)
    {
        // Hide button highlight on "Pkmn for Swap"
        gSprites[sPoolSwapScreen->pkmnForSwapButtonSpriteIds[1][i]].invisible = TRUE;

        // Hide button highlight on Cancel
        if (i < ARRAY_COUNT(sPoolSwapScreen->cancelButtonSpriteIds[0]))
            gSprites[sPoolSwapScreen->cancelButtonSpriteIds[1][i]].invisible = TRUE;
    }
}

static void Swap_ShowMenuOptions(void)
{
    if (sPoolSwapScreen->fromSummaryScreen == TRUE)
        sPoolSwapScreen->fromSummaryScreen = FALSE;
    else
        sPoolSwapScreen->menuCursorPos = 0;

    gSprites[sPoolSwapScreen->menuCursor1SpriteId].x = 176;
    gSprites[sPoolSwapScreen->menuCursor1SpriteId].y = (sPoolSwapScreen->menuCursorPos * 16) + 112;
    gSprites[sPoolSwapScreen->menuCursor2SpriteId].x = 208;
    gSprites[sPoolSwapScreen->menuCursor2SpriteId].y = (sPoolSwapScreen->menuCursorPos * 16) + 112;

    gSprites[sPoolSwapScreen->menuCursor1SpriteId].invisible = FALSE;
    gSprites[sPoolSwapScreen->menuCursor2SpriteId].invisible = FALSE;

    Swap_PrintMenuOptions();
}

static void Swap_ShowYesNoOptions(void)
{
    sPoolSwapScreen->yesNoCursorPos = 0;

    gSprites[sPoolSwapScreen->menuCursor1SpriteId].x = 176;
    gSprites[sPoolSwapScreen->menuCursor1SpriteId].y = 112;
    gSprites[sPoolSwapScreen->menuCursor2SpriteId].x = 208;
    gSprites[sPoolSwapScreen->menuCursor2SpriteId].y = 112;

    gSprites[sPoolSwapScreen->menuCursor1SpriteId].invisible = FALSE;
    gSprites[sPoolSwapScreen->menuCursor2SpriteId].invisible = FALSE;

    Swap_PrintYesNoOptions();
}

static void Swap_ErasePopupMenu(u8 windowId)
{
    gSprites[sPoolSwapScreen->menuCursor1SpriteId].invisible = TRUE;
    gSprites[sPoolSwapScreen->menuCursor2SpriteId].invisible = TRUE;
    FillWindowPixelBuffer(windowId, PIXEL_FILL(0));
    CopyWindowToVram(windowId, COPYWIN_GFX);
    ClearWindowTilemap(windowId);
}

static void Swap_EraseSpeciesWindow(void)
{
    PutWindowTilemap(SWAP_WIN_SPECIES);
    FillWindowPixelBuffer(SWAP_WIN_SPECIES, PIXEL_FILL(0));
    CopyWindowToVram(SWAP_WIN_SPECIES, COPYWIN_GFX);
}

static void Swap_EraseSpeciesAtFadeWindow(void)
{
    PutWindowTilemap(SWAP_WIN_SPECIES_AT_FADE);
    FillWindowPixelBuffer(SWAP_WIN_SPECIES_AT_FADE, PIXEL_FILL(0));
    CopyWindowToVram(SWAP_WIN_SPECIES_AT_FADE, COPYWIN_GFX);
}

static void Swap_EraseActionFadeWindow(void)
{
    Swap_EraseSpeciesWindow();
    PutWindowTilemap(SWAP_WIN_ACTION_FADE);
    FillWindowPixelBuffer(SWAP_WIN_ACTION_FADE, PIXEL_FILL(0));
    CopyWindowToVram(SWAP_WIN_ACTION_FADE, COPYWIN_GFX);
}

static void Swap_PrintPkmnSwap(void)
{
    FillWindowPixelBuffer(SWAP_WIN_TITLE, PIXEL_FILL(1));
    AddTextPrinterParameterized(SWAP_WIN_TITLE, FONT_NORMAL, gText_PkmnSwap, 2, 1, 0, NULL);
    CopyWindowToVram(SWAP_WIN_TITLE, COPYWIN_FULL);
}

static void Swap_PrintMonSpecies(void)
{
    u16 species;
    u8 x;

    FillWindowPixelBuffer(SWAP_WIN_SPECIES, PIXEL_FILL(0));
    if (sPoolSwapScreen->cursorPos >= FRONTIER_PARTY_SIZE)
    {
        CopyWindowToVram(SWAP_WIN_SPECIES, COPYWIN_GFX);
    }
    else
    {
        u8 monId = sPoolSwapScreen->cursorPos;
        if (!sPoolSwapScreen->inEnemyScreen)
            species = GetMonData(&gParties[B_TRAINER_PLAYER][monId], MON_DATA_SPECIES, NULL);
        else
            species = GetMonData(&gParties[B_TRAINER_OPPONENT_A][monId], MON_DATA_SPECIES, NULL);
        StringCopy(gStringVar4, GetSpeciesName(species));
        x = GetStringRightAlignXOffset(FONT_NORMAL, gStringVar4, 86);
        AddTextPrinterParameterized3(SWAP_WIN_SPECIES, FONT_NORMAL, x, 1, sSwapSpeciesNameTextColors, 0, gStringVar4);
        CopyWindowToVram(SWAP_WIN_SPECIES, COPYWIN_FULL);
    }
}

static void Swap_PrintOnInfoWindow(const u8 *str)
{
    FillWindowPixelBuffer(SWAP_WIN_INFO, PIXEL_FILL(0));
    AddTextPrinterParameterized(SWAP_WIN_INFO, FONT_NORMAL, str, 2, 5, 0, NULL);
    CopyWindowToVram(SWAP_WIN_INFO, COPYWIN_GFX);
}

static void Swap_PrintMenuOptions(void)
{
    PutWindowTilemap(SWAP_WIN_OPTIONS);
    FillWindowPixelBuffer(SWAP_WIN_OPTIONS, PIXEL_FILL(0));
    AddTextPrinterParameterized3(SWAP_WIN_OPTIONS, FONT_NORMAL, 15,  1, sSwapMenuOptionsTextColors, 0, gText_Summary2);
    AddTextPrinterParameterized3(SWAP_WIN_OPTIONS, FONT_NORMAL, 15, 17, sSwapMenuOptionsTextColors, 0, gText_Swap);
    AddTextPrinterParameterized3(SWAP_WIN_OPTIONS, FONT_NORMAL, 15, 33, sSwapMenuOptionsTextColors, 0, gText_Rechoose);
    CopyWindowToVram(SWAP_WIN_OPTIONS, COPYWIN_FULL);
}

static void Swap_PrintYesNoOptions(void)
{
    PutWindowTilemap(SWAP_WIN_YES_NO);
    FillWindowPixelBuffer(SWAP_WIN_YES_NO, PIXEL_FILL(0));
    AddTextPrinterParameterized3(SWAP_WIN_YES_NO, FONT_NORMAL, 7, 1,  sSwapMenuOptionsTextColors, 0, gText_Yes3);
    AddTextPrinterParameterized3(SWAP_WIN_YES_NO, FONT_NORMAL, 7, 17, sSwapMenuOptionsTextColors, 0, gText_No3);
    CopyWindowToVram(SWAP_WIN_YES_NO, COPYWIN_FULL);
}

static void Swap_PrintActionString(const u8 *str, u32 y, u32 windowId)
{
    s32 x = GetStringRightAlignXOffset(FONT_SMALL, str, 70);
    AddTextPrinterParameterized3(windowId, FONT_SMALL, x, y, sSwapMenuOptionsTextColors, 0, str);
}

static void Swap_PrintActionStrings(void)
{
    FillWindowPixelBuffer(SWAP_WIN_ACTION_FADE, PIXEL_FILL(0));
    switch (sPoolSwapScreen->inEnemyScreen)
    {
    case TRUE:
        Swap_PrintActionString(gText_PkmnForSwap, 0, SWAP_WIN_ACTION_FADE);
    case FALSE:
        Swap_PrintActionString(gText_Cancel3, 24, SWAP_WIN_ACTION_FADE);
        break;
    }
    CopyWindowToVram(SWAP_WIN_ACTION_FADE, COPYWIN_FULL);
}

static void Swap_PrintActionStrings2(void)
{
    FillWindowPixelBuffer(SWAP_WIN_OPTIONS, PIXEL_FILL(0));
    switch (sPoolSwapScreen->inEnemyScreen)
    {
    case TRUE:
        Swap_PrintActionString(gText_PkmnForSwap, 8, SWAP_WIN_OPTIONS);
    case FALSE:
        Swap_PrintActionString(gText_Cancel3, 32, SWAP_WIN_OPTIONS);
        break;
    }
    CopyWindowToVram(SWAP_WIN_OPTIONS, COPYWIN_FULL);
}

static void Swap_PrintOneActionString(u8 which)
{
    switch (which)
    {
    case 0:
        if (sPoolSwapScreen->inEnemyScreen == TRUE)
            Swap_PrintActionString(gText_PkmnForSwap, 8, SWAP_WIN_OPTIONS);
        break;
    case 1:
        Swap_PrintActionString(gText_Cancel3, 32, SWAP_WIN_OPTIONS);
        break;
    }
    CopyWindowToVram(SWAP_WIN_OPTIONS, COPYWIN_FULL);
}

// For printing the species name once its selected. Keep the current fade but don't keep fading in and out
static void Swap_PrintMonSpeciesAtFade(void)
{
    u16 species;
    u8 x;
    u16 pal[5];

    CpuCopy16(sSwapText_Pal, pal, 8);
    if (!sPoolSwapScreen->fromSummaryScreen)
        pal[4] = gPlttBufferFaded[BG_PLTT_ID(PALNUM_FADE_TEXT) + 4];
    else
        pal[4] = sPoolSwapScreen->speciesNameColorBackup;
    LoadPalette(pal, BG_PLTT_ID(PALNUM_TEXT), sizeof(sSwapText_Pal));

    PutWindowTilemap(SWAP_WIN_SPECIES_AT_FADE);
    FillWindowPixelBuffer(SWAP_WIN_SPECIES_AT_FADE, PIXEL_FILL(0));
    if (sPoolSwapScreen->cursorPos >= FRONTIER_PARTY_SIZE)
    {
        CopyWindowToVram(SWAP_WIN_SPECIES_AT_FADE, COPYWIN_FULL);
    }
    else
    {
        u8 monId = sPoolSwapScreen->cursorPos;
        if (!sPoolSwapScreen->inEnemyScreen)
            species = GetMonData(&gParties[B_TRAINER_PLAYER][monId], MON_DATA_SPECIES, NULL);
        else
            species = GetMonData(&gParties[B_TRAINER_OPPONENT_A][monId], MON_DATA_SPECIES, NULL);
        StringCopy(gStringVar4, GetSpeciesName(species));
        x = GetStringRightAlignXOffset(FONT_NORMAL, gStringVar4, 86);
        AddTextPrinterParameterized3(SWAP_WIN_SPECIES_AT_FADE, FONT_NORMAL, x, 1, sSwapSpeciesNameTextColors, 0, gStringVar4);
        CopyWindowToVram(SWAP_WIN_SPECIES_AT_FADE, COPYWIN_FULL);
    }
}

// Reprints the species name over the faded one after a transition
static void Swap_PrintMonSpeciesForTransition(void)
{
    u16 species;
    u8 x;

    LoadPalette(sSwapText_Pal, BG_PLTT_ID(PALNUM_FADE_TEXT), sizeof(sSwapText_Pal));
    CpuCopy16(&gPlttBufferUnfaded[BG_PLTT_ID(PALNUM_TEXT)], &gPlttBufferFaded[BG_PLTT_ID(PALNUM_FADE_TEXT)], PLTT_SIZEOF(5));

    if (sPoolSwapScreen->cursorPos >= FRONTIER_PARTY_SIZE)
    {
        CopyWindowToVram(SWAP_WIN_SPECIES, COPYWIN_GFX);
    }
    else
    {
        u8 monId = sPoolSwapScreen->cursorPos;
        if (!sPoolSwapScreen->inEnemyScreen)
            species = GetMonData(&gParties[B_TRAINER_PLAYER][monId], MON_DATA_SPECIES, NULL);
        else
            species = GetMonData(&gParties[B_TRAINER_OPPONENT_A][monId], MON_DATA_SPECIES, NULL);
        StringCopy(gStringVar4, GetSpeciesName(species));
        x = GetStringRightAlignXOffset(FONT_NORMAL, gStringVar4, 86);
        AddTextPrinterParameterized3(SWAP_WIN_SPECIES, FONT_NORMAL, x, 1, sSwapSpeciesNameTextColors, 0, gStringVar4);
        CopyWindowToVram(SWAP_WIN_SPECIES, COPYWIN_FULL);
    }
}

static void Swap_PrintMonCategory(void)
{
    u16 species;
    u8 text[30];
    u8 x;
    u8 monId = sPoolSwapScreen->cursorPos;

    FillWindowPixelBuffer(SWAP_WIN_MON_CATEGORY, PIXEL_FILL(0));
    if (monId >= FRONTIER_PARTY_SIZE)
    {
        CopyWindowToVram(SWAP_WIN_MON_CATEGORY, COPYWIN_GFX);
    }
    else
    {
        PutWindowTilemap(SWAP_WIN_MON_CATEGORY);
        if (!sPoolSwapScreen->inEnemyScreen)
            species = GetMonData(&gParties[B_TRAINER_PLAYER][monId], MON_DATA_SPECIES, NULL);
        else
            species = GetMonData(&gParties[B_TRAINER_OPPONENT_A][monId], MON_DATA_SPECIES, NULL);
        CopyMonCategoryText(species, text);
        x = GetStringRightAlignXOffset(FONT_NORMAL, text, 118);
        AddTextPrinterParameterized(SWAP_WIN_MON_CATEGORY, FONT_NORMAL, text, x, 1, 0, NULL);
        CopyWindowToVram(SWAP_WIN_MON_CATEGORY, COPYWIN_GFX);
    }
}

static void Swap_InitActions(u8 id)
{
    if (sPoolSwapScreen->fromSummaryScreen != TRUE)
    {
        switch (id)
        {
        case SWAP_PLAYER_SCREEN:
            sPoolSwapScreen->inEnemyScreen = FALSE;
            sPoolSwapScreen->cursorPos = 0;
            sPoolSwapScreen->actionsCount = ARRAY_COUNT(sSwap_PlayerScreenActions);
            sPoolSwapScreen->actionsData = sSwap_PlayerScreenActions;
            break;
        case SWAP_ENEMY_SCREEN:
            sPoolSwapScreen->inEnemyScreen = TRUE;
            sPoolSwapScreen->cursorPos = 0;
            sPoolSwapScreen->actionsCount = ARRAY_COUNT(sSwap_EnemyScreenActions);
            sPoolSwapScreen->actionsData = sSwap_EnemyScreenActions;
            break;
        }
    }
}

static void Swap_RunMenuOptionFunc(u8 taskId)
{
    sSwap_CurrentOptionFunc = sSwap_MenuOptionFuncs[sPoolSwapScreen->menuCursorPos];
    sSwap_CurrentOptionFunc(taskId);
}

static void Swap_OptionSwap(u8 taskId)
{
    CloseMonPic(sPoolSwapScreen->monPic, &sPoolSwapScreen->monPicAnimating, TRUE);
    sPoolSwapScreen->playerMonId = sPoolSwapScreen->cursorPos;
    Swap_ErasePopupMenu(SWAP_WIN_OPTIONS);
    gTasks[taskId].tState = 0;
    gTasks[taskId].func = Swap_Task_SwitchPartyScreen;
}

static void Swap_OptionSummary(u8 taskId)
{
    gTasks[taskId].tState = STATE_SUMMARY_FADE;
    gTasks[taskId].func = Swap_Task_OpenSummaryScreen;
}

static void Swap_OptionRechoose(u8 taskId)
{
    CloseMonPic(sPoolSwapScreen->monPic, &sPoolSwapScreen->monPicAnimating, TRUE);
    Swap_ErasePopupMenu(SWAP_WIN_OPTIONS);
    gTasks[taskId].tState = 0;
    gTasks[taskId].tFollowUpTaskPtrHi = (u32)(Swap_Task_HandleChooseMons) >> 16;
    gTasks[taskId].tFollowUpTaskPtrLo = (u32)(Swap_Task_HandleChooseMons);
    gTasks[taskId].tFollowUpTaskState = STATE_CHOOSE_MONS_HANDLE_INPUT;
    gTasks[taskId].func = Swap_Task_ScreenInfoTransitionIn;
}

static void Swap_RunActionFunc(u8 taskId)
{
    sSwap_CurrentOptionFunc = sPoolSwapScreen->actionsData[sPoolSwapScreen->cursorPos].func;
    sSwap_CurrentOptionFunc(taskId);
}

static void Swap_ActionCancel(u8 taskId)
{
    gTasks[taskId].tFollowUpTaskPtrHi = (u32)(Swap_AskQuitSwapping) >> 16;
    gTasks[taskId].tFollowUpTaskPtrLo = (u32)(Swap_AskQuitSwapping);
    gTasks[taskId].tState = 0;
    gTasks[taskId].tFollowUpTaskState = 0;
    gTasks[taskId].func = Swap_Task_ScreenInfoTransitionOut;
}

static void Swap_ActionPkmnForSwap(u8 taskId)
{
    gTasks[taskId].tFollowUpTaskPtrHi = (u32)(Swap_Task_SwitchPartyScreen) >> 16;
    gTasks[taskId].tFollowUpTaskPtrLo = (u32)(Swap_Task_SwitchPartyScreen);
    gTasks[taskId].tFollowUpTaskState = 0;
    gTasks[taskId].tState = 0;
    gTasks[taskId].func = Swap_Task_ScreenInfoTransitionOut;
}

static void Swap_ActionMon(u8 taskId)
{
    if (!sPoolSwapScreen->inEnemyScreen)
    {
        gTasks[taskId].tFollowUpTaskPtrHi = (u32)(Swap_Task_HandleMenu) >> 16;
        gTasks[taskId].tFollowUpTaskPtrLo = (u32)(Swap_Task_HandleMenu);
        gTasks[taskId].tFollowUpTaskState = STATE_MENU_INIT;
    }
    /*else if (Swap_AlreadyHasSameSpecies(sPoolSwapScreen->cursorPos) == TRUE)
    {
        OpenMonPic(&sPoolSwapScreen->monPic.bgSpriteId, &sPoolSwapScreen->monPicAnimating, TRUE);
        gTasks[taskId].tState = 0;
        gTasks[taskId].tFollowUpTaskState = STATE_CHOOSE_MONS_HANDLE_INPUT;
        gTasks[taskId].func = Swap_TaskCantHaveSameMons;
        return;
    }*/
    else
    {
        gTasks[taskId].tFollowUpTaskPtrHi = (u32)(Swap_AskAcceptMon) >> 16;
        gTasks[taskId].tFollowUpTaskPtrLo = (u32)(Swap_AskAcceptMon);
        gTasks[taskId].tFollowUpTaskState = 0;
    }
    gTasks[taskId].tState = 0;
    gTasks[taskId].func = Swap_Task_ScreenInfoTransitionOut;
}

#define sIsSwapScreen data[7]

static void OpenMonPic(u8 *spriteId, bool8 *animating, bool8 swapScreen)
{
    *spriteId = CreateSprite(&sSpriteTemplate_Swap_MonPicBgAnim, 120, 64, 1);
    gSprites[*spriteId].callback = SpriteCB_OpenMonPic;
    gSprites[*spriteId].sIsSwapScreen = swapScreen;
    *animating = TRUE;
}

static void Swap_ShowSummaryMonSprite(void)
{
    struct Pokemon *mon;
    u16 species;
    u32 personality;
    bool8 isShiny;

    sPoolSwapScreen->monPic.bgSpriteId = CreateSprite(&sSpriteTemplate_Swap_MonPicBgAnim, 120, 64, 1);
    StartSpriteAffineAnim(&gSprites[sPoolSwapScreen->monPic.bgSpriteId], 2);

    mon = &gParties[B_TRAINER_PLAYER][sPoolSwapScreen->cursorPos];
    species = GetMonData(mon, MON_DATA_SPECIES, NULL);
    personality = GetMonData(mon, MON_DATA_PERSONALITY, NULL);
    isShiny = GetMonData(mon, MON_DATA_IS_SHINY, NULL);

    sPoolSwapScreen->monPic.monSpriteId = CreateMonPicSprite(species, isShiny, personality, TRUE, 88, 32, 15, TAG_NONE);
    gSprites[sPoolSwapScreen->monPic.monSpriteId].centerToCornerVecX = 0;
    gSprites[sPoolSwapScreen->monPic.monSpriteId].centerToCornerVecY = 0;

    gSprites[sPoolSwapScreen->monPic.bgSpriteId].invisible = TRUE;
}

static void CloseMonPic(struct PoolMonPic pic, bool8 *animating, bool8 swapScreen)
{
    u8 taskId;

    FreeAndDestroyMonPicSprite(pic.monSpriteId);
    taskId = CreateTask(Task_CloseMonPic, 1);
    gTasks[taskId].tIsSwapScreen = swapScreen;
    gTasks[taskId].tSpriteId = pic.bgSpriteId;
    gTasks[taskId].func(taskId);
    *animating = TRUE;
}

static void HideMonPic(struct PoolMonPic pic, bool8 *animating)
{
    FreeAndDestroyMonPicSprite(pic.monSpriteId);
    FreeOamMatrix(gSprites[pic.bgSpriteId].oam.matrixNum);
    DestroySprite(&gSprites[pic.bgSpriteId]);
    *animating = FALSE;
}

static void UNUSED Swap_TaskCantHaveSameMons(u8 taskId)
{
    if (sPoolSwapScreen->monPicAnimating == TRUE)
        return;

    switch (gTasks[taskId].tState)
    {
    case 0:
        Swap_PrintOnInfoWindow(gText_SamePkmnInPartyAlready);
        sPoolSwapScreen->monSwapped = FALSE;
        gTasks[taskId].tState++;
        break;
    case 1:
        if (JOY_NEW(A_BUTTON) || JOY_NEW(B_BUTTON))
        {
            PlaySE(SE_SELECT);
            CloseMonPic(sPoolSwapScreen->monPic, &sPoolSwapScreen->monPicAnimating, TRUE);
            gTasks[taskId].tState++;
        }
        break;
    case 2:
        if (sPoolSwapScreen->monPicAnimating != TRUE)
        {
            FillWindowPixelBuffer(SWAP_WIN_ACTION_FADE, PIXEL_FILL(0));
            CopyWindowToVram(SWAP_WIN_ACTION_FADE, COPYWIN_GFX);
            gTasks[taskId].tState++;
        }
        break;
    case 3:
        Swap_PrintOnInfoWindow(gText_SelectPkmnToAccept);
        gTasks[taskId].tState++;
        break;
    case 4:
        Swap_PrintMonSpeciesForTransition();
        Swap_EraseSpeciesAtFadeWindow();
        sPoolSwapScreen->fadeSpeciesNameActive = TRUE;
        gTasks[taskId].tState = gTasks[taskId].tFollowUpTaskState;
        gTasks[taskId].func = Swap_Task_HandleChooseMons;
        break;
    }
}

static bool8 UNUSED Swap_AlreadyHasSameSpecies(u8 monId)
{
    u8 i;
    u16 species = GetMonData(&gParties[B_TRAINER_OPPONENT_A][monId], MON_DATA_SPECIES, NULL);

    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
    {
        if (i != sPoolSwapScreen->playerMonId && (u16)(GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_SPECIES, NULL)) == species)
            return TRUE;
    }
    return FALSE;
}

static void SpriteCB_OpenMonPic(struct Sprite *sprite)
{
    u8 taskId;

    if (sprite->affineAnimEnded)
    {
        sprite->invisible = TRUE;
        taskId = CreateTask(Task_OpenMonPic, 1);
        gTasks[taskId].tIsSwapScreen = sprite->sIsSwapScreen;
        gTasks[taskId].func(taskId);
        sprite->callback = SpriteCallbackDummy;
    }
}

static void SpriteCB_CloseMonPic(struct Sprite *sprite)
{
    if (sprite->affineAnimEnded)
    {
        FreeOamMatrix(sprite->oam.matrixNum);
        if (sprite->sIsSwapScreen == TRUE)
            sPoolSwapScreen->monPicAnimating = FALSE;
        else
            Select_SetMonPicAnimating(FALSE);
        DestroySprite(sprite);
    }
}

static void Task_OpenMonPic(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    switch (task->tState)
    {
    case 0:
        // Init
        task->tWinLeft = 88;
        task->tWinRight = DISPLAY_WIDTH - 88;
        task->tWinTop = 64;
        task->tWinBottom = 65;
        SetGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON);
        SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(task->tWinLeft, task->tWinRight));
        SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(task->tWinTop, task->tWinBottom));
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG_ALL | WININ_WIN0_CLR | WININ_WIN0_OBJ);
        SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG0 | WINOUT_WIN01_BG1 | WINOUT_WIN01_BG2 | WINOUT_WIN01_CLR | WINOUT_WIN01_OBJ);
        break;
    case 1:
        // Show mon pic bg
        ShowBg(3);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG3 | BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG1 | BLDCNT_TGT2_OBJ);
        SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(11, 4));
        break;
    case 2:
        // Animate mon pic bg
        task->tWinTop -= 4;
        task->tWinBottom += 4;
        if (task->tWinTop <= 32 || task->tWinBottom >= 96)
        {
            task->tWinTop = 32;
            task->tWinBottom = 96;
        }
        SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(task->tWinTop, task->tWinBottom));
        if (task->tWinTop != 32)
            return;
        break;
    default:
        DestroyTask(taskId);
        // Accessing data of destroyed task. Task data isn't reset until a new task needs that task id.
        if (gTasks[taskId].tIsSwapScreen == TRUE)
            Swap_CreateMonSprite();
        else
            Select_CreateMonSprite();
        return;
    }
    task->tState++;
}

static void Task_CloseMonPic(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    switch (task->tState)
    {
    case 0:
        // Init
        task->tWinLeft = 88;
        task->tWinRight = DISPLAY_WIDTH - 88;
        task->tWinTop = 32;
        task->tWinBottom = 96;
        SetGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON);
        SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(task->tWinLeft, task->tWinRight));
        SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(task->tWinTop, task->tWinBottom));
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG_ALL | WININ_WIN0_CLR | WININ_WIN0_OBJ);
        SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG0 | WINOUT_WIN01_BG1 | WINOUT_WIN01_BG2 | WINOUT_WIN01_CLR | WINOUT_WIN01_OBJ);
        task->tState++;
        break;
    case 1:
        // Animate bg
        task->tWinTop += 4;
        task->tWinBottom -= 4;
        if (task->tWinTop >= 64 || task->tWinBottom <= 65)
        {
            task->tWinTop = 64;
            task->tWinBottom = 65;
        }
        SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(task->tWinTop, task->tWinBottom));
        if (task->tWinTop == 64)
            task->tState++;
        break;
    default:
        // Hide bg
        HideBg(3);
        gSprites[task->tSpriteId].sIsSwapScreen = task->tIsSwapScreen;
        gSprites[task->tSpriteId].invisible = FALSE;
        gSprites[task->tSpriteId].callback = SpriteCB_CloseMonPic;
        StartSpriteAffineAnim(&gSprites[task->tSpriteId], 1);
        ClearGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON);
        DestroyTask(taskId);
        break;
    }
}

static void Swap_CreateMonSprite(void)
{
    struct Pokemon *mon;
    u16 species;
    u32 personality;
    bool8 isShiny;

    if (!sPoolSwapScreen->inEnemyScreen)
        mon = &gParties[B_TRAINER_PLAYER][sPoolSwapScreen->cursorPos];
    else
        mon = &gParties[B_TRAINER_OPPONENT_A][sPoolSwapScreen->cursorPos];

    species = GetMonData(mon, MON_DATA_SPECIES, NULL);
    personality = GetMonData(mon, MON_DATA_PERSONALITY, NULL);
    isShiny = GetMonData(mon, MON_DATA_IS_SHINY, NULL);

    sPoolSwapScreen->monPic.monSpriteId = CreateMonPicSprite(species, isShiny, personality, TRUE, 88, 32, 15, TAG_NONE);
    gSprites[sPoolSwapScreen->monPic.monSpriteId].centerToCornerVecX = 0;
    gSprites[sPoolSwapScreen->monPic.monSpriteId].centerToCornerVecY = 0;

    sPoolSwapScreen->monPicAnimating = FALSE;
}

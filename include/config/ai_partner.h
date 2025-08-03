#ifndef GUARD_CONFIG_AI_PARTNER_H
#define GUARD_CONFIG_AI_PARTNER_H

// For the details on what specific factors the switching functions are considering, go read the corresponding function inside ShouldSwitch in src/battle_ai_switch_items.c
// These configuration options control how likely the AI is to switch if it determines that a switch meets all of its criteria
// Think of them almost like success rates; if the AI has determined that it needs to switch out to hit Wonder Guard, how often do you want it to actually take that course of action? Etc.

// AI switch chances; if you want more complex behaviour, modify GetSwitchChance
#define PARTNER_SHOULD_SWITCH_WONDER_GUARD_PERCENTAGE                   100
#define PARTNER_SHOULD_SWITCH_TRUANT_PERCENTAGE                         0
#define PARTNER_SHOULD_SWITCH_ALL_MOVES_BAD_PERCENTAGE                  100
#define PARTNER_STAY_IN_STATS_RAISED                                    0  // Number of stat stages that must be raised across any stats before the AI won't switch mon out in certain cases

// AI smart switching chances; if you want more complex behaviour, modify GetSwitchChance
#define PARTNER_SHOULD_SWITCH_ABSORBS_MOVE_PERCENTAGE_IF_FAST_KILLED            100
#define PARTNER_SHOULD_SWITCH_ABSORBS_HIDDEN_POWER_PERCENTAGE_IF_FAST_KILLED    100
#define PARTNER_SHOULD_SWITCH_TRAPPER_PERCENTAGE                                0
#define PARTNER_SHOULD_SWITCH_FREE_TURN_PERCENTAGE                              0
#define PARTNER_STAY_IN_ABSORBING_PERCENTAGE                                    0  // Chance to stay in if outgoing mon has super effective move against player, will prevent switching out for an absorber with this likelihood
#define PARTNER_SHOULD_SWITCH_HASBADODDS_PERCENTAGE                             0
#define PARTNER_SHOULD_SWITCH_ENCORE_STATUS_PERCENTAGE                          100 // Chance to switch if encored into status move
#define PARTNER_SHOULD_SWITCH_ENCORE_DAMAGE_PERCENTAGE                          0   // Chance to switch if encored into damaging move
#define PARTNER_SHOULD_SWITCH_CHOICE_LOCKED_PERCENTAGE                          0 // Only if locked into status move
#define PARTNER_SHOULD_SWITCH_ATTACKING_STAT_MINUS_TWO_PERCENTAGE               100
#define PARTNER_SHOULD_SWITCH_ATTACKING_STAT_MINUS_THREE_PLUS_PERCENTAGE        100
#define PARTNER_SHOULD_SWITCH_ALL_SCORES_BAD_PERCENTAGE                         100

// AI smart switching chances for bad statuses
#define PARTNER_SHOULD_SWITCH_PERISH_SONG_PERCENTAGE                    100
#define PARTNER_SHOULD_SWITCH_YAWN_PERCENTAGE                           100
#define PARTNER_SHOULD_SWITCH_BADLY_POISONED_PERCENTAGE                 0
#define PARTNER_SHOULD_SWITCH_BADLY_POISONED_STATS_RAISED_PERCENTAGE    0
#define PARTNER_SHOULD_SWITCH_CURSED_PERCENTAGE                         0
#define PARTNER_SHOULD_SWITCH_CURSED_STATS_RAISED_PERCENTAGE            0
#define PARTNER_SHOULD_SWITCH_NIGHTMARE_PERCENTAGE                      0
#define PARTNER_SHOULD_SWITCH_NIGHTMARE_STATS_RAISED_PERCENTAGE         0
#define PARTNER_SHOULD_SWITCH_SEEDED_PERCENTAGE                         0
#define PARTNER_SHOULD_SWITCH_SEEDED_STATS_RAISED_PERCENTAGE            0
#define PARTNER_SHOULD_SWITCH_INFATUATION_PERCENTAGE                    100

// AI smart switching chances for beneficial abilities
#define PARTNER_SHOULD_SWITCH_NATURAL_CURE_STRONG_PERCENTAGE                100
#define PARTNER_SHOULD_SWITCH_NATURAL_CURE_STRONG_STATS_RAISED_PERCENTAGE   0
#define PARTNER_SHOULD_SWITCH_NATURAL_CURE_WEAK_PERCENTAGE                  0
#define PARTNER_SHOULD_SWITCH_NATURAL_CURE_WEAK_STATS_RAISED_PERCENTAGE     0
#define PARTNER_SHOULD_SWITCH_REGENERATOR_PERCENTAGE                        0
#define PARTNER_SHOULD_SWITCH_REGENERATOR_STATS_RAISED_PERCENTAGE           0

// AI switchin considerations
#define PARTNER_ALL_MOVES_BAD_STATUS_MOVES_BAD                          FALSE // If the AI has no moves that affect the target, ShouldSwitchIfAllMovesBad can prompt a switch. Enabling this config will ignore status moves that can affect the target when making this decision.
#define PARTNER_AI_BAD_SCORE_THRESHOLD                                  95 // Move scores beneath this threshold are considered "bad" when deciding switching
#define PARTNER_AI_GOOD_SCORE_THRESHOLD                                 100 // Move scores above this threshold are considered "good" when deciding switching

// AI held item-based move scoring
#define PARTNER_LOW_ACCURACY_THRESHOLD                                  75 // Moves with accuracy equal OR below this value are considered low accuracy 

// AI move scoring
#define PARTNER_STATUS_MOVE_FOCUS_PUNCH_CHANCE                          0 // Chance the AI will use a status move if the player's best move is Focus Punch
#define PARTNER_BOOST_INTO_HAZE_CHANCE                                  0 // Chance the AI will use a stat boosting move if the player has used Haze

// AI damage calc considerations
#define PARTNER_RISKY_AI_CRIT_STAGE_THRESHOLD                           2   // Stat stages at which Risky will assume it gets a crit
#define PARTNER_RISKY_AI_CRIT_THRESHOLD_GEN_1                           128 // "Stat stage" at which Risky will assume it gets a crit with gen 1 mechanics (this translates to an X / 255 % crit threshold)

// AI prediction chances
#define PARTNER_PREDICT_SWITCH_CHANCE                                   0
#define PARTNER_PREDICT_MOVE_CHANCE                                     0

// AI Terastalization chances
#define PARTNER_AI_CONSERVE_TERA_CHANCE_PER_MON                         0 // Chance for AI with smart tera flag to decide not to tera before considering defensive benefit is this*(X-1), where X is the number of alive pokemon that could tera
#define PARTNER_AI_TERA_PREDICT_CHANCE                                  0 // Chance for AI with smart tera flag to tera in the situation where tera would save it from a KO, but could be punished by a KO from a different move. 

// AI PP Stall detection chance per roll
#define PARTNER_PP_STALL_DISREGARD_MOVE_PERCENTAGE                      0
// Score reduction if any roll for PP stall detection passes
#define PARTNER_PP_STALL_SCORE_REDUCTION                                0

// AI's acceptable number of hits to KO the partner via friendly fire in a double battle.
#define PARTNER_FRIENDLY_FIRE_RISKY_THRESHOLD           1
#define PARTNER_FRIENDLY_FIRE_NORMAL_THRESHOLD          1
#define PARTNER_FRIENDLY_FIRE_CONSERVATIVE_THRESHOLD    1

#endif // GUARD_CONFIG_AI_PARTNER_H

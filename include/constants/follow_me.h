#ifndef GUARD_CONSTANTS_FOLLOW_ME_H
#define GUARD_CONSTANTS_FOLLOW_ME_H

// Follow Me Flags
#define FOLLOW_ME_FLAG_HAS_RUNNING_FRAMES    0x1
#define FOLLOW_ME_FLAG_CAN_BIKE              0x2
#define FOLLOW_ME_FLAG_CAN_LEAVE_ROUTE       0x4     // teleport, dig, fly, etc
#define FOLLOW_ME_FLAG_CAN_SURF              0x8
#define FOLLOW_ME_FLAG_CAN_WATERFALL         0x10
#define FOLLOW_ME_FLAG_CAN_DIVE              0x20
#define FOLLOW_ME_FLAG_CLEAR_ON_WHITE_OUT    0x80

#define FOLLOW_ME_FLAG_ALL_LAND              FOLLOW_ME_FLAG_HAS_RUNNING_FRAMES | FOLLOW_ME_FLAG_CAN_BIKE | FOLLOW_ME_FLAG_CAN_LEAVE_ROUTE
#define FOLLOW_ME_FLAG_ALL_WATER             FOLLOW_ME_FLAG_CAN_SURF | FOLLOW_ME_FLAG_CAN_WATERFALL | FOLLOW_ME_FLAG_CAN_DIVE
#define FOLLOW_ME_FLAG_ALL                   FOLLOW_ME_FLAG_ALL_LAND | FOLLOW_ME_FLAG_ALL_WATER | FOLLOW_ME_FLAG_CLEAR_ON_WHITE_OUT

// Shorter flag names for ease of use in setfollower script macro
#define FM_RUNNING                          FOLLOW_ME_FLAG_HAS_RUNNING_FRAMES
#define FM_BIKE                             FOLLOW_ME_FLAG_CAN_BIKE
#define FM_LEAVE_ROUTE                      FOLLOW_ME_FLAG_CAN_LEAVE_ROUTE
#define FM_SURF                             FOLLOW_ME_FLAG_CAN_SURF
#define FM_WATERFALL                        FOLLOW_ME_FLAG_CAN_WATERFALL
#define FM_DIVE                             FOLLOW_ME_FLAG_CAN_DIVE
#define FM_WHITE_OUT                        FOLLOW_ME_FLAG_CLEAR_ON_WHITE_OUT

#define FM_ALL_LAND                         FOLLOW_ME_FLAG_ALL_LAND
#define FM_ALL_WATER                        FOLLOW_ME_FLAG_ALL_WATER
#define FM_ALL                              FOLLOW_ME_FLAG_ALL

#endif // GUARD_CONSTANTS_FOLLOW_ME_H
#ifndef GUARD_CONSTANTS_UNION_ROOM_H
#define GUARD_CONSTANTS_UNION_ROOM_H

#define MAX_UNION_ROOM_PLAYERS 8

#define UNION_ROOM_SPAWN_NONE 0
#define UNION_ROOM_SPAWN_IN   1
#define UNION_ROOM_SPAWN_OUT  2

#define ACTIVITY_NONE               0
#define ACTIVITY_BATTLE_SINGLE      1
#define ACTIVITY_BATTLE_DOUBLE      2
#define ACTIVITY_BATTLE_MULTI       3
#define ACTIVITY_TRADE              4
#define ACTIVITY_CHAT               5
#define ACTIVITY_WONDER_CARD        6
#define ACTIVITY_WONDER_NEWS        7
#define ACTIVITY_CARD               8
#define ACTIVITY_POKEMON_JUMP       9
#define ACTIVITY_BERRY_CRUSH        10
#define ACTIVITY_BERRY_PICK         11
#define ACTIVITY_SEARCH             12
#define ACTIVITY_SPIN_TRADE         13
#define ACTIVITY_BATTLE_TOWER_OPEN  14
#define ACTIVITY_RECORD_CORNER      15
#define ACTIVITY_BERRY_BLENDER      16

// Player response
#define ACTIVITY_ACCEPT             17
#define ACTIVITY_DECLINE            18

#define ACTIVITY_NPCTALK            19
#define ACTIVITY_PLYRTALK           20

// Duplicate IDs?
#define ACTIVITY_WONDER_CARD2       21
#define ACTIVITY_WONDER_NEWS2       22
#define ACTIVITY_UNUSED_23          23
#define ACTIVITY_UNUSED_24          24
#define ACTIVITY_UNUSED_25          25
#define ACTIVITY_UNUSED_26          26
#define ACTIVITY_UNUSED_27          27
#define ACTIVITY_BATTLE_TOWER       28
#define ACTIVITY_29                 29

#define IN_UNION_ROOM               (1 << 6)

// Used in UR_AddTextPrinterParameterized
#define UR_COLOR_DKE_WHT_LTE 0
#define UR_COLOR_RED_WHT_LTR 1
#define UR_COLOR_GRN_WHT_LTG 2
#define UR_COLOR_WHT_WHT_LTE 3
#define UR_COLOR_WHT_DKE_LTE 4
#define UR_COLOR_GRN_DN6_LTB 5
#define UR_COLOR_DN5_DN6_LTB 6

#define LINK_GROUP_SINGLE_BATTLE        0
#define LINK_GROUP_DOUBLE_BATTLE        1
#define LINK_GROUP_MULTI_BATTLE         2
#define LINK_GROUP_TRADE                3
#define LINK_GROUP_POKEMON_JUMP         4
#define LINK_GROUP_BERRY_CRUSH          5
#define LINK_GROUP_BERRY_PICKING        6
#define LINK_GROUP_WONDER_CARD          7
#define LINK_GROUP_WONDER_NEWS          8
#define LINK_GROUP_UNION_ROOM_RESUME    9
#define LINK_GROUP_UNION_ROOM_INIT      10
#define LINK_GROUP_UNK_11               11
#define LINK_GROUP_RECORD_CORNER        12
#define LINK_GROUP_BERRY_BLENDER        13
#define LINK_GROUP_UNK_14               14
#define LINK_GROUP_BATTLE_TOWER         15
#define LINK_GROUP_BATTLE_TOWER_OPEN    16
#define NUM_LINK_GROUP_TYPES            17

#define UR_TRADE_MATCH  0
#define UR_TRADE_NOTYPE 1
#define UR_TRADE_NOEGG  2

#define UR_TRADE_READY             0
#define UR_TRADE_PLAYER_NOT_READY  1
#define UR_TRADE_PARTNER_NOT_READY 2

#define UR_INTERACT_PLAYER_1   1
#define UR_INTERACT_PLAYER_2   2
#define UR_INTERACT_PLAYER_3   3
#define UR_INTERACT_PLAYER_4   4
#define UR_INTERACT_PLAYER_5   5
#define UR_INTERACT_PLAYER_6   6
#define UR_INTERACT_PLAYER_7   7
#define UR_INTERACT_PLAYER_8   8
#define UR_INTERACT_ATTENDANT  9
#define UR_INTERACT_UNUSED     10
#define UR_INTERACT_START_MENU 11

#endif //GUARD_CONSTANTS_UNION_ROOM_H

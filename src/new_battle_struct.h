#ifndef NEW_STRUCT
#define NEW_STRUCT

#include "types.h"

struct bank_affecting{
    u32 embargo : 1;
    u32 electrify : 1;
    u32 telekinesis: 1;
    u32 magnet_rise : 1;
    u32 heal_block : 1;
    u32 aqua_ring : 1;
    u32 powder : 1;
    u32 smacked_down : 1;
    u32 quashed : 1;
    u32 just_switched_in : 1;
    u32 taken_damage : 1;
    u32 ally_fainted_last_turn : 1;
    u32 miracle_eyed : 1;
    u32 spiky_shield : 1;
    u32 kings_shield : 1;
    u32 popped_air_balloon : 1;
    u32 sturdied : 1;
    u32 life_orbed : 1;
    u32 focus_sashed_or_banded : 1;
    u32 sheerforce_bonus : 1;
    u32 eaten_berry : 1;
    u32 slowstarted : 1;
    u32 frisked_pokes : 1;
    u32 forewarned : 1;
    u32 anticipationed : 1;
    u32 impostered : 1;
    u32 sunshine_form : 1;
    u32 cherrim_transformed : 1;
    u32 moldbreaked : 1;
    u32 gastro_acided : 1;
    u32 affected_by_moldbreaker : 1;
    u32 downloaded : 1;
    u8 lowered_stats : 1;
    u8 sky_drop_attacker : 1;
    u8 sky_drop_target : 1;
    u8 gem_boost : 1;

    u8 autonomize_uses;
    u8 slowstart_duration;
    u8 type3;
    u8 aegislash_form; //0 = not aegi, 1 = defensive, 2 = attacking
    u8 telekinesis_duration;
    u8 magnet_rise_duration;
    u8 killer_bank;
    u8 bank_that_lowered_stats;
};

struct side_affecting{
    u16 sticky_web : 1;
    u16 toxic_spikes_psn : 1;
    u16 toxic_spikes_badpsn : 1;
    u16 stealthrock : 1;
    u16 lucky_chant : 1;
    u16 tailwind : 1;
    u16 wide_guard : 1;
    u16 quick_guard : 1;
    u16 crafty_shield : 1;
    u16 combo_waterpledge : 1;
    u16 combo_firepledge : 1;
    u16 combo_grasspledge : 1;
    u16 swamp_spd_halving : 1;
    u16 sea_of_fire : 1;
    u16 rainbow : 1;

    u8 lucky_chant_duration;
    u8 tailwind_duration;
    u8 sea_of_fire_duration;
    u8 swamp_duration;
    u8 rainbow_duration;
};

struct field_affecting{
    u32 trick_room : 1;
    u32 wonder_room : 1;
    u32 magic_room : 1;
    u32 grassy_terrain : 1;
    u32 electic_terrain : 1;
    u32 misty_terrain : 1;
    u32 ion_deluge : 1;
    u32 gravity : 1;
    u32 round_chosen : 1;
    u32 fairy_lock : 1;

    u8 trick_room_duration;
    u8 wonder_room_duration;
    u8 magic_room_duration;
    u8 grassy_terrain_duration;
    u8 electric_terrain_duration;
    u8 misty_terrain_duration;
    u8 ion_deluge_duration;
    u8 gravity_duration;
};

struct various{
    u8 eaten_berry_player : 6;
    u8 eaten_berry_opponent : 6;
    u8 active_bank;
    u8 frisking_bank;
    u16 var1;
    u16 var2;
    u16 recently_used_item;
    u8 inverse_battle : 1;
};

struct new_battle_struct{
    struct bank_affecting bank_affecting[4];
    struct side_affecting side_affecting[2];
    struct field_affecting field_affecting;
    struct various various;
};

struct new_battlestruct_ptr{
    struct new_battle_struct *ptr;
};

extern struct new_battlestruct_ptr new_battlestruct;

//functions used by multiple files
u8 ability_battle_effects(u8 switch_id, u8 bank, u8 ability_to_check, u8 special_cases_argument, u16 move);
u8 get_item_effect(u8 bank, u8 check_negating_effects);
u8 has_ability_effect(u8 bank, u8 mold_breaker, u8 gastro);
s8 get_move_position(u8 bank, u16 move);

#endif /* NEW_STRUCT */
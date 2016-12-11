#ifndef static_references
#define static_references

#include "types.h"
#include "battle_structs.h"

extern const struct move_info move_table[1024];
extern u16 forewarn_moves[];
extern u16 sound_moves[];
extern u16 powder_moves[];
extern u16 ball_bomb_moves[];
extern u16 reckless_moves_table[];
extern u16 ironfist_moves_table[];
extern u16 sheerforce_moves_table[];
extern u16 biting_moves_table[];
extern u16 megalauncher_moves_table[];
extern u16 moveshitting_onair[];
extern u16 moveshitting_underground[];
extern u16 moveshitting_underwater[];

extern void* transform_bs;
extern void* snow_warning_bs;
extern void* desolateland_bs;
extern void* primoridalsea_bs;
extern void* deltastream_bs;
extern void* forewarn_bs;
extern void* slowstart_bs;
extern void* anticipation_bs;
extern void* cherrimswitch_bs;
extern void* cherrimswitch2_bs;
extern void* dryskindamage_bs;
extern void* solarpower_bs;
extern void* harvest_bs;
extern void* healer_bs;
extern void* pickup_bs;
extern void* moldbreaker_message_bs;
extern void* turboblaze_bs;
extern void* terravolt_bs;
extern void* downloadatk_bs;
extern void* downloadspatk_bs;
extern void* absorb_ability_boost_bs;
extern void* absorb_ability_immune_bs;
extern void* aftermath_bs;
extern void* pickpocket_bs;
extern void* mummy_bs;
extern void* gooey_bs;
extern void* cursedbody_bs;
extern void* rattled_bs;
extern void* weakarmor_bs;
extern void* moody_bs;
extern void* defiant_bs;
extern void* pressure_bs;
extern void* unnerve_bs;
extern void* aurabreak_bs;
extern void* fairyaura_bs;
extern void* darkaura_bs;
extern void* itemhurt_bs;
extern void* flameorb_bs;
extern void* toxicorb_bs;
extern void* airballon_bs;
extern void* weaknesspolicyattack;
extern void* weaknesspolicyspattack;
extern void* weaknesspolicy_bs;
extern void* ejectbutton_bs;
extern void* can_switch_bs;
extern void* rockyhelmet_bs;
extern void* balloonpops_bs;
extern void* destinyknot_bs;
extern void* statraise_bs;
extern void* mentalherb_bs;
extern void* mentalherb_endmove_bs;
extern void* disable_end_bs;
extern void* encore_end_bs;
extern void* healblock_end_bs;
extern void* healblock_end_bs2;
extern void* magicbounce_bs;
extern void* angerpoint_bs;
extern void* spikes_bs;
extern void* stealhrock_bs;
extern void* stickyweb_bs;
extern void* toxicspikes_bs;
extern void* toxicpikes_absorbed;
extern void* lifeorb_damage;
extern void* spikyshield_dam_bs;
extern void* taunt_end_bs;
extern void* tauntend2_bs;
extern void* tormentend_bs;
extern void* healblock_prevents_usage_bs;
extern void* gravity_prevents_usage_bs;
extern void* embargoprevents_usage_bs;
extern void* aromaveilprevents_bs;
extern void* statloss_bs;
extern void* symbiosispass_bs;
extern void* cheekpouch_bs;
extern void* no_effect_bs;
extern void* lunardance_bs;
extern void* leechseed_updated_bs;
extern void* poisonheal_bs;
extern void* telekinesis_end_bs;
extern void* embargo_end_bs;
extern void* magnetrise_end_bs;
extern void* wrapped_bs;
extern void* changeattackerstat_bs;
extern void* changetargetstat_bs;
extern void* closecombat_bs;
extern void* paralysis_chance_bs;
extern void* burn_chance_bs;
extern void* moxie_bs;
extern void* heavyrain_prevents_bs;
extern void* harshsun_prevents_bs;
extern void* powder_bs;
extern void* trickroomends_bs;
extern void* magicroomends_bs;
extern void* wonderoomends_bs;
extern void* gravityends_bs;
extern void* grassyterrainends_bs;
extern void* mistyterrainends_bs;
extern void* electrterrainends_bs;
extern void* grassyterrain_hpheal;
extern void* grassyheal;
extern void* fogcontinues_bs;
extern void* fogends_bs;
extern void* fog_animation;
extern void* stickybarbswap;
extern void* stat_raise;
extern void* stat_lower;
extern void* cant_lower_bs;
extern void* cant_raise_bs;
extern void* attackingstatschange_bs;
extern void* return_bs;
extern void* frisk_bs();
extern void* bad_dreams_bs();
extern void* CANCELER_FAIL();
extern void* incinerateberry_bs;
extern void* magnetrise_end_return_bs;
extern void* telekinesis_end_return_bs;
extern void* gravitybringsdown_bs;
extern void* clearstats_bs;
extern void* smackdown_bs;
extern void* rapidspinonstealthrock_bs;
extern void* rapidspinonstickyweb_bs;
extern void* rapidspinontoxicspikes_bs;
extern void* defogblows_bs;
extern void* powerherb_bs;
extern void* aquaring_bs;
extern void* assaultvest_bs;
extern void* gravityprevents2_bs;
extern void* cantselecthealblock_bs;
extern void* quickclaw_bs;

extern void* custapberry_bs;
extern void* healberry_endmove_bs;
extern void* healandconfuse_endmove_bs;
extern void* statraise_berry_endmove_bs;
extern void* lansat_endmove_bs;
extern void* leppa_endmove_bs;

extern void* prlzcure_bugbite_bs;
extern void* slpcure_bugbite_bs;
extern void* frzcure_bugbite_bs;
extern void* psncure_bugbite_bs;
extern void* brncure_bugbite_bs;
extern void* confcure_bugbite_bs;
extern void* lum_bugbite_bs;
extern void* healberry_bugbite_bs;
extern void* healandconfuse_bugbite_bs;
extern void* statraise_berry_bugbite_bs;
extern void* lansat_bugbite_bs;
extern void* leppa_bugbite_bs;
extern void* bugsteal_bs;

extern void* skydrop_tooheavy_bs;
extern void* illusion_wore_off_bs;
extern void* aegislash_change_bs;
extern void* zen_change_bs;
extern void* protean_bs;
extern void* gem_bs;
extern void* telepathy_bs;
extern void* flameburst_bs;
extern void* damagetrap_bs;
extern void* combined_move_bs;
extern void* fire_sea_bs;
extern void* swamp_bs;
extern void* rainbow_bs;
extern void* end_pledge_effect_bs;
extern void* sea_of_fire_hurt_bs;
extern void* berry_redux_bs;
#endif /* static_references */

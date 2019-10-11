// This needs to be re-ordered when TAG_MAJOR_VERSION changes!
static const vector<spell_type> spellbook_templates[] =
{

{   // Book of Minor Magic
    SPELL_MAGIC_DART,
    SPELL_SLOW,
    SPELL_BLINK,
    SPELL_CALL_IMP,
    SPELL_CONJURE_FLAME,
    SPELL_MEPHITIC_CLOUD,
},

{   // Book of Conjurations
    SPELL_MAGIC_DART,
    SPELL_SEARING_RAY,
    SPELL_ISKENDERUNS_MYSTIC_BLAST,
    SPELL_FULMINANT_PRISM,
    SPELL_IRRADIATE,
},

{   // Book of Flames
    SPELL_FLAME_TONGUE,
    SPELL_FLAMING_ARROWS,
    SPELL_CONJURE_FLAME,
    SPELL_INNER_FLAME,
    SPELL_STICKY_FLAME,
    SPELL_FIREBALL,
},

{   // Book of Frost
    SPELL_FREEZE,
    SPELL_THROW_FROST,
    SPELL_OZOCUBUS_ARMOUR,
    SPELL_THROW_ICICLE,
    SPELL_SUMMON_ICE_BEAST,
},

{   // Book of Summonings
    SPELL_RECALL,
    SPELL_AURA_OF_ABJURATION,
    SPELL_SUMMON_DEMON,
    SPELL_SUMMON_FOREST,
    SPELL_SUMMON_MANA_VIPER,
    SPELL_SHADOW_CREATURES,
},

{   // Book of Fire
    SPELL_FIREBALL,
    SPELL_BOLT_OF_MAGMA,
    SPELL_BOLT_OF_FIRE,
    SPELL_RING_OF_FLAMES,
    SPELL_IGNITION,
},

{   // Book of Ice
    SPELL_ICE_FORM,
    SPELL_ENGLACIATION,
    SPELL_OZOCUBUS_REFRIGERATION,
    SPELL_BOLT_OF_COLD,
    SPELL_FREEZING_CLOUD,
    SPELL_SIMULACRUM,
},

{   // Book of Spatial Translocations
    SPELL_BLINK_OTHER,
    SPELL_BLINK,
    SPELL_PORTAL_PROJECTILE,
    SPELL_TELEPORT_OTHER,
    SPELL_GOLUBRIAS_PASSAGE,
},

{   // Book of Enchantments
    SPELL_SILENCE,
    SPELL_PIERCING_SHOT,
    SPELL_DEFLECT_MISSILES,
    SPELL_INFESTATION,
    SPELL_DISCORD,
},

{   // Young Poisoner's Handbook
    SPELL_STING,
    SPELL_POISONOUS_VAPOURS,
    SPELL_IGNITE_POISON,
    SPELL_OLGREBS_TOXIC_RADIANCE,
    SPELL_SUMMON_SCORPIONS,
    SPELL_VENOM_BOLT,
},

{   // Book of the Tempests
    SPELL_LIGHTNING_BOLT,
    SPELL_ICICLE_BURST,
    SPELL_CHAIN_LIGHTNING,
    SPELL_IGNITION,
    SPELL_TORNADO,
    SPELL_SHATTER,
},

{   // Book of Death
    SPELL_CORPSE_ROT,
    SPELL_SUBLIMATION_OF_BLOOD,
    SPELL_AGONY,
    SPELL_DISPEL_UNDEAD,
    SPELL_BOLT_OF_DRAINING,
},

{   // Book of Misfortune
    SPELL_CONFUSE,
    SPELL_DAZZLING_SPRAY,
    SPELL_PETRIFY,
    SPELL_VIOLENT_UNRAVELLING,
    SPELL_ENGLACIATION,
    SPELL_RUPTURE,
},

{   // Book of Changes
    SPELL_BEASTLY_APPENDAGE,
    SPELL_STICKS_TO_SNAKES,
    SPELL_SPIDER_FORM,
    SPELL_ICE_FORM,
    SPELL_BLADE_HANDS,
},

{   // Book of Transfigurations
    SPELL_TREE_FORM,
    SPELL_STATUE_FORM,
    SPELL_DRAGON_FORM,
    SPELL_NECROMUTATION,
},

{   // Fen Folio
    SPELL_CORPSE_ROT,
    SPELL_STONE_ARROW,
    SPELL_SUMMON_FOREST,
    SPELL_TREE_FORM,
    SPELL_POISON_ARROW,
    SPELL_SUMMON_HYDRA,
},

#if TAG_MAJOR_VERSION > 34
{   // Book of Battle
},
#endif

{   // Book of Clouds
    SPELL_POISONOUS_VAPOURS,
    SPELL_MEPHITIC_CLOUD,
    SPELL_CONJURE_FLAME,
    SPELL_FREEZING_CLOUD,
    SPELL_RING_OF_FLAMES,
},

{   // Book of Necromancy
    SPELL_PAIN,
    SPELL_ANIMATE_SKELETON,
    SPELL_VAMPIRIC_DRAINING,
    SPELL_REGENERATION,
    SPELL_ANIMATE_DEAD,
    SPELL_BOLT_OF_DRAINING,
},

{   // Book of Callings
    SPELL_SUMMON_SMALL_MAMMAL,
    SPELL_CALL_IMP,
    SPELL_CALL_CANINE_FAMILIAR,
    SPELL_SUMMON_ICE_BEAST,
    SPELL_SUMMON_LIGHTNING_SPIRE,
},

{   // Book of Maledictions
    SPELL_CORONA,
    SPELL_HIBERNATION,
    SPELL_CONFUSE,
    SPELL_TUKIMAS_DANCE,
    SPELL_DAZZLING_SPRAY,
},

{   // Book of Air
    SPELL_SHOCK,
    SPELL_SWIFTNESS,
    SPELL_DISCHARGE,
    SPELL_AIRSTRIKE,
    SPELL_LIGHTNING_BOLT,
},

{   // Book of the Sky
    SPELL_SUMMON_LIGHTNING_SPIRE,
    SPELL_SILENCE,
    SPELL_DEFLECT_MISSILES,
    SPELL_CONJURE_BALL_LIGHTNING,
    SPELL_TORNADO,
},

{   // Book of the Warp
    SPELL_PORTAL_PROJECTILE,
    SPELL_BECKONING,
    SPELL_FORCE_LANCE,
    SPELL_DISPERSAL,
    SPELL_CONTROLLED_BLINK,
},

#if TAG_MAJOR_VERSION == 34
{   // Book of Envenomations
},
#endif

{   // Book of Unlife
    SPELL_RECALL,
    SPELL_ANIMATE_DEAD,
    SPELL_BORGNJORS_VILE_CLUTCH,
    SPELL_DEATH_CHANNEL,
    SPELL_SIMULACRUM,
},

#if TAG_MAJOR_VERSION == 34
{   // Book of Control
},

{   // Book of Battle
    SPELL_INFUSION,
    SPELL_SONG_OF_SLAYING,
    SPELL_SPECTRAL_WEAPON,
    SPELL_REGENERATION,
    SPELL_OZOCUBUS_ARMOUR,
},
#endif

{   // Book of Geomancy
    SPELL_SANDBLAST,
    SPELL_PASSWALL,
    SPELL_STONE_ARROW,
    SPELL_PETRIFY,
    SPELL_LRD,
},

{   // Book of Earth
    SPELL_LEDAS_LIQUEFACTION,
    SPELL_BOLT_OF_MAGMA,
    SPELL_STATUE_FORM,
    SPELL_IRON_SHOT,
    SPELL_SHATTER,
},

#if TAG_MAJOR_VERSION == 34
{   // Book of Wizardry
},
#endif

{   // Book of Power
    SPELL_BATTLESPHERE,
    SPELL_POISON_ARROW,
    SPELL_IRON_SHOT,
    SPELL_IOOD,
    SPELL_SPELLFORGED_SERVITOR,
},

{   // Book of Cantrips
    SPELL_SUMMON_BUTTERFLIES,
    SPELL_SANDBLAST,
    SPELL_INFUSION,
    SPELL_APPORTATION,
    SPELL_SLOW,
},

{   // Book of Party Tricks
    SPELL_SUMMON_BUTTERFLIES,
    SPELL_APPORTATION,
    SPELL_BECKONING,
    SPELL_TUKIMAS_DANCE,
    SPELL_INVISIBILITY
},

#if TAG_MAJOR_VERSION == 34
{   // Akashic Record
},
#endif

{   // Book of Debilitation
    SPELL_CORONA,
    SPELL_SHACKLE,
    SPELL_INNER_FLAME,
    SPELL_FALSE_IMAGE,
    SPELL_CAUSE_FEAR,
    SPELL_VIOLENT_UNRAVELLING,
},

{   // Book of the Dragon
    SPELL_CAUSE_FEAR,
    SPELL_BOLT_OF_FIRE,
    SPELL_DRAGON_FORM,
    SPELL_DRAGON_CALL,
    SPELL_FIRE_STORM,
},

{   // Book of Burglary
    SPELL_SWIFTNESS,
    SPELL_PASSWALL,
    SPELL_GOLUBRIAS_PASSAGE,
    SPELL_LRD,
    SPELL_DARKNESS,
    SPELL_INVISIBILITY,
},

{   // Book of Dreams
    SPELL_HIBERNATION,
    SPELL_DARKNESS,
    SPELL_SHADOW_CREATURES,
    SPELL_BORGNJORS_VILE_CLUTCH,
    SPELL_INFESTATION,
    SPELL_TIME_STOP,
},

{   // Book of Alchemy
    SPELL_SUBLIMATION_OF_BLOOD,
    SPELL_IGNITE_POISON,
    SPELL_PETRIFY,
    SPELL_OZOCUBUS_REFRIGERATION,
},

{   // Book of Beasts
    SPELL_CALL_CANINE_FAMILIAR,
    SPELL_SUMMON_ICE_BEAST,
    SPELL_SUMMON_MANA_VIPER,
    SPELL_SUMMON_HYDRA,
    SPELL_MONSTROUS_MENAGERIE,
},

{   // Book of Annihilations
    SPELL_ICICLE_BURST,
    SPELL_CHAIN_LIGHTNING,
    SPELL_LEHUDIBS_CRYSTAL_SPEAR,
    SPELL_GLACIATE,
    SPELL_FIRE_STORM,
},

{   // Grand Grimoire
    SPELL_MONSTROUS_MENAGERIE,
    SPELL_SUMMON_GREATER_DEMON,
    SPELL_HAUNT,
    SPELL_MALIGN_GATEWAY,
    SPELL_SUMMON_HORRIBLE_THINGS,
},

{   // Necronomicon
    SPELL_DEATH_CHANNEL,
    SPELL_HAUNT,
    SPELL_BORGNJORS_REVIVIFICATION,
    SPELL_NECROMUTATION,
},

};

COMPILE_CHECK(ARRAYSZ(spellbook_templates) == 1 + MAX_FIXED_BOOK);

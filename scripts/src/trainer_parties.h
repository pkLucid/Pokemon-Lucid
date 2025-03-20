// Roxanne Split
// ============

// Location: Littleroot Town
// =========================

// Location: Route 101
// ===================

// Location: Oldale Town
// =====================

// Location: Route 103
// ===================

// Location: Route 102
// ===================

// Name: Youngster Calvin
static const struct TrainerMon sParty_Calvin1[] = {
    {
    .lvl = 12,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_POOCHYENA,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_RUN_AWAY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BITE, MOVE_HOWL},
    },
    {
    .lvl = 12,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MUDKIP,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_MODEST,
    .moves = {MOVE_WATER_PULSE, MOVE_MUD_SHOT},
    },
};

// Name: Youngster Allen
static const struct TrainerMon sParty_Allen[] = {
    {
    .lvl = 12,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TAILLOW,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_GUTS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_AERIAL_ACE, MOVE_FACADE},
    },
    {
    .lvl = 12,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TREECKO,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_OVERGROW,
    .nature = NATURE_MODEST,
    .moves = {MOVE_GIGA_DRAIN, MOVE_GROWTH},
    },
};

// Name: Lass Tiana
static const struct TrainerMon sParty_Tiana[] = {
    {
    .lvl = 12,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SHROOMISH,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_EFFECT_SPORE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SPORE, MOVE_BULLET_SEED},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 12,
    .species = SPECIES_TORCHIC,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_FLAME_CHARGE, MOVE_AERIAL_ACE},
    },
};

// Location: Petalburg Woods
// ===================

// Name: Bug Catcher Lyle
static const struct TrainerMon sParty_Lyle[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 12,
    .species = SPECIES_LARVESTA,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_FLAME_BODY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_FLAME_WHEEL, MOVE_BUG_BITE},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 12,
    .species = SPECIES_VENIPEDE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_POISON_POINT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PIN_MISSILE, MOVE_POISON_TAIL},
    },
};

// Name: Bug Catchter James
static const struct TrainerMon sParty_James[] = {
    {
    .lvl = 12,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DEWPIDER,
    .heldItem = ITEM_BERRY_JUICE,
    .ability = ABILITY_WATER_BUBBLE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_BUBBLE_BEAM, MOVE_SILVER_WIND},
    },
    {
    .lvl = 12,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DUSTOX,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_SHIELD_DUST,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_BUG_BITE, MOVE_TOXIC, MOVE_MOONLIGHT},
    },
};

// Location: Route 104 [North]
// ===========================

// Name: Rich Boy Windston
static const struct TrainerMon sParty_Winston1[] = {
    {
    .lvl = 12,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MEOWTH,
    .heldItem = ITEM_AMULET_COIN,
    .ability = ABILITY_TECHNICIAN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PAY_DAY, MOVE_BITE},
    .isShiny = TRUE,
    },
    {
    .lvl = 12,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_AMULET_COIN,
    .ability = ABILITY_CUTE_CHARM,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PAY_DAY, MOVE_DISARMING_VOICE},
    .isShiny = TRUE,
    },
    {
    .lvl = 12,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LITTEN,
    .heldItem = ITEM_AMULET_COIN,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PAY_DAY, MOVE_FIRE_FANG},
    .isShiny = TRUE,
    },
};

// Name: Lass Haley [Double]
static const struct TrainerMon sParty_Haley1[] = {
    {
    .lvl = 12,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SPRITZEE,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_HEALER,
    .nature = NATURE_MODEST,
    .moves = {MOVE_DRAINING_KISS, MOVE_SWEET_KISS},
    },
    {
    .lvl = 12,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SALANDIT,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_CORROSION,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_VENOSHOCK, MOVE_TOXIC},
    },
    {
    .lvl = 12,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PICHU,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_LIGHTNING_ROD,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_SPARK, MOVE_NUZZLE},
    },
    {
    .lvl = 12,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SPHEAL,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_THICK_FAT,
    .nature = NATURE_MODEST,
    .moves = {MOVE_WATER_GUN, MOVE_POWDER_SNOW, MOVE_REST, MOVE_SLEEP_TALK},
    },
};

// Name: Twins Gina & Mia [Double]
static const struct TrainerMon sParty_GinaAndMia1[] = {
    {
    .lvl = 15,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MEW,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_SYNCHRONIZE,
    .nature = NATURE_HARDY,
    .moves = {MOVE_TRANSFORM},
    },
    {
    .lvl = 15,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DITTO,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_IMPOSTER,
    .nature = NATURE_HARDY,
    .moves = {MOVE_TRANSFORM},
    },
};

// Location: Rustboro City
// =======================

// Name: Youngster Josh
static const struct TrainerMon sParty_Josh[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_HIPPOPOTAS,
    .heldItem = ITEM_BERRY_JUICE,
    .ability = ABILITY_SAND_FORCE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_STOMPING_TANTRUM, MOVE_CRUNCH, MOVE_TAKE_DOWN, MOVE_ROCK_TOMB},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_SLUGMA,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_FLAME_BODY,
    .nature = NATURE_MODEST,
    .moves = {MOVE_INCINERATE, MOVE_ANCIENT_POWER, MOVE_RECOVER, MOVE_YAWN},
    },
    {
    .lvl = 15,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SANDSHREW_ALOLA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SNOW_CLOAK,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ICE_PUNCH, MOVE_METAL_CLAW, MOVE_ROLLOUT},
    },
};

// Name: Youngster Tommy
static const struct TrainerMon sParty_Tommy[] = {
    {
    .lvl = 14,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CHEWTLE,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_STRONG_JAW,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_ROCK_TOMB, MOVE_BITE, MOVE_ICE_FANG, MOVE_DIVE},
    },
    {
    .lvl = 14,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GEODUDE_ALOLA,
    .heldItem = ITEM_MAGNET,
    .ability = ABILITY_STURDY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ROCK_BLAST, MOVE_SPARK, MOVE_BRICK_BREAK, MOVE_STOMPING_TANTRUM},
    },
    {
    .lvl = 14,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SANDILE,
    .heldItem = ITEM_GROUND_GEM,
    .ability = ABILITY_MOXIE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BULLDOZE, MOVE_ROCK_TOMB, MOVE_BITE, MOVE_SAND_TOMB},
    },
    {
    .lvl = 14,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ANORITH,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_BATTLE_ARMOR,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BUG_BITE, MOVE_ROCK_TOMB, MOVE_AERIAL_ACE, MOVE_ROCK_SMASH},
    },
};

// Name: Hiker Marc
static const struct TrainerMon sParty_Marc[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_ARON,
    .heldItem = ITEM_HARD_STONE,
    .ability = ABILITY_STURDY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ROCK_TOMB, MOVE_METAL_CLAW, MOVE_BODY_PRESS, MOVE_HEADBUTT},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_LARVITAR,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_GUTS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ROCK_SLIDE, MOVE_STOMPING_TANTRUM, MOVE_CRUNCH, MOVE_DRAGON_DANCE},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_ARCHEN,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_DEFEATIST,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_WING_ATTACK, MOVE_ROCK_THROW, MOVE_SCARY_FACE, MOVE_ROOST},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_LILEEP,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_STORM_DRAIN,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_MEGA_DRAIN, MOVE_ROCK_SLIDE, MOVE_BRINE, MOVE_RECOVER},
    },
};

// Name: Leader Roxanne
static const struct TrainerMon sParty_Roxanne1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_DRILBUR,
    .heldItem = ITEM_STEEL_GEM,
    .ability = ABILITY_MOLD_BREAKER,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_DRILL_RUN, MOVE_IRON_HEAD, MOVE_AERIAL_ACE, MOVE_RAPID_SPIN},
    },
    {
    .lvl = 15,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KABUTO,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_BATTLE_ARMOR,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_RAZOR_SHELL, MOVE_ROCK_TOMB, MOVE_LEECH_LIFE, MOVE_AQUA_JET},
    },
    {
    .lvl = 15,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DWEBBLE,
    .heldItem = ITEM_ROCK_GEM,
    .ability = ABILITY_STURDY,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_BUG_BITE, MOVE_SMACK_DOWN, MOVE_AERIAL_ACE, MOVE_ROCK_SMASH},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_TYRUNT,
    .heldItem = ITEM_HARD_STONE,
    .ability = ABILITY_STURDY,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_ICE_FANG, MOVE_THUNDER_FANG, MOVE_FIRE_FANG, MOVE_SMACK_DOWN},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 14,
    .species = SPECIES_KLAWF,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_ANGER_SHELL,
    .nature = NATURE_HARDY,
    .moves = {MOVE_ROCK_THROW, MOVE_TRAILBLAZE, MOVE_BULLDOZE},
    },
    {
    .lvl = 16,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TINKATUFF,
    .heldItem = ITEM_METAL_COAT,
    .ability = ABILITY_PICKPOCKET,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_PLAY_ROUGH, MOVE_METAL_CLAW, MOVE_ROCK_TOMB, MOVE_SWORDS_DANCE},
    },
};

// Brawly Split
// ============

// Location: Route 116 [Optionals guarding 116, 117 and Verdanturf Encounters]
// ===========================================================================

// Name: School Kid Jerry and Youngster Johnson
static const struct TrainerMon sParty_Jerry[] = {
    {
    .lvl = 24,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SKIDDO,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_SAP_SIPPER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SEED_BOMB, MOVE_STOMPING_TANTRUM, MOVE_MILK_DRINK},
    },
    {
    .lvl = 24,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CHATOT,
    .heldItem = ITEM_SILK_SCARF,
    .ability = ABILITY_KEEN_EYE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_ECHOED_VOICE, MOVE_AIR_CUTTER, MOVE_ROOST},
    },
};

// Name: School Kid Jerry and Youngster Johnson
static const struct TrainerMon sParty_Johnson[] = {
    {
    .lvl = 24,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MAUSHOLD,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_FRIEND_GUARD,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_PLAY_ROUGH, MOVE_BULLET_SEED, MOVE_DOUBLE_HIT},
    },
    {
    .lvl = 24,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CROAGUNK,
    .heldItem = ITEM_BLACK_BELT,
    .ability = ABILITY_POISON_TOUCH,
    .nature = NATURE_MODEST,
    .moves = {MOVE_VACUUM_WAVE, MOVE_VENOSHOCK, MOVE_FAKE_OUT},
    },
};

// Name: Bug Catcher Jose and Battle Girl Karen
static const struct TrainerMon sParty_Jose[] = {
    {
    .lvl = 25,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SIZZLIPEDE,
    .heldItem = ITEM_CHARCOAL,
    .ability = ABILITY_FLAME_BODY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_FIRE_LASH, MOVE_X_SCISSOR, MOVE_FIRE_SPIN},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_TRAPINCH,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_ARENA_TRAP,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CRUNCH, MOVE_BUG_BITE, MOVE_ROCK_TOMB},
    },
};

// Name: Bug Catcher Jose and Battle Girl Karen
static const struct TrainerMon sParty_Karen[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_BUNEARY,
    .heldItem = ITEM_BLACK_BELT,
    .ability = ABILITY_RUN_AWAY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DIZZY_PUNCH, MOVE_DRAIN_PUNCH, MOVE_FAKE_OUT},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_ODDISH,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = ABILITY_CHLOROPHYLL,
    .nature = NATURE_MODEST,
    .moves = {MOVE_VENOSHOCK, MOVE_GIGA_DRAIN, MOVE_TOXIC},
    },
};

// Name: Hiker Clark
static const struct TrainerMon sParty_Clark[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_ROCKRUFF,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_VITAL_SPIRIT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_FIRE_FANG, MOVE_ICE_FANG, MOVE_THUNDER_FANG, MOVE_ROCK_TOMB},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    .heldItem = ITEM_HARD_STONE,
    .ability = ABILITY_STURDY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SEISMIC_TOSS},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_GIBLE,
    .heldItem = ITEM_GROUND_GEM,
    .ability = ABILITY_SAND_VEIL,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_BULLDOZE, MOVE_DRAGON_BREATH},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_ARON,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_STURDY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_ROCK_SMASH, MOVE_AERIAL_ACE},
    },
    {
    .lvl = 25,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KLINK,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_GEAR_GRIND, MOVE_WILD_CHARGE, MOVE_SHIFT_GEAR},
    },
};

// Location: Verdanturf Town
// =========================

// Location: Route 117
// ===================

// Name: Triathlete Maria and Triathlete Melina
static const struct TrainerMon sParty_Maria1[] = {
    {
    .lvl = 24,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_BERRY_JUICE,
    .ability = ABILITY_FIERY_CHARGE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_FLAME_WHEEL, MOVE_LOW_KICK, MOVE_MORNING_SUN},
    },
    {
    .lvl = 24,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_YANMA,
    .heldItem = ITEM_BERRY_JUICE,
    .ability = ABILITY_SPEED_BOOST,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LEECH_LIFE, MOVE_WING_ATTACK, MOVE_DETECT},
    },
};

// Name: Triathlete Maria and Triathlete Melina
static const struct TrainerMon sParty_Melina[] = {
    {
    .lvl = 25,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SNIVY,
    .heldItem = ITEM_BERRY_JUICE,
    .ability = ABILITY_OVERGROW,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_SEED_BOMB, MOVE_AQUA_TAIL, MOVE_SYNTHESIS},
    },
    {
    .lvl = 25,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FROAKIE,
    .heldItem = ITEM_BERRY_JUICE,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LIQUIDATION, MOVE_ACROBATICS, MOVE_QUICK_ATTACK},
    },
    {
    .lvl = 25,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CHIMCHAR,
    .heldItem = ITEM_BERRY_JUICE,
    .ability = ABILITY_IRON_FIST,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_FIRE_PUNCH, MOVE_DRAIN_PUNCH, MOVE_FAKE_OUT},
    },
};

// Name: Pokemon Breeder Lydia
static const struct TrainerMon sParty_Lydia1[] = {
    {
    .lvl = 24,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_RIOLU,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_BLAZE_KICK},
    },
    {
    .lvl = 24,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ELEKID,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_STATIC,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH},
    },
    {
    .lvl = 24,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MAGBY,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_FLAME_BODY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_FIRE_PUNCH, MOVE_BRICK_BREAK},
    },
    {
    .lvl = 24,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BONSLY,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_STURDY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE},
    },
    {
    .lvl = 24,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MUNCHLAX,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_GLUTTONY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SLAM},
    },
};

// Location: Woods Hideout
// =======================

// Location: Petalburg Woods [Part 2]
// ===========================

// Name: Bug Maniac Anthony
static const struct TrainerMon sParty_Anthony[] = {
    {
    .lvl = 22,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VOLTORB_HISUI,
    .heldItem = ITEM_SILK_SCARF,
    .ability = ABILITY_STATIC,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_WILD_CHARGE, MOVE_SEED_BOMB, MOVE_LIGHT_SCREEN, MOVE_EXPLOSION},
    },
    {
    .lvl = 22,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PORYGON,
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = ABILITY_TRACE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYBEAM, MOVE_ICY_WIND, MOVE_CHARGE_BEAM, MOVE_RECOVER},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WORMADAM_SANDY,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_OVERCOAT,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .moves = {MOVE_BUG_BITE, MOVE_BULLDOZE, MOVE_ROCK_TOMB, MOVE_ATTRACT},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LOKIX,
    .heldItem = ITEM_BERRY_JUICE,
    .ability = ABILITY_SWARM,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BUG_BITE, MOVE_ASSURANCE, MOVE_LOW_KICK, MOVE_SCARY_FACE},
    },
};

// Name: Hex Maniac Betty
static const struct TrainerMon sParty_Betty[] = {
    {
    .lvl = 22,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ABRA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_TIMID,
    .moves = {MOVE_PSYSHOCK, MOVE_DAZZLING_GLEAM, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
    },
    {
    .lvl = 22,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_POLTCHAGEIST,
    .heldItem = ITEM_BIG_ROOT,
    .ability = ABILITY_HEATPROOF,
    .nature = NATURE_MODEST,
    .moves = {MOVE_GIGA_DRAIN, MOVE_HEX, MOVE_SCALD, MOVE_PAIN_SPLIT},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_INSOMNIA,
    .nature = NATURE_TIMID,
    .moves = {MOVE_MOONBLAST, MOVE_AIR_SLASH, MOVE_DREAM_EATER, MOVE_HYPNOSIS},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SUPER_LUCK,
    .nature = NATURE_HARDY,
    .moves = {MOVE_KNOCK_OFF, MOVE_RETALIATE, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE},
    },
};

// Name: Bug Catcher Oliver
static const struct TrainerMon sParty_Oliver[] = {
    {
    .lvl = 22,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VENOMOTH,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = ABILITY_TINTED_LENS,
    .nature = NATURE_MODEST,
    .moves = {MOVE_VENOSHOCK, MOVE_SILVER_WIND, MOVE_AIR_SLASH, MOVE_TOXIC_SPIKES},
    },
    {
    .lvl = 22,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KRICKETUNE,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_TECHNICIAN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BUG_BITE, MOVE_AERIAL_ACE, MOVE_TRAILBLAZE, MOVE_FOCUS_ENERGY},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VOLBEAT,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_PRANKSTER,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_AERIAL_ACE, MOVE_MOONLIGHT},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ILLUMISE,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_PRANKSTER,
    .nature = NATURE_TIMID,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_STRUGGLE_BUG, MOVE_WATER_PULSE, MOVE_MOONLIGHT},
    },
};

// Location: Route 104 [South]
// ===========================

// Name: Lady Cindy
static const struct TrainerMon sParty_Cindy1[] = {
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ESPEON,
    .heldItem = ITEM_FAIRY_FEATHER,
    .ability = ABILITY_MAGIC_BOUNCE,
    .nature = NATURE_QUIRKY,
    .moves = {MOVE_PSYBEAM, MOVE_DRAINING_KISS, MOVE_SWIFT, MOVE_MORNING_SUN},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_UMBREON,
    .heldItem = ITEM_DARK_GEM,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_SNARL, MOVE_ALLURING_VOICE, MOVE_CONFUSE_RAY, MOVE_MOONLIGHT},
    },
};

// Name: Youngster Billy
static const struct TrainerMon sParty_Billy[] = {
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IVYSAUR,
    .heldItem = ITEM_MIRACLE_SEED,
    .ability = ABILITY_OVERGROW,
    .nature = NATURE_MODEST,
    .moves = {MOVE_GRASS_PLEDGE, MOVE_VENOSHOCK, MOVE_SYNTHESIS, MOVE_TOXIC},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CHARMELEON,
    .heldItem = ITEM_CHARCOAL,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_FIRE_PLEDGE, MOVE_DRAGON_PULSE, MOVE_ANCIENT_POWER, MOVE_FIRE_SPIN},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WARTORTLE,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_MODEST,
    .moves = {MOVE_WATER_PLEDGE, MOVE_ICE_BEAM, MOVE_MUD_SHOT, MOVE_AQUA_JET},
    },
};

// Location: Route 106
// ===================

// Location: Route 107
// ===================

// Location: Granite Cave 1F
// =========================

// Location: Granite Cave B1F
// ==========================

// Location: Dewford Arcadia
// =========================

// Location: Dewford Town
// ======================

// Name: Sailor Brenden
static const struct TrainerMon sParty_Brenden[] = {
    {
    .lvl = 21,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GALLADE,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_JUSTIFIED,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BRICK_BREAK, MOVE_PSYCHO_CUT, MOVE_AQUA_CUTTER, MOVE_AERIAL_ACE},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_POLIWRATH,
    .heldItem = ITEM_BLACK_BELT,
    .ability = ABILITY_WATER_ABSORB,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_VACUUM_WAVE, MOVE_HYPNOSIS},
    },
    {
    .lvl = 24,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GRAPPLOCT,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_LIMBER,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_REVENGE, MOVE_WATERFALL, MOVE_ICE_PUNCH, MOVE_PAYBACK},
    },
};

// Name: Battle Girl Lilith
static const struct TrainerMon sParty_Lilith[] = {
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TIMBURR,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .ability = ABILITY_IRON_FIST,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_MACH_PUNCH},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MAKUHITA,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_GUTS,
    .nature = NATURE_ADAMANT,
    .status = STATUS1_BURN,
    .moves = {MOVE_FORCE_PALM, MOVE_ROCK_TOMB, MOVE_PAYBACK, MOVE_FAKE_OUT},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_BLACK_BELT,
    .ability = ABILITY_PURE_POWER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_FORCE_PALM, MOVE_PSYCHO_CUT, MOVE_POISON_JAB, MOVE_BULLET_PUNCH},
    },
    {
    .lvl = 24,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KUBFU,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BRICK_BREAK, MOVE_IRON_HEAD, MOVE_AERIAL_ACE, MOVE_SWORDS_DANCE},
    },
};


// Name: Black Belt Takao
static const struct TrainerMon sParty_Takao[] = {
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CHARJABUG,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_BATTERY,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_BUG_BITE, MOVE_SPARK, MOVE_LIGHT_SCREEN, MOVE_STICKY_WEB},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CRABRAWLER,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_IRON_FIST,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_CRABHAMMER},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SQUAWKABILLY,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_TAKE_DOWN, MOVE_AERIAL_ACE, MOVE_REVERSAL, MOVE_SUBSTITUTE},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LOPUNNY,
    .heldItem = ITEM_BERRY_JUICE,
    .ability = ABILITY_CUTE_CHARM,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_RETALIATE, MOVE_DRAIN_PUNCH, MOVE_ASSURANCE, MOVE_ACROBATICS},
    },
};

// Name: Battle Girl Jocelyn
static const struct TrainerMon sParty_Jocelyn[] = {
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LILLIGANT_HISUI,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_STRIKER,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_SEED_BOMB, MOVE_LOW_SWEEP, MOVE_ICE_SPINNER, MOVE_VACUUM_WAVE},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HAKAMO_O,
    .heldItem = ITEM_ROSELI_BERRY,
    .ability = ABILITY_BULLETPROOF,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRAGON_CLAW, MOVE_BRICK_BREAK, MOVE_POISON_JAB, MOVE_SCARY_FACE},
    },
    {
    .lvl = 25,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TOXICROAK,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_POISON_TOUCH,
    .nature = NATURE_MODEST,
    .moves = {MOVE_VENOSHOCK, MOVE_VACUUM_WAVE, MOVE_MUD_SHOT, MOVE_TOXIC},
    },
};

// Name: Black Belt Cristian
static const struct TrainerMon sParty_Cristian[] = {
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FALINKS,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_DEFIANT,
    .nature = NATURE_HARDY,
    .moves = {MOVE_FIRST_IMPRESSION, MOVE_BRICK_BREAK, MOVE_LUNGE, MOVE_POISON_JAB},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_BLACK_BELT,
    .ability = ABILITY_GUTS,
    .nature = NATURE_HARDY,
    .moves = {MOVE_FIRE_FANG, MOVE_DOUBLE_KICK, MOVE_BITE, MOVE_QUICK_ATTACK},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PRIMEAPE,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_VITAL_SPIRIT,
    .nature = NATURE_HARDY,
    .moves = {MOVE_BRICK_BREAK, MOVE_RAGE_FIST, MOVE_ROCK_TOMB, MOVE_FOCUS_ENERGY},
    },
};

// Name: Battle Girl Laura
static const struct TrainerMon sParty_Laura[] = {
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_QUILLADIN,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_OVERGROW,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SEED_BOMB, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE, MOVE_SYNTHESIS},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_QUAXWELL,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_MOXIE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_AQUA_CUTTER, MOVE_LOW_SWEEP, MOVE_ACROBATICS, MOVE_FLIP_TURN},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_COMBUSKEN,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SPEED_BOOST,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_QUICK_ATTACK},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PASSIMIAN,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_DEFIANT,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BRICK_BREAK, MOVE_TAKE_DOWN, MOVE_U_TURN, MOVE_ACROBATICS},
    },
};

// Name: Leader Brawly
static const struct TrainerMon sParty_Brawly1[] = {
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_FORCE_PALM, MOVE_METAL_CLAW, MOVE_AERIAL_ACE, MOVE_VACUUM_WAVE},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HAWLUCHA,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_MOLD_BREAKER,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_LOW_SWEEP, MOVE_WING_ATTACK, MOVE_U_TURN},
    },
    {
    .lvl = 23,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ANNIHILAPE,
    .heldItem = ITEM_FIGHTING_GEM,
    .ability = ABILITY_DEFIANT,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_RAGE_FIST, MOVE_ROCK_SMASH},
    },
    {
    .lvl = 24,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TAUROS_PALDEA_AQUA,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_HARDY,
    .moves = {MOVE_AQUA_JET, MOVE_DOUBLE_KICK, MOVE_BULLDOZE, MOVE_ROCK_TOMB},
    },
    {
    .lvl = 24,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TAUROS_PALDEA_BLAZE,
    .heldItem = ITEM_BLACK_BELT,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_TEMPER_FLARE, MOVE_DOUBLE_KICK, MOVE_LASH_OUT, MOVE_REVERSAL},
    },
    {
    .lvl = 25,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_GUTS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ARM_THRUST, MOVE_ICE_PUNCH, MOVE_PAYBACK, MOVE_BULLET_PUNCH},
    },
};

// Wattson Split
// =============

// Location: Route 109
// ===================

// Name: Sailor Huey
static const struct TrainerMon sParty_Huey[] = {
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_POLIWRATH,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_WATER_ABSORB,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_WAKE_UP_SLAP, MOVE_WATERFALL, MOVE_ICE_PUNCH, MOVE_HYPNOSIS},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FRAXURE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_MOLD_BREAKER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRAGON_CLAW, MOVE_POISON_JAB, MOVE_REVERSAL, MOVE_DRAGON_DANCE},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_OINKOLOGNE,
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = ABILITY_THICK_FAT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_TAKE_DOWN, MOVE_HIGH_HORSEPOWER, MOVE_PLAY_ROUGH, MOVE_WORK_UP},
    },
};

// Name: Sailor Edmond
static const struct TrainerMon sParty_Edmond[] = {
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KINGLER,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_SHELL_ARMOR,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_RAZOR_SHELL, MOVE_X_SCISSOR, MOVE_NIGHT_SLASH, MOVE_AQUA_JET},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_BULLET_PUNCH},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARBOK,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUCKER_PUNCH},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PALOSSAND,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_WATER_COMPACTION,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SCORCHING_SANDS, MOVE_GIGA_DRAIN, MOVE_CHILLING_WATER, MOVE_ANCIENT_POWER},
    },
};

// Name: Lola Tuber(F)
static const struct TrainerMon sParty_Lola1[] = {
    {
    .lvl = 32,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_AZURILL,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_HUGE_POWER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PLAY_ROUGH, MOVE_BODY_SLAM, MOVE_WATERFALL, MOVE_BOUNCE},
    },
    {
    .lvl = 32,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PONYTA_GALAR,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_PASTEL_VEIL,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PLAY_ROUGH, MOVE_PSYCHO_CUT, MOVE_STOMP, MOVE_FLAME_WHEEL},
    },
    {
    .lvl = 32,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MAWILE,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PLAY_ROUGH, MOVE_FIRE_FANG, MOVE_ICE_FANG, MOVE_THUNDER_FANG},
    },
    {
    .lvl = 32,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WIGGLYTUFF,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_COMPETITIVE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PLAY_ROUGH, MOVE_BODY_SLAM},
    },
};

// Name: Ricky Tuber(M) and Chandler Tuber(M)
static const struct TrainerMon sParty_Ricky1[] = {
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_POISON_BARB,
    .ability = ABILITY_LIQUID_OOZE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SCALD, MOVE_VENOSHOCK, MOVE_HEX, MOVE_TOXIC},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOLDUCK,
    .heldItem = ITEM_TWISTED_SPOON,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_WATERFALL, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_HYPNOSIS},
    },
};

// Name: Ricky Tuber(M) and Chandler Tuber(M)
static const struct TrainerMon sParty_Chandler[] = {
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SEAKING,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_LIGHTNING_ROD,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_WATERFALL, MOVE_DRILL_RUN, MOVE_POISON_JAB, MOVE_SCALE_SHOT},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_MODEST,
    .moves = {MOVE_BUBBLE_BEAM, MOVE_MAGICAL_LEAF, MOVE_AURORA_BEAM, MOVE_FAKE_OUT},
    },
};

// Name: Hailey Tuber (F)
static const struct TrainerMon sParty_Hailey[] = {
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_WATER_GEM,
    .ability = ABILITY_UNNERVE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_SURF, MOVE_QUIVER_DANCE},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SUNFLORA,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_CHLOROPHYLL,
    .nature = NATURE_MODEST,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM, MOVE_GROWTH},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FROSLASS,
    .heldItem = ITEM_GHOST_GEM,
    .ability = ABILITY_CURSED_BODY,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HEX, MOVE_ICY_WIND, MOVE_DRAINING_KISS, MOVE_WILL_O_WISP},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_ROCK_GEM,
    .ability = ABILITY_BATTLE_ARMOR,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ROCK_TOMB, MOVE_BUG_BITE, MOVE_BULLDOZE, MOVE_AQUA_JET},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SIMIPOUR,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_SCALD, MOVE_ACROBATICS},
    },
};

// Location: Slateport City
// ========================

// Location: Route 110
// ===================

// Name: Pokefan Isabel and Pokefan Kaleb
static const struct TrainerMon sParty_Isabel[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 30,
    .species = SPECIES_RAICHU_ALOLA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SURGE_SURFER,
    .nature = NATURE_TIMID,
    .moves = {MOVE_THUNDERBOLT, MOVE_PSYSHOCK, MOVE_DRAINING_KISS, MOVE_NUZZLE},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NIDOQUEEN,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_ACID_COAT,
    .nature = NATURE_MODEST,
    .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
    },
};

// Name: Pokefan Isabel and Pokefan Kaleb
static const struct TrainerMon sParty_Kaleb[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 30,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_STATIC,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_IRON_TAIL, MOVE_BODY_SLAM, MOVE_FAKE_OUT},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NIDOKING,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_ACID_COAT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRILL_RUN, MOVE_POISON_JAB, MOVE_THUNDER_PUNCH, MOVE_SMART_STRIKE},
    },
};

// Name: Guitarist Joseph
static const struct TrainerMon sParty_Joseph[] = {
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TOXTRICITY,
    .heldItem = ITEM_MAGNET,
    .ability = ABILITY_PUNK_ROCK,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_DRAIN_PUNCH, MOVE_SHIFT_GEAR},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SIMISAGE,
    .heldItem = ITEM_GRASS_GEM,
    .ability = ABILITY_GLUTTONY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SEED_BOMB, MOVE_BRICK_BREAK, MOVE_KNOCK_OFF, MOVE_GROWTH},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CHARMELEON,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK, MOVE_SWORDS_DANCE},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 30,
    .species = SPECIES_CROCONAW,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_WATERFALL, MOVE_ICE_PUNCH, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE},
    },
};

// Name: Youngster Jaylen and Youngster Dillon
static const struct TrainerMon sParty_Jaylen[] = {
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LUMINEON,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_STORM_DRAIN,
    .nature = NATURE_TIMID,
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_AIR_SLASH, MOVE_WHIRLPOOL},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = ABILITY_FLASH_FIRE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_BURNING_JEALOUSY, MOVE_SCORCHING_SANDS},
    },
};

// Name: Youngster Jaylen and Youngster Dillon
static const struct TrainerMon sParty_Dillon[] = {
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SAWSBUCK,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_LEAF_RUSH,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_SEED_BOMB, MOVE_HEADBUTT, MOVE_ZEN_HEADBUTT, MOVE_STOMPING_TANTRUM},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SANDSLASH,
    .heldItem = ITEM_SOFT_SAND,
    .ability = ABILITY_SAND_RUSH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRILL_RUN, MOVE_POISON_JAB, MOVE_ROCK_SLIDE, MOVE_SPIKY_SHIELD},
    },
};

// Name: Fisherman Dale
static const struct TrainerMon sParty_Dale[] = {
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCTOVISH,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_WATER_ABSORB,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BRINE, MOVE_ICY_WIND, MOVE_ANCIENT_POWER, MOVE_SUPER_FANG},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_SHELL_ARMOR,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_RAZOR_SHELL, MOVE_KNOCK_OFF, MOVE_X_SCISSOR, MOVE_AQUA_JET},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRAGALGE,
    .heldItem = ITEM_WATER_GEM,
    .ability = ABILITY_POISON_POINT,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_VENOSHOCK, MOVE_DRAGON_TAIL, MOVE_AQUA_TAIL, MOVE_TOXIC},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BRIONNE,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_LIQUID_VOICE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_HYPER_VOICE, MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_SING},
    },
};

// Name: Fisherman Andrew
static const struct TrainerMon sParty_Andrew[] = {
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_TANGA_BERRY,
    .ability = ABILITY_OWN_TEMPO,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SEED_BOMB, MOVE_WATERFALL, MOVE_ICE_PUNCH, MOVE_SYNTHESIS},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FLOATZEL,
    .heldItem = ITEM_NEVER_MELT_ICE,
    .ability = ABILITY_WATER_VEIL,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_BRICK_BREAK, MOVE_ICE_FANG},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_JYNX,
    .heldItem = ITEM_PETAYA_BERRY,
    .ability = ABILITY_RAIN_DISH,
    .nature = NATURE_TIMID,
    .moves = {MOVE_PSYSHOCK, MOVE_ICY_WIND, MOVE_FOCUS_BLAST, MOVE_ENDURE},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 30,
    .species = SPECIES_DEWOTT,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LIQUIDATION, MOVE_SACRED_SWORD, MOVE_AERIAL_ACE, MOVE_AQUA_JET},
    },
};

// Name: Cycling Triathlete Abigail
static const struct TrainerMon sParty_Abigail[] = {
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ESPEON,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = ABILITY_MAGIC_BOUNCE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_PSYCHIC_NOISE, MOVE_DRAINING_KISS, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ZEBSTRIKA,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_MOTOR_DRIVE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_WILD_CHARGE, MOVE_BOUNCE, MOVE_FLAME_CHARGE, MOVE_DOUBLE_KICK},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WHIMSICOTT,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_PRANKSTER,
    .nature = NATURE_RASH,
    .gender = TRAINER_MON_FEMALE,
    .moves = {MOVE_ENERGY_BALL, MOVE_MOONBLAST, MOVE_U_TURN, MOVE_ATTRACT},
    },
    {
    .lvl = 32,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRAKLOAK,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_CURSED_BODY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_DRAGON_PULSE, MOVE_SHADOW_BALL, MOVE_FIRE_BLAST, MOVE_U_TURN},
    },
    {
    .lvl = 32,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LOPUNNY,
    .heldItem = ITEM_FIGHTING_GEM,
    .ability = ABILITY_LIMBER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_RETALIATE, MOVE_SKY_UPPERCUT, MOVE_ACROBATICS, MOVE_FAKE_OUT},
    },
};

// Location: Altering Cave [Double Encounter]
// ==========================================

// Location: Mauville City
// =======================

// Name: Bug Catcher Angelo
static const struct TrainerMon sParty_Angelo[] = {
    {
    .lvl = 32,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GALVANTULA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_COMPOUND_EYES,
    .nature = NATURE_NAUGHTY,
    .moves = {MOVE_DISCHARGE, MOVE_X_SCISSOR, MOVE_THROAT_CHOP, MOVE_STICKY_WEB},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CRUSTLE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_STURDY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ROCK_WRECKER, MOVE_X_SCISSOR, MOVE_ROCK_SLIDE, MOVE_COUNTER},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_RABSCA,
    .heldItem = ITEM_BUG_GEM,
    .ability = ABILITY_SYNCHRONIZE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_BUG_BUZZ, MOVE_EXTRASENSORY, MOVE_POWER_GEM, MOVE_CONFUSE_RAY},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_AIR_CUTTER, MOVE_SILVER_WIND, MOVE_SCALD, MOVE_ROOST},
    },
};

// Name: Youngster Ben
static const struct TrainerMon sParty_Ben[] = {
    {
    .lvl = 32,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PINCURCHIN,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = ABILITY_ELECTRIC_SURGE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ZING_ZAP, MOVE_LIQUIDATION, MOVE_POISON_JAB, MOVE_THUNDER_WAVE},
    },
    {
    .lvl = 31,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DEDENNE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_CHEEK_POUCH,
    .nature = NATURE_TIMID,
    .moves = {MOVE_RISING_VOLTAGE, MOVE_DAZZLING_GLEAM, MOVE_GRASS_KNOT, MOVE_VOLT_SWITCH},
    },
    {
    .lvl = 31,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TOGEDEMARU,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_IRON_BARBS,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_ZING_ZAP, MOVE_IRON_HEAD, MOVE_U_TURN, MOVE_MAGNET_RISE},
    },
    {
    .lvl = 31,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ROTOM,
    .heldItem = ITEM_ELECTRIC_GEM,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_DISCHARGE, MOVE_HEX, MOVE_THUNDER_WAVE, MOVE_WILL_O_WISP},
    },
};

// Name: Guitarist Kirk
static const struct TrainerMon sParty_Kirk[] = {
    {
    .lvl = 31,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ZWEILOUS,
    .heldItem = ITEM_ROSELI_BERRY,
    .ability = ABILITY_HUSTLE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_DRAGON_PULSE, MOVE_DARK_PULSE, MOVE_HYPER_VOICE, MOVE_THUNDER_FANG},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CHATOT,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_KEEN_EYE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYPER_VOICE, MOVE_CHATTER, MOVE_HEAT_WAVE, MOVE_SING},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_GALVANIZE,
    .nature = NATURE_RASH,
    .moves = {MOVE_HYPER_VOICE, MOVE_FLAMETHROWER, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG},
    },
};

// Name: Battle Girl Vivian
static const struct TrainerMon sParty_Vivian[] = {
    {
    .lvl = 31,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CRABOMINABLE,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_HYPER_CUTTER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_SHARD},
    },
    {
    .lvl = 28,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DIGGERSBY,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_HUGE_POWER,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_STOMPING_TANTRUM, MOVE_BODY_SLAM, MOVE_BRICK_BREAK, MOVE_THUNDER_PUNCH},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_COMBUSKEN,
    .heldItem = ITEM_BLACK_BELT,
    .ability = ABILITY_SPEED_BOOST,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_FIRE_PUNCH, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_BULK_UP},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TOXTRICITY_LOW_KEY,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .ability = ABILITY_TECHNICIAN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_DRAIN_PUNCH, MOVE_TRAILBLAZE},
    },
};

// Name: Guitarist Shawn [Double]
static const struct TrainerMon sParty_Shawn[] = {
    {
    .lvl = 32,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VICTREEBEL,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_CHLOROPHYLL,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_LEAF_TORNADO, MOVE_VENOSHOCK, MOVE_KNOCK_OFF, MOVE_TOXIC},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOLEM_ALOLA,
    .heldItem = ITEM_MAGNET,
    .ability = ABILITY_STURDY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_ROCK_SLIDE, MOVE_IRON_HEAD, MOVE_STOMPING_TANTRUM},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARMAROUGE,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_MEGA_LAUNCHER,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYSHOCK, MOVE_MYSTICAL_FIRE, MOVE_FLASH_CANNON, MOVE_NIGHT_SHADE},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_VOLT_ABSORB,
    .nature = NATURE_TIMID,
    .moves = {MOVE_THUNDERBOLT, MOVE_ALLURING_VOICE, MOVE_SWIFT, MOVE_THUNDER_WAVE},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PERSIAN,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_TECHNICIAN,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_FURY_SWIPES, MOVE_AERIAL_ACE, MOVE_SHOCK_WAVE, MOVE_FAKE_OUT},
    },
};

// Name: Leader Wattson
static const struct TrainerMon sParty_Wattson1[] = {
    {
    .lvl = 32,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_EMOLGA,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_MOTOR_DRIVE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_THUNDERBOLT, MOVE_ENERGY_BALL, MOVE_AIR_SLASH, MOVE_U_TURN},
    },
    {
    .lvl = 30,
    .iv = IV_SPREAD_HIDDEN_POWER_FIRE,
    .species = SPECIES_SANDY_SHOCKS,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_TIMID,
    .moves = {MOVE_DISCHARGE, MOVE_SCORCHING_SANDS, MOVE_POWER_GEM, MOVE_HIDDEN_POWER_FIRE},
    },
    {
    .lvl = 30,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LUXRAY,
    .heldItem = ITEM_ELECTRIC_GEM,
    .ability = ABILITY_STRONG_JAW,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_THUNDER_FANG, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_SCARY_FACE},
    },
    {
    .lvl = 31,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCTOZOLT,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_VOLT_ABSORB,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BOLT_BEAK, MOVE_ICICLE_CRASH, MOVE_BULLDOZE, MOVE_ROCK_TOMB},
    },
    {
    .lvl = 31,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRACOZOLT,
    .heldItem = ITEM_MAGNET,
    .ability = ABILITY_VOLT_ABSORB,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDER_PUNCH, MOVE_HIGH_HORSEPOWER, MOVE_THUNDER_WAVE},
    },
    {
    .lvl = 32,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PAWMOT,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_IRON_FIST,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DOUBLE_SHOCK, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_SEED_BOMB},
    },
};

// Juan Split
// ==========

// Location: Route 111
// ===================

// Name: Camper Tyron and Kindler Hayden
static const struct TrainerMon sParty_Tyron[] = {
    {
    .lvl = 40,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HIPPOWDON,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SAND_STREAM,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_STOMPING_TANTRUM, MOVE_CRUNCH, MOVE_THUNDER_FANG, MOVE_FIRE_FANG},
    },
};

// Name: Camper Tyron and Kindler Hayden
static const struct TrainerMon sParty_Hayden[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SANDSLASH,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SAND_RUSH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRILL_RUN, MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_SHADOW_CLAW},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LYCANROC,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SAND_RUSH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ROCK_SLIDE, MOVE_STOMPING_TANTRUM, MOVE_SUCKER_PUNCH, MOVE_ACCELEROCK},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_STOUTLAND,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_SAND_RUSH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_STOMPING_TANTRUM, MOVE_REVERSAL},
    },
};

// Name: Aroma Lady Celina and Picnicker Bianca
static const struct TrainerMon sParty_Celina[] = {
    {
    .lvl = 40,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NINETALES_ALOLA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SNOW_WARNING,
    .nature = NATURE_TIMID,
    .moves = {MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_FREEZE_DRY, MOVE_ICY_WIND},
    },
};

// Name: Aroma Lady Celina and Picnicker Bianca
static const struct TrainerMon sParty_Bianca[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SANDSLASH_ALOLA,
    .heldItem = ITEM_ROWAP_BERRY,
    .ability = ABILITY_SLUSH_RUSH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ICE_PUNCH, MOVE_IRON_HEAD, MOVE_DRILL_RUN, MOVE_ICE_SHARD},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BEARTIC,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_SLUSH_RUSH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ICE_PUNCH, MOVE_BRICK_BREAK, MOVE_THROAT_CHOP, MOVE_HEAVY_SLAM},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCTOVISH,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_SLUSH_RUSH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ICICLE_CRASH, MOVE_WATERFALL, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH},
    },
};

// Name: Camper Travis and Cooltrainer Wilton
static const struct TrainerMon sParty_Travis[] = {
    {
    .lvl = 40,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_IAPAPA_BERRY,
    .ability = ABILITY_DRIZZLE,
    .nature = NATURE_CALM,
    .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_HYPNOSIS},
    },
};

// Name: Camper Travis and Cooltrainer Wilton
static const struct TrainerMon sParty_Wilton[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOLDUCK,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_FOCUS_BLAST},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_WACAN_BERRY,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_MODEST,
    .moves = {MOVE_AIR_SLASH, MOVE_SURF, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_DREDNAW,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LIQUIDATION, MOVE_ROCK_SLIDE, MOVE_SKITTER_SMACK, MOVE_HIGH_HORSEPOWER},
    },
};

// Location: Route 112
// ===================

// Name: Hiker Brice and Hiker Trent
static const struct TrainerMon sParty_Brice[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CONKELDURR,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_IRON_FIST,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_POISON_JAB, MOVE_STOMPING_TANTRUM},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DURALUDON,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_STALWART,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_STONE_EDGE, MOVE_THUNDER_WAVE},
    },
};

// Name: Hiker Brice and Hiker Trent
static const struct TrainerMon sParty_Trent[] = {
    {
    .lvl = 40,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BOMBIRDIER,
    .heldItem = ITEM_BLACK_GLASSES,
    .ability = ABILITY_ROCKY_PAYLOAD,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_ROOST},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DONPHAN,
    .heldItem = ITEM_GRASS_GEM,
    .ability = ABILITY_STURDY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_SEED_BOMB, MOVE_ICE_SPINNER, MOVE_ICE_SHARD},
    },
};

// Name: Kindler Bryant
static const struct TrainerMon sParty_Bryant[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TURTONATOR,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SHELL_ARMOR,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_SCORCHING_SANDS, MOVE_SCALE_SHOT},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HEATMOR,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_WHITE_SMOKE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_OVERHEAT, MOVE_FIRE_LASH, MOVE_STOMPING_TANTRUM, MOVE_ROCK_SLIDE},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WEEZING,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_EXPLOSION},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ROTOM_HEAT,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_OVERHEAT, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE},
    },
};

// Name: Lady Shayla
static const struct TrainerMon sParty_Shayla[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VILEPLUME,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_CHLOROPHYLL,
    .nature = NATURE_MODEST,
    .moves = {MOVE_ENERGY_BALL, MOVE_SLUDGE_BOMB, MOVE_MOONBLAST, MOVE_MOONLIGHT},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_APPLETUN,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_THICK_FAT,
    .nature = NATURE_QUIET,
    .moves = {MOVE_APPLE_ACID, MOVE_DRAGON_PULSE, MOVE_HEAVY_SLAM, MOVE_GROWTH},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARBOLIVA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SEED_SOWER,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYPER_VOICE, MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_MIRROR_COAT},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ROTOM_MOW,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_LEAF_STORM, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE},
    },
};

// Location: Fiery Path
// ====================

// Location: Route 111
// ===================

// Name: Picnicker Irene
static const struct TrainerMon sParty_Irene[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FARIGIRAF,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_CUD_CHEW,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYPER_VOICE, MOVE_TWIN_BEAM, MOVE_ENERGY_BALL, MOVE_NASTY_PLOT},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SIMISAGE,
    .heldItem = ITEM_GRASS_GEM,
    .ability = ABILITY_OVERGROW,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SEED_BOMB, MOVE_ACROBATICS, MOVE_LOW_SWEEP, MOVE_KNOCK_OFF},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SUDOWOODO,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_STURDY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_DRAIN_PUNCH, MOVE_TRAILBLAZE},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FALINKS,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_DEFIANT,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_FIRST_IMPRESSION, MOVE_ZEN_HEADBUTT, MOVE_SMART_STRIKE},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BLASTOISE,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_WATERFALL, MOVE_ICE_SPINNER, MOVE_ZEN_HEADBUTT, MOVE_SKULL_BASH},
    },
};

// Name: Camper Beau
static const struct TrainerMon sParty_Beau[] = {
    {
    .lvl = 40,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SCOLIPEDE,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_SPEED_BOOST,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_X_SCISSOR, MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_THROAT_CHOP},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_GOGOAT,
    .heldItem = ITEM_MIRACLE_SEED,
    .ability = ABILITY_SAP_SIPPER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SEED_BOMB, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_MILK_DRINK},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_KROOKODILE,
    .heldItem = ITEM_DARK_GEM,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CRUNCH, MOVE_STOMPING_TANTRUM, MOVE_LOW_SWEEP, MOVE_DRAGON_TAIL},
    },
    {
    .lvl = 40,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DUBWOOL,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_FLUFFY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_RETALIATE, MOVE_GRASSY_GLIDE, MOVE_PAYBACK, MOVE_REVERSAL},
    },
};

// Location: Route 113
// ===================

// Name: Poke Maniac Wyatt
static const struct TrainerMon sParty_Wyatt[] = {
    {
    .lvl = 40,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_STURDY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_ICE_PUNCH, MOVE_STEALTH_ROCK},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_CARNIVINE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_SLUDGE_BOMB, MOVE_GROWTH},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_QUAQUAVAL,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_MOXIE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_AQUA_CUTTER, MOVE_BRICK_BREAK, MOVE_ACROBATICS, MOVE_AQUA_JET},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_DURANT,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = ABILITY_SWARM,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_FIRST_IMPRESSION, MOVE_X_SCISSOR, MOVE_IRON_HEAD, MOVE_STOMPING_TANTRUM},
    },
};

// Name: Camper Lawrence
static const struct TrainerMon sParty_Lawrence[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_UNNERVE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BODY_SLAM, MOVE_FIRE_FANG, MOVE_PSYCHIC_FANGS, MOVE_THUNDER_FANG},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_STATIC,
    .nature = NATURE_MODEST,
    .moves = {MOVE_THUNDERBOLT, MOVE_DRAGON_PULSE, MOVE_POWER_GEM, MOVE_THUNDER_WAVE},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TAUROS_PALDEA_AQUA,
    .heldItem = ITEM_LIECHI_BERRY,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_RAGING_BULL, MOVE_EARTHQUAKE, MOVE_AQUA_JET},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PINSIR,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_MOXIE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_X_SCISSOR, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
    },
};

// Name: Ninja Boy Lao and Ninja Boy Lung
static const struct TrainerMon sParty_Lao[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GRIMMSNARL,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_PRANKSTER,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_FALSE_SURRENDER, MOVE_SPIRIT_BREAK, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TYPHLOSION_HISUI,
    .heldItem = ITEM_BRIGHT_POWDER,
    .ability = ABILITY_FRISK,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_BURNING_JEALOUSY, MOVE_INFERNAL_PARADE, MOVE_THUNDER_PUNCH, MOVE_WILL_O_WISP},
    },
};

// Name: Ninja Boy Lao and Ninja Boy Lung
static const struct TrainerMon sParty_Lung[] = {
    {
    .lvl = 40,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_CURSED_BODY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SHADOW_FORCE, MOVE_SHADOW_CLAW, MOVE_GUNK_SHOT, MOVE_WILL_O_WISP},
    },
    {
    .lvl = 40,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_FOCUS_BAND,
    .ability = ABILITY_WATER_ABSORB,
    .nature = NATURE_MODEST,
    .moves = {MOVE_ENERGY_BALL, MOVE_DARK_PULSE, MOVE_FOCUS_BLAST, MOVE_DESTINY_BOND},
    },
};

// Name: Twins Tori & Tia [Double]
static const struct TrainerMon sParty_ToriAndTia[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_SOFT_SAND,
    .ability = ABILITY_FLAME_BODY,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_FLARE_BLITZ, MOVE_SMART_STRIKE, MOVE_HIGH_HORSEPOWER, MOVE_MORNING_SUN},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_RAPIDASH_GALAR,
    .heldItem = ITEM_SOFT_SAND,
    .ability = ABILITY_PASTEL_VEIL,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_PLAY_ROUGH, MOVE_PSYCHO_CUT, MOVE_HIGH_HORSEPOWER, MOVE_MORNING_SUN},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WEAVILE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_PRESSURE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_THROAT_CHOP, MOVE_ICE_PUNCH, MOVE_X_SCISSOR, MOVE_FAKE_OUT},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SNEASLER,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_UNBURDEN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_POISON_JAB, MOVE_BRICK_BREAK, MOVE_X_SCISSOR, MOVE_FAKE_OUT},
    },
};

// Name: Hex Maniac Madeline [Double]
static const struct TrainerMon sParty_Madeline[] = {
    {
    .lvl = 38,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_MUSHARNA,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_TELEPATHY,
    .nature = NATURE_RELAXED,
    .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_RECOVER, MOVE_TRICK_ROOM},
    },
    {
    .lvl = 38,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_PERRSERKER,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_BATTLE_ARMOR,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH, MOVE_FAKE_OUT},
    },
    {
    .lvl = 38,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_HUNTAIL,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_WATER_VEIL,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_SUPER_FANG},
    },
    {
    .lvl = 38,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_MAROWAK_ALOLA,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_ROCK_HEAD,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_SHADOW_BONE, MOVE_FIRE_PUNCH, MOVE_BONEMERANG, MOVE_THUNDER_PUNCH},
    },
    {
    .lvl = 38,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_MARACTUS,
    .heldItem = ITEM_GRASS_GEM,
    .ability = ABILITY_STORM_DRAIN,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_LEAF_STORM, MOVE_SEED_BOMB, MOVE_DRAIN_PUNCH, MOVE_SPIKY_SHIELD},
    },
};

// Name: Picknicker Sophie [Double]
static const struct TrainerMon sParty_Sophie[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_RILLABOOM,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_GRASSY_SURGE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRUM_BEATING, MOVE_HAMMER_ARM, MOVE_HIGH_HORSEPOWER, MOVE_FAKE_OUT},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SIMIPOUR,
    .heldItem = ITEM_WATER_GEM,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_NAIVE,
    .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_KNOCK_OFF, MOVE_ACROBATICS},
    },
    {
    .lvl = 39,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SANDSLASH,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SAND_RUSH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRILL_RUN, MOVE_POISON_JAB, MOVE_X_SCISSOR, MOVE_PROTECT},
    },
    {
    .lvl = 39,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SLOWKING_GALAR,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_CURIOUS_MEDICINE,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_EERIE_SPELL, MOVE_SCALD, MOVE_YAWN},
    },
    {
    .lvl = 39,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_TRIPLE_AXEL, MOVE_DRILL_RUN, MOVE_FAKE_OUT},
    },
};

// Location: Fallarbor Town
// ========================

// Location: Route 114
// ===================

// Name: Fisherman Claude
static const struct TrainerMon sParty_Claude[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_HUGE_POWER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PLAY_ROUGH, MOVE_WATERFALL, MOVE_ICE_SPINNER, MOVE_AQUA_JET},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SEAKING,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_LIGHTNING_ROD,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LIQUIDATION, MOVE_POISON_JAB, MOVE_DRILL_RUN, MOVE_AGILITY},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WUGTRIO,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_GOOEY,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_TRIPLE_DIVE, MOVE_FINAL_GAMBIT},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_QWILFISH,
    .heldItem = ITEM_POISON_GEM,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_WATERFALL, MOVE_POISON_JAB, MOVE_FELL_STINGER, MOVE_AQUA_JET},
    },
    {
    .lvl = 39,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TATSUGIRI,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_STORM_DRAIN,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SURF, MOVE_DRAGON_PULSE, MOVE_ICY_WIND, MOVE_MIRROR_COAT},
    },
};

// Name: Kindler Bernie
static const struct TrainerMon sParty_Bernie1[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_DROUGHT,
    .nature = NATURE_TIMID,
    .moves = {MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_EARTH_POWER, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_COALOSSAL,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_STEAM_ENGINE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_METEOR_BEAM, MOVE_POWER_GEM, MOVE_INCINERATE, MOVE_SOLAR_BEAM},
    },
    {
    .lvl = 39,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CASTFORM,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_FORECAST,
    .nature = NATURE_MODEST,
    .moves = {MOVE_FIRE_BLAST, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_ENERGY_BALL},
    },
    {
    .lvl = 39,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_CHLOROPHYLL,
    .nature = NATURE_HASTY,
    .moves = {MOVE_SOLAR_BEAM, MOVE_MOONBLAST, MOVE_WEATHER_BALL, MOVE_GROWTH},
    },
};

// Name: Fisherman Nolan
static const struct TrainerMon sParty_Nolan[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_OVERQWIL,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CRUNCH, MOVE_POISON_JAB, MOVE_BARB_BARRAGE, MOVE_TOXIC_SPIKES},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_ADAPTABILITY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_RAZOR_SHELL, MOVE_KNOCK_OFF, MOVE_SUPERPOWER, MOVE_AQUA_JET},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SLOWKING,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_REGENERATOR,
    .nature = NATURE_RELAXED,
    .moves = {MOVE_PSYCHIC, MOVE_SCALD, MOVE_CHILLY_RECEPTION, MOVE_SLACK_OFF},
    },
    {
    .lvl = 39,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_ICE_BODY,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_MALE,
    .moves = {MOVE_LIQUIDATION, MOVE_AVALANCHE, MOVE_EARTHQUAKE, MOVE_ATTRACT},
    },
};

// Name: Fisherman Kai
static const struct TrainerMon sParty_Kai[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BASCULIN,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_ADAPTABILITY,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_LIQUIDATION, MOVE_TAKE_DOWN, MOVE_CRUNCH, MOVE_AQUA_JET},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VELUZA,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SHARPNESS,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_AQUA_CUTTER, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_SLASH},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_ANALYTIC,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_CONFUSE_RAY},
    },
    {
    .lvl = 39,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DONDOZO,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_UNAWARE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_ICE_FANG},
    },
};

// Name: Teammates Tyra & Ivy [Double]
static const struct TrainerMon sParty_TyraAndIvy[] = {
    {
    .lvl = 42,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_POISON_POINT,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_ENERGY_BALL, MOVE_EXTRASENSORY, MOVE_DAZZLING_GLEAM},
    },
    {
    .lvl = 42,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_STURDY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_STONE_EDGE, MOVE_STOMPING_TANTRUM, MOVE_HAMMER_ARM, MOVE_FIRE_PUNCH},
    },
};

// Name: Picknicker Nancy [Double]
static const struct TrainerMon sParty_Nancy[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_STATIC,
    .nature = NATURE_BOLD,
    .moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_CHARGE_BEAM, MOVE_FOLLOW_ME},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PRIMARINA,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_LIQUID_VOICE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYPER_VOICE, MOVE_DAZZLING_GLEAM, MOVE_ICE_BEAM, MOVE_SING},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MAGMAR,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_FLAME_BODY,
    .nature = NATURE_BOLD,
    .moves = {MOVE_FLAMETHROWER, MOVE_PSYCHIC, MOVE_SCORCHING_SANDS, MOVE_FOLLOW_ME},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TSAREENA,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_QUEENLY_MAJESTY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_TROP_KICK, MOVE_KNOCK_OFF, MOVE_TRIPLE_AXEL, MOVE_LOW_KICK},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_TINTED_LENS,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYPER_VOICE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_HYPNOSIS},
    },
};

// Name: Picknicker Charlotte
static const struct TrainerMon sParty_Charlotte[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TORTERRA,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_OVERGROW,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_EARTHQUAKE, MOVE_SEED_BOMB, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_FLASH_FIRE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_FLARE_BLITZ, MOVE_DOUBLE_EDGE, MOVE_SUPERPOWER, MOVE_TRAILBLAZE},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOLISOPOD,
    .heldItem = ITEM_SILVER_POWDER,
    .ability = ABILITY_EMERGENCY_EXIT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_FIRST_IMPRESSION, MOVE_X_SCISSOR, MOVE_RAZOR_SHELL, MOVE_AQUA_JET},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KLINKLANG,
    .heldItem = ITEM_STEEL_GEM,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_GEAR_GRIND, MOVE_WILD_CHARGE, MOVE_ASSURANCE, MOVE_SHIFT_GEAR},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PASSIMIAN,
    .heldItem = ITEM_LIECHI_BERRY,
    .ability = ABILITY_DEFIANT,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_ACROBATICS},
    },
};

// Name: Camper Shane
static const struct TrainerMon sParty_Shane[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_INFERNAPE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_IRON_FIST,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_FIRE_PUNCH, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_WATER_ABSORB,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_SCALD, MOVE_ALLURING_VOICE, MOVE_SHADOW_BALL, MOVE_TRAILBLAZE},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LILLIGANT_HISUI,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_LEAF_GUARD,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_LEAF_BLADE, MOVE_POISON_JAB, MOVE_ICE_SPINNER},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_MUDSDALE,
    .heldItem = ITEM_AGUAV_BERRY,
    .ability = ABILITY_STAMINA,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_HEAVY_SLAM, MOVE_BODY_PRESS, MOVE_LOW_KICK},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_COPPERAJAH,
    .heldItem = ITEM_METAL_COAT,
    .ability = ABILITY_HEAVY_METAL,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_IRON_HEAD, MOVE_HIGH_HORSEPOWER, MOVE_PLAY_ROUGH, MOVE_ZEN_HEADBUTT},
    },
};

// Name: Picnicker Angelina
static const struct TrainerMon sParty_Angelina[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_EMPOLEON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_TIMID,
    .moves = {MOVE_SURF, MOVE_FLASH_CANNON, MOVE_ROOST, MOVE_STEALTH_ROCK},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_LEAFEON,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_TECHNICIAN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BULLET_SEED, MOVE_X_SCISSOR, MOVE_TRAILBLAZE, MOVE_YAWN},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_PYROAR,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_UNNERVE,
    .nature = NATURE_SERIOUS,
    .gender = TRAINER_MON_MALE,
    .moves = {MOVE_FLAMETHROWER, MOVE_HYPER_VOICE, MOVE_SOLAR_BEAM, MOVE_WILL_O_WISP},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BRICK_BREAK, MOVE_SHADOW_PUNCH, MOVE_BULLET_PUNCH, MOVE_FAKE_OUT},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_NIDOQUEEN,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_SHEER_FORCE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_SURF},
    },
};

// Location: Meteor Falls 1F1R
// ===========================

// Location: Meteor Falls 1F2R
// ===========================

// Location: Meteor Falls B1F1R
// ============================

// Location: Meteor Falls B1F2R
// ============================

// Location: Meteor Path [Double Encounter]
// ========================================

// Location: Jagged Pass [Double Encounter]
// ========================================

// Name: Picknicker Diana and Camper Ethan
static const struct TrainerMon sParty_Diana1[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_STARAPTOR,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_TAKE_DOWN, MOVE_ACROBATICS, MOVE_CLOSE_COMBAT, MOVE_U_TURN},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_FIRE_GEM,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_TEMPER_FLARE, MOVE_PLAY_ROUGH, MOVE_EXTREME_SPEED, MOVE_HOWL},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LUXRAY,
    .heldItem = ITEM_ELECTRIC_GEM,
    .ability = ABILITY_GUTS,
    .nature = NATURE_JOLLY,
    .status = STATUS1_POISON,
    .moves = {MOVE_THUNDER_FANG, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_HOWL},
    },
};

// Name: Picknicker Diana and Camper Ethan
static const struct TrainerMon sParty_Ethan1[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_HEADBUTT, MOVE_HAMMER_ARM, MOVE_ROCK_TOMB, MOVE_FAKE_OUT},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MEOWSTIC_F,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_MYSTIC_CHARM,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_FUTURE_SIGHT, MOVE_FAKE_OUT},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TINKATON,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_OWN_TEMPO,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_ICE_HAMMER, MOVE_FAKE_OUT},
    },
};

// Location: Lavaridge Town
// ========================

// Name: Brendan One [Guards Eon Ticket]
static const struct TrainerMon sParty_BrendanLavaridgeTown[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_STORM_DRAIN,
    .nature = NATURE_CALM,
    .moves = {MOVE_POWER_GEM, MOVE_GIGA_DRAIN, MOVE_MIRROR_COAT, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ESPEON,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_SYNCHRONIZE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_GLITZY_GLOW, MOVE_SHADOW_BALL, MOVE_SIGNAL_BEAM, MOVE_MORNING_SUN},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_EJECT_PACK,
    .ability = ABILITY_GALVANIZE,
    .nature = NATURE_NAIVE,
    .moves = {MOVE_HYPER_VOICE, MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_PSYCHIC_FANGS},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GALLADE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SHARPNESS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BRICK_BREAK, MOVE_PSYCHO_CUT, MOVE_AERIAL_ACE, MOVE_SHADOW_SNEAK},
    },
    {
    .lvl = 40,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_WATERFALL, MOVE_HAMMER_ARM, MOVE_ROCK_SLIDE},
    },
    {
    .lvl = 40,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CHI_YU,
    .heldItem = ITEM_BLACK_GLASSES,
    .ability = ABILITY_BEADS_OF_RUIN,
    .nature = NATURE_HARDY,
    .moves = {MOVE_INCINERATE, MOVE_SNARL, MOVE_HEX, MOVE_FLAME_CHARGE},
    },
};

// Location: Cave of Origin
// ========================

// Location: Sootopolis City
// =========================

// Name: Beauty Connie
static const struct TrainerMon sParty_Connie[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FERALIGATR,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SHEER_FORCE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_AQUA_JET},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRAGALGE,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_POISON_TOUCH,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_DRAGON_PULSE, MOVE_SURF, MOVE_FLIP_TURN},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_SHARP_BEAK,
    .ability = ABILITY_MOXIE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BOUNCE, MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_DRAGON_DANCE},
    },
    {
    .lvl = 40,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_MARVEL_SCALE,
    .nature = NATURE_MODEST,
    .status = STATUS1_BURN,
    .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_THUNDER_WAVE},
    },
};

// Name: Lass Andrea
static const struct TrainerMon sParty_Andrea[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SHELL_ARMOR,
    .nature = NATURE_BOLD,
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_ICY_WIND},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CINCCINO,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SKILL_LINK,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_TAIL_SLAP, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_TRIPLE_AXEL},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VIRIZION,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_JUSTIFIED,
    .nature = NATURE_MODEST,
    .moves = {MOVE_AURA_SPHERE, MOVE_GIGA_DRAIN, MOVE_AIR_SLASH, MOVE_CALM_MIND},
    },
    {
    .lvl = 39,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GRENINJA,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_WATER_SHURIKEN, MOVE_NIGHT_SLASH, MOVE_EXTRASENSORY, MOVE_U_TURN},
    },
};

// Name: Lady Daphne [Left]
static const struct TrainerMon sParty_Daphne[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SILVALLY_WATER,
    .heldItem = ITEM_WATER_MEMORY,
    .ability = ABILITY_RKS_SYSTEM,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_MULTI_ATTACK, MOVE_X_SCISSOR, MOVE_ROCK_SLIDE, MOVE_TRI_ATTACK},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FROSLASS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_CURSED_BODY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_DESTINY_BOND},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SWANNA,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_NO_GUARD,
    .nature = NATURE_TIMID,
    .moves = {MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_BLIZZARD, MOVE_U_TURN},
    },
    {
    .lvl = 40,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SNIPER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRACO_METEOR, MOVE_LIQUIDATION, MOVE_BREAKING_SWIPE, MOVE_FOCUS_ENERGY},
    },
};

// Name: Pokefan Annika [Right]
static const struct TrainerMon sParty_Annika[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PINCURCHIN,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = ABILITY_ELECTRIC_SURGE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_RISING_VOLTAGE, MOVE_MUDDY_WATER, MOVE_POISON_JAB, MOVE_THUNDER_WAVE},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DHELMISE,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_STEELWORKER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_POWER_WHIP, MOVE_POLTERGEIST, MOVE_SHADOW_CLAW, MOVE_ANCHOR_SHOT},
    },
    {
    .lvl = 40,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_VOLT_ABSORB,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SURF, MOVE_RISING_VOLTAGE, MOVE_ICE_BEAM, MOVE_VOLT_SWITCH},
    },
    {
    .lvl = 40,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_RAICHU_ALOLA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SURGE_SURFER,
    .nature = NATURE_MODEST,
    .moves = {MOVE_RISING_VOLTAGE, MOVE_PSYCHIC, MOVE_SURF, MOVE_ALLURING_VOICE},
    },
};

// Name: Beauty Tiffany [Left]
static const struct TrainerMon sParty_Tiffany[] = {
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NINETALES_ALOLA,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = ABILITY_SNOW_WARNING,
    .nature = NATURE_TIMID,
    .moves = {MOVE_ICE_BEAM, MOVE_MOONBLAST, MOVE_FREEZE_DRY, MOVE_AURORA_VEIL},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DEWGONG,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_ICE_BODY,
    .nature = NATURE_MODEST,
    .moves = {MOVE_BLIZZARD, MOVE_HYDRO_PUMP, MOVE_ALLURING_VOICE, MOVE_FLIP_TURN},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BEARTIC,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SLUSH_RUSH,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_ICICLE_CRASH, MOVE_LIQUIDATION, MOVE_THROAT_CHOP, MOVE_REVERSAL},
    },
    {
    .lvl = 39,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MAMOSWINE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_THICK_FAT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_ICICLE_CRASH, MOVE_KNOCK_OFF, MOVE_ICE_SHARD},
    },
};

// Name: Beauty Bridget [Right]
static const struct TrainerMon sParty_Bridget[] = {
    {
    .lvl = 40,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_DRIZZLE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HURRICANE, MOVE_WEATHER_BALL, MOVE_TAILWIND, MOVE_U_TURN},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOREBYSS,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_FEMALE,
    .moves = {MOVE_SPARKLING_ARIA, MOVE_ALLURING_VOICE, MOVE_PSYCHIC_NOISE, MOVE_ATTRACT},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PHIONE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_HYDRATION,
    .nature = NATURE_TIMID,
    .moves = {MOVE_SURF, MOVE_ALLURING_VOICE, MOVE_GRASS_KNOT, MOVE_FLIP_TURN},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BELLIBOLT,
    .heldItem = ITEM_IAPAPA_BERRY,
    .ability = ABILITY_ELECTROMORPHOSIS,
    .nature = NATURE_MODEST,
    .moves = {MOVE_THUNDER, MOVE_MUDDY_WATER, MOVE_MUD_SHOT, MOVE_SLACK_OFF},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOLDUCK,
    .heldItem = ITEM_TWISTED_SPOON,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_CALM_MIND},
    },
};

// Name: Leader Juan
static const struct TrainerMon sParty_Juan1[] = {
    {
    .lvl = 39,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_IAPAPA_BERRY,
    .ability = ABILITY_DRIZZLE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_HYPNOSIS},
    },
    {
    .lvl = 38,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BASCULEGION_F,
    .heldItem = ITEM_WATER_GEM,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SHADOW_BALL, MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_FLIP_TURN},
    },
    {
    .lvl = 40,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_RAIN_DISH,
    .nature = NATURE_TIMID,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_SCALD, MOVE_HEX, MOVE_TOXIC},
    },
    {
    .lvl = 39,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_QUAQUAVAL,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_MOXIE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BRICK_BREAK, MOVE_AQUA_CUTTER, MOVE_ACROBATICS, MOVE_ROOST},
    },
    {
    .lvl = 39,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_NATURAL_CURE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_THUNDER, MOVE_SURF, MOVE_PSYCHIC, MOVE_ICY_WIND},
    },
    {
    .lvl = 40,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCHALUDON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_STALWART,
    .nature = NATURE_TIMID,
    .moves = {MOVE_ELECTRO_SHOT, MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_AURA_SPHERE},
    },
};

// Steven Split
// ============

// Location: Tera Island
// ======================

// Name: Aroma Lady Mia
static const struct TrainerMon sParty_Mia[] = {
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_LIECHI_BERRY,
    .ability = ABILITY_FLAME_BODY,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_FLARE_BLITZ, MOVE_DOUBLE_EDGE, MOVE_HIGH_HORSEPOWER, MOVE_FLAME_CHARGE},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ROTOM_MOW,
    .heldItem = ITEM_EJECT_PACK,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_LEAF_STORM, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_SHADOW_BALL},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FARIGIRAF,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_ARMOR_TAIL,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYPER_VOICE, MOVE_TWIN_BEAM, MOVE_THUNDERBOLT, MOVE_AGILITY},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_CUSTAP_BERRY,
    .ability = ABILITY_NO_GUARD,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DYNAMIC_PUNCH, MOVE_STONE_EDGE, MOVE_POISON_JAB, MOVE_SEISMIC_TOSS},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MUK_ALOLA,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_POISON_TOUCH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH, MOVE_SHADOW_SNEAK},
    },
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_ADAMANT,
    .teraType = TYPE_BUG,
    .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_DARTS, MOVE_TERA_BLAST, MOVE_DRAGON_DANCE},
    },
};

// Name: Ace Trainer Cap
static const struct TrainerMon sParty_Cap[] = {
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_WIND_RIDER,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_TAILWIND, MOVE_REVERSAL, MOVE_KNOCK_OFF, MOVE_LEAF_BLADE},
    },
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_QUAGSIRE,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = ABILITY_WATER_ABSORB,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_AVALANCHE, MOVE_CURSE, MOVE_EARTHQUAKE, MOVE_LIQUIDATION},
    },
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DODRIO,
    .heldItem = ITEM_GROUND_GEM,
    .ability = ABILITY_TECHNICIAN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_SWORDS_DANCE, MOVE_DRILL_RUN},
    },
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WHIMSICOTT,
    .heldItem = ITEM_KEBIA_BERRY,
    .ability = ABILITY_WIND_RIDER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PLAY_ROUGH, MOVE_SEED_BOMB, MOVE_KNOCK_OFF, MOVE_TAILWIND},
    },
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ORTHWORM,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_EARTH_EATER,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_BODY_PRESS, MOVE_COIL},
    },
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VANILLUXE,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = ABILITY_SNOW_WARNING,
    .nature = NATURE_TIMID,
    .teraType = TYPE_ICE,
    .moves = {MOVE_ICE_BEAM, MOVE_FREEZE_DRY},
    },
};

// Name: Parasol Lady Daina
static const struct TrainerMon sParty_Daina[] = {
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_THUNDURUS,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_PRANKSTER,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_HAMMER_ARM, MOVE_ACROBATICS, MOVE_U_TURN},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ZOROARK,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_ILLUSION,
    .nature = NATURE_TIMID,
    .moves = {MOVE_NIGHT_DAZE, MOVE_EXTRASENSORY, MOVE_FLAMETHROWER, MOVE_CALM_MIND},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MESPRIT,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ZEN_HEADBUTT, MOVE_DRAIN_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_EXCADRILL,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SAND_RUSH,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_IRON_HEAD, MOVE_DRILL_RUN, MOVE_BRICK_BREAK, MOVE_RAPID_SPIN},
    },
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SINISTCHA,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_HOSPITALITY,
    .nature = NATURE_MODEST,
    .moves = {MOVE_MATCHA_GOTCHA, MOVE_SHADOW_BALL, MOVE_SCALD, MOVE_GIGA_DRAIN},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SCIZOR,
    .heldItem = ITEM_BUG_GEM,
    .ability = ABILITY_TECHNICIAN,
    .nature = NATURE_CAREFUL,
    .teraType = TYPE_FLYING,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_BUG_BITE, MOVE_BULLET_PUNCH, MOVE_DOUBLE_HIT},
    },
};

// Name: Ace Trainer Duke
static const struct TrainerMon sParty_Duke[] = {
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ANNIHILAPE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_DEFIANT,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_RAGE_FIST, MOVE_STEALTH_ROCK, MOVE_DRAIN_PUNCH, MOVE_SEED_BOMB},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PERRSERKER,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = ABILITY_TOUGH_CLAWS,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_U_TURN, MOVE_KNOCK_OFF},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOTHITELLE,
    .heldItem = ITEM_BLUNDER_POLICY,
    .ability = ABILITY_COMPETITIVE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_CALM_MIND, MOVE_THUNDERBOLT},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GUZZLORD,
    .heldItem = ITEM_ROSELI_BERRY,
    .ability = ABILITY_BEAST_BOOST,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_DRAGON_CLAW, MOVE_HEAVY_SLAM},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KROOKODILE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_MOXIE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_POISON_JAB},
    },
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DECIDUEYE_HISUI,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SCRAPPY,
    .nature = NATURE_IMPISH,
    .teraType = TYPE_FLYING,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_BRAVE_BIRD, MOVE_LEAF_BLADE, MOVE_SUCKER_PUNCH},
    },
};

// Name: Ranger Emory
static const struct TrainerMon sParty_Emory[] = {
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRAGALGE,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_POISON_POINT,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_MUDDY_WATER, MOVE_ICE_BEAM, MOVE_TOXIC_SPIKES},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NOIVERN,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_INFILTRATOR,
    .nature = NATURE_MODEST,
    .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_HYPER_VOICE, MOVE_U_TURN},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_NEVER_MELT_ICE,
    .ability = ABILITY_SKILL_LINK,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_ICICLE_SPEAR, MOVE_RAZOR_SHELL, MOVE_ROCK_BLAST, MOVE_ICE_SHARD},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_OBSTAGOON,
    .heldItem = ITEM_BRIGHT_POWDER,
    .ability = ABILITY_DEFIANT,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_KNOCK_OFF, MOVE_BODY_SLAM, MOVE_REVENGE, MOVE_OBSTRUCT},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MIENSHAO,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_ICE_SPINNER},
    },
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VENUSAUR,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_OVERGROW,
    .nature = NATURE_TIMID,
    .teraType = TYPE_FIRE,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_ENERGY_BALL, MOVE_TERA_BLAST, MOVE_VENOSHOCK},
    },
};

// Name: Breeder Melinda
static const struct TrainerMon sParty_Melinda[] = {
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BOLTUND,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_STRONG_JAW,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_THUNDER_FANG, MOVE_ICE_FANG, MOVE_PLAY_ROUGH, MOVE_THUNDER_WAVE},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GLIMMORA,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_TOXIC_DEBRIS,
    .nature = NATURE_TIMID,
    .moves = {MOVE_METEOR_BEAM, MOVE_POWER_GEM, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SAWK,
    .heldItem = ITEM_EJECT_BUTTON,
    .ability = ABILITY_STURDY,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_RETALIATE, MOVE_POISON_JAB, MOVE_LOW_SWEEP},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FLOATZEL,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_WATER_VEIL,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_LIQUIDATION, MOVE_ICE_SPINNER, MOVE_AQUA_JET, MOVE_BULK_UP},
    },
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ALCREMIE,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = ABILITY_SWEET_VEIL,
    .nature = NATURE_MODEST,
    .moves = {MOVE_MISTY_EXPLOSION},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_SWARM,
    .nature = NATURE_ADAMANT,
    .teraType = TYPE_ROCK,
    .moves = {MOVE_ROCK_BLAST, MOVE_PIN_MISSILE, MOVE_ARM_THRUST, MOVE_BULLET_SEED},
    },
};

// Name: Ruin Maniac Gaben
static const struct TrainerMon sParty_Gaben[] = {
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SAMUROTT_HISUI,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SHARPNESS,
    .nature = NATURE_NAIVE,
    .moves = {MOVE_AQUA_CUTTER, MOVE_SACRED_SWORD, MOVE_CEASELESS_EDGE, MOVE_AIR_SLASH},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MANDIBUZZ,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_BIG_PECKS,
    .nature = NATURE_BOLD,
    .moves = {MOVE_TAILWIND, MOVE_TOXIC, MOVE_ROOST, MOVE_FOUL_PLAY},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SCOLIPEDE,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_SPEED_BOOST,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_X_SCISSOR, MOVE_POISON_JAB, MOVE_STOMPING_TANTRUM, MOVE_ROCK_SLIDE},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HYDRAPPLE,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SUPERSWEET_SYRUP,
    .nature = NATURE_BOLD,
    .moves = {MOVE_BODY_PRESS, MOVE_ENERGY_BALL, MOVE_FICKLE_BEAM, MOVE_EARTH_POWER},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DIANCIE,
    .heldItem = ITEM_BABIRI_BERRY,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_DIAMOND_STORM, MOVE_BODY_PRESS, MOVE_PLAY_ROUGH, MOVE_ROCK_POLISH},
    },
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CHANDELURE,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_FLASH_FIRE,
    .nature = NATURE_TIMID,
    .teraType = TYPE_STEEL,
    .moves = {MOVE_ENERGY_BALL, MOVE_FLAMETHROWER, MOVE_PSYCHIC, MOVE_SHADOW_BALL},
    },
};

// Name: Collector Damon
static const struct TrainerMon sParty_Damon[] = {
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CYCLIZAR,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_SHED_SKIN,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_SHED_TAIL, MOVE_DRAGON_PULSE, MOVE_HYPER_VOICE, MOVE_U_TURN},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PRIMEAPE,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_VITAL_SPIRIT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CROSS_CHOP, MOVE_RAGE_FIST, MOVE_LASH_OUT, MOVE_COUNTER},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DELPHOX,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYSHOCK, MOVE_MYSTICAL_FIRE, MOVE_DAZZLING_GLEAM, MOVE_WILL_O_WISP},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TINKATON,
    .heldItem = ITEM_FAIRY_FEATHER,
    .ability = ABILITY_OWN_TEMPO,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_ICE_HAMMER, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRAPION,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SNIPER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CROSS_POISON, MOVE_NIGHT_SLASH, MOVE_BUG_BITE, MOVE_TOXIC_SPIKES},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_VOLT_ABSORB,
    .nature = NATURE_TIMID,
    .teraType = TYPE_GRASS,
    .moves = {MOVE_THUNDERBOLT, MOVE_TERA_BLAST, MOVE_SHADOW_BALL, MOVE_SUBSTITUTE},
    },
};

// Name: Ranger Luella
static const struct TrainerMon sParty_Luella[] = {
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LYCANROC_DUSK,
    .heldItem = ITEM_RED_CARD,
    .ability = ABILITY_TOUGH_CLAWS,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_ROCK_SLIDE, MOVE_PLAY_ROUGH, MOVE_DRILL_RUN, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SIGILYPH,
    .heldItem = ITEM_KINGS_ROCK,
    .ability = ABILITY_WONDER_SKIN,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYCHIC, MOVE_AIR_SLASH, MOVE_ALLURING_VOICE, MOVE_TAILWIND},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_TINTED_LENS,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYPER_VOICE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_TAILWIND},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VILEPLUME,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_CHLOROPHYLL,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_MOONBLAST, MOVE_MOONLIGHT},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HOUNDSTONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_SAND_RUSH,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_LAST_RESPECTS, MOVE_POLTERGEIST, MOVE_PSYCHIC_FANGS, MOVE_BODY_PRESS},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MISMAGIUS,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_TIMID,
    .teraType = TYPE_FAIRY,
    .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE},
    },
};

// Name: Hiker Jay
static const struct TrainerMon sParty_Jay[] = {
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_COBALION,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_JUSTIFIED,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SACRED_SWORD, MOVE_IRON_HEAD, MOVE_MEGAHORN, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_RHYPERIOR,
    .heldItem = ITEM_FOCUS_BAND,
    .ability = ABILITY_LIGHTNING_ROD,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_DRILL_RUN, MOVE_ROCK_SLIDE, MOVE_ICE_PUNCH, MOVE_BODY_PRESS},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TAPU_BULU,
    .heldItem = ITEM_KEBIA_BERRY,
    .ability = ABILITY_TELEPATHY,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_HORN_LEECH, MOVE_HIGH_HORSEPOWER, MOVE_DARKEST_LARIAT, MOVE_NATURES_MADNESS},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MAMOSWINE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_THICK_FAT,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_TRAILBLAZE},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SHARPNESS,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_RAZOR_SHELL, MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_RAPID_SPIN},
    },
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_IMPISH,
    .teraType = TYPE_FLYING,
    .moves = {MOVE_WATERFALL, MOVE_TERA_BLAST, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
    },
};

// Name: Sidney
static const struct TrainerMon sParty_Sidney[] = {
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_OGERPON,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_IVY_CUDGEL, MOVE_SUPERPOWER, MOVE_KNOCK_OFF, MOVE_SPIKY_SHIELD},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_BLACK_GLASSES,
    .ability = ABILITY_SHARPNESS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_X_SCISSOR, MOVE_SUCKER_PUNCH},
    },
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARMAROUGE,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_MEGA_LAUNCHER,
    .nature = NATURE_MODEST,
    .moves = {MOVE_ARMOR_CANNON, MOVE_PSYCHIC, MOVE_AURA_SPHERE, MOVE_DARK_PULSE},
    },
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SAMUROTT,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LIQUIDATION, MOVE_SACRED_SWORD, MOVE_KNOCK_OFF, MOVE_X_SCISSOR},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_URSHIFU,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_UNSEEN_FIST,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_WICKED_BLOW, MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_BULK_UP},
    },
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HYDREIGON,
    .heldItem = ITEM_PECHA_BERRY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_TIMID,
    .status = STATUS1_POISON,
    .teraType = TYPE_POISON,
    .moves = {MOVE_BELCH, MOVE_DRAGON_PULSE, MOVE_DARK_PULSE, MOVE_TAILWIND},
    },
};

// Location: Route 111 [Perma Sandstorm]
// =========================================

// Location: Mirage Tower 1F
// Location: Mirage Tower 2F
// Location: Mirage Tower 3F
// Location: Mirage Tower 4F
// =========================

// Name: Picnicker Becky
static const struct TrainerMon sParty_Becky[] = {
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GLIMMORA,
    .heldItem = ITEM_FOCUS_BAND,
    .ability = ABILITY_TOXIC_DEBRIS,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_POWER_GEM, MOVE_ENERGY_BALL, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DIGGERSBY,
    .heldItem = ITEM_NORMAL_GEM,
    .ability = ABILITY_HUGE_POWER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_WILD_CHARGE, MOVE_FIRE_PUNCH},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_STURDY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_EARTHQUAKE, MOVE_HEAVY_SLAM, MOVE_THUNDER_FANG, MOVE_DRAGON_TAIL},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_METEOR_BEAM, MOVE_WEATHER_BALL, MOVE_PSYCHIC, MOVE_ICE_BEAM},
    },
};

// Name: Hiker Devan
static const struct TrainerMon sParty_Devan[] = {
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GIGALITH,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_STURDY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ROCK_BLAST, MOVE_BODY_PRESS, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TING_LU,
    .heldItem = ITEM_AGUAV_BERRY,
    .ability = ABILITY_VESSEL_OF_RUIN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_EARTHQUAKE, MOVE_LASH_OUT, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_REUNICLUS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_MAGIC_GUARD,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL, MOVE_GRASS_KNOT},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MAGMORTAR,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .ability = ABILITY_FLAME_BODY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_FLAMETHROWER, MOVE_WEATHER_BALL, MOVE_PSYCHIC, MOVE_AURA_SPHERE},
    },
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CARBINK,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = ABILITY_STURDY,
    .nature = NATURE_BOLD,
    .moves = {MOVE_BODY_PRESS},
    },
};

// Name: Camper Brandan
static const struct TrainerMon sParty_Branden[] = {
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SUDOWOODO,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_STURDY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_GRASS_GEM,
    .ability = ABILITY_SAND_VEIL,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SEED_BOMB, MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_SPIKY_SHIELD},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_PALOSSAND,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_WATER_COMPACTION,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_SHADOW_BALL, MOVE_SCORCHING_SANDS, MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_SANDSLASH,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SAND_RUSH,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE},
    },
};

// Name: Ruin Maniac Bryan
static const struct TrainerMon sParty_Bryan[] = {
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TURTONATOR,
    .heldItem = ITEM_EJECT_PACK,
    .ability = ABILITY_SHELL_ARMOR,
    .nature = NATURE_QUIET,
    .moves = {MOVE_DRACO_METEOR, MOVE_OVERHEAT},
    },
    {
    .lvl = 52,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GLISCOR,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_HYPER_CUTTER,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_ACROBATICS, MOVE_ROCK_SLIDE, MOVE_U_TURN},
    },
    {
    .lvl = 52,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SAWK,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .ability = ABILITY_STURDY,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_THROAT_CHOP, MOVE_COUNTER},
    },
    {
    .lvl = 52,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRACOZOLT,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SAND_RUSH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BOLT_BEAK, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_STONE_EDGE},
    },
};

// Name: Picnicker Heidi [Double]
static const struct TrainerMon sParty_Heidi[] = {
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KLEAVOR,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_SHARPNESS,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_X_SCISSOR, MOVE_STONE_AXE, MOVE_NIGHT_SLASH, MOVE_AERIAL_ACE},
    },
    {
    .lvl = 52,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LYCANROC,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SAND_RUSH,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_STONE_EDGE, MOVE_DRILL_RUN, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG},
    },
    {
    .lvl = 52,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SAMUROTT_HISUI,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .ability = ABILITY_SHARPNESS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LIQUIDATION, MOVE_CEASELESS_EDGE, MOVE_SACRED_SWORD, MOVE_AQUA_JET},
    },
    {
    .lvl = 52,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CRUSTLE,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_WEAK_ARMOR,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_STONE_EDGE, MOVE_LEECH_LIFE, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF},
    },
    {
    .lvl = 52,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_EXCADRILL,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_SAND_RUSH,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_DRILL_RUN, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SUBSTITUTE},
    },
};

// Name: Camper Drew
static const struct TrainerMon sParty_Drew[] = {
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GRIMMSNARL,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = ABILITY_PRANKSTER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SPIRIT_BREAK, MOVE_LASH_OUT, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
    },
    {
    .lvl = 52,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_STOUTLAND,
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = ABILITY_SAND_RUSH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_RETALIATE, MOVE_PLAY_ROUGH, MOVE_BRICK_BREAK, MOVE_WORK_UP},
    },
    {
    .lvl = 52,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SIRFETCHD,
    .heldItem = ITEM_LEEK,
    .ability = ABILITY_SCRAPPY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_LEAF_BLADE, MOVE_DUAL_WINGBEAT, MOVE_FOCUS_ENERGY},
    },
    {
    .lvl = 52,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HIPPOWDON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SAND_FORCE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SUBSTITUTE, MOVE_SLACK_OFF},
    },
    {
    .lvl = 52,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NIDOKING,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SHEER_FORCE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER},
    },
};

// Location: Mirage Tunnel [Double Encounter]
// ==========================================

// Location: Mirage Town
// =====================

// Name: Hiker Marcos and Picnicker Daisy
static const struct TrainerMon sParty_Marcos[] = {
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GRANBULL,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PLAY_ROUGH, MOVE_CLOSE_COMBAT, MOVE_IRON_TAIL, MOVE_SUPER_FANG},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_METAL_COAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_FLASH_CANNON, MOVE_AURA_SPHERE, MOVE_DRAGON_PULSE, MOVE_EXTREME_SPEED},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_CHARCOAL,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_TEMPER_FLARE, MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_EXTREME_SPEED},
    },
};

// Name: Hiker Marcos and Picnicker Daisy
static const struct TrainerMon sParty_Daisy[] = {
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NIDOQUEEN,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SHEER_FORCE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TOEDSCRUEL,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_MYCELIUM_MIGHT,
    .nature = NATURE_MODEST,
    .moves = {MOVE_LEAF_STORM, MOVE_ENERGY_BALL, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_JYNX,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_RAIN_DISH,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_ENERGY_BALL, MOVE_FAKE_OUT},
    },
};

// Name: Lass Julia and Camper Rhett
static const struct TrainerMon sParty_Julia[] = {
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_EMBOAR,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_OVERHEAT, MOVE_FIRE_PUNCH, MOVE_DRAIN_PUNCH, MOVE_HIGH_HORSEPOWER},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_COPPERAJAH,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_HEAVY_METAL,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_HEAVY_SLAM, MOVE_HEADLONG_RUSH, MOVE_DOUBLE_EDGE, MOVE_POWER_WHIP},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_REVAVROOM,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_FILTER,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_SPIN_OUT, MOVE_POISON_JAB, MOVE_ZEN_HEADBUTT, MOVE_SHIFT_GEAR},
    },
};

// Name: Lass Julia and Camper Rhett
static const struct TrainerMon sParty_Rhett[] = {
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_ANALYTIC,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SCALD, MOVE_PSYSHOCK, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOREBYSS,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_ICY_WIND},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_OWN_TEMPO,
    .nature = NATURE_MODEST,
    .moves = {MOVE_ENERGY_BALL, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_FAKE_OUT},
    },
};

// Name: Collector Hector and Hex Maniac Nadia
static const struct TrainerMon sParty_Hector[] = {
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_EXCADRILL,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SAND_RUSH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRILL_RUN, MOVE_IRON_HEAD, MOVE_STONE_EDGE, MOVE_POISON_JAB},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LYCANROC,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_SAND_RUSH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH, MOVE_CRUNCH},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOLURK,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .ability = ABILITY_IRON_FIST,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_SHADOW_PUNCH, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH},
    },
};

// Name: Collector Hector and Hex Maniac Nadia
static const struct TrainerMon sParty_Nadia[] = {
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_SAND_STREAM,
    .nature = NATURE_SASSY,
    .moves = {MOVE_STONE_EDGE, MOVE_CRUNCH, MOVE_HIGH_HORSEPOWER, MOVE_ICE_PUNCH},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GHOLDENGO,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_GOOD_AS_GOLD,
    .nature = NATURE_MODEST,
    .moves = {MOVE_MAKE_IT_RAIN, MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GALLADE,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SHARPNESS,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_AERIAL_ACE},
    },
};

// Name: Leader Steven
static const struct TrainerMon sParty_Steven[] = {
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LANDORUS,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SAND_FORCE,
    .nature = NATURE_NAIVE,
    .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_EXTRASENSORY, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_SHUCA_BERRY,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC_FANGS, MOVE_EARTHQUAKE, MOVE_AGILITY},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOODRA_HISUI,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_GOOEY,
    .nature = NATURE_BOLD,
    .moves = {MOVE_FLASH_CANNON, MOVE_MUDDY_WATER, MOVE_SLUDGE_BOMB, MOVE_ACID_SPRAY},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DONPHAN,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_STURDY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_ICE_SPINNER, MOVE_SEED_BOMB, MOVE_ICE_SHARD},
    },
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_TREADS,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_IRON_HEAD, MOVE_STOMPING_TANTRUM, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF},
    },
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GREAT_TUSK,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_HEADLONG_RUSH, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_RAPID_SPIN},
    },
};

// Winona Split
// ============

// Location: Route 105
// ===================

// Location: Route 134
// ===================

// Location: Route 115
// ===================

// Name: Moxi and Gian [Perma Psychic Terrain, Guards Power Herb]
static const struct TrainerMon sParty_Koichi[] = {
    {
    .lvl = 0,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_PROTECT, MOVE_HIGH_HORSEPOWER, MOVE_LIQUIDATION, MOVE_STONE_EDGE},
    },
    {
    .lvl = -2,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FLAMIGO,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_SCRAPPY,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_ACROBATICS, MOVE_CLOSE_COMBAT, MOVE_TAILWIND, MOVE_THROAT_CHOP},
    },
    {
    .lvl = -2,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_AVALUGG_HISUI,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_STURDY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_MOUNTAIN_GALE, MOVE_ROCK_SLIDE},
    },
};

// Name: Moxi and Gian [Perma Psychic Terrain, Guards Power Herb]
static const struct TrainerMon sParty_Helene[] = {
    {
    .lvl = 0,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FARIGIRAF,
    .heldItem = ITEM_COLBUR_BERRY,
    .ability = ABILITY_SAP_SIPPER,
    .nature = NATURE_BOLD,
    .moves = {MOVE_SKILL_SWAP, MOVE_THUNDERBOLT, MOVE_EXPANDING_FORCE, MOVE_ENERGY_BALL},
    },
    {
    .lvl = -2,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_CURSED_BODY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_HYPNOSIS, MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST},
    },
    {
    .lvl = -2,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TINKATON,
    .heldItem = ITEM_STEEL_GEM,
    .ability = ABILITY_MOLD_BREAKER,
    .nature = NATURE_JOLLY,
    .gender = TRAINER_MON_FEMALE,
    .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
    },
};

// Location: Route 118
// ===================

// Name: Fisherman Barny
static const struct TrainerMon sParty_Barny[] = {
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SIMIPOUR,
    .heldItem = ITEM_WATER_GEM,
    .ability = ABILITY_GLUTTONY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_WAVE_CRASH, MOVE_ACROBATICS, MOVE_SUPERPOWER, MOVE_ICE_PUNCH},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_EMPOLEON,
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = ABILITY_COMPETITIVE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SCALD, MOVE_FLASH_CANNON, MOVE_AIR_SLASH, MOVE_ROOST},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BASCULIN_BLUE_STRIPED,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_ROCK_HEAD,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_WAVE_CRASH, MOVE_DOUBLE_EDGE, MOVE_AQUA_JET},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BRUXISH,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_STRONG_JAW,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PSYCHIC_FANGS, MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_ICE_FANG},
    },
};

// Name: Fisherman Wade
static const struct TrainerMon sParty_Wade[] = {
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCTOVISH,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_WATER_ABSORB,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_FISHIOUS_REND, MOVE_ICICLE_CRASH, MOVE_FREEZE_DRY, MOVE_SUPER_FANG},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_ADAPTABILITY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_RAZOR_SHELL, MOVE_KNOCK_OFF, MOVE_X_SCISSOR, MOVE_AQUA_JET},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRAGALGE,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_ADAPTABILITY,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_DRAGON_PULSE, MOVE_HYDRO_PUMP, MOVE_FOCUS_BLAST},
    },
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PRIMARINA,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_LIQUID_VOICE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_HYPER_VOICE, MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_SING},
    },
};

// Name: Aroma Lady Rose
static const struct TrainerMon sParty_Rose1[] = {
    {
    .lvl = 63,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_URSARING,
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = ABILITY_QUICK_FEET,
    .nature = NATURE_JOLLY,
    .status = STATUS1_POISON,
    .moves = {MOVE_FACADE, MOVE_HAMMER_ARM, MOVE_HIGH_HORSEPOWER, MOVE_PLAY_ROUGH},
    },
    {
    .lvl = 65,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = ABILITY_HARVEST,
    .nature = NATURE_MODEST,
    .moves = {MOVE_LEAF_BLADE, MOVE_DRAGON_HAMMER, MOVE_ZEN_HEADBUTT, MOVE_DRAGON_DANCE},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 65,
    .species = SPECIES_RIBOMBEE,
    .heldItem = ITEM_KEBIA_BERRY,
    .ability = ABILITY_SHIELD_DUST,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_POLLEN_PUFF, MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_QUIVER_DANCE},
    },
    {
    .lvl = 65,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GRUMPIG,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_THICK_FAT,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_DAZZLING_GLEAM, MOVE_NASTY_PLOT},
    },
};

// Name: Guitarist Dalton
static const struct TrainerMon sParty_Dalton1[] = {
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_HANDS,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_SEISMIC_TOSS},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BAXCALIBUR,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_THERMAL_EXCHANGE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_DRAGON_CLAW, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, MOVE_BREAKING_SWIPE},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CERULEDGE,
    .heldItem = ITEM_SPELL_TAG,
    .ability = ABILITY_WEAK_ARMOR,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BITTER_BLADE, MOVE_SHADOW_CLAW, MOVE_DRAGON_CLAW, MOVE_SHADOW_SNEAK},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GHOLDENGO,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_GOOD_AS_GOLD,
    .nature = NATURE_MODEST,
    .moves = {MOVE_MAKE_IT_RAIN, MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
    },
};

// Location: Route 123
// ===================

// Location: Route 119 [Perma Grassy Terrain and Rain]
// ===================================================

// Name: Bug Catcher Doug
static const struct TrainerMon sParty_Doug[] = {
    {
    .lvl = 65,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BUTTERFREE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_TINTED_LENS,
    .nature = NATURE_TIMID,
    .moves = {MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_TAILWIND, MOVE_SLEEP_POWDER},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRAPION,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SNIPER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_NIGHT_SLASH, MOVE_CROSS_POISON, MOVE_X_SCISSOR, MOVE_FELL_STINGER},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GALVANTULA,
    .heldItem = ITEM_MAGNET,
    .ability = ABILITY_COMPOUND_EYES,
    .nature = NATURE_TIMID,
    .moves = {MOVE_THUNDERBOLT, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_ELECTROWEB},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VOLCARONA,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_FLAME_BODY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_AIR_SLASH, MOVE_QUIVER_DANCE},
    },
};

// Name: Fisherman Chris
static const struct TrainerMon sParty_Chris[] = {
    {
    .lvl = 60,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_MULTISCALE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_WEATHER_BALL, MOVE_EXTREME_SPEED},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LUMINEON,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_MODEST,
    .gender = TRAINER_MON_FEMALE,
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_DAZZLING_GLEAM, MOVE_ATTRACT},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PALAFIN,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = ABILITY_ZERO_TO_HERO,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LIQUIDATION, MOVE_FLIP_TURN},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BASCULEGION,
    .heldItem = ITEM_LIECHI_BERRY,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_PHANTOM_FORCE, MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_WHIRLPOOL},
    },
};

// Name: Ranger Catherine
static const struct TrainerMon sParty_Catherine1[] = {
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOGOAT,
    .heldItem = ITEM_MIRACLE_SEED,
    .ability = ABILITY_GRASS_PELT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_GRASSY_GLIDE, MOVE_WILD_CHARGE, MOVE_STOMPING_TANTRUM, MOVE_SYNTHESIS},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DUBWOOL,
    .heldItem = ITEM_GRASSY_SEED,
    .ability = ABILITY_FLUFFY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BODY_SLAM, MOVE_GRASSY_GLIDE, MOVE_WILD_CHARGE, MOVE_SWORDS_DANCE},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_STATIC,
    .nature = NATURE_MODEST,
    .moves = {MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_DRAGON_PULSE, MOVE_THUNDER_WAVE},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MILTANK,
    .heldItem = ITEM_SILK_SCARF,
    .ability = ABILITY_SCRAPPY,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BODY_SLAM, MOVE_PLAY_ROUGH, MOVE_BODY_PRESS, MOVE_MILK_DRINK},
    },
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_OKIDOGI,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_GUARD_DOG,
    .nature = NATURE_MODEST,
    .moves = {MOVE_POISON_JAB, MOVE_DRAIN_PUNCH, MOVE_CRUNCH, MOVE_SCARY_FACE},
    },
};

// Name: Ranger Jackson
static const struct TrainerMon sParty_Jackson1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 62,
    .species = SPECIES_BLASTOISE,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_RAIN_DISH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LIQUIDATION, MOVE_ICE_SPINNER, MOVE_ZEN_HEADBUTT, MOVE_SHELL_SMASH},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 62,
    .species = SPECIES_RILLABOOM,
    .heldItem = ITEM_GRASSY_SEED,
    .ability = ABILITY_OVERGROW,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_GRASSY_GLIDE, MOVE_HIGH_HORSEPOWER, MOVE_HAMMER_ARM, MOVE_ACROBATICS},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_DONPHAN,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_STURDY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_STONE_EDGE, MOVE_SEED_BOMB, MOVE_ICE_SHARD},
    },
    {
    .lvl = 63,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TYRANTRUM,
    .heldItem = ITEM_GRASSY_SEED,
    .ability = ABILITY_STRONG_JAW,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_STONE_EDGE, MOVE_DRAGON_CLAW, MOVE_HIGH_HORSEPOWER, MOVE_PSYCHIC_FANGS},
    },
};

// Name: Bird Keeper Hugh
static const struct TrainerMon sParty_Hugh[] = {
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_KINGS_ROCK,
    .ability = ABILITY_UNNERVE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_ROCK_BLAST, MOVE_IRON_HEAD, MOVE_THUNDER_FANG},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HAWLUCHA,
    .heldItem = ITEM_GRASSY_SEED,
    .ability = ABILITY_UNBURDEN,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_ACROBATICS, MOVE_STONE_EDGE, MOVE_ROOST},
    },
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BOMBIRDIER,
    .heldItem = ITEM_BLACK_GLASSES,
    .ability = ABILITY_ROCKY_PAYLOAD,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_KNOCK_OFF, MOVE_DUAL_WINGBEAT, MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH},
    },
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = ABILITY_MOXIE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_HYPER_VOICE, MOVE_ROOST},
    },
};

// Name: Bug Maniac Brent
static const struct TrainerMon sParty_Brent[] = {
    {
    .lvl = 65,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BEEDRILL,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SWARM,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_POISON_JAB, MOVE_X_SCISSOR, MOVE_DRILL_RUN, MOVE_TOXIC_SPIKES},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_CHARTI_BERRY,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HURRICANE, MOVE_BUG_BUZZ, MOVE_WEATHER_BALL, MOVE_QUIVER_DANCE},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_GRASSY_SEED,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_THUNDERBOLT, MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_ROOST},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SCIZOR,
    .heldItem = ITEM_METAL_COAT,
    .ability = ABILITY_TECHNICIAN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BUG_BITE, MOVE_BULLET_PUNCH, MOVE_DUAL_WINGBEAT, MOVE_TRAILBLAZE},
    },
};

// Name: Camper Patrick
static const struct TrainerMon sParty_Patrick[] = {
    {
    .lvl = 63,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FORRETRESS,
    .heldItem = ITEM_IAPAPA_BERRY,
    .ability = ABILITY_STURDY,
    .nature = NATURE_SASSY,
    .moves = {MOVE_GYRO_BALL, MOVE_VOLT_SWITCH, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CLODSIRE,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_WATER_ABSORB,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_MEGAHORN, MOVE_POISON_JAB, MOVE_STOMPING_TANTRUM, MOVE_LIQUIDATION},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WO_CHIEN,
    .heldItem = ITEM_TANGA_BERRY,
    .ability = ABILITY_TABLETS_OF_RUIN,
    .nature = NATURE_CALM,
    .moves = {MOVE_FOUL_PLAY, MOVE_LEAF_STORM, MOVE_BODY_PRESS, MOVE_SUBSTITUTE},
    },
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOLDUCK,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_HASTY,
    .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_FLIP_TURN},
    },
    {
    .lvl = 64,
    .iv = IV_SPREAD_HIDDEN_POWER_FIGHTING,
    .species = SPECIES_YANMEGA,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SPEED_BOOST,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SIGNAL_BEAM, MOVE_AIR_CUTTER, MOVE_HIDDEN_POWER_FIGHTING, MOVE_HYPNOSIS},
    },
};

// Name: Ninja Boy Takashi [Double]
static const struct TrainerMon sParty_Takashi[] = {
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KECLEON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_PROTEAN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BODY_SLAM, MOVE_DRAIN_PUNCH, MOVE_SHADOW_CLAW, MOVE_FAKE_OUT},
    },
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WEEZING,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_DARK_PULSE, MOVE_DESTINY_BOND},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SCEPTILE,
    .heldItem = ITEM_GRASSY_SEED,
    .ability = ABILITY_UNBURDEN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LEAF_STORM, MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_ACROBATICS},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GRENINJA,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_PROTEAN,
    .nature = NATURE_MODEST,
    .moves = {MOVE_WATER_SHURIKEN, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_EXTRASENSORY},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SKELEDIRGE,
    .heldItem = ITEM_UTILITY_UMBRELLA,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_TORCH_SONG, MOVE_SHADOW_BALL, MOVE_ALLURING_VOICE, MOVE_SUBSTITUTE},
    },
};

// Location: Weather Institute
// ===========================

// Name: Parasol Lady Rose
static const struct TrainerMon sParty_Rose[] = {
    {
    .lvl = 63,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_OVERQWIL,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_GUNK_SHOT, MOVE_THROAT_CHOP, MOVE_WATERFALL, MOVE_DESTINY_BOND},
    },
    {
    .lvl = 62,
    .iv = IV_SPREAD_HIDDEN_POWER_ICE,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = ABILITY_TECHNICIAN,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_MAGICAL_LEAF, MOVE_HIDDEN_POWER_ICE, MOVE_WEATHER_BALL},
    },
    {
    .lvl = 63,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BRUTE_BONNET,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SEED_BOMB, MOVE_LASH_OUT, MOVE_SUCKER_PUNCH, MOVE_SPORE},
    },
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HURRICANE, MOVE_SURF, MOVE_ICE_BEAM, MOVE_ROOST},
    },
};

// Name: Guitarist Fabian
static const struct TrainerMon sParty_Fabian[] = {
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_EXPLOUD,
    .heldItem = ITEM_NORMAL_GEM,
    .ability = ABILITY_SCRAPPY,
    .nature = NATURE_MODEST,
    .moves = {MOVE_BOOMBURST, MOVE_TERRAIN_PULSE, MOVE_EXTRASENSORY},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NIDOKING,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SHEER_FORCE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, MOVE_THUNDER, MOVE_SURF},
    },
    {
    .lvl = 63,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VENUSAUR,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_OVERGROW,
    .nature = NATURE_MODEST,
    .moves = {MOVE_TERRAIN_PULSE, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, MOVE_SLEEP_POWDER},
    },
    {
    .lvl = 63,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SILVALLY_ELECTRIC,
    .heldItem = ITEM_ELECTRIC_MEMORY,
    .ability = ABILITY_RKS_SYSTEM,
    .nature = NATURE_MODEST,
    .moves = {MOVE_MULTI_ATTACK, MOVE_TRI_ATTACK, MOVE_FLASH_CANNON, MOVE_AIR_SLASH},
    },
};

// Name: Ninja Boy Hideo
static const struct TrainerMon sParty_Hideo[] = {
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_REUNICLUS,
    .heldItem = ITEM_GRASSY_SEED,
    .ability = ABILITY_REGENERATOR,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYCHIC, MOVE_AURA_SPHERE, MOVE_ENERGY_BALL, MOVE_SHADOW_BALL},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BISHARP,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_DEFIANT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_IRON_HEAD, MOVE_THROAT_CHOP, MOVE_X_SCISSOR, MOVE_SCARY_FACE},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DUSKNOIR,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .ability = ABILITY_PRESSURE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SHADOW_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_DESTINY_BOND},
    },
    {
    .lvl = 60,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SERPERIOR,
    .heldItem = ITEM_FOCUS_BAND,
    .ability = ABILITY_CONTRARY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_LEAF_STORM, MOVE_DRAGON_PULSE, MOVE_KNOCK_OFF, MOVE_GLARE},
    },
    {
    .lvl = 60,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GRENINJA,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_MODEST,
    .moves = {MOVE_WATER_SHURIKEN, MOVE_DARK_PULSE, MOVE_EXTRASENSORY, MOVE_MUD_SHOT},
    },
};


// Location: Fortree City
// ======================

// Name: Bird Keeper Humberto
static const struct TrainerMon sParty_Humberto[] = {
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_STARAPTOR,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_STEEL_WING, MOVE_ROOST},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_FIRST_IMPRESSION, MOVE_DUAL_WINGBEAT},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_STONE_EDGE, MOVE_ZEN_HEADBUTT, MOVE_FLARE_BLITZ, MOVE_ACROBATICS},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DODRIO,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_TECHNICIAN,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_DOUBLE_HIT, MOVE_SWORDS_DANCE},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ROTOM_FAN,
    .heldItem = ITEM_SHARP_BEAK,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_THUNDERBOLT, MOVE_AIR_SLASH, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE},
    },
};

// Name: Picnicker Ashley [Double]
static const struct TrainerMon sParty_Ashley[] = {
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRAGAPULT,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_HARDY,
    .moves = {MOVE_DRAGON_CLAW, MOVE_SHADOW_BALL, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_AZELF,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_FUTURE_SIGHT, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WEEZING_GALAR,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_STRANGE_STEAM, MOVE_SLUDGE_BOMB, MOVE_HEAT_WAVE, MOVE_DESTINY_BOND},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SCIZOR,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_TECHNICIAN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BUG_BITE, MOVE_BULLET_PUNCH, MOVE_DUAL_WINGBEAT, MOVE_U_TURN},
    },
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BOMBIRDIER,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_BIG_PECKS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SKY_ATTACK, MOVE_ACROBATICS, MOVE_KNOCK_OFF, MOVE_STONE_EDGE},
    },
};

// Name: Camper Flint and Bird Keeper Edwardo
static const struct TrainerMon sParty_Flint[] = {
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DECIDUEYE,
    .heldItem = ITEM_SHARP_BEAK,
    .ability = ABILITY_OVERGROW,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SPIRIT_SHACKLE, MOVE_LEAF_BLADE, MOVE_DUAL_WINGBEAT, MOVE_ROOST},
    },
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_TELEPATHY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT, MOVE_STONE_EDGE, MOVE_FAKE_OUT},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_TELEPATHY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_HYPER_VOICE, MOVE_THUNDERBOLT},
    },
};

// Name: Camper Flint and Bird Keeper Edwardo
static const struct TrainerMon sParty_Edwardo[] = {
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = ABILITY_SCRAPPY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_BOOMBURST, MOVE_AIR_SLASH},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NOIVERN,
    .heldItem = ITEM_SILK_SCARF,
    .ability = ABILITY_INFILTRATOR,
    .nature = NATURE_MODEST,
    .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_BOOMBURST, MOVE_FLAMETHROWER},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_NORMAL_GEM,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_EARTH_POWER, MOVE_DRAGON_PULSE, MOVE_BOOMBURST, MOVE_ROOST},
    },
};

// Name: Bird Keeper Darius
static const struct TrainerMon sParty_Darius[] = {
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_RED_CARD,
    .ability = ABILITY_STURDY,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_BODY_PRESS, MOVE_DRILL_PECK, MOVE_SPIKES, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MANDIBUZZ,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_BIG_PECKS,
    .nature = NATURE_TIMID,
    .moves = {MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_TOXIC, MOVE_ROOST},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BRAVIARY,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_DEFIANT,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_CRUSH_CLAW, MOVE_BULK_UP},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_UNNERVE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SKY_ATTACK, MOVE_DUAL_WINGBEAT, MOVE_ROCK_SLIDE, MOVE_IRON_HEAD},
    },
};

// Name: Expert Jared
static const struct TrainerMon sParty_Jared[] = {
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SILVALLY_FLYING,
    .heldItem = ITEM_FLYING_MEMORY,
    .ability = ABILITY_RKS_SYSTEM,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_MULTI_ATTACK, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRAMPA,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_BERSERK,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYPER_VOICE, MOVE_DRAGON_PULSE, MOVE_EXTRASENSORY, MOVE_ICY_WIND},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCHEOPS,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_DEFEATIST,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_ROCK_SLIDE, MOVE_ACROBATICS, MOVE_DRAGON_CLAW, MOVE_SUBSTITUTE},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NAGANADEL,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_BEAST_BOOST,
    .nature = NATURE_MODEST,
    .moves = {MOVE_VENOSHOCK, MOVE_DRAGON_BREATH, MOVE_AIR_SLASH, MOVE_TOXIC},
    },
    {
    .lvl = 62,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_YANMEGA,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SPEED_BOOST,
    .nature = NATURE_MODEST,
    .moves = {MOVE_BUG_BUZZ, MOVE_AIR_CUTTER, MOVE_GIGA_DRAIN, MOVE_U_TURN},
    },
};

// Name: Leader Winona [Double]
static const struct TrainerMon sParty_Winona1[] = {
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ZAPDOS_GALAR,
    .heldItem = ITEM_SHARP_BEAK,
    .ability = ABILITY_DEFIANT,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_THUNDEROUS_KICK, MOVE_DRILL_PECK, MOVE_STOMPING_TANTRUM, MOVE_KNOCK_OFF},
    },
    {
    .lvl = 63,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GLISCOR,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_HYPER_CUTTER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_EARTHQUAKE, MOVE_ACROBATICS, MOVE_CRABHAMMER, MOVE_U_TURN},
    },
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARTICUNO_GALAR,
    .heldItem = ITEM_SHARP_BEAK,
    .ability = ABILITY_COMPETITIVE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_FREEZING_GLARE, MOVE_AIR_SLASH, MOVE_SHADOW_BALL, MOVE_HYPNOSIS},
    },
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MOLTRES_GALAR,
    .heldItem = ITEM_SHARP_BEAK,
    .ability = ABILITY_BERSERK,
    .nature = NATURE_BOLD,
    .moves = {MOVE_FIERY_WRATH, MOVE_AIR_SLASH, MOVE_AURA_SPHERE, MOVE_DETECT},
    },
    {
    .lvl = 63,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CORVIKNIGHT,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_UNNERVE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRILL_PECK, MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_RETALIATE},
    },
    {
    .lvl = 64,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VOLCARONA,
    .heldItem = ITEM_CHARTI_BERRY,
    .ability = ABILITY_FLAME_BODY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_BUG_BUZZ, MOVE_FIERY_DANCE, MOVE_AIR_SLASH, MOVE_GIGA_DRAIN},
    },
};

// Tate & Liza Split
// =================

// Location: Scorched Slab
// =======================

// Location: Route 120 [Perma Rain]
// ================================

// Name: Parasol Lady Angelica
static const struct TrainerMon sParty_Angelica[] = {
    {
    .lvl = 72,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_GROUND_GEM,
    .ability = ABILITY_SHELL_ARMOR,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_SURF, MOVE_FREEZE_DRY, MOVE_THUNDERBOLT, MOVE_DRILL_RUN},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_TIMID,
    .moves = {MOVE_SURF, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_SHELL_SMASH},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BELLIBOLT,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_ELECTROMORPHOSIS,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_WEATHER_BALL, MOVE_HYPER_VOICE, MOVE_THUNDER_WAVE},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_SILK_SCARF,
    .ability = ABILITY_SCRAPPY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LAST_RESORT, MOVE_FAKE_OUT},
    },
};

// Name: Ninja Boy Riley
static const struct TrainerMon sParty_Riley[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GRENINJA_BATTLE_BOND,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_BATTLE_BOND,
    .nature = NATURE_TIMID,
    .moves = {MOVE_WATER_SHURIKEN, MOVE_DARK_PULSE, MOVE_EXTRASENSORY, MOVE_SHADOW_SNEAK},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_JUGULIS,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_KNOCK_OFF},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CROSS_POISON, MOVE_DUAL_WINGBEAT, MOVE_LEECH_LIFE, MOVE_STEEL_WING},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WEEZING_GALAR,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_STRANGE_STEAM, MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_DARK_PULSE},
    },
};

// Name: Battle Girl Callie
static const struct TrainerMon sParty_Callie[] = {
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KELDEO,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_JUSTIFIED,
    .nature = NATURE_BOLD,
    .moves = {MOVE_MUDDY_WATER, MOVE_AURA_SPHERE, MOVE_ICE_BEAM, MOVE_AQUA_JET},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_COBA_BERRY,
    .ability = ABILITY_MOXIE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_MEGAHORN, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_SMART_STRIKE},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TOXICROAK,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_DRY_SKIN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_GUNK_SHOT, MOVE_DRAIN_PUNCH, MOVE_THROAT_CHOP, MOVE_BULLET_PUNCH},
    },
    {
    .lvl = 72,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GRAPPLOCT,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_LIMBER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_WORK_UP},
    },
};

// Name: Parasol Lady Clarissa
static const struct TrainerMon sParty_Clarissa[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ROTOM_WASH,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_KEBIA_BERRY,
    .ability = ABILITY_PIXILATE,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_CALM_MIND},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SEISMITOAD,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_MILD,
    .moves = {MOVE_SURF, MOVE_EARTH_POWER, MOVE_ICE_PUNCH, MOVE_MUD_SHOT},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HELIOLISK,
    .heldItem = ITEM_IAPAPA_BERRY,
    .ability = ABILITY_DRY_SKIN,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_THUNDER, MOVE_HYPER_VOICE, MOVE_WEATHER_BALL, MOVE_THUNDER_WAVE},
    },
};

// Name: Bug Maniac Jeffrey
static const struct TrainerMon sParty_Jeffrey1[] = {
    {
    .lvl = 72,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_HURRICANE, MOVE_BUG_BUZZ, MOVE_HYDRO_PUMP, MOVE_TAILWIND},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_STONE_EDGE, MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_AQUA_JET},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOLISOPOD,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_EMERGENCY_EXIT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_FIRST_IMPRESSION, MOVE_X_SCISSOR, MOVE_RAZOR_SHELL, MOVE_AQUA_JET},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_WATER_GEM,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_STONE_EDGE, MOVE_X_SCISSOR, MOVE_LIQUIDATION, MOVE_AQUA_JET},
    },
};

// Name: Cooltrainer Jennifer
static const struct TrainerMon sParty_Jennifer[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DURALUDON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_LIGHT_METAL,
    .nature = NATURE_MODEST,
    .moves = {MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE, MOVE_THUNDERBOLT, MOVE_BODY_PRESS},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOODRA,
    .heldItem = ITEM_IAPAPA_BERRY,
    .ability = ABILITY_HYDRATION,
    .nature = NATURE_MODEST,
    .moves = {MOVE_DRAGON_PULSE, MOVE_SLUDGE_WAVE, MOVE_WEATHER_BALL, MOVE_MUD_SHOT},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FLAMIGO,
    .heldItem = ITEM_EJECT_PACK,
    .ability = ABILITY_SCRAPPY,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_ACROBATICS, MOVE_DUAL_WINGBEAT},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FERALIGATR,
    .heldItem = ITEM_NEVER_MELT_ICE,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_ICE_PUNCH},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LURANTIS,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_CONTRARY,
    .nature = NATURE_RASH,
    .moves = {MOVE_LEAF_STORM, MOVE_SUPERPOWER, MOVE_WEATHER_BALL, MOVE_X_SCISSOR},
    },
};

// Name: Lorenzo and Jenna [Rain section end]
static const struct TrainerMon sParty_Lorenzo[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VENUSAUR,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_CHLOROPHYLL,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL, MOVE_SLEEP_POWDER},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_CHLOROPHYLL,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LEAF_BLADE, MOVE_FOUL_PLAY, MOVE_NIGHT_SLASH, MOVE_FAKE_OUT},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TAUROS_PALDEA_BLAZE,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_RAGING_BULL, MOVE_HIGH_HORSEPOWER, MOVE_FLAME_CHARGE},
    },
};

// Name: Lorenzo and Jenna [Rain section end]
static const struct TrainerMon sParty_Jenna[] = {
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_DROUGHT,
    .nature = NATURE_MODEST,
    .moves = {MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_HEX, MOVE_WILL_O_WISP},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_TEMPER_FLARE, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH, MOVE_EXTREME_SPEED},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GREAT_TUSK,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_HEADLONG_RUSH, MOVE_CLOSE_COMBAT, MOVE_ICE_SPINNER, MOVE_RAPID_SPIN},
    },
};

// Name: Ruin Maniac Chip
static const struct TrainerMon sParty_Chip[] = {
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_REGIROCK,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ROCK_SLIDE, MOVE_STOMPING_TANTRUM, MOVE_DRAIN_PUNCH, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_REGISTEEL,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_HAMMER_ARM, MOVE_COUNTER},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_REGICE,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_MODEST,
    .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_REST, MOVE_SLEEP_TALK},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_REGIDRAGO,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_DRAGONS_MAW,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_FIRE_FANG, MOVE_ICE_FANG, MOVE_THUNDER_FANG, MOVE_DRAGON_DANCE},
    },
    {
    .lvl = 70,
    .iv = IV_SPREAD_HIDDEN_POWER_ICE,
    .species = SPECIES_REGIELEKI,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_TRANSISTOR,
    .nature = NATURE_QUIET,
    .moves = {MOVE_DISCHARGE, MOVE_EXTREME_SPEED, MOVE_HIDDEN_POWER_ICE, MOVE_ACROBATICS},
    },
};

// Name: Brian and Bazzo
static const struct TrainerMon sParty_Brian[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SLOWBRO,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_OWN_TEMPO,
    .nature = NATURE_CALM,
    .moves = {MOVE_PSYCHIC, MOVE_SCALD, MOVE_FIRE_BLAST, MOVE_FUTURE_SIGHT},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_KINGS_ROCK,
    .ability = ABILITY_TECHNICIAN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SPORE, MOVE_ROCK_TOMB, MOVE_MACH_PUNCH, MOVE_BULLET_SEED},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SNORLAX,
    .heldItem = ITEM_MENTAL_HERB,
    .ability = ABILITY_THICK_FAT,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_LAST_RESORT, MOVE_REFLECT},
    },
};

// Name: Brian and Bazzo
static const struct TrainerMon sParty_Bazzo[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_RHYPERIOR,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_LIGHTNING_ROD,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_ROCK_WRECKER, MOVE_EARTHQUAKE, MOVE_HAMMER_ARM, MOVE_FIRE_PUNCH},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_RAICHU_ALOLA,
    .heldItem = ITEM_ELECTRIC_GEM,
    .ability = ABILITY_SURGE_SURFER,
    .nature = NATURE_NAIVE,
    .moves = {MOVE_FAKE_OUT, MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_PSYCHIC},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FERALIGATR,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SHEER_FORCE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_PSYCHIC_FANGS, MOVE_SUPERPOWER},
    },
};

// Location: Mt. Pyre
// ==================

// Location: Route 121 [Perma Misty Terrain]
// =========================================

// Name: Hex Maniac Tammy [Double]
static const struct TrainerMon sParty_Tammy[] = {
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_CRESSELIA,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_RELAXED,
    .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_MOONLIGHT, MOVE_TRICK_ROOM},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_THICK_FAT,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_HEADLONG_RUSH, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_SLOWKING_GALAR,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_OWN_TEMPO,
    .nature = NATURE_QUIET,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_EERIE_SPELL, MOVE_CHILLING_WATER, MOVE_SLACK_OFF},
    },
    {
    .lvl = 70,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_AROMATISSE,
    .heldItem = ITEM_MISTY_SEED,
    .ability = ABILITY_HEALER,
    .nature = NATURE_QUIET,
    .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_DRAINING_KISS},
    },
    {
    .lvl = 70,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_CURSED_BODY,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_POLTERGEIST, MOVE_SHADOW_CLAW, MOVE_GUNK_SHOT, MOVE_PROTECT},
    },
};

// Name: Beauty Jessica [Double]
static const struct TrainerMon sParty_Jessica1[] = {
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_INDEEDEE,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = ABILITY_PSYCHIC_SURGE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYCHIC, MOVE_TERA_BLAST, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_TRUANT,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BODY_SLAM, MOVE_DRAIN_PUNCH, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WEEZING_GALAR,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_NEUTRALIZING_GAS,
    .nature = NATURE_MODEST,
    .moves = {MOVE_STRANGE_STEAM, MOVE_SLUDGE_BOMB, MOVE_FIRE_BLAST, MOVE_DARK_PULSE},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SNEASLER,
    .heldItem = ITEM_PSYCHIC_SEED,
    .ability = ABILITY_UNBURDEN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_DIRE_CLAW, MOVE_ACROBATICS, MOVE_THROAT_CHOP},
    },
};

// Name: Triathlete Kyra [Double]
static const struct TrainerMon sParty_Kyra[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_URSHIFU_RAPID_STRIKE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_UNSEEN_FIST,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_SURGING_STRIKES, MOVE_ICE_SPINNER, MOVE_POISON_JAB},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FARIGIRAF,
    .heldItem = ITEM_AGUAV_BERRY,
    .ability = ABILITY_ARMOR_TAIL,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYPER_VOICE, MOVE_TWIN_BEAM, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CINDERACE,
    .heldItem = ITEM_MISTY_SEED,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BLAZE_KICK, MOVE_ACROBATICS, MOVE_HEADBUTT, MOVE_REVERSAL},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TSAREENA,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_QUEENLY_MAJESTY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_POWER_WHIP, MOVE_PLAY_ROUGH, MOVE_TRIPLE_AXEL, MOVE_LOW_SWEEP},
    },
};

// Name: Cooltrainer Cristin
static const struct TrainerMon sParty_Cristin1[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_MOTH,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_DISCHARGE},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ZOROARK,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_ILLUSION,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_NIGHT_DAZE, MOVE_EXTRASENSORY, MOVE_BURNING_JEALOUSY, MOVE_NASTY_PLOT},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SLURPUFF,
    .heldItem = ITEM_MISTY_SEED,
    .ability = ABILITY_UNBURDEN,
    .nature = NATURE_MODEST,
    .moves = {MOVE_MISTY_EXPLOSION, MOVE_DRAINING_KISS, MOVE_FLAMETHROWER, MOVE_CALM_MIND},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TYPHLOSION,
    .heldItem = ITEM_FIRE_GEM,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_FLAMETHROWER, MOVE_EXTRASENSORY, MOVE_SHADOW_BALL, MOVE_SCORCHING_SANDS},
    },
};

// Name: Bug Maniac Cale
static const struct TrainerMon sParty_Cale[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_CHARTI_BERRY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_THUNDERBOLT, MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_STICKY_WEB},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CLAWITZER,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_MEGA_LAUNCHER,
    .nature = NATURE_MODEST,
    .moves = {MOVE_WATER_PULSE, MOVE_DARK_PULSE, MOVE_AURA_SPHERE, MOVE_TERRAIN_PULSE},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SHARPNESS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_NIGHT_SLASH, MOVE_X_SCISSOR, MOVE_PSYCHO_CUT, MOVE_SHADOW_CLAW},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_CUSTAP_BERRY,
    .ability = ABILITY_DISGUISE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_WOOD_HAMMER, MOVE_DESTINY_BOND},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TOXTRICITY_LOW_KEY,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_PUNK_ROCK,
    .nature = NATURE_MODEST,
    .moves = {MOVE_OVERDRIVE, MOVE_HYPER_VOICE, MOVE_SLUDGE_WAVE, MOVE_SCARY_FACE},
    },
};

// Name: Pokemon Breeder Pat
static const struct TrainerMon sParty_Pat[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_METEOR_MASH, MOVE_BLAZE_KICK, MOVE_EXTREME_SPEED},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_STATIC,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_CROSS_CHOP, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MAGMAR,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_FLAME_BODY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_OVERHEAT, MOVE_FIRE_PUNCH, MOVE_CROSS_CHOP, MOVE_THUNDER_PUNCH},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WIGGLYTUFF,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_COMPETITIVE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_MISTY_EXPLOSION, MOVE_MOONBLAST, MOVE_HYPER_VOICE, MOVE_PSYCHIC},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SNORLAX,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_GLUTTONY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_HEAVY_SLAM, MOVE_HIGH_HORSEPOWER},
    },
};

// Name: Pokemon Breeder Myles
static const struct TrainerMon sParty_Myles[] = {
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_ROCK_SLIDE, MOVE_BULLET_PUNCH},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_MISTY_SEED,
    .ability = ABILITY_HUGE_POWER,
    .nature = NATURE_RASH,
    .moves = {MOVE_MISTY_EXPLOSION, MOVE_AQUA_TAIL, MOVE_PLAY_ROUGH, MOVE_ICE_PUNCH},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SUDOWOODO,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_STURDY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_STONE_EDGE, MOVE_HAMMER_ARM, MOVE_HIGH_HORSEPOWER, MOVE_ICE_PUNCH},
    },
    {
    .lvl = 72,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CHIMECHO,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_CHARGE_BEAM, MOVE_RECOVER},
    },
    {
    .lvl = 72,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_POISON_POINT,
    .nature = NATURE_TIMID,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_ENERGY_BALL, MOVE_EXTRASENSORY, MOVE_DAZZLING_GLEAM},
    },
};

// Name: Sr/Jr Kate & Joy [Double]
static const struct TrainerMon sParty_KateAndJoy[] = {
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ANNIHILAPE,
    .heldItem = ITEM_MISTY_SEED,
    .ability = ABILITY_DEFIANT,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CROSS_CHOP, MOVE_RAGE_FIST, MOVE_STONE_EDGE, MOVE_ACROBATICS},
    },
    {
    .lvl = 70,
    .iv = IV_SPREAD_ZERO_ATK,
    .species = SPECIES_MAUSHOLD,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_FRIEND_GUARD,
    .nature = NATURE_TIMID,
    .moves = {MOVE_POPULATION_BOMB, MOVE_SUPER_FANG, MOVE_BEAT_UP, MOVE_TICKLE},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_ZERO_ATK,
    .species = SPECIES_WHIMSICOTT,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_PRANKSTER,
    .nature = NATURE_TIMID,
    .moves = {MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_BEAT_UP, MOVE_TAILWIND},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_CHARCOAL,
    .ability = ABILITY_JUSTIFIED,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_TEMPER_FLARE, MOVE_PLAY_ROUGH, MOVE_CRUNCH, MOVE_EXTREME_SPEED},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TERRAKION,
    .heldItem = ITEM_NORMAL_GEM,
    .ability = ABILITY_JUSTIFIED,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_STONE_EDGE, MOVE_SACRED_SWORD, MOVE_RETALIATE},
    },
};

// Name: Pokefan Vanessa
static const struct TrainerMon sParty_Vanessa[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MAGEARNA,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SOUL_HEART,
    .nature = NATURE_CALM,
    .isShiny = TRUE,
    .moves = {MOVE_MOONBLAST, MOVE_FLASH_CANNON, MOVE_PSYCHIC, MOVE_AURORA_BEAM},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LYCANROC_DUSK,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_TOUGH_CLAWS,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_STONE_EDGE, MOVE_HIGH_HORSEPOWER, MOVE_PLAY_ROUGH, MOVE_REVERSAL},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOTHITELLE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SHADOW_TAG,
    .nature = NATURE_MODEST,
    .moves = {MOVE_FUTURE_SIGHT, MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_DARK_PULSE},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_INFERNAPE,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_IRON_FIST,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_FIRE_PUNCH, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_BULK_UP},
    },
};

// Name: Gentleman Walter [Double]
static const struct TrainerMon sParty_Walter1[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FARIGIRAF,
    .heldItem = ITEM_SILK_SCARF,
    .ability = ABILITY_ARMOR_TAIL,
    .nature = NATURE_MODEST,
    .moves = {MOVE_TWIN_BEAM, MOVE_ROUND, MOVE_FOUL_PLAY, MOVE_FUTURE_SIGHT},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ZOROARK,
    .heldItem = ITEM_BLACK_GLASSES,
    .ability = ABILITY_ECLIPSATE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_ROUND, MOVE_FLAMETHROWER, MOVE_EXTRASENSORY, MOVE_NIGHT_SHADE},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_QUICK_FEET,
    .nature = NATURE_MODEST,
    .moves = {MOVE_THUNDERBOLT, MOVE_ROUND, MOVE_ALLURING_VOICE, MOVE_SHADOW_BALL},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_TECHNICIAN,
    .nature = NATURE_TIMID,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_EXTRASENSORY, MOVE_ROUND},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NINETALES_ALOLA,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_SNOW_CLOAK,
    .nature = NATURE_MODEST,
    .moves = {MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_ROUND, MOVE_CHILLING_WATER},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SKELEDIRGE,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_TORCH_SONG, MOVE_SHADOW_BALL, MOVE_ALLURING_VOICE, MOVE_ROUND},
    },
};

// Name: Cooltrainer Marcel [Double]
static const struct TrainerMon sParty_Marcel[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_TREADS,
    .heldItem = ITEM_MISTY_SEED,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_IRON_HEAD, MOVE_STOMPING_TANTRUM, MOVE_ICE_SPINNER, MOVE_KNOCK_OFF},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_EMOLGA,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_MOTOR_DRIVE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_THUNDERBOLT, MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_VOLT_SWITCH},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_INCINEROAR,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_BLAZE_KICK, MOVE_DARKEST_LARIAT, MOVE_LEECH_LIFE, MOVE_FAKE_OUT},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOLDUCK,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_FUTURE_SIGHT},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_REVAVROOM,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_FILTER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SPIN_OUT, MOVE_POISON_JAB, MOVE_HIGH_HORSEPOWER, MOVE_SHIFT_GEAR},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ROARING_MOON,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_ACROBATICS, MOVE_DRAGON_DANCE},
    },
};

// Location: Lilycove City
// =======================

// Name: Brendan Two [Triggered on stairs]
static const struct TrainerMon sParty_BrendanLilycove[] = {
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GLISCOR,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = ABILITY_HYPER_CUTTER,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_EARTHQUAKE, MOVE_DUAL_WINGBEAT, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LATIOS,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_DRAGON_PULSE, MOVE_LUSTER_PURGE, MOVE_AURA_SPHERE, MOVE_CALM_MIND},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SCEPTILE,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_UNBURDEN,
    .nature = NATURE_NAIVE,
    .moves = {MOVE_LEAF_STORM, MOVE_ACROBATICS, MOVE_EARTHQUAKE, MOVE_FOCUS_BLAST},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_HIDDEN_POWER_GRASS,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = ABILITY_STURDY,
    .nature = NATURE_MODEST,
    .moves = {MOVE_THUNDERBOLT, MOVE_BODY_PRESS, MOVE_HIDDEN_POWER_GRASS, MOVE_METAL_SOUND},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_VALIANT,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_MOONBLAST, MOVE_AURA_SPHERE, MOVE_PSYCHIC, MOVE_CALM_MIND},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CHI_YU,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_BEADS_OF_RUIN,
    .nature = NATURE_MODEST,
    .moves = {MOVE_LAVA_PLUME, MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_FLAME_CHARGE},
    },
};

// Location: Route 124 [Perma Snow]
// ================================

// Name: Swimmer Sharon and Swimmer Nolen
static const struct TrainerMon sParty_Sharon[] = {
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCTOZOLT,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_SLUSH_RUSH,
    .nature = NATURE_HASTY,
    .moves = {MOVE_ICICLE_CRASH, MOVE_BOLT_BEAK, MOVE_FREEZE_DRY, MOVE_STONE_EDGE},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_JYNX,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_RAIN_DISH,
    .nature = NATURE_TIMID,
    .moves = {MOVE_BLIZZARD, MOVE_PSYCHIC, MOVE_ICY_WIND, MOVE_FAKE_OUT},
    },
};

// Name: Swimmer Sharon and Swimmer Nolen
static const struct TrainerMon sParty_Nolen[] = {
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MR_RIME,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = ABILITY_ICE_BODY,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYSHOCK, MOVE_FREEZE_DRY, MOVE_SHADOW_BALL, MOVE_FAKE_OUT},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BAXCALIBUR,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_THERMAL_EXCHANGE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRAGON_CLAW, MOVE_ICE_PUNCH, MOVE_DRAGON_TAIL, MOVE_HIGH_HORSEPOWER},
    },
};

// Name: Tuber Roy
static const struct TrainerMon sParty_Roy[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WEAVILE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_PRESSURE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ICICLE_CRASH, MOVE_KNOCK_OFF, MOVE_LOW_KICK, MOVE_ICE_SHARD},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_FAIRY_FEATHER,
    .ability = ABILITY_HUGE_POWER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PLAY_ROUGH, MOVE_LIQUIDATION, MOVE_ICE_SPINNER, MOVE_AQUA_JET},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DEWGONG,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_ICE_BODY,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_ALLURING_VOICE, MOVE_KNOCK_OFF},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_ICE_GEM,
    .ability = ABILITY_FLASH_FIRE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_HEAT_WAVE, MOVE_WEATHER_BALL, MOVE_EXTRASENSORY, MOVE_NASTY_PLOT},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CRAMORANT,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_GULP_MISSILE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SURF, MOVE_WEATHER_BALL, MOVE_AIR_SLASH, MOVE_AGILITY},
    },
};

// Name: Swimmer Tanya
static const struct TrainerMon sParty_Lila[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TYPHLOSION_HISUI,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_FLAMETHROWER, MOVE_POLTERGEIST, MOVE_SHADOW_BALL, MOVE_EXTRASENSORY},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SLOWBRO_GALAR,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_QUICK_DRAW,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_PSYCHIC, MOVE_BLIZZARD, MOVE_SLACK_OFF},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SHELL_ARMOR,
    .nature = NATURE_BOLD,
    .moves = {MOVE_BLIZZARD, MOVE_SURF, MOVE_THUNDERBOLT, MOVE_FREEZE_DRY},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_HEALER,
    .nature = NATURE_TIMID,
    .moves = {MOVE_ENERGY_BALL, MOVE_MOONBLAST, MOVE_WEATHER_BALL, MOVE_QUIVER_DANCE},
    },
};

// Name: Swimmer Declan
static const struct TrainerMon sParty_Declan[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FROSMOTH,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_ICE_SCALES,
    .nature = NATURE_BOLD,
    .moves = {MOVE_BLIZZARD, MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_AURORA_VEIL},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARMAROUGE,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_WEAK_ARMOR,
    .nature = NATURE_TIMID,
    .moves = {MOVE_FLAMETHROWER, MOVE_PSYCHIC, MOVE_WEATHER_BALL, MOVE_CALM_MIND},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PRIMEAPE,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_DEFIANT,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CROSS_CHOP, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_RAGE_FIST},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARTICUNO,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SNOW_CLOAK,
    .nature = NATURE_TIMID,
    .moves = {MOVE_AIR_SLASH, MOVE_FREEZE_DRY, MOVE_EXTRASENSORY, MOVE_U_TURN},
    },
};

// Name: Swimmer Spencer
static const struct TrainerMon sParty_Spencer[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SYNCHRONIZE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_DAZZLING_GLEAM, MOVE_REFLECT},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_FOCUS_BAND,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_FLAMETHROWER, MOVE_AIR_SLASH, MOVE_WEATHER_BALL, MOVE_COUNTER},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SCOLIPEDE,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_SPEED_BOOST,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_X_SCISSOR, MOVE_POISON_JAB, MOVE_SMART_STRIKE, MOVE_SWORDS_DANCE},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SANDSLASH_ALOLA,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_SLUSH_RUSH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ICICLE_CRASH, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE},
    },
};

// Name: Swimmer Grace
static const struct TrainerMon sParty_Grace[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MAMOSWINE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_THICK_FAT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_ICICLE_CRASH, MOVE_TRAILBLAZE, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SCRAFTY,
    .heldItem = ITEM_FOCUS_BAND,
    .ability = ABILITY_MOXIE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_PAYBACK, MOVE_POISON_JAB, MOVE_REVERSAL},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WEAVILE,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_PRESSURE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_ICICLE_CRASH, MOVE_THROAT_CHOP},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CINDERACE,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BLAZE_KICK, MOVE_DOUBLE_EDGE, MOVE_ACROBATICS, MOVE_BULK_UP},
    },
};

// Name: Swimmer Jenny
static const struct TrainerMon sParty_Jenny[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GRIMMSNARL,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_PRANKSTER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_FALSE_SURRENDER, MOVE_SPIRIT_BREAK, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_FOCUS_BAND,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_EXPLOSION},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PRIMARINA,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SPARKLING_ARIA, MOVE_MOONBLAST, MOVE_WEATHER_BALL, MOVE_FLIP_TURN},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TINKATON,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_OWN_TEMPO,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_ICE_HAMMER, MOVE_STONE_EDGE},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOREBYSS,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_MODEST,
    .moves = {MOVE_BLIZZARD, MOVE_SURF, MOVE_PSYCHIC, MOVE_SHELL_SMASH},
    },
};

// Name: Swimmer Chad
static const struct TrainerMon sParty_Chad[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ROTOM_FROST,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_BLIZZARD, MOVE_THUNDERBOLT, MOVE_HEX, MOVE_VOLT_SWITCH},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SIRFETCHD,
    .heldItem = ITEM_EJECT_PACK,
    .ability = ABILITY_SCRAPPY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_LEAF_BLADE, MOVE_DUAL_WINGBEAT, MOVE_KNOCK_OFF},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NORMAL_GEM,
    .ability = ABILITY_SCRAPPY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_BODY_SLAM, MOVE_HAMMER_ARM, MOVE_CRUNCH},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_CURSED_BODY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND, MOVE_HYPNOSIS},
    },
};

// Name: Swimmer Isabella
static const struct TrainerMon sParty_Isabella[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CRYOGONAL,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_ICE_BEAM, MOVE_FREEZE_DRY, MOVE_ANCIENT_POWER, MOVE_AURORA_VEIL},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_PRESSURE,
    .nature = NATURE_JOLLY,
    .gender = TRAINER_MON_FEMALE,
    .moves = {MOVE_ROCK_SLIDE, MOVE_DUAL_WINGBEAT, MOVE_STEEL_WING, MOVE_ATTRACT},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KOMMO_O,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SOUNDPROOF,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_THUNDER_PUNCH, MOVE_DRAGON_DANCE},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_VOLT_ABSORB,
    .nature = NATURE_MODEST,
    .moves = {MOVE_DISCHARGE, MOVE_WEATHER_BALL, MOVE_ALLURING_VOICE, MOVE_CALM_MIND},
    },
    {
    .lvl = 69,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CETITAN,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_SLUSH_RUSH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ICE_SPINNER, MOVE_HIGH_HORSEPOWER, MOVE_ICE_SHARD, MOVE_BELLY_DRUM},
    },
};

// Location: Route 125
// ===================

// Name: Presley and Auron [Guards Clear Amulet]
static const struct TrainerMon sParty_Presley[] = {
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_RILLABOOM,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_GRASSY_SURGE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_FAKE_OUT, MOVE_GRASSY_GLIDE, MOVE_KNOCK_OFF, MOVE_HIGH_HORSEPOWER},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CLAWITZER,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = ABILITY_MEGA_LAUNCHER,
    .nature = NATURE_MODEST,
    .moves = {MOVE_TERRAIN_PULSE, MOVE_WATER_PULSE, MOVE_DARK_PULSE, MOVE_AURA_SPHERE},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KINGAMBIT,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SUPREME_OVERLORD,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_KOWTOW_CLEAVE, MOVE_SUCKER_PUNCH, MOVE_IRON_HEAD, MOVE_BRICK_BREAK},
    }
};

// Name: Presley and Auron [Guards Clear Amulet]
static const struct TrainerMon sParty_Auron[] = {
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_OGERPON_CORNERSTONE,
    .heldItem = ITEM_CORNERSTONE_MASK,
    .ability = ABILITY_STURDY,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_IVY_CUDGEL, MOVE_U_TURN, MOVE_SPIKY_SHIELD, MOVE_HORN_LEECH},
    .gender = TRAINER_MON_FEMALE,
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HAWLUCHA,
    .heldItem = ITEM_GRASSY_SEED,
    .ability = ABILITY_UNBURDEN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_ACROBATICS, MOVE_ENCORE, MOVE_TAILWIND},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CERULEDGE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_WEAK_ARMOR,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BITTER_BLADE, MOVE_POLTERGEIST, MOVE_CLOSE_COMBAT, MOVE_WILL_O_WISP},
    },
};

// Location: Shoal Cave Entrance Room
// ==================================

// Location: Shoal Cave Other Rooms
// ================================

// Location: Shoal Cave Ice Room
// =============================

// Name: Expert Timothy [Guards Eject Pack]
static const struct TrainerMon sParty_Timothy1[] = {
    {
    .lvl = 0,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KYUREM,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_PRESSURE,
    .nature = NATURE_HARDY,
    .moves = {MOVE_ICICLE_SPEAR, MOVE_EARTH_POWER, MOVE_FLASH_CANNON, MOVE_ICY_WIND},
    },
    {
    .lvl = 0,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_EJECT_PACK,
    .ability = ABILITY_SPEED_BOOST,
    .nature = NATURE_RASH,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_OVERHEAT, MOVE_BLAZE_KICK, MOVE_PROTECT},
    },
    {
    .lvl = 0,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ZOROARK_HISUI,
    .heldItem = ITEM_SPELL_TAG,
    .ability = ABILITY_ILLUSION,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYPER_VOICE, MOVE_BITTER_MALICE, MOVE_DARK_PULSE, MOVE_EXTRASENSORY},
    },
    {
    .lvl = 0,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BRAVIARY_HISUI,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_TINTED_LENS,
    .nature = NATURE_TIMID,
    .moves = {MOVE_ESPER_WING, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_FUTURE_SIGHT},
    },
    {
    .lvl = 0,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_COBALION,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_JUSTIFIED,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_SACRED_SWORD, MOVE_IRON_HEAD, MOVE_RETALIATE, MOVE_SWORDS_DANCE},
    },
};

// Location: Mossdeep City [Gym - Perma TrickRoom except Leader]
// =============================================================

// Name: Psychic Preston and Psychic Maura
static const struct TrainerMon sParty_Preston[] = {
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_HATTERENE,
    .heldItem = ITEM_FAIRY_GEM,
    .ability = ABILITY_MAGIC_BOUNCE,
    .nature = NATURE_QUIET,
    .moves = {MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, MOVE_DRAINING_KISS, MOVE_MYSTICAL_FIRE},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_INCINEROAR,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_DARKEST_LARIAT, MOVE_BLAZE_KICK, MOVE_LEECH_LIFE, MOVE_DRAIN_PUNCH},
    },
    {
    .lvl = 70,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_ROOM_SERVICE,
    .ability = ABILITY_PURE_POWER,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_ZEN_HEADBUTT, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH},
    },
};

// Name: Psychic Preston and Psychic Maura
static const struct TrainerMon sParty_Maura[] = {
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_INDEEDEE_F,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = ABILITY_PSYCHIC_SURGE,
    .nature = NATURE_QUIET,
    .moves = {MOVE_EXPANDING_FORCE, MOVE_HYPER_VOICE, MOVE_ALLURING_VOICE, MOVE_PSYCHIC_TERRAIN},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_DONPHAN,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_STURDY,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_PLAY_ROUGH, MOVE_ICE_SPINNER, MOVE_PROTECT},
    },
    {
    .lvl = 70,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_QUIET,
    .moves = {MOVE_EXPANDING_FORCE, MOVE_FOCUS_BLAST, MOVE_DAZZLING_GLEAM, MOVE_HYPNOSIS},
    },
};

// Name: Psychic Blake and Psychic Samantha
static const struct TrainerMon sParty_Blake[] = {
    {
    .lvl = 70,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_TOGEKISS,
    .heldItem = ITEM_FAIRY_FEATHER,
    .ability = ABILITY_AERILATE,
    .nature = NATURE_BOLD,
    .moves = {MOVE_ALLURING_VOICE, MOVE_TERA_BLAST, MOVE_FLAMETHROWER, MOVE_FOLLOW_ME},
    },
    {
    .lvl = 70,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_GOTHITELLE,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_SHADOW_TAG,
    .nature = NATURE_QUIET,
    .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_HYPNOSIS, MOVE_FAKE_OUT},
    },
    {
    .lvl = 70,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_TRIPLE_AXEL, MOVE_PROTECT, MOVE_FAKE_OUT},
    },
};

// Name: Psychic Blake and Psychic Samantha
static const struct TrainerMon sParty_Samantha[] = {
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_FARIGIRAF,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_ARMOR_TAIL,
    .nature = NATURE_QUIET,
    .moves = {MOVE_HYPER_VOICE, MOVE_PSYCHIC_NOISE, MOVE_ENERGY_BALL, MOVE_SHADOW_BALL},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_SYLVEON,
    .heldItem = ITEM_FAIRY_FEATHER,
    .ability = ABILITY_PIXILATE,
    .nature = NATURE_QUIET,
    .moves = {MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_LIGHT_SCREEN},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_DIGGERSBY,
    .heldItem = ITEM_ROOM_SERVICE,
    .ability = ABILITY_HUGE_POWER,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_BODY_SLAM, MOVE_STOMPING_TANTRUM, MOVE_HAMMER_ARM, MOVE_ZEN_HEADBUTT},
    },
};

// Name: Psychic Virgil and Gentleman Nate
static const struct TrainerMon sParty_Virgil[] = {
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_LUXRAY,
    .heldItem = ITEM_IRON_BALL,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_ZING_ZAP, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG, MOVE_HOWL},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_HOUNDSTONE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_FLUFFY,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_LAST_RESPECTS, MOVE_PSYCHIC_FANGS, MOVE_PLAY_ROUGH, MOVE_HOWL},
    },
    {
    .lvl = 70,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_MAGMA_ARMOR,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_TEMPER_FLARE, MOVE_STOMPING_TANTRUM, MOVE_ZEN_HEADBUTT, MOVE_HOWL},
    },
};

// Name: Psychic Virgil and Gentleman Nate
static const struct TrainerMon sParty_Nate[] = {
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_RILLABOOM,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = ABILITY_GRASSY_SURGE,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_GRASSY_GLIDE, MOVE_HAMMER_ARM, MOVE_HIGH_HORSEPOWER, MOVE_FAKE_OUT},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_THICK_FAT,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_HEADLONG_RUSH, MOVE_ICE_PUNCH, MOVE_FAKE_OUT},
    },
    {
    .lvl = 70,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_BLASTOISE,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_LIQUIDATION, MOVE_ICE_SPINNER, MOVE_ROCK_SLIDE, MOVE_FAKE_OUT},
    },
};

// Name: Hex Maniac Sylvia and Psychic Hannah
static const struct TrainerMon sParty_Sylvia[] = {
    {
    .lvl = 70,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_PINCURCHIN,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = ABILITY_ELECTRIC_SURGE,
    .nature = NATURE_QUIET,
    .moves = {MOVE_RISING_VOLTAGE, MOVE_MUDDY_WATER, MOVE_REVERSAL, MOVE_TOXIC_SPIKES},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_VENUSAUR,
    .heldItem = ITEM_ROOM_SERVICE,
    .ability = ABILITY_OVERGROW,
    .nature = NATURE_QUIET,
    .moves = {MOVE_ENERGY_BALL, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, MOVE_TERRAIN_PULSE},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_GOLEM_ALOLA,
    .heldItem = ITEM_ELECTRIC_GEM,
    .ability = ABILITY_GALVANIZE,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_EXPLOSION, MOVE_BODY_SLAM, MOVE_ROCK_SLIDE, MOVE_FIRE_PUNCH},
    },
};

// Name: Hex Maniac Sylvia and Psychic Hannah
static const struct TrainerMon sParty_Hannah[] = {
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_BELLIBOLT,
    .heldItem = ITEM_SHUCA_BERRY,
    .ability = ABILITY_ELECTROMORPHOSIS,
    .nature = NATURE_QUIET,
    .moves = {MOVE_RISING_VOLTAGE, MOVE_MUDDY_WATER, MOVE_SLACK_OFF, MOVE_REFLECT},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_VOLT_ABSORB,
    .nature = NATURE_QUIET,
    .moves = {MOVE_HYDRO_PUMP, MOVE_RISING_VOLTAGE, MOVE_VOLT_SWITCH, MOVE_ICE_BEAM},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_TORTERRA,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = ABILITY_OVERGROW,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_SEED_BOMB, MOVE_ROCK_SLIDE, MOVE_GIGA_DRAIN},
    },
};

// Name: Hex Maniac Kathleen and Psychic Nicholas
static const struct TrainerMon sParty_Kathleen[] = {
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_GOLURK,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_IRON_FIST,
    .nature = NATURE_SASSY,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_SHADOW_PUNCH, MOVE_HAMMER_ARM, MOVE_THUNDER_PUNCH},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_HEATMOR,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_WHITE_SMOKE,
    .nature = NATURE_QUIET,
    .moves = {MOVE_BURNING_JEALOUSY, MOVE_SCORCHING_SANDS, MOVE_GIGA_DRAIN, MOVE_DRAIN_PUNCH},
    },
    {
    .lvl = 70,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_GRIMMSNARL,
    .heldItem = ITEM_FAIRY_FEATHER,
    .ability = ABILITY_PRANKSTER,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_THROAT_CHOP, MOVE_SPIRIT_BREAK, MOVE_HAMMER_ARM, MOVE_FAKE_OUT},
    },
};

// Name: Hex Maniac Kathleen and Psychic Nicholas
static const struct TrainerMon sParty_Nicholas[] = {
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM_ZERO_SPATK,
    .species = SPECIES_RHYPERIOR,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_LIGHTNING_ROD,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRILL_RUN, MOVE_ROCK_SLIDE, MOVE_FIRE_PUNCH, MOVE_SURF},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM_ZERO_SPATK,
    .species = SPECIES_DRUDDIGON,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_SHEER_FORCE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRAGON_CLAW, MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_SURF},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM_ZERO_SPATK,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_IRON_BALL,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_FAKE_OUT, MOVE_SURF},
    },
};

// Name: Gentleman Clifford and Psychic Macey
static const struct TrainerMon sParty_Clifford[] = {
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_ADAPTABILITY,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_RAZOR_SHELL, MOVE_NIGHT_SLASH, MOVE_X_SCISSOR, MOVE_PROTECT},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_MAWILE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SHEER_FORCE,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_THUNDER_FANG, MOVE_PROTECT},
    },
    {
    .lvl = 70,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_SANDSLASH,
    .heldItem = ITEM_BUG_GEM,
    .ability = ABILITY_SAND_VEIL,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_STONE_EDGE, MOVE_X_SCISSOR, MOVE_PROTECT},
    },
};

// Name: Gentleman Clifford and Psychic Macey
static const struct TrainerMon sParty_Macey[] = {
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_WIGGLYTUFF,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_COMPETITIVE,
    .nature = NATURE_QUIET,
    .moves = {MOVE_MOONBLAST, MOVE_HYPER_VOICE, MOVE_HYPER_BEAM, MOVE_SING},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_AMOONGUSS,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_EFFECT_SPORE,
    .nature = NATURE_QUIET,
    .moves = {MOVE_ENERGY_BALL, MOVE_SLUDGE_BOMB, MOVE_POLLEN_PUFF, MOVE_SPORE},
    },
    {
    .lvl = 68,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_BRONZONG,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_BRAVE,
    .moves = {MOVE_GYRO_BALL, MOVE_BODY_PRESS, MOVE_FUTURE_SIGHT, MOVE_HYPNOSIS},
    },
};

// Name: Leader Tate & Liza [Double - Perma Psychic Terrain]
static const struct TrainerMon sParty_TateAndLiza1[] = {
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARMAROUGE,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_WEAK_ARMOR,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYCHIC, MOVE_FLAMETHROWER, MOVE_DARK_PULSE, MOVE_AURA_SPHERE},
    },
    {
    .lvl = 69,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TAPU_LELE,
    .heldItem = ITEM_BIG_ROOT,
    .ability = ABILITY_TELEPATHY,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_MOONBLAST, MOVE_EXTRASENSORY, MOVE_SHADOW_BALL, MOVE_DRAINING_KISS},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_CROWN,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYCHIC_NOISE, MOVE_TACHYON_CUTTER, MOVE_AIR_SLASH, MOVE_FUTURE_SIGHT},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_LEAVES,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_SOLAR_BLADE, MOVE_LEAF_BLADE, MOVE_PSYBLADE, MOVE_X_SCISSOR},
    },
    {
    .lvl = 68,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_BOULDER,
    .heldItem = ITEM_PSYCHIC_SEED,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_MIGHTY_CLEAVE, MOVE_ZEN_HEADBUTT, MOVE_SACRED_SWORD, MOVE_PROTECT},
    },
    {
    .lvl = 70,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_VALIANT,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_SPIRIT_BREAK, MOVE_BRICK_BREAK, MOVE_PSYCHO_CUT, MOVE_FIRE_PUNCH},
    },
};

// Flannery Split
// ==============

// Location: Route 127
// ===================

// Location: Route 128
// ===================

// Name: Aidan and Athena [Perma Psychic Terrain, Guards Eject Button]
static const struct TrainerMon sParty_Aidan[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ESPATHRA,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_SPEED_BOOST,
    .nature = NATURE_MODEST,
    .moves = {MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, MOVE_LUMINA_CRASH, MOVE_PROTECT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ALCREMIE,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SWEET_VEIL,
    .nature = NATURE_MODEST,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_DRAINING_KISS, MOVE_PSYCHIC, MOVE_DECORATE},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GALLADE,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_SHARPNESS,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_AQUA_CUTTER},
    },
};

// Name: Aidan and Athena [Perma Psychic Terrain, Guards Eject Button]
static const struct TrainerMon sParty_Athena[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SKELEDIRGE,
    .heldItem = ITEM_EJECT_PACK,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_QUIET,
    .moves = {MOVE_OVERHEAT, MOVE_TORCH_SONG, MOVE_SHADOW_BALL, MOVE_ALLURING_VOICE},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SPEED_BOOST,
    .nature = NATURE_MODEST,
    .moves = {MOVE_FLAMETHROWER, MOVE_AURA_SPHERE, MOVE_SCORCHING_SANDS, MOVE_PROTECT},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_PIXILATE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_HYPER_VOICE, MOVE_EXPANDING_FORCE, MOVE_PSYSHOCK, MOVE_MYSTICAL_FIRE},
    },
};

// Location: Route 129 [Perma Tailwind]
// ====================================

// Name: Swimmer Allison
static const struct TrainerMon sParty_Allison[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BAXCALIBUR,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_THERMAL_EXCHANGE,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_GLAIVE_RUSH, MOVE_ICICLE_SPEAR, MOVE_BODY_PRESS, MOVE_AERIAL_ACE},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VELUZA,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SHARPNESS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LIQUIDATION, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_CRUNCH},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_THICK_FAT,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_REST},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DUDUNSPARCE,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SERENE_GRACE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_HYPER_DRILL, MOVE_DRILL_RUN, MOVE_POISON_JAB, MOVE_DRAGON_TAIL},
    },
};

// Name: Swimmer Reed
static const struct TrainerMon sParty_Reed[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SILVALLY_GRASS,
    .heldItem = ITEM_GRASS_MEMORY,
    .ability = ABILITY_RKS_SYSTEM,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_MULTI_ATTACK, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_IAPAPA_BERRY,
    .ability = ABILITY_MARVEL_SCALE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_DRAINING_KISS, MOVE_HYPNOSIS},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MAGMORTAR,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_FLAME_BODY,
    .nature = NATURE_MODEST,
    .moves = {MOVE_LAVA_PLUME, MOVE_BELCH, MOVE_SCORCHING_SANDS, MOVE_ACID_SPRAY},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_EELEKTROSS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_COIL},
    },
};

// Name: Swimmer Robyn
static const struct TrainerMon sParty_Tisha[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MAROWAK_ALOLA,
    .heldItem = ITEM_THICK_CLUB,
    .ability = ABILITY_ROCK_HEAD,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_SHADOW_BONE, MOVE_BONEMERANG, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_SAND_VEIL,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_NEEDLE_ARM, MOVE_LEAF_STORM, MOVE_FOCUS_BLAST, MOVE_DARK_PULSE},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HUNTAIL,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_WATER_VEIL,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_COIL},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WEEZING_GALAR,
    .heldItem = ITEM_FAIRY_FEATHER,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_MISTY_EXPLOSION, MOVE_STRANGE_STEAM, MOVE_SLUDGE_WAVE, MOVE_FIRE_BLAST},
    },
};

// Location: Route 130 [Perma Tail Wind]
// =========================================

// Name: Swimmer Santiago
static const struct TrainerMon sParty_Santiago[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SEVIPER,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_INFILTRATOR,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_FLAMETHROWER, MOVE_DARK_PULSE, MOVE_GIGA_DRAIN},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_URSALUNA,
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_BULLETPROOF,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_BODY_SLAM, MOVE_PLAY_ROUGH, MOVE_FIRE_PUNCH},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MILTANK,
    .heldItem = ITEM_NORMAL_GEM,
    .ability = ABILITY_SCRAPPY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BODY_SLAM, MOVE_BODY_PRESS, MOVE_HIGH_HORSEPOWER, MOVE_MILK_DRINK},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PINSIR,
    .heldItem = ITEM_COBA_BERRY,
    .ability = ABILITY_MOLD_BREAKER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_X_SCISSOR, MOVE_STORM_THROW, MOVE_BODY_SLAM, MOVE_SWORDS_DANCE},
    },
};

// Name: Swimmer Katie
static const struct TrainerMon sParty_Katie[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SKILL_LINK,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_LIQUIDATION, MOVE_SMART_STRIKE},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MUK,
    .heldItem = ITEM_JABOCA_BERRY,
    .ability = ABILITY_POISON_TOUCH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_POISON_JAB, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_KNOCK_OFF},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_GUTS,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_POISON_JAB},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_DARTS, MOVE_THUNDER_PUNCH, MOVE_DRAGON_DANCE},
    },
};

// Name: Swimmer Rodney
static const struct TrainerMon sParty_Rodney[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .ability = ABILITY_SCRAPPY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOTHITELLE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SHADOW_TAG,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYCHIC, MOVE_DARK_PULSE, MOVE_AURA_SPHERE, MOVE_ENERGY_BALL},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GRAPPLOCT,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_TECHNICIAN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CIRCLE_THROW, MOVE_POWER_UP_PUNCH, MOVE_LIQUIDATION, MOVE_ICE_PUNCH},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRAPION,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SNIPER,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CROSS_POISON, MOVE_NIGHT_SLASH, MOVE_KNOCK_OFF, MOVE_X_SCISSOR},
    },
};

// Location: Route 131 [Perma Tail Wind]
// =========================================

// Name: Swimmer Kara
static const struct TrainerMon sParty_Kara[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_POLIWRATH,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_WATER_ABSORB,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_LIQUIDATION, MOVE_DRAIN_PUNCH, MOVE_POISON_JAB},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRAGAPULT,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_DRAGON_PULSE, MOVE_SHADOW_BALL, MOVE_FIRE_BLAST, MOVE_DRAGON_TAIL},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WYRDEER,
    .heldItem = ITEM_TWISTED_SPOON,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BODY_SLAM, MOVE_PSYSHIELD_BASH, MOVE_EARTHQUAKE, MOVE_FUTURE_SIGHT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CENTISKORCH,
    .heldItem = ITEM_FIRE_GEM,
    .ability = ABILITY_WHITE_SMOKE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BURN_UP, MOVE_FIRE_LASH, MOVE_X_SCISSOR, MOVE_KNOCK_OFF},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HIPPOWDON,
    .heldItem = ITEM_AGUAV_BERRY,
    .ability = ABILITY_SAND_FORCE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_ICE_FANG, MOVE_THUNDER_FANG},
    },
};

// Name: Swimmer Richard
static const struct TrainerMon sParty_Richard[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BOMBIRDIER,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_ROCKY_PAYLOAD,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_KNOCK_OFF, MOVE_DUAL_WINGBEAT, MOVE_ROCK_BLAST, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 75,
    .iv = IV_SPREAD_HIDDEN_POWER_GRASS,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_STATIC,
    .nature = NATURE_MODEST,
    .moves = {MOVE_METEOR_BEAM, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER_GRASS, MOVE_DAZZLING_GLEAM},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_CHARCOAL,
    .ability = ABILITY_GUTS,
    .nature = NATURE_ADAMANT,
    .status = STATUS1_POISON,
    .moves = {MOVE_SIZZLY_SLIDE, MOVE_FACADE, MOVE_TRAILBLAZE, MOVE_IRON_TAIL},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ROLLING_KICK, MOVE_TRIPLE_AXEL, MOVE_EARTHQUAKE},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PECHARUNT,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_POISON_PUPPETEER,
    .nature = NATURE_MODEST,
    .moves = {MOVE_MALIGNANT_CHAIN, MOVE_SHADOW_BALL, MOVE_FOUL_PLAY, MOVE_NIGHT_SHADE},
    },
};

// Name: Swimmer Susie
static const struct TrainerMon sParty_Susie[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_THUNDERBOLT, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_AIR_SLASH},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRAGALGE,
    .heldItem = ITEM_AGUAV_BERRY,
    .ability = ABILITY_POISON_POINT,
    .nature = NATURE_TIMID,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_DRAGON_PULSE, MOVE_SURF, MOVE_TOXIC_SPIKES},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_XATU,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_SYNCHRONIZE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYCHIC, MOVE_AIR_SLASH, MOVE_DAZZLING_GLEAM, MOVE_FUTURE_SIGHT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_CURSED_BODY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PHANTOM_FORCE, MOVE_SHADOW_CLAW, MOVE_GUNK_SHOT, MOVE_KNOCK_OFF},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GARGANACL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PURIFYING_SALT,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_SALT_CURE, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_RECOVER},
    },
};

// Name: Swimmer Talia
static const struct TrainerMon sParty_Talia[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_OCTILLERY,
    .heldItem = ITEM_WACAN_BERRY,
    .ability = ABILITY_SNIPER,
    .nature = NATURE_TIMID,
    .moves = {MOVE_WATER_SPOUT, MOVE_FIRE_BLAST, MOVE_SLUDGE_WAVE, MOVE_ICE_BEAM},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TINKATON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_OWN_TEMPO,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_ICE_HAMMER},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FEZANDIPITI,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_TOXIC_CHAIN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_GUNK_SHOT, MOVE_PLAY_ROUGH, MOVE_ACROBATICS, MOVE_LASH_OUT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KLAWF,
    .heldItem = ITEM_PASSHO_BERRY,
    .ability = ABILITY_ANGER_SHELL,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_STONE_EDGE, MOVE_HIGH_HORSEPOWER, MOVE_CRABHAMMER, MOVE_X_SCISSOR},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_EMBOAR,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_FIRE_PUNCH, MOVE_DRAIN_PUNCH, MOVE_STOMPING_TANTRUM, MOVE_KNOCK_OFF},
    },
};

// Name: Swimmer Kelly
static const struct TrainerMon sParty_Kelly[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_AVALUGG_HISUI,
    .heldItem = ITEM_RED_CARD,
    .ability = ABILITY_STURDY,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BODY_PRESS, MOVE_MOUNTAIN_GALE, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LOKIX,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_TINTED_LENS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_FIRST_IMPRESSION, MOVE_KNOCK_OFF, MOVE_LEECH_LIFE, MOVE_REVERSAL},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_ELECTRIC_GEM,
    .ability = ABILITY_SYNCHRONIZE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_SHOCK_WAVE, MOVE_GRASS_KNOT},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TOGEKISS,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_AERILATE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_ALLURING_VOICE, MOVE_HYPER_VOICE, MOVE_FLAMETHROWER, MOVE_AURA_SPHERE},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BRAMBLEGHAST,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_WIND_RIDER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_POLTERGEIST, MOVE_SEED_BOMB, MOVE_SKITTER_SMACK, MOVE_ROLLOUT},
    },
};

// Location: Pacifidlog Town [Ferry ticket from Flannery]
// ======================================================

// Location: Stella Island
// =======================

// Name: Pokemon Ranger Tyree
static const struct TrainerMon sParty_Tyree[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BISHARP,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_DEFIANT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_METAL_BURST, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 73,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_FOCUS_BAND,
    .ability = ABILITY_PIXILATE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_CALM_MIND},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CHANDELURE,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = ABILITY_FLAME_BODY,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HEAT_WAVE, MOVE_ENERGY_BALL},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_BIG_ROOT,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_LEECH_SEED},
    },
    {
    .lvl = 73,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_DRACO_METEOR, MOVE_DRAGON_DARTS, MOVE_EARTHQUAKE, MOVE_FIRST_IMPRESSION},
    },
    {
    .lvl = 73,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CETITAN,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_THICK_FAT,
    .nature = NATURE_ADAMANT,
    .teraType = TYPE_ICE,
    .moves = {MOVE_ICICLE_CRASH, MOVE_HIGH_HORSEPOWER, MOVE_KNOCK_OFF, MOVE_ICE_SHARD},
    },
};

// Name: Hiker Eric
static const struct TrainerMon sParty_Eric[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KLEAVOR,
    .heldItem = ITEM_FOCUS_BAND,
    .ability = ABILITY_SHARPNESS,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_X_SCISSOR, MOVE_STONE_AXE, MOVE_DUAL_WINGBEAT, MOVE_TAILWIND},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MAGMORTAR,
    .heldItem = ITEM_CUSTAP_BERRY,
    .ability = ABILITY_FLAME_BODY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_FLAMETHROWER, MOVE_BELCH, MOVE_PSYCHIC, MOVE_SCORCHING_SANDS},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NIDOQUEEN,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_ACID_COAT,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_FLAMETHROWER},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC_FANGS, MOVE_EARTHQUAKE, MOVE_AGILITY},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SCRAPPY,
    .nature = NATURE_MODEST,
    .moves = {MOVE_BOOMBURST, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_U_TURN},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_STURDY,
    .nature = NATURE_ADAMANT,
    .teraType = TYPE_FLYING,
    .moves = {MOVE_TERA_BLAST, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_THUNDER_PUNCH},
    },
};

// Name: Battle Girl Aisha
static const struct TrainerMon sParty_Aisha[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HYDREIGON,
    .heldItem = ITEM_ROSELI_BERRY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_DRAGON_PULSE, MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_TAILWIND},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_INTELEON,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SNIPER,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SNIPE_SHOT, MOVE_ICE_BEAM, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SLOWKING_GALAR,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_OWN_TEMPO,
    .nature = NATURE_BOLD,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_FUTURE_SIGHT, MOVE_SURF, MOVE_SLACK_OFF},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PAWMOT,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_IRON_FIST,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_DOUBLE_SHOCK, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH, MOVE_ICE_PUNCH},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KROOKODILE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_DRAGON_CLAW},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KOMMO_O,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_BULLETPROOF,
    .nature = NATURE_ADAMANT,
    .teraType = TYPE_STEEL,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_DRAGON_DANCE},
    },
};

// Name: Parasol Lady Katrina
static const struct TrainerMon sParty_Katrina[] = {
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_BRIGHT_POWDER,
    .ability = ABILITY_DRIZZLE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HURRICANE, MOVE_WEATHER_BALL, MOVE_ICE_BEAM, MOVE_TAILWIND},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_QUAQUAVAL,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_MOXIE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_AQUA_STEP, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_ICE_SPINNER},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = ABILITY_MOXIE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_DUAL_WINGBEAT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCHALUDON,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_STAMINA,
    .nature = NATURE_CALM,
    .moves = {MOVE_ELECTRO_SHOT, MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE, MOVE_AURA_SPHERE},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_WACAN_BERRY,
    .ability = ABILITY_MOXIE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LASH_OUT, MOVE_WATERFALL, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE},
    },
    {
    .lvl = 77,
    .iv = IV_SPREAD_TRICK_ROOM,
    .species = SPECIES_STAKATAKA,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_BEAST_BOOST,
    .nature = NATURE_BRAVE,
    .teraType = TYPE_STEEL,
    .moves = {MOVE_EARTHQUAKE, MOVE_GYRO_BALL, MOVE_BODY_PRESS, MOVE_ROCK_SLIDE},
    },
};

// Name: Guitarist Kendall
static const struct TrainerMon sParty_Kendall[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GALVANTULA,
    .heldItem = ITEM_CHARTI_BERRY,
    .ability = ABILITY_COMPOUND_EYES,
    .nature = NATURE_TIMID,
    .moves = {MOVE_THUNDERBOLT, MOVE_BUG_BUZZ, MOVE_VOLT_SWITCH, MOVE_STICKY_WEB},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_MAGNET_PULL,
    .nature = NATURE_MODEST,
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DUGTRIO,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SAND_VEIL,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUCKER_PUNCH, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_OVERQWIL,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_POISON_POINT,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_GUNK_SHOT, MOVE_CRUNCH, MOVE_LIQUIDATION, MOVE_DESTINY_BOND},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_VOLT_ABSORB,
    .nature = NATURE_BOLD,
    .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_ELECTROWEB},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BOMBIRDIER,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_ROCKY_PAYLOAD,
    .nature = NATURE_JOLLY,
    .teraType = TYPE_ROCK,
    .moves = {MOVE_ROCK_SLIDE, MOVE_DUAL_WINGBEAT, MOVE_KNOCK_OFF, MOVE_FOUL_PLAY},
    },
};

// Name: Lady Annie
static const struct TrainerMon sParty_Annie[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FLUTTER_MANE,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_TIMID,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_DRAINING_KISS, MOVE_SHADOW_BALL, MOVE_MYSTICAL_FIRE},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_ANALYTIC,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_REFLECT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TANGROWTH,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_LEAF_GUARD,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_POWER_WHIP, MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_KNOCK_OFF},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DARMANITAN,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SHEER_FORCE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_FIRE_PUNCH, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_U_TURN},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KINGAMBIT,
    .heldItem = ITEM_BLACK_GLASSES,
    .ability = ABILITY_SUPREME_OVERLORD,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_KOWTOW_CLEAVE, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_ZEN_HEADBUTT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_STURDY,
    .nature = NATURE_CALM,
    .teraType = TYPE_WATER,
    .moves = {MOVE_DISCHARGE, MOVE_FLASH_CANNON, MOVE_TERA_BLAST, MOVE_LIGHT_SCREEN},
    },
};

// Name: Black Belt Damien
static const struct TrainerMon sParty_Damien[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SILVALLY_FIGHTING,
    .heldItem = ITEM_FIGHTING_MEMORY,
    .ability = ABILITY_RKS_SYSTEM,
    .nature = NATURE_HARDY,
    .moves = {MOVE_MULTI_ATTACK, MOVE_DRACO_METEOR, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GLIMMORA,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_TOXIC_DEBRIS,
    .nature = NATURE_TIMID,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, MOVE_ENERGY_BALL, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_FIRE_FANG, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TERRAKION,
    .heldItem = ITEM_EJECT_BUTTON,
    .ability = ABILITY_JUSTIFIED,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_SACRED_SWORD, MOVE_ROCK_SLIDE, MOVE_RETALIATE, MOVE_QUICK_ATTACK},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_MARVEL_SCALE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_ALLURING_VOICE, MOVE_RECOVER},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TALONFLAME,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_GALE_WINGS,
    .nature = NATURE_ADAMANT,
    .teraType = TYPE_GROUND,
    .moves = {MOVE_TERA_BLAST, MOVE_DUAL_WINGBEAT, MOVE_OVERHEAT, MOVE_U_TURN},
    },
};

// Name: Kindler Ryker
static const struct TrainerMon sParty_Ryker[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_DROUGHT,
    .nature = NATURE_MODEST,
    .moves = {MOVE_EARTH_POWER, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BELLIBOLT,
    .heldItem = ITEM_SHUCA_BERRY,
    .ability = ABILITY_ELECTROMORPHOSIS,
    .nature = NATURE_TIMID,
    .moves = {MOVE_DISCHARGE, MOVE_WEATHER_BALL, MOVE_REFLECT, MOVE_SLACK_OFF},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCANINE_HISUI,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_ROCK_HEAD,
    .nature = NATURE_NAIVE,
    .moves = {MOVE_FLARE_BLITZ, MOVE_STONE_EDGE, MOVE_EXTREME_SPEED, MOVE_REVERSAL},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SKELEDIRGE,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_SOLAR_BEAM, MOVE_EARTH_POWER},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NOIVERN,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_AERILATE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_HYPER_VOICE, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_DRAGON_PULSE},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_EXEGGUTOR,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_CHLOROPHYLL,
    .nature = NATURE_MODEST,
    .teraType = TYPE_FIRE,
    .moves = {MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_TERA_BLAST, MOVE_FUTURE_SIGHT},
    },
};

// Name: Pokemon Ranger Mara
static const struct TrainerMon sParty_Mara[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_DRIZZLE,
    .nature = NATURE_BOLD,
    .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_PSYCHIC},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FROSMOTH,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = ABILITY_ICE_SCALES,
    .nature = NATURE_TIMID,
    .moves = {MOVE_WEATHER_BALL, MOVE_ICE_BEAM, MOVE_BUG_BUZZ},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DHELMISE,
    .heldItem = ITEM_BRIGHT_POWDER,
    .ability = ABILITY_STEELWORKER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ROCK_SLIDE, MOVE_ANCHOR_SHOT, MOVE_POLTERGEIST, MOVE_POWER_WHIP},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TOXICROAK,
    .heldItem = ITEM_PAYAPA_BERRY,
    .ability = ABILITY_DRY_SKIN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_GUNK_SHOT, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_BULLET_PUNCH},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BASCULEGION,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LIQUIDATION, MOVE_LAST_RESPECTS, MOVE_CRUNCH, MOVE_ICE_FANG},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOODRA_HISUI,
    .heldItem = ITEM_WACAN_BERRY,
    .ability = ABILITY_SAP_SIPPER,
    .nature = NATURE_MODEST,
    .teraType = TYPE_WATER,
    .moves = {MOVE_THUNDERBOLT, MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_FLASH_CANNON},
    },
};

// Name: Psychic Brandi
static const struct TrainerMon sParty_Brandi[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PALAFIN,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = ABILITY_ZERO_TO_HERO,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_DRAIN_PUNCH, MOVE_FLIP_TURN},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GREAT_TUSK,
    .heldItem = ITEM_EJECT_PACK,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_HEADLONG_RUSH, MOVE_CLOSE_COMBAT, MOVE_ICE_SPINNER, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CINCCINO,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_TECHNICIAN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_TAIL_SLAP, MOVE_ROCK_BLAST, MOVE_BULLET_SEED, MOVE_TRIPLE_AXEL},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CONKELDURR,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_IRON_FIST,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_ICE_PUNCH, MOVE_KNOCK_OFF},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PORYGON_Z,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_ADAPTABILITY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_TRI_ATTACK, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_NASTY_PLOT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SYNCHRONIZE,
    .nature = NATURE_TIMID,
    .teraType = TYPE_FIRE,
    .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_TERA_BLAST, MOVE_FUTURE_SIGHT},
    },
};

// Name: Cooltrainer Tyler
static const struct TrainerMon sParty_Tyler[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LATIAS,
    .heldItem = ITEM_SPELL_TAG,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_BOLD,
    .moves = {MOVE_MIST_BALL, MOVE_SHADOW_BALL, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NIHILEGO,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_BEAST_BOOST,
    .nature = NATURE_TIMID,
    .moves = {MOVE_POWER_GEM, MOVE_SLUDGE_BOMB, MOVE_GRASS_KNOT, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 76,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DECIDUEYE,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_OVERGROW,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LEAF_BLADE, MOVE_SPIRIT_SHACKLE, MOVE_DUAL_WINGBEAT, MOVE_SHADOW_SNEAK},
    },
    {
    .lvl = 74,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_HUGE_POWER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PLAY_ROUGH, MOVE_WATERFALL, MOVE_AQUA_JET, MOVE_BELLY_DRUM},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_JUSTIFIED,
    .nature = NATURE_MODEST,
    .moves = {MOVE_FLASH_CANNON, MOVE_AURA_SPHERE, MOVE_PSYCHIC, MOVE_VACUUM_WAVE},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VOLCARONA,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_FLAME_BODY,
    .nature = NATURE_MODEST,
    .teraType = TYPE_GRASS,
    .moves = {MOVE_BUG_BUZZ, MOVE_FIERY_DANCE, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE},
    },
};

// Name: Pokemon Ranger Shirley
static const struct TrainerMon sParty_Shirley[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_SPELL_TAG,
    .ability = ABILITY_CURSED_BODY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_DESTINY_BOND},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_CHARTI_BERRY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_CALM,
    .moves = {MOVE_THUNDERBOLT, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_STICKY_WEB},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MEGANIUM,
    .heldItem = ITEM_CUSTAP_BERRY,
    .ability = ABILITY_OVERGROW,
    .nature = NATURE_BRAVE,
    .status = STATUS1_POISON,
    .moves = {MOVE_LEAF_STORM, MOVE_PETAL_BLIZZARD, MOVE_EARTHQUAKE, MOVE_FACADE},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BAXCALIBUR,
    .heldItem = ITEM_CHARTI_BERRY,
    .ability = ABILITY_THERMAL_EXCHANGE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_GLAIVE_RUSH, MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_DRAGON_DANCE},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ENTEI,
    .heldItem = ITEM_AGUAV_BERRY,
    .ability = ABILITY_PRESSURE,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_SACRED_FIRE, MOVE_STONE_EDGE, MOVE_EXTREME_SPEED, MOVE_TRAILBLAZE},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LANDORUS_THERIAN,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_RASH,
    .teraType = TYPE_FLYING,
    .moves = {MOVE_SANDSEAR_STORM, MOVE_TERA_BLAST, MOVE_EXTRASENSORY, MOVE_U_TURN},
    },
};

// Name: Cooltrainer Teddy
static const struct TrainerMon sParty_Teddy[] = {
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ZAPDOS,
    .heldItem = ITEM_AGUAV_BERRY,
    .ability = ABILITY_PRESSURE,
    .nature = NATURE_BOLD,
    .moves = {MOVE_THUNDERBOLT, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_ROOST},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_TREADS,
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_ICE_SPINNER, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TAUROS_PALDEA_AQUA,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_RAGING_BULL, MOVE_HIGH_HORSEPOWER, MOVE_BULK_UP},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_EJECT_PACK,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_OVERHEAT, MOVE_FLARE_BLITZ, MOVE_PLAY_ROUGH, MOVE_EXTREME_SPEED},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VENUSAUR,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_OVERGROW,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_SLEEP_POWDER},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRAGAPULT,
    .heldItem = ITEM_SPELL_TAG,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_SERIOUS,
    .teraType = TYPE_GHOST,
    .moves = {MOVE_DRAGON_DARTS, MOVE_TERA_BLAST, MOVE_FLAMETHROWER, MOVE_U_TURN},
    },
};

// Name: Challenger Phoebe
static const struct TrainerMon sParty_Phoebe2[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SUICUNE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_PRESSURE,
    .nature = NATURE_BOLD,
    .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_TAILWIND},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CHIEN_PAO,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SWORD_OF_RUIN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ICE_SPINNER, MOVE_LASH_OUT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ANNIHILAPE,
    .heldItem = ITEM_EJECT_BUTTON,
    .ability = ABILITY_DEFIANT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_DRAIN_PUNCH, MOVE_RAGE_FIST, MOVE_POISON_JAB},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SANDY_SHOCKS,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_TIMID,
    .moves = {MOVE_EARTH_POWER, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_FLASH_CANNON},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GHOLDENGO,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_GOOD_AS_GOLD,
    .nature = NATURE_TIMID,
    .moves = {MOVE_MAKE_IT_RAIN, MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TERAPAGOS_TERASTAL,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_TERA_SHELL,
    .nature = NATURE_TIMID,
    .teraType = TYPE_STELLAR,
    .moves = {MOVE_TERA_STARSTORM, MOVE_DAZZLING_GLEAM, MOVE_EARTH_POWER, MOVE_ENERGY_BALL},
    },
};

// Location: Lava Cave
// ===================

// Location: Lavaridge Town [Gym - Perma Magma Storm except Leader]
// ================================================================

// Name: Kindler Jeff
static const struct TrainerMon sParty_Jeff[] = {
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_INFERNAPE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_FIRE_PUNCH, MOVE_DRAIN_PUNCH, MOVE_FAKE_OUT, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_EJECT_PACK,
    .ability = ABILITY_FLASH_FIRE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_OVERHEAT, MOVE_EXTRASENSORY, MOVE_HEX, MOVE_WILL_O_WISP},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_GALVANIZE,
    .nature = NATURE_LONELY,
    .moves = {MOVE_HYPER_VOICE, MOVE_OVERHEAT, MOVE_VOLT_SWITCH, MOVE_ICE_FANG},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_RAPIDASH_GALAR,
    .heldItem = ITEM_KEBIA_BERRY,
    .ability = ABILITY_PASTEL_VEIL,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PLAY_ROUGH, MOVE_ZEN_HEADBUTT, MOVE_HIGH_HORSEPOWER, MOVE_WILL_O_WISP},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_BLUNDER_POLICY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_ZEN_HEADBUTT, MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ, MOVE_HYPNOSIS},
    },
};

// Name: Bug Maniac Axle
static const struct TrainerMon sParty_Axle[] = {
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ORBEETLE,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = ABILITY_SWARM,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYCHIC, MOVE_BUG_BUZZ, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HEATMOR,
    .heldItem = ITEM_JABOCA_BERRY,
    .ability = ABILITY_WHITE_SMOKE,
    .nature = NATURE_HARDY,
    .moves = {MOVE_OVERHEAT, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_DRAIN_PUNCH},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MUK,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_POISON_TOUCH,
    .nature = NATURE_TIMID,
    .moves = {MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_FIRE_PUNCH, MOVE_PROTECT},
    },
};

// Name: Battler Girl Danielle
static const struct TrainerMon sParty_Danielle[] = {
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_IRON_FIST,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_BULLET_PUNCH, MOVE_FAKE_OUT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_SHARPNESS,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_RAZOR_SHELL, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE, MOVE_PROTECT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SANDSLASH,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_SAND_VEIL,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_POISON_JAB, MOVE_BULLDOZE},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PANGORO,
    .heldItem = ITEM_BRIGHT_POWDER,
    .ability = ABILITY_IRON_FIST,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_KNOCK_OFF, MOVE_CIRCLE_THROW, MOVE_POISON_JAB, MOVE_BULLET_PUNCH},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARMAROUGE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_WEAK_ARMOR,
    .nature = NATURE_TIMID,
    .moves = {MOVE_HEAT_WAVE, MOVE_PSYCHIC, MOVE_AURA_SPHERE, MOVE_FLAME_CHARGE},
    },
};

// Name: Cooltrainer Gerald
static const struct TrainerMon sParty_Gerald[] = {
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_EMOLGA,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_STATIC,
    .nature = NATURE_TIMID,
    .moves = {MOVE_DISCHARGE, MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_THUNDER_WAVE},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TINKATON,
    .heldItem = ITEM_FAIRY_GEM,
    .ability = ABILITY_MOLD_BREAKER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_FAKE_OUT, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MABOSSTIFF,
    .heldItem = ITEM_AGUAV_BERRY,
    .ability = ABILITY_STAKEOUT,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_BODY_SLAM, MOVE_HONE_CLAWS},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MEOWSTIC,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_MYSTIC_CHARM,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_DARK_PULSE, MOVE_ALLURING_VOICE},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_FLASH_FIRE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_FLARE_BLITZ, MOVE_DOUBLE_EDGE, MOVE_FLAME_CHARGE, MOVE_DETECT},
    },
};

// Name: Hex Maniac Cole
static const struct TrainerMon sParty_Cole[] = {
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SLOWBRO_GALAR,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_QUICK_DRAW,
    .nature = NATURE_MODEST,
    .moves = {MOVE_GUNK_SHOT, MOVE_FIRE_BLAST, MOVE_SCALD, MOVE_SLACK_OFF},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TOGEKISS,
    .heldItem = ITEM_BLUNDER_POLICY,
    .ability = ABILITY_SERENE_GRACE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_AIR_SLASH, MOVE_FIRE_BLAST, MOVE_EXTRASENSORY, MOVE_ANCIENT_POWER},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ROTOM_FAN,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_DISCHARGE, MOVE_AIR_SLASH, MOVE_HEX, MOVE_THUNDER_WAVE},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SCALD, MOVE_VENOSHOCK, MOVE_HEX, MOVE_TOXIC},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FROSLASS,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SNOW_CLOAK,
    .nature = NATURE_MODEST,
    .moves = {MOVE_ICE_BEAM, MOVE_HEX, MOVE_ICY_WIND, MOVE_WILL_O_WISP},
    },
};

// Name: Hiker Eli
static const struct TrainerMon sParty_Eli[] = {
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = ABILITY_SAND_STREAM,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_FIRE_FANG, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_MAGMA_ARMOR,
    .nature = NATURE_QUIET,
    .moves = {MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_ANCIENT_POWER},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_REVAVROOM,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_OVERCOAT,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_SPIN_OUT, MOVE_IRON_HEAD, MOVE_POISON_JAB, MOVE_SHIFT_GEAR},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_STOUTLAND,
    .heldItem = ITEM_SILK_SCARF,
    .ability = ABILITY_SAND_RUSH,
    .nature = NATURE_ADAMANT,
    .gender = TRAINER_MON_FEMALE,
    .moves = {MOVE_RETALIATE, MOVE_PLAY_ROUGH, MOVE_ROCK_TOMB, MOVE_ATTRACT},
    },
};

// Name: Dragon Tamer Jace
static const struct TrainerMon sParty_Jace[] = {
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SIMISEAR,
    .heldItem = ITEM_LIECHI_BERRY,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_HASTY,
    .moves = {MOVE_FIRE_BLAST, MOVE_SUPERPOWER, MOVE_KNOCK_OFF, MOVE_NATURAL_GIFT},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DIPPLIN,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_SUPERSWEET_SYRUP,
    .nature = NATURE_CALM,
    .moves = {MOVE_GIGA_DRAIN, MOVE_DRAGON_BREATH, MOVE_POLLEN_PUFF, MOVE_RECOVER},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HAWLUCHA,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_LIMBER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SKY_ATTACK, MOVE_ACROBATICS, MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_UXIE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_PSYCHIC, MOVE_DRAIN_PUNCH, MOVE_DRAINING_KISS, MOVE_FUTURE_SIGHT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ZEKROM,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_TERAVOLT,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_FUSION_BOLT, MOVE_DRAGON_CLAW, MOVE_ZEN_HEADBUTT, MOVE_ROCK_TOMB},
    },
};

// Name: Expert Keegan
static const struct TrainerMon sParty_Keegan[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_TREADS,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_IRON_HEAD, MOVE_ICE_FANG, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SAMUROTT_HISUI,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = ABILITY_SHARPNESS,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CEASELESS_EDGE, MOVE_RAZOR_SHELL, MOVE_RETALIATE, MOVE_DETECT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_URSALUNA,
    .heldItem = ITEM_EJECT_PACK,
    .ability = ABILITY_BULLETPROOF,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_HEADLONG_RUSH, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_TRAILBLAZE},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ELECTIVIRE,
    .heldItem = ITEM_ROWAP_BERRY,
    .ability = ABILITY_IRON_FIST,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_HAMMER_ARM, MOVE_REFLECT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_TEMPER_FLARE, MOVE_PLAY_ROUGH, MOVE_EXTREME_SPEED, MOVE_MORNING_SUN},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_RESHIRAM,
    .heldItem = ITEM_HABAN_BERRY,
    .ability = ABILITY_TURBOBLAZE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_FUSION_FLARE, MOVE_DRAGON_PULSE, MOVE_EARTH_POWER, MOVE_DRAGON_TAIL},
    },
};

// Name: Leader Flannery [Double]
static const struct TrainerMon sParty_Flannery1[] = {
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CERULEDGE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_WEAK_ARMOR,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BITTER_BLADE, MOVE_POLTERGEIST, MOVE_SOLAR_BLADE, MOVE_FLAME_CHARGE},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_DROUGHT,
    .nature = NATURE_MODEST,
    .moves = {MOVE_WEATHER_BALL, MOVE_SOLAR_BEAM, MOVE_EARTH_POWER, MOVE_PROTECT},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WALKING_WAKE,
    .heldItem = ITEM_CHARCOAL,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYDRO_STEAM, MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_SLEEP_TALK},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_RAGING_BOLT,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_THUNDERBOLT, MOVE_DRAGON_PULSE, MOVE_SOLAR_BEAM, MOVE_ANCIENT_POWER},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOUGING_FIRE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRAGON_CLAW, MOVE_TEMPER_FLARE, MOVE_STOMPING_TANTRUM, MOVE_BURNING_BULWARK},
    },
    {
    .lvl = 77,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_MOTH,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_HEAT_WAVE, MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL},
    },
};

// Elite Four Split
// ================

// Location: Mt. Chimney
// =====================

// Location: New Mauville
// ======================

// Location: Desert Underpass
// ==========================

// Location: Evergrande City
// =========================

// Name: Brendan Three [Triggered on stairs - Perma Electric Terrain]
static const struct TrainerMon sParty_BrendanEvergrandeCity[] = {
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MIRAIDON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_HADRON_ENGINE,
    .nature = NATURE_RASH,
    .moves = {MOVE_ELECTRO_DRIFT, MOVE_DRAGON_PULSE, MOVE_OVERHEAT, MOVE_DAZZLING_GLEAM},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ZAPDOS_GALAR,
    .heldItem = ITEM_EJECT_PACK,
    .ability = ABILITY_DEFIANT,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_BRAVE_BIRD, MOVE_THUNDEROUS_KICK, MOVE_TRAILBLAZE},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_LEAVES,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_LEAF_BLADE, MOVE_PSYBLADE, MOVE_SACRED_SWORD, MOVE_X_SCISSOR},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GENESECT,
    .heldItem = ITEM_SHOCK_DRIVE,
    .ability = ABILITY_DOWNLOAD,
    .nature = NATURE_TIMID,
    .moves = {MOVE_TECHNO_BLAST, MOVE_BUG_BUZZ, MOVE_FLASH_CANNON, MOVE_FLAMETHROWER},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MAMOSWINE,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_THICK_FAT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_EARTHQUAKE, MOVE_ICICLE_CRASH, MOVE_STONE_EDGE, MOVE_ICE_SHARD},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CHI_YU,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_BEADS_OF_RUIN,
    .nature = NATURE_MODEST,
    .moves = {MOVE_OVERHEAT, MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_NASTY_PLOT},
    },
};

// Location: Victory Road 1F
// =========================

// Location: Victory Road B1F
// ==========================

// Location: Victory Road B2F
// ==========================

// Name: Cooltrainer Albert [Double]
static const struct TrainerMon sParty_Albert[] = {
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NINETALES_ALOLA,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = ABILITY_SNOW_WARNING,
    .nature = NATURE_TIMID,
    .moves = {MOVE_BLIZZARD, MOVE_MOONBLAST, MOVE_FREEZE_DRY, MOVE_AURORA_VEIL},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SANDSLASH_ALOLA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SLUSH_RUSH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ICICLE_CRASH, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SPIKY_SHIELD},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRAGAPULT,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_DRAGON_DARTS},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_KEBIA_BERRY,
    .ability = ABILITY_PIXILATE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_DESTINY_BOND},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_SHELL_ARMOR,
    .nature = NATURE_QUIET,
    .moves = {MOVE_ICE_BEAM, MOVE_LIQUIDATION, MOVE_THUNDERBOLT, MOVE_ANCIENT_POWER},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_BATTLE_ARMOR,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_STONE_EDGE, MOVE_X_SCISSOR, MOVE_LIQUIDATION},
    },
};

// Name: Cooltrainer Katelynn [Double]
static const struct TrainerMon sParty_Katelynn[] = {
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_AGUAV_BERRY,
    .ability = ABILITY_DRIZZLE,
    .nature = NATURE_BOLD,
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_SLEEP_TALK, MOVE_REST},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYDRO_PUMP, MOVE_ENERGY_BALL, MOVE_ICE_BEAM, MOVE_FAKE_OUT},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BASCULEGION_F,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SHADOW_BALL, MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_PAIN_SPLIT},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_VOLT_ABSORB,
    .nature = NATURE_MODEST,
    .moves = {MOVE_THUNDERBOLT, MOVE_WEATHER_BALL, MOVE_ALLURING_VOICE, MOVE_ELECTROWEB},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WEAVILE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_PRESSURE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ICICLE_CRASH, MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_FAKE_OUT},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOODRA_HISUI,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_GOOEY,
    .nature = NATURE_MODEST,
    .moves = {MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_SLUDGE_BOMB, MOVE_PROTECT},
    },
};

// Name: Cooltrainer Quincy [Double]
static const struct TrainerMon sParty_Quincy[] = {
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HIPPOWDON,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_SAND_STREAM,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_STONE_EDGE, MOVE_RECOVER, MOVE_PROTECT},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_BOULDER,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_MIGHTY_CLEAVE, MOVE_ZEN_HEADBUTT, MOVE_SACRED_SWORD, MOVE_X_SCISSOR},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TINKATON,
    .heldItem = ITEM_METAL_COAT,
    .ability = ABILITY_OWN_TEMPO,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_ICE_HAMMER, MOVE_FAKE_OUT},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_NATURAL_CURE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_ENERGY_BALL, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL, MOVE_SLEEP_POWDER},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ZAPDOS,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .ability = ABILITY_PRESSURE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_THUNDERBOLT, MOVE_AIR_SLASH, MOVE_WEATHER_BALL, MOVE_HEAT_WAVE},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_EXCADRILL,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_SAND_RUSH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_EARTHQUAKE, MOVE_HIGH_HORSEPOWER, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE},
    },
};

// Name: Cooltrainer Edgar
static const struct TrainerMon sParty_Edgar[] = {
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_FOCUS_BAND,
    .ability = ABILITY_SAND_STREAM,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_COUNTER, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ENAMORUS_THERIAN,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_OVERCOAT,
    .nature = NATURE_MODEST,
    .moves = {MOVE_DRAINING_KISS, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_MYSTICAL_FIRE},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FERROTHORN,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_IRON_BARBS,
    .nature = NATURE_RELAXED,
    .moves = {MOVE_POWER_WHIP, MOVE_BODY_PRESS, MOVE_GYRO_BALL, MOVE_CURSE},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SAND_VEIL,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_SCALE_SHOT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_STONE_EDGE},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRACOVISH,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_SAND_RUSH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_FISHIOUS_REND},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_EXCADRILL,
    .heldItem = ITEM_STEEL_GEM,
    .ability = ABILITY_SAND_RUSH,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_X_SCISSOR},
    },
};

// Name: Aroma Lady Rachel [Double - Perma Grassy Terrain, Guards Focus Sash]
static const struct TrainerMon sParty_Hope[] = {
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_DROUGHT,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HELIOLISK,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_SOLAR_POWER,
    .nature = NATURE_TIMID,
    .moves = {MOVE_THUNDERBOLT, MOVE_OVERDRIVE, MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VENUSAUR,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_CHLOROPHYLL,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL, MOVE_GROWTH},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SNEASLER,
    .heldItem = ITEM_GRASSY_SEED,
    .ability = ABILITY_UNBURDEN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DIRE_CLAW, MOVE_CLOSE_COMBAT, MOVE_ACROBATICS, MOVE_FAKE_OUT},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WALKING_WAKE,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_TIMID,
    .moves = {MOVE_HYDRO_STEAM, MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_PROTECT},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_EXTREME_SPEED, MOVE_PLAY_ROUGH},
    },
};

// Name: Expert Magik [Guards Life Orb]
static const struct TrainerMon sParty_Samuel[] = {
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HEATRAN,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_FLASH_FIRE,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_MAGMA_STORM, MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_FLAME_CHARGE},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_EMPOLEON,
    .heldItem = ITEM_SHUCA_BERRY,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SURF, MOVE_FLASH_CANNON, MOVE_ICE_BEAM, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_INFERNAPE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, MOVE_POISON_JAB, MOVE_U_TURN},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LATIAS,
    .heldItem = ITEM_SOUL_DEW,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_MIST_BALL, MOVE_DRAGON_PULSE, MOVE_AURA_SPHERE, MOVE_ALLURING_VOICE},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = ABILITY_GUTS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_MEGAHORN, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_HIGH_HORSEPOWER},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_JIRACHI,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_SERENE_GRACE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_METEOR_BEAM, MOVE_PSYCHIC, MOVE_FLASH_CANNON, MOVE_CALM_MIND},
    },
};

// Name: Cooltrainer Shannon [Double - Guards Rocky Helmet / Leftovers]
static const struct TrainerMon sParty_Shannon[] = {
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_DRAGON_CLAW, MOVE_DUAL_WINGBEAT, MOVE_BULLDOZE, MOVE_TAILWIND},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC_FANGS, MOVE_ICE_PUNCH, MOVE_ROCK_SLIDE},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MIENSHAO,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_ICE_SPINNER, MOVE_FAKE_OUT},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DECIDUEYE,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_LONG_REACH,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_LEAF_STORM, MOVE_LEAF_BLADE, MOVE_SPIRIT_SHACKLE, MOVE_ACROBATICS},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CINCCINO,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_SKILL_LINK,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_TAIL_SLAP, MOVE_ROCK_BLAST, MOVE_BULLET_SEED, MOVE_TRIPLE_AXEL},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ENTEI,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SACRED_FIRE, MOVE_STONE_EDGE, MOVE_EXTREME_SPEED, MOVE_FLAME_CHARGE},
    },
};

// Name: Cooltrainer Charlie
static const struct TrainerMon sParty_Charlie[] = {
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ELECTIVIRE,
    .heldItem = ITEM_SHUCA_BERRY,
    .ability = ABILITY_IRON_FIST,
    .nature = NATURE_HASTY,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE, MOVE_LOW_KICK},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NIHILEGO,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_BEAST_BOOST,
    .nature = NATURE_TIMID,
    .moves = {MOVE_METEOR_BEAM, MOVE_SLUDGE_WAVE, MOVE_THUNDERBOLT, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FROSLASS,
    .heldItem = ITEM_BRIGHT_POWDER,
    .ability = ABILITY_CURSED_BODY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE, MOVE_DESTINY_BOND},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PRIMARINA,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SPARKLING_ARIA, MOVE_ALLURING_VOICE, MOVE_PSYCHIC_NOISE, MOVE_ICY_WIND},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_VOLCARONA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_FLAME_BODY,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HEAT_WAVE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MEW,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_SYNCHRONIZE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYCHIC, MOVE_ANCIENT_POWER, MOVE_AURA_SPHERE, MOVE_CALM_MIND},
    },
};

// Name: Cooltrainer Owen [Perma Electric Terrain, Guards Mental Herb]
static const struct TrainerMon sParty_Owen[] = {
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_RAICHU_ALOLA,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = ABILITY_SURGE_SURFER,
    .nature = NATURE_MODEST,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_RISING_VOLTAGE, MOVE_PSYCHIC},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_AZELF,
    .heldItem = ITEM_ELECTRIC_SEED,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_HASTY,
    .moves = {MOVE_ACROBATICS, MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_STEALTH_ROCK},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PAWMOT,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .ability = ABILITY_IRON_FIST,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_DOUBLE_SHOCK, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_ANALYTIC,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SURF, MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_MOTH,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_HEAT_WAVE, MOVE_ENERGY_BALL, MOVE_SLUDGE_WAVE, MOVE_U_TURN},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_VALIANT,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_RASH,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_MOONBLAST, MOVE_THUNDERBOLT, MOVE_LIQUIDATION},
    },
};

// Name: Cooltrainer Dianne [Perma Psychic Terrain]
static const struct TrainerMon sParty_Dianne[] = {
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TAPU_LELE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_TELEPATHY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_FOCUS_BLAST, MOVE_THUNDERBOLT},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_VALIANT,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_SPIRIT_BREAK, MOVE_LIQUIDATION, MOVE_KNOCK_OFF},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HYDREIGON,
    .heldItem = ITEM_EJECT_PACK,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_DRACO_METEOR, MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_FLASH_CANNON},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HAWLUCHA,
    .heldItem = ITEM_PSYCHIC_SEED,
    .ability = ABILITY_UNBURDEN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_ACROBATICS, MOVE_SWORDS_DANCE, MOVE_ROOST},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KARTANA,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_BEAST_BOOST,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_SWORDS_DANCE},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TOGEKISS,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_SERENE_GRACE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_AIR_SLASH, MOVE_DRAINING_KISS, MOVE_PSYSHOCK, MOVE_NASTY_PLOT},
    },
};

// Name: Cooltrainer MBF [Double]
static const struct TrainerMon sParty_Felix[] = {
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WHIMSICOTT,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_PRANKSTER,
    .nature = NATURE_TIMID,
    .moves = {MOVE_MOONBLAST, MOVE_TICKLE, MOVE_SUNNY_DAY, MOVE_TAILWIND},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KROOKODILE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_CRUNCH, MOVE_GUNK_SHOT, MOVE_STONE_EDGE},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FLUTTER_MANE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_PROTECT},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LILLIGANT_HISUI,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_CHLOROPHYLL,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_LEAF_BLADE, MOVE_CLOSE_COMBAT, MOVE_TRIPLE_AXEL, MOVE_VICTORY_DANCE},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WALKING_WAKE,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYDRO_STEAM, MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_PROTECT},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KINGAMBIT,
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = ABILITY_SUPREME_OVERLORD,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_KOWTOW_CLEAVE, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
    },
};

// Name: Cooltrainer Caroline [Perma Grassy Terrain]
static const struct TrainerMon sParty_Caroline[] = {
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_RILLABOOM,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_OVERGROW,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, MOVE_HIGH_HORSEPOWER, MOVE_U_TURN},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_EMPOLEON,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_STEALTH_ROCK, MOVE_FLASH_CANNON},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_AGUAV_BERRY,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_MILD,
    .moves = {MOVE_OVERHEAT, MOVE_EXTREME_SPEED, MOVE_PLAY_ROUGH, MOVE_FLARE_BLITZ},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCHALUDON,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_STAMINA,
    .nature = NATURE_RELAXED,
    .moves = {MOVE_BODY_PRESS, MOVE_FLASH_CANNON, MOVE_DRACO_METEOR, MOVE_FOUL_PLAY},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRAGALGE,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_ADAPTABILITY,
    .nature = NATURE_MODEST,
    .moves = {MOVE_DRAGON_PULSE, MOVE_SLUDGE_WAVE, MOVE_FOCUS_BLAST, MOVE_FLIP_TURN},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_COMFEY,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_TRIAGE,
    .nature = NATURE_BOLD,
    .moves = {MOVE_CALM_MIND, MOVE_DRAINING_KISS, MOVE_KNOCK_OFF, MOVE_U_TURN},
    },
};

// Name: Cooltrainer Terra
static const struct TrainerMon sParty_Vito[] = {
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TINKATON,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_MOLD_BREAKER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_STEALTH_ROCK, MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_MOTH,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_PSYCHIC, MOVE_SLUDGE_WAVE, MOVE_ENERGY_BALL, MOVE_FIERY_DANCE},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SHAYMIN_SKY,
    .heldItem = ITEM_GRASS_GEM,
    .ability = ABILITY_SERENE_GRACE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_SEED_FLARE, MOVE_AIR_SLASH, MOVE_EARTH_POWER, MOVE_GRASS_WHISTLE},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CYCLIZAR,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_REGENERATOR,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_SHED_TAIL, MOVE_DRAGON_RUSH, MOVE_IRON_HEAD, MOVE_RAIN_DANCE},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MARSHADOW,
    .heldItem = ITEM_EJECT_PACK,
    .ability = ABILITY_TECHNICIAN,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_SPECTRAL_THIEF, MOVE_SHADOW_SNEAK, MOVE_KNOCK_OFF},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GRENINJA_BATTLE_BOND,
    .heldItem = ITEM_WATER_GEM,
    .ability = ABILITY_BATTLE_BOND,
    .nature = NATURE_TIMID,
    .gender = TRAINER_MON_MALE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_GRASS_KNOT, MOVE_ICE_BEAM, MOVE_DARK_PULSE},
    },
};

// Name: Cooltrainer Red [Perma Psychic Terrain]
static const struct TrainerMon sParty_Michelle[] = {
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GRIMMSNARL,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = ABILITY_PRANKSTER,
    .nature = NATURE_BOLD,
    .moves = {MOVE_FOUL_PLAY, MOVE_BODY_PRESS, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_PALAFIN,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_ZERO_TO_HERO,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_LIQUIDATION, MOVE_FLIP_TURN, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GLISCOR,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = ABILITY_POISON_HEAL,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_EARTHQUAKE, MOVE_DUAL_WINGBEAT, MOVE_STEALTH_ROCK, MOVE_PROTECT},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KOMMO_O,
    .heldItem = ITEM_THROAT_SPRAY,
    .ability = ABILITY_OVERCOAT,
    .nature = NATURE_TIMID,
    .moves = {MOVE_CLANGING_SCALES, MOVE_AURA_SPHERE, MOVE_BOOMBURST, MOVE_FLASH_CANNON},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MEOWSCARADA,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_PROTEAN,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH, MOVE_U_TURN},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_CROWN,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_EXPANDING_FORCE, MOVE_TACHYON_CUTTER, MOVE_FOCUS_BLAST, MOVE_VOLT_SWITCH},
    },
};

// Name: Cooltrainer Mitchell [Perma Misty Terrain]
static const struct TrainerMon sParty_Mitchell[] = {
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_LONELY,
    .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_DRACO_METEOR},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MAGEARNA,
    .heldItem = ITEM_CUSTAP_BERRY,
    .ability = ABILITY_SOUL_HEART,
    .nature = NATURE_MODEST,
    .moves = {MOVE_AURA_SPHERE, MOVE_MISTY_EXPLOSION, MOVE_PSYCHIC, MOVE_SUBSTITUTE},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ANNIHILAPE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_DEFIANT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_RAGE_FIST, MOVE_LASH_OUT},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CLAWITZER,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_MEGA_LAUNCHER,
    .nature = NATURE_MODEST,
    .moves = {MOVE_TERRAIN_PULSE, MOVE_WATER_PULSE, MOVE_AURA_SPHERE, MOVE_ICE_BEAM},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TYPHLOSION,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_ERUPTION, MOVE_SOLAR_BEAM, MOVE_NATURE_POWER, MOVE_FLAMETHROWER},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FLUTTER_MANE,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_TIMID,
    .moves = {MOVE_MOONBLAST, MOVE_DRAINING_KISS, MOVE_SHADOW_BALL, MOVE_MYSTICAL_FIRE},
    },
};

// Name: Cooltrainer Halle [Perma Misty Terrain, Guards Assault Vest]
static const struct TrainerMon sParty_Halle[] = {
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_WEEZING_GALAR,
    .heldItem = ITEM_BABIRI_BERRY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_SASSY,
    .moves = {MOVE_GUNK_SHOT, MOVE_PLAY_ROUGH, MOVE_FIRE_BLAST, MOVE_PAIN_SPLIT},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SCREAM_TAIL,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_TIMID,
    .moves = {MOVE_MISTY_EXPLOSION, MOVE_PSYCHIC, MOVE_FIRE_BLAST, MOVE_BLIZZARD},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRAMPA,
    .heldItem = ITEM_CUSTAP_BERRY,
    .ability = ABILITY_BERSERK,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYPER_VOICE, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_ROOST},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TURTONATOR,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_SHELL_ARMOR,
    .nature = NATURE_TIMID,
    .moves = {MOVE_FIRE_BLAST, MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_SHELL_SMASH},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ENAMORUS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_CONTRARY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_SPRINGTIDE_STORM, MOVE_HURRICANE, MOVE_EARTH_POWER, MOVE_MYSTICAL_FIRE},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SNEASLER,
    .heldItem = ITEM_MISTY_SEED,
    .ability = ABILITY_UNBURDEN,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_ACROBATICS, MOVE_SWORDS_DANCE},
    },
};

// Name: Drewd
static const struct TrainerMon sParty_Drewd[] = {
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_RED_CARD,
    .ability = ABILITY_STURDY,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_DRILL_PECK, MOVE_STEALTH_ROCK, MOVE_SPIKES, MOVE_ROOST},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ANNIHILAPE,
    .heldItem = ITEM_COBA_BERRY,
    .ability = ABILITY_DEFIANT,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_RAGE_FIST, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_GUNK_SHOT},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_URSHIFU_RAPID_STRIKE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_UNSEEN_FIST,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_SURGING_STRIKES, MOVE_DRAIN_PUNCH, MOVE_ICE_SPINNER, MOVE_THUNDER_PUNCH},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DARMANITAN_GALAR,
    .heldItem = ITEM_FOCUS_BAND,
    .ability = ABILITY_ZEN_MODE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_ICICLE_CRASH, MOVE_FIRE_PUNCH, MOVE_STONE_EDGE, MOVE_BELLY_DRUM},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NAGANADEL,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_BEAST_BOOST,
    .nature = NATURE_MODEST,
    .moves = {MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_SLUDGE_WAVE, MOVE_DARK_PULSE},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KINGAMBIT,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_SUPREME_OVERLORD,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_KOWTOW_CLEAVE, MOVE_IRON_HEAD, MOVE_ZEN_HEADBUTT, MOVE_LOW_KICK},
    },
};

// Location: Evergrande City
// =========================

// Name: Magma Leader Maxie [Back to Back with Archie]
static const struct TrainerMon sParty_MaxieMtChimney[] = {
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GROUDON,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_DROUGHT,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_HAMMER_ARM},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_HONCHKROW,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = ABILITY_SUPER_LUCK,
    .nature = NATURE_MODEST,
    .moves = {MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_U_TURN},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_SPELL_TAG,
    .ability = ABILITY_DISGUISE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_WOOD_HAMMER, MOVE_DAZZLING_GLEAM},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GOUGING_FIRE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRAGON_CLAW, MOVE_TEMPER_FLARE, MOVE_EARTHQUAKE, MOVE_HOWL},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SCOVILLAIN,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = ABILITY_CHLOROPHYLL,
    .nature = NATURE_HARDY,
    .moves = {MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER, MOVE_ZEN_HEADBUTT, MOVE_REST},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_OGERPON_HEARTHFLAME,
    .heldItem = ITEM_HEARTHFLAME_MASK,
    .ability = ABILITY_MOLD_BREAKER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_IVY_CUDGEL, MOVE_HORN_LEECH, MOVE_SUPERPOWER, MOVE_SPIKY_SHIELD},
    },
};

// Name: Aqua Leader Archie [Back to Back with Maxie]
static const struct TrainerMon sParty_Archie[] = {
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KYOGRE,
    .heldItem = ITEM_WIDE_LENS,
    .ability = ABILITY_DRIZZLE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_ORIGIN_PULSE, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_ANCIENT_POWER},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_QUAQUAVAL,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_AQUA_STEP, MOVE_AQUA_JET, MOVE_ACROBATICS},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_EISCUE,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_ICE_FACE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_ICE_SPINNER, MOVE_FREEZE_DRY, MOVE_HEAD_SMASH, MOVE_LIQUIDATION},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_RAGING_BOLT,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_MODEST,
    .moves = {MOVE_THUNDERBOLT, MOVE_THUNDERCLAP, MOVE_DRAGON_PULSE, MOVE_CALM_MIND},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BASCULEGION,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_LIQUIDATION, MOVE_PHANTOM_FORCE, MOVE_PSYCHIC_FANGS, MOVE_FLIP_TURN},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_OGERPON_WELLSPRING,
    .heldItem = ITEM_WELLSPRING_MASK,
    .ability = ABILITY_WATER_ABSORB,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_IVY_CUDGEL, MOVE_HORN_LEECH, MOVE_SUPERPOWER, MOVE_SPIKY_SHIELD},
    },
};

// Location: Pokemon League
// ========================


// Name: Elite Four Jasmine [Double]
static const struct TrainerMon sParty_Jasmine[] = {
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LANDORUS_THERIAN,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_STOMPING_TANTRUM, MOVE_HAMMER_ARM, MOVE_ROCK_SLIDE, MOVE_U_TURN},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SANDY_SHOCKS,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_TIMID,
    .moves = {MOVE_EARTH_POWER, MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TAPU_LELE,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_TELEPATHY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_DRAINING_KISS},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC_FANGS, MOVE_ICE_PUNCH, MOVE_TRAILBLAZE},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ROTOM_WASH,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_SIGNAL_BEAM, MOVE_ELECTROWEB},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MELMETAL,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_IRON_FIST,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_THUNDER_PUNCH, MOVE_SUPERPOWER, MOVE_PROTECT},
    },
};

// Name: Elite Four Whitney [Double - Tailwind always +15 score]
static const struct TrainerMon sParty_Whitney[] = {
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_URSALUNA_BLOODMOON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_MINDS_EYE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_BLOOD_MOON, MOVE_EARTH_POWER, MOVE_MOONBLAST, MOVE_MOONLIGHT},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TORNADUS,
    .heldItem = ITEM_MENTAL_HERB,
    .ability = ABILITY_PRANKSTER,
    .nature = NATURE_TIMID,
    .moves = {MOVE_AIR_SLASH, MOVE_EXTRASENSORY, MOVE_KNOCK_OFF, MOVE_TAILWIND},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SYLVEON,
    .heldItem = ITEM_KEBIA_BERRY,
    .ability = ABILITY_PIXILATE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_MYSTICAL_FIRE, MOVE_PROTECT},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_HANDS,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_FAKE_OUT},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_POWER_HERB,
    .ability = ABILITY_POISON_POINT,
    .nature = NATURE_TIMID,
    .moves = {MOVE_SOLAR_BEAM, MOVE_ENERGY_BALL, MOVE_SLUDGE_BOMB, MOVE_EXTRASENSORY},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TERAPAGOS_TERASTAL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_TERA_SHELL,
    .nature = NATURE_BOLD,
    .moves = {MOVE_TERA_STARSTORM, MOVE_EARTH_POWER, MOVE_AURA_SPHERE, MOVE_DARK_PULSE},
    },
};

// Name: Elite Four Janine [Double]
static const struct TrainerMon sParty_Janine[] = {
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GRENINJA,
    .heldItem = ITEM_LOADED_DICE,
    .ability = ABILITY_TORRENT,
    .nature = NATURE_HASTY,
    .moves = {MOVE_WATER_SHURIKEN, MOVE_DARK_PULSE, MOVE_GUNK_SHOT, MOVE_ICE_BEAM},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GLIMMORA,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_TOXIC_DEBRIS,
    .nature = NATURE_BOLD,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_MORTAL_SPIN},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SNEASLER,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_UNBURDEN,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_DIRE_CLAW, MOVE_DRAIN_PUNCH, MOVE_ACROBATICS, MOVE_FAKE_OUT},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARTICUNO_GALAR,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_COMPETITIVE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_FREEZING_GLARE, MOVE_AIR_SLASH, MOVE_SHADOW_BALL, MOVE_ANCIENT_POWER},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_CURSED_BODY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_HEX, MOVE_PSYCHIC, MOVE_THUNDERBOLT},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_NAGANADEL,
    .heldItem = ITEM_SHUCA_BERRY,
    .ability = ABILITY_BEAST_BOOST,
    .nature = NATURE_MODEST,
    .moves = {MOVE_SLUDGE_BOMB, MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_PROTECT},
    },
};

// Name: Elite Four Misty [Double]
static const struct TrainerMon sParty_Misty[] = {
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_MULTISCALE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DRAGON_CLAW, MOVE_DUAL_WINGBEAT, MOVE_AQUA_TAIL, MOVE_STOMPING_TANTRUM},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_IRON_BUNDLE,
    .heldItem = ITEM_BOOSTER_ENERGY,
    .ability = ABILITY_QUARK_DRIVE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_FREEZE_DRY, MOVE_WATER_PULSE, MOVE_FLIP_TURN, MOVE_AIR_CUTTER},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ZERAORA,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_VOLT_ABSORB,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_PLASMA_FISTS, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_FAKE_OUT},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MANAPHY,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = ABILITY_HYDRATION,
    .nature = NATURE_TIMID,
    .moves = {MOVE_SCALD, MOVE_ENERGY_BALL, MOVE_ICE_BEAM, MOVE_PROTECT},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_ANALYTIC,
    .nature = NATURE_TIMID,
    .moves = {MOVE_PSYCHIC, MOVE_SCALD, MOVE_THUNDERBOLT, MOVE_RAPID_SPIN},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TOGEKISS,
    .heldItem = ITEM_FAIRY_FEATHER,
    .ability = ABILITY_AERILATE,
    .nature = NATURE_MODEST,
    .moves = {MOVE_HYPER_VOICE, MOVE_DAZZLING_GLEAM, MOVE_FIRE_BLAST, MOVE_TRI_ATTACK},
    },
};

// Name: Champion May
static const struct TrainerMon sParty_May[] = {
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_KORAIDON,
    .heldItem = ITEM_HABAN_BERRY,
    .ability = ABILITY_ORICHALCUM_PULSE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_COLLISION_COURSE, MOVE_DRAGON_CLAW, MOVE_FLARE_BLITZ, MOVE_IRON_HEAD},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_FLUTTER_MANE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_PROTOSYNTHESIS,
    .nature = NATURE_TIMID,
    .moves = {MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_MYSTICAL_FIRE},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_LATIAS,
    .heldItem = ITEM_SOUL_DEW,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_MIST_BALL, MOVE_DRAGON_PULSE, MOVE_ALLURING_VOICE, MOVE_CALM_MIND},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MOLTRES_GALAR,
    .heldItem = ITEM_AGUAV_BERRY,
    .ability = ABILITY_BERSERK,
    .nature = NATURE_TIMID,
    .moves = {MOVE_FIERY_WRATH, MOVE_AIR_SLASH, MOVE_ANCIENT_POWER, MOVE_ROOST},
    },
    {
    .lvl = 89,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BAXCALIBUR,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_THERMAL_EXCHANGE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_GLAIVE_RUSH, MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_ICE_SHARD},
    },
    {
    .lvl = 90,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SPEED_BOOST,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_BLAZE_KICK, MOVE_THUNDER_PUNCH, MOVE_SWORDS_DANCE},
    },
};

// END

static const struct TrainerMon sParty_Jennie[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Missy[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Matthew[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Tara[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jerome[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Thalia1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Demetrius[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_CharlieOld[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_KiraAndDan1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Garrison[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jani[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Edwin1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jacob[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Benjamin[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Alyssa[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_ShellyRoute110[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MattRoute110[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntSeafloorCavern1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntSeafloorCavern2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntSeafloorCavern3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Gabrielle1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Alberto[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Ed[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntSeafloorCavern4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntSpaceCenter1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Fredrick[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Zander[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_ShellySeafloorCavern[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Leah[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Violet[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Rose3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Rose4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Rose5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Foster[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Dusty2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Dusty3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Dusty4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Dusty5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GabbyAndTy1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GabbyAndTy2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GabbyAndTy3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GabbyAndTy4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GabbyAndTy5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GabbyAndTy6[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Austina[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Gwen[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Lola2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Lola3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Lola4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Lola5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Simon[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Ricky2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Ricky3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Ricky4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Ricky5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Randall[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Parker[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_George[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Berke[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Braxton[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Vincent[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Leroy[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Wilton4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Wilton5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Warren[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Mary[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Alexia[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jody[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Wendy[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Keira[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Brooke2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Brooke3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Brooke4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Brooke5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Patricia[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Kindra[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Valerie1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Tasha[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Valerie2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Valerie3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Valerie4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Valerie5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntSpaceCenter2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Naomi[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cindy3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cindy4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cindy5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cindy6[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Mollie[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Garret[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Winston2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Winston3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Winston4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Winston5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Mark[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Steve2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Steve3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Steve4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Steve5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Luis[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Dominik[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Darrin[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Tony1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_David[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Roland[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Stan[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Barry[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Dean[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Gilbert[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Franklin[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jack[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Dudley[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Tony2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Tony3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Tony4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Tony5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Hitoshi[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Kiyo[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Nob3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Nob4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Nob5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Yuji[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Atsushi[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Fernando1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Dalton3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Dalton4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Dalton5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Bernie2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Bernie3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Bernie4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Bernie5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Justin[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Ethan2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Ethan3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Ethan4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Ethan5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Derek[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jeffrey2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jeffrey3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jeffrey4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jeffrey5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_William[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Joshua[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cameron1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cameron2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cameron3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cameron4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cameron5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Kayla[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Alexis[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jacki1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jacki2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jacki3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jacki4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jacki5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Micah[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Douglas[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Thomas[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Walter2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Walter3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Walter4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Walter5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Phoebe[] = {
	{.species = SPECIES_POOCHYENA, .lvl = 10},
};

static const struct TrainerMon sParty_Glacia[] = {
	{.species = SPECIES_POOCHYENA, .lvl = 10},
};

static const struct TrainerMon sParty_Drake[] = {
	{.species = SPECIES_POOCHYENA, .lvl = 10},
};

static const struct TrainerMon sParty_Ted[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Paul[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jerry2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jerry3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jerry4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jerry5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Georgia[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Karen2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Karen3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Karen4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Karen5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_AnnaAndMeg1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_AnnaAndMeg2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_AnnaAndMeg3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_AnnaAndMeg4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_AnnaAndMeg5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Colton[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Miguel2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Miguel3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Miguel4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Miguel5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Isabel2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Isabel3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Isabel4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Isabel5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Timothy2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Timothy3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Timothy4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Timothy5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Shelby2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Shelby3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Shelby4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Shelby5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Calvin2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Calvin3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Calvin4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Calvin5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Eddie[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Wallace[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Elliot1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Ned[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Carter[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Elliot2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Elliot3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Elliot4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Elliot5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Ronald[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Benjamin2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Benjamin3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Benjamin4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Benjamin5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Abigail2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Abigail3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Abigail4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Abigail5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Dylan1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Dylan2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Dylan3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Dylan4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Dylan5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Maria2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Maria3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Maria4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Maria5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Camden[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Isaiah1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Pablo1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Chase[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Isaiah2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Isaiah3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Isaiah4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Isaiah5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Isobel[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Donny[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Katelyn1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Katelyn2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Katelyn3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Katelyn4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Katelyn5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Nicolas1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Nicolas2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Nicolas3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Nicolas4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Nicolas5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Aaron[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Colin[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Robert1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Benny[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Robert2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Robert3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Robert4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Robert5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Alex[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Beck[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Yasu[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Lao2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Lao3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Lao4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Lao5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cyndy1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cora[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Paula[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cyndy2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cyndy3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cyndy4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cyndy5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Madeline4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Madeline5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Beverly[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Imani[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Kyla[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Denise[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Beth[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Alice[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Nikki[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Brenda[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Dana[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Sienna[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Debra[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Linda[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Kaylee[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Laurel[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Carlee[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jenny2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jenny3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jenny4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jenny5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Martha[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cedric[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Diana2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Diana3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Diana4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Diana5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_AmyAndLiv1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_AmyAndLiv2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MiuAndYuki[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_AmyAndLiv3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GinaAndMia2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_AmyAndLiv4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_AmyAndLiv5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_AmyAndLiv6[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Ernest1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Dwayne[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Phillip[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Leonard[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Duncan[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Ernest2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Ernest3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Ernest4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Ernest5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jazmyn[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jonas[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Kayley[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Kelvin[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Marley[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Reyna[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Hudson[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Conor[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_TabithaMossdeep[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Edwin24[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Edwin25[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_WallyVR1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_BrendanRoute119Mudkip[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_BrendanRoute103Treecko[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_BrendanRoute119Treecko[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_BrendanRoute103Torchic[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_BrendanRoute110Torchic[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_BrendanRoute119Torchic[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MayRoute103Mudkip[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MayRoute110Mudkip[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MayRoute119Mudkip[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MayRoute103Treecko[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MayRoute110Treecko[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MayRoute119Treecko[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MayRoute103Torchic[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MayRoute110Torchic[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MayRoute119Torchic[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Isaac1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Davis[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Isaac2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Isaac3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Isaac4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Isaac5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Lydia3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Lydia4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Lydia5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Sebastian[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jackson4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jackson5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Sophia[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Catherine5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntSeafloorCavern5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntJaggedPass[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Leonardo[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Harrison[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Terry[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntSpaceCenter3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntSpaceCenter4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntSpaceCenter5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntSpaceCenter6[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntSpaceCenter7[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_BrendanRustboroMudkip[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Paxton[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jonathan[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_BrendanRustboroTorchic[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Sally[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Robin[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_James2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_James3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_James4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_James5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Alan[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Lucas2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Mike1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Trent2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Trent3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Trent4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Trent5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_DezAndLuke[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_LeaAndJed[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_KiraAndDan2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_KiraAndDan3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_KiraAndDan4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_KiraAndDan5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Johanna[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Keigo[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_WallyMauville[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_WallyVR2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_WallyVR3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_WallyVR4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_WallyVR5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_BrendanLilycoveTreecko[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_BrendanLilycoveTorchic[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MayLilycoveMudkip[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MayLilycoveTreecko[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MayLilycoveTorchic[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jonah[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Henry[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Roger[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Alexa[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Ruben[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Koji1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Wayne[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_KimAndIris[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MelAndPaul[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_JohnAndJay1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_JohnAndJay2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_JohnAndJay3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_JohnAndJay4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_JohnAndJay5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_LilaAndRoy2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_LilaAndRoy3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_LilaAndRoy4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_LilaAndRoy5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_LisaAndRay[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Dawson[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Sarah[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Darian[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Deandre[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Darcy[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MaxieMossdeep[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Pete[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Isabelle[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Andres1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Josue[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Camron[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Elijah[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Jaiden[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Alix[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Marlene[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Makayla[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Leonel[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MayRustboroTreecko[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MayRustboroTorchic[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Roxanne2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Roxanne3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Roxanne4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Roxanne5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Brawly2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Brawly3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Brawly4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Brawly5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Wattson2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Wattson3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Wattson4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Wattson5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Flannery2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Flannery3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Flannery4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Flannery5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Norman2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Norman3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Norman4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Norman5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Winona2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Winona3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Winona4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Winona5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_TateAndLiza2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_TateAndLiza3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_TateAndLiza4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_TateAndLiza5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Juan2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Juan3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Juan4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Juan5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Anabel[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Tucker[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Spenser[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Greta[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Noland[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Lucy[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Brandon[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Andres2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Andres3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Andres4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Andres5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cory2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cory3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cory4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cory5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Pablo2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Pablo3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Pablo4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Pablo5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Koji2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Koji3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Koji4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Koji5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cristin4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Cristin5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Fernando2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Fernando3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Fernando4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Fernando5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Sawyer5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Gabrielle2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Gabrielle3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Gabrielle4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Gabrielle5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Thalia2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Thalia3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Thalia4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Thalia5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Mariela[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Alvaro[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Everett[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Red[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Leaf[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_BrendanLinkPlaceholder[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MayLinkPlaceholder[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Norman1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_LeaderBrandon[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Chester[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntWeatherInst1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntWeatherInst2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntWeatherInst3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntWeatherInst4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntWeatherInst5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_ShellyWeatherInstitute[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMtPyre1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMtPyre2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMtPyre3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMtPyre4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMagmaHideout1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMagmaHideout2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMagmaHideout3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMagmaHideout14[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMagmaHideout4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMagmaHideout5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMagmaHideout6[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMagmaHideout7[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMagmaHideout8[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMagmaHideout15[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMagmaHideout10[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMagmaHideout9[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMagmaHideout16[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMagmaHideout11[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMagmaHideout12[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMagmaHideout13[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_TabithaMagmaHideout[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_MaxieMagmaHideout[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntAquaHideout1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntAquaHideout5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntAquaHideout2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntAquaHideout7[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntAquaHideout4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntAquaHideout6[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntAquaHideout3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntAquaHideout8[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Matt[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntRusturfTunnel[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMuseum1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntMuseum2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_RivalRoute110[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon Party_Edwin[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_RivalRustboro[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Joey[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntPetalburgWoods[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Autumn[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntNewMauville1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntNewMauville2[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntNewMauville3[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntNewMauville4[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntNewMauville5[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntNewMauville6[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntNewMauville7[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntNewMauville8[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntNewMauville9[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntNewMauville10[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntNewMauville11[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_GruntNewMauville12[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_TabithaMtChimney[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Victor[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Victoria[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Vivi[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Vicky[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Celia[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Daisuke[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Brooke[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Steve1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Rick[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Lenny[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Lucas1[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Donald[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Greg[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Kent[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Taylor[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Olivia[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Crissy[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Bethany[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Larry[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Carol[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

// Name: Swimmer Tisha and Swimmer Clarence
static const struct TrainerMon sParty_Clarence[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};


// Name: Siblings Reli And Ian [Double]
static const struct TrainerMon sParty_ReliAndIan[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

// Name: Lass Janice [Double]
static const struct TrainerMon sParty_Janice[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

// Name: Bird Keeper Coby
static const struct TrainerMon sParty_Coby[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

// Name: Swimmer Kevin and Swimmer Talia
static const struct TrainerMon sParty_Kevin[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

static const struct TrainerMon sParty_Carolina[] = {
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
	{.species = SPECIES_NONE, .lvl = 0},
};

// Name: Lady Ruby (DOES NOT TRIGGER!)
static const struct TrainerMon sParty_Ruby[] = {
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MUNKIDORI,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_TOXIC_CHAIN,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ZOROARK_HISUI,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_ILLUSION,
    .nature = NATURE_TIMID,
    .moves = {MOVE_NASTY_PLOT, MOVE_BITTER_MALICE, MOVE_HYPER_VOICE, MOVE_FOCUS_BLAST},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_JELLICENT,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = ABILITY_CURSED_BODY,
    .nature = NATURE_TIMID,
    .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_DARK_GEM,
    .ability = ABILITY_STRONG_JAW,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_CRUNCH, MOVE_WATERFALL, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_GRIMMSNARL,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_PRANKSTER,
    .nature = NATURE_CAREFUL,
    .moves = {MOVE_BULK_UP, MOVE_SUCKER_PUNCH, MOVE_PLAY_ROUGH, MOVE_HAMMER_ARM},
    },
    {
    .lvl = 53,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_CLODSIRE,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = ABILITY_WATER_ABSORB,
    .nature = NATURE_ADAMANT,
    .teraType = TYPE_GROUND,
    .moves = {MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_CURSE, MOVE_LIQUIDATION},
    },
};

// Name: Test Traine 2
static const struct TrainerMon sParty_Timmy[] = {
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_MEOWSCARADA,
    .heldItem = ITEM_CLEAR_AMULET,
    .ability = ABILITY_OVERGROW,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SEED_BOMB, MOVE_GRASS_PLEDGE},
    },
    {
    .lvl = 75,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_DELPHOX,
    .heldItem = ITEM_COVERT_CLOAK,
    .ability = ABILITY_BLAZE,
    .nature = NATURE_TIMID,
    .moves = {MOVE_FLAMETHROWER, MOVE_FIRE_PLEDGE},
    },
};

// Name: Test Trainer
static const struct TrainerMon sParty_Ivan[] = {
    {
    .lvl = 55,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_TERAPAGOS_TERASTAL,
    .heldItem = ITEM_LUM_BERRY,
    .ability = ABILITY_TERA_SHIFT,
    .nature = NATURE_DOCILE,
    .moves = {MOVE_EMBER, MOVE_WATER_GUN, MOVE_ABSORB, MOVE_HYPER_VOICE},
    },
};

## Pokemon Lucid Changelog
Documentation for 1.2.2 and lower: [dex](https://lucid-dex-1-2-2.vercel.app/) and [calc](https://lucid-calc-v1-2-2.vercel.app/) for 1.2.2.

### v1.2.11
- Fixes Future Sight calculation with mon in the front instead of the back (this was a regression again from a previous release, sorry)

### v1.2.10
#### Fixes
* Fixes freeze in 2v1 battles when right side trainer had no mons to switch in, while left side trainer was about to switch in a new mon
* Fixes spread move bug in doubles when right slot mon was supposed to defrost. E.g Heat Wave hit could only defrost the right side slot (player POV)
* Fixes Life Orb damage reduction when mon couldn't move due to flinching
* Fixes Choice Lock timing when mon was unable to use a move (e.g. due to Fake Out)
* Fizes Wandering Spirit copied ability activating on fainted mon (e.g. copied Intimidate activated on fainted mon)
* Fixes wrongly applied calculation order (stat stages should always apply first)
* Fixes Choloroblast taking damage when the move failed. Chloroblast previously used the Steel Beam effect but the moves are slighlty different
* Fixes Mortal Spin trying to poison a mon that has a status already
* Fixes Mold Breaker AI calc damage inaccuracy. E.g. Mold Breaker into Fluffy would see damage as if the mon wouldn't be able to hit through.
* Fixes Figy Berry battler corruption when the pokemon was confused (the item was removed for wrong pokemon if the pokemon was confused by the berry)

#### Other
* Toggle running shoes action under utility for permanent running (credits: Jasper)
* Janine overworld sprite (credits: Frag)
* Signature color mugshots for E4 (credits: grintoul)
* Move type icons in battle
* Money max out under utilities
* Casual Mode
  * Egg generation by breeder in the setting house (generates valid, non duplicate eggs)
    * Valid eggs are all eggs with an egg group except Ditto (Manaphy and Phinone can be generated)
  * Unlimited Heart Scales
  * Pokemon signature items clerk + Silvally and Arceus items outside the house given by the kids

### v1.2.9
* Fixes Life Orb not causing any damage and activating on Status moves
* Fixes partner battler Endure bug in doubles with spread moves like surf
  * Endure didn't protect the mon

### v1.2.8
* Fixes recoil moves causing attacker to faint if target was healed with a berry
* Fixes Revenge damage considaration bug when mon was in party
* Fixes Life Orb / Shell Bell missing timing when an ability activated after the mon was switching in due to an Eject item
* Fixes AI Absorb check using player mons best move as base for recovery instead of absorb move itself.
* Fixes Inconsistencies in Speed Control logic between Status and Attacking Speed control moves.
  * It should behave according to the `Speed Control` section but an additional part has been added to it mainly because the functions were split internally
* Fixes White Herb message occasionally displaying the wrong battler
* Fixes Jaboca and Rowap berry not triggering when mon fainted
* Fixes Dragon Darts ignoring Follow Me / Rage Powder
* Fixes Stomping Tantrum not doubling power if failed due to freeze or sleep
* Fixes Bug Bite not ignoring Unnerve
* Fixes Leech Seed recovery amount that is increased by Big Root
* Fixes Commander activation on dead partner
* Fixes Mirror Armor into Obstruct crash.
* Fixes Imposter not transforming into the correct opposing mon in double battles
* Fixes Thermal Exchange not blocking Will-o-Wisp
* Fixes Air Balloon not breaking before it can be stolen with Thief or Covet
* Fixes Clear Body, Full Metal Body, White Smoke and Protective Pads not protecting from secondary effects of Protect like effects
* Fixes Embody Aspect only activating once per battle
* Fixes Overworld Sandstorm issues
* Replaces unintended Mental Herb with Sitrus Berry

### v1.2.7 - Scaled Randomizer Release
* Scaled Randomized: Randomazation is based on base stat total with few exceptions (threshold are inclusive).
  * 0 Badges: 0 - 305
  * 2 Badges: 305 - 390
  * 4 Badges: 390 - 490
  * 6 Badges: 490 - 550
  * 8 Badges: 500 - 550 (Legendary mons are not included)
  * Legendary mons are replaced with other Legendaries / Rotom
  * The starter has it's own table and they don't have 3 ivs
  * Happiny, Honedge and Nincada (except Ninjask) lines are not available
  * Randomazation is based on trainer ID so reset the game if you want a new pool
  * Eggs aren't randomized

* Bugfixes
    * Fixes Well Baked Body not having any ai checks
    * Fixes Recoil drastically incrasing recoil damage

### v1.2.6
* Bugfixes
  * Fixed Melmetals weight
  * Fixed Brick Break/Psychic Fangs/Raging Bull breaking screens if target is immune
  * Fixed Spread Moves criting Battle Armor mons in doubles. Could only happen if the BA mon was in slot 2
  * Fixed hazards using the original types when a mon was terastallized
  * Fixed negative priority moves being affected by dazzling abilities

* Note
  * Santiago Ursaluna still has bulletproof isntead of guts which is not going to be changed

### v1.2.5
* Bugfixes
  * Fixed Chandelure ability (now flash fire for real)
  * Fixed Dazzling activating from out of party
  * Fix Tera Shell not respecting immunity (activated but no damage is dealt)
  * Fixes spread move healing in doubles (applies to Parabolic Charge)
  * Fixed ai not seeing correct amount of Toxic Spikes in doubles
  * Fixes Dragon Tail missing dmg timing vs Iron Barbs / Rocky Helmet
  * Full HP check for recovery moves
  * Fix hasMoveEffect on field to prevent mutation
  * Fix intim mutation
    * When Eject Pack was activated by intimidate and a mon with Protosynthesis + Booster Energy switched in, the Protosynthesis mon started intimidating opposing mons and potentially froze the game.

* Misc
  * Pokemon caught by default have their friendship maxed out
  * Move relearner in party screen (Free, casual mode only)
  * Bazzo and Brian by Bazzo


### v1.2.4
* Bugfixes
  * Fixes SecondBestDamage on negative move effects. A regression from 1.2.3 caused by phase2 check change. Should be all correct now.
  * Fixes AI prio move kills when slower
  * Fix Protean / Fake Out interaction. When Protean mon was unable to move, the typing was silently changed
  * Fixes Recovery on full when player took residual damage
    * Never recovers when at 90% or more hp
    * Recovers on residual when other conditions aren't met at 80% or less hp

### v1.2.3
* Bugfixes
  * Fixes Rock Smash rocks not breakable in Granite Cave
  * Fixes Red Card / Eject Pack interaction. Red Card activates before Eject Pack and Eject Pack will miss timing
  * Fixes Parting Shot / Eject Pack interaction (only parting shot activates)
  * Fixes Berries plant-able from bag
  * Fixes Palafin Flip Turn inconsistency
    * If Palafin saw a kill with Flip Turn + an other move, it was random between Flip Turn and the other move
    * Only happened when Flip Turn saw a kill as well as the other move. If Flip Turn didn't see a kill but the other did, Flip Turn still got the highest score
  * Fixes AI seeing that sound moves go through sub
  * Fix trainer order in Lavaridge Gym
  * Fixes Frist Impression inconsistency while in party. Damage is seen for the turn it can be used and while in party. If the move would fail the dmg is 0
  * Fixes follower freezing the game if you talk to them after activating strength
  * Fixes Room Serive applying on the wrong battler after Explosion
  * Fixes Shed Tail making a sub with 2/4 hp instead of 1/4
  * Fixes Eeveelution signature moves still applying effect on fail and incorrect message
  * Fixes Greninja form on Cooltrainer Terra
  * Fixes Blunder Policy proc'ing on immunities
  * Fixes Throat Spray missing timing when a mon is switched in due to Eject Pack
  * Fixes Move score if multiply moves did the exact same amount of damage, out of those only the first move in order got the increase
  * Fixes niche hospitality issue
    *Could only happen if a mon died in the same slot while 2 siwtches happened in the following turns with abilities that activated
  * Fixes ai not seeing player's -ate ability
  * Fixes Charge issue
  * Fixes manual Magma Storm switch out with Eject Pack / Button
  * Fixes round ai usage when no partner
  * Fixes wrong battler updating:
    * Could have happened when both player and ai mon left the field at the same time and player mon was already once on the field.
    * This usually happened by using a hit escape move (eg U-Turn) twice while killing the ai mon on second usage
    * It was a rare issue because the data gets updated at the end of the turn regardless so only manifested in the above described situation
  * Fixed de-leveling higher level mons when the evo level was lower (Fix provided by Terra)
  * Fixes Eevee / Super Candy interaction
  * Fixes AI Defog, Brick Break effect, Rapid Spin effect check in doubles (now checks both mons)
  * Fixes dynamic base power tera boost (eg gyro ball is not boosted to 60bp)
  * Note (Usually I don't add expansion updates in the changelog but this one is important)
    * The remaining rounding error was fixed for stuff like gems by SBird
  * Fixes status sound moves not seeing Soundproof
  * Fixes mons getting defrosted by a move even if opposing mon couldn't hit target
  * Fixes Weather Ball not respecting Cloud Nine
  * Fixed order for Toxic Debris and Rapin Spin effect (Rapid Spin / Mortal Spin correctly activate after Toxic Debris now)
  * Fixes AI thinking it can't protect again when previous mon on the same slot protected

* AI Changes
  * In phase 2 If there is a negative move effect present, the AI will go for the best dmg move instead of previously checked number of hits
  * New Wide Guard AI (See AI doc)
  * Crits are no longer positive effects but have additional AI (see AI doc)
  * Absorb is no longer a positive effects but have additional AI (see AI doc)
  * Future Sight infront of dark types is now 50/50
  * New Destiny Bond AI (see AI Doc)
  * Dragon Darts will be correctly in doubles depending on hits (See AI doc)
  * Salt Cure AI
  * New recovery AI (see doc)
  * Minor change for self increasing Speed stat (see ai doc)

* Misc
  * Casual Mode (same trainers but the player gets many more options)
  * Randomzer (for now only a normal randomizer is available)
  * Check Encounters ingame under utility
  * Basculing evo only needs 29 recoil dmg
  * Magic Guard now prevents damage from Magma Storm
  * All level up moves can now be learned by tm/tutor. Because it is a hack they don't show up in dex (besides as level up) (Credit Terra)
  * Omaster can now learn Power Gem by a tutor
  * Extreme Speed added to Flareon as level up move
  * Synchronize was reverted to the gen3 overworld effect
  * Golduck 1st and 2nd ability are both Swfit Swim

* Trainer Changes
  * Ruin Maniac Gaben Chandelure ability is now Flash Fire instead of Flame Body (initial mistake)
  * Kindler Ryker move changes for Arcanine and Skeledirge
  * Cooltrainer Katelynn Chilling Water replaced with Scald
  * Lady Ruby removed from Tera Island
  * Swimmer Santiago Ursaluna ability fix
  * Cooltrainer Halle fixes
  * Gian and Moxi fight moved to Route 115
  * Black Belt Takoa changes (fix for sticky web)
  * Jasmine: Greninja: Serioous -> Hasty, Sneasler: Adamant -> Jolly, Naganadel: Item: Covert Cloak -> Shuca Berry, Move: Venoshock -> Protect

### v1.2.2
* Fixes
  * Potential soft lock in the E4 building. Cause is uknwon and so far only 2 reports. Fixed it by resetting flags once the player enters the building. If you are already there, about to do the E4, please leave and re-enter just in case.
  * Fixes positive effect inconsitency for Brick Break (it was considered positive effect when AI had screens on field) and Absorb (Wasn't a positive effect if AI had Liquid Ooze, not player)

### 1.2.1
* General
  * Moved give option in item menu
  * Added clarification for fickle beam in AI doc
  * Yamask Galar evolves with a Dusk Stone (wrong in dex)
  * Lady Ruby might not trigger on old saves (not an issue on new saves)
  * 2 Stella Island fights and 2 Tailwind fights had minor adjustments

* Fixes
  * Fixed a bunch of tile issues
  * Fixed a bunch of Typos
  * Fixed Damp reducing damage AI calcs of electric types
  * Fixed Salt Cure still doing damage against Magic Guard
  * Fixed Tranistor modifier
  * Fixed left guy issue on 121 (they are now 2 individual trainers)
  * Fixed Thunderclap battle info UI bug
  * Fixed Coil not applying score
  * Fixed Flannery gym soft lock
  * Fixed Encore target mutation in 2v1 (attack was switched to encore user)

### v1.2b

* Fixes
  * Sneasel replaced Close Combat with Sky Uppercut
  * Venonat Evolves at level 21
  * Fixes Trick Tutor having Thief instead of Trick
  * Fixed Ogerpons abilities
  * Fixed Collision in Dewford Arcadia
  * Fix Ability on doc for Hydrapple
  * A couple minor team fixes

### v1.2

* FIXES
  * Fixed moves that were directed at partner being redirected to opposing field if partner died before move was used (correct behavior: move fails)
  * Fixed Counter into Spiky Shield damaging counter user
  * Fixed Defog not seen by AI as a Screen Cleaner
  * Fixed inaccurate Totem boosts
  * Fixed receiving invalid mon in game corner on cancel
  * Fixed Will-O-Wisp getting a decrease vs Hyper Cutter
  * Fixed recoil moves not being considered a negative effect (only if recoil would damage ai)
  * Fixed Superpower not being considered a negative effect
  * Fixed Teleport teleporting to Petalburg City if a Poke Center was not visited prior to using it
  * Fixed Future Sight not being clicked against dark types
  * Fixed Damp not seed by AI
  * Removes unintended White Herb from 104

* NEW
  * Reverted battle terrains back to emerald version (Exception: gym + e4. They use a variation of frlg/custom terrains)
  * New Encounter locations: Dewford Arcadia, Altering Cave, Mr.Pyre, Lava Cave
  * Grass added: Fortree City, Lilycove City, Stella Island
  * Eevee Egg in Fallarbor Town. Evolves randomly at level 25
  * Boosting moves now get a +3 across the board (previously it was either +2 or +3 depending on the move)
  * Sucker Punch will be displayed as 0 damage in the battle info to avoid reads by the player
  * Added Covet (fairy type), Thief and Trick tutors
    * Player is not able to keep the item and in the case of Trick, items are restored

* (BALANCE) CHANGES
  * Ability Capsules and Heart Scales are now gym Leader rewards instead of hidden items
  * 3 IVs are now only obtainable from an Egg (safari encounter and NG+ starter no longer have 3ivs)
  * In singles if an opposing mon is perished it will switch out (100% of the time) on the last turn if it has a switch in
  * Moves that target the user or the field are no longer affected by double targeting which means both player mons are looked at
    * Affects protect, hazards, trick room, tailwind, screens, boosting moves
  * Sneasler, Manectric and Kang moveset changes. Sneasler and Manectric ability change
  * Meowscarade U-Turn at level 72
  * Draining Kiss removed from Toge, Fini, Prim level up learnset
  * Sky Attack 140BP -> 120BP, Bitter Blade: 60BP -> 50BP, Flower Trick: 70BP -> 60BP
  * Static can't pull electric types in New Mauville and Mt. Chimney
  * E4, Winona, Tate & Liza and Brawly changes. Plus other trainer fixes, changes and additions.
  * Redesign of Route 129, Route 130 and Route 131. Instead of doubles the fights ara all singles now
  * Close Combat is a tutor post Tate & Liza and the TM has been replaced by Superpower
  * Draining Kiss and Triple Axel are both post Flannery tms
  * Only one Eviolite available
  * Recover AI changes (see ai doc)
  * Text Speed is now set to mid on new game

### v1.1.6d
  * Fixed Ogerpon Masks not boosting damage
  * Fixed Scale Shot corrupting the next move used not hitting all targets with a multi target move
  * Picnicker Angelina (Route 114) Leafeon  adjustments:
      * Sharpness -> Technician
      * Leaf Blade -> Bullet Seed
      * Grass Gem -> Loaded Dice

### v1.1.6c

  * Fixed Fake Out getting an additional +2 if AI mon is faster. Made it tie with faint score
  * Fixed Ogerpon Masks not increasing move base power
  * Fixed AI not seeing boosted Retaliate damage in party
  * Fixed Super candy issue not leveling correctly

### v1.1.6
  * New title screen (Credits Byonmil)
  * Added appropriate gen5 gym badge (Credits Byonmil)
  * Added signs on the Tera Islands
  * Hopefully finally fixed Revenge / Assurance AI dmg calc
  * Fixed After you not working if there is only one mon left on oppsoing side
  * Fixed Berry Juice sometimes missing timing on residual dmg
  * Fixed boosting moves that increase score by 2 stages not getting an increase in a few cases
  * Fixed wrong options in box menu
  * Fixed Super Candy lag
  * Fixed Super Candy deleveling mons if they have a lower level evo while above that evo cap
  * Fixed covert cloak not seen by AI for non flinching (flinching was correctly handled previously)
  * Fixed Follow me inaccuracies (minor AI change. See ai doc for more)
  * Fixed AI not seeing boosted Retaliate damage in party

### v1.1.3
  * Fixed visual issue with follower sprites (pals got randomly messed up)
  * Fixed Revenge/Payback bug.
  * Fixed rounding issue during NumberOfHits calcs.

### Known issues
  * Rapid spin activates before Toxic Debris
  * Very rare rounding error with gems. Ai might see the 7th roll instead of 8th. Could apply to type boosting moves but not confirmed
  * Forces of Nature signature moves anim broken (visual only)

### v1.1.2
* Fixed Cotton Down speed drop protected by Covert Cloak
* Fixed speed ties always resulting in favor of the player
* Fixed berries missing timing on residual damage
* Fixed "fixed damage moves" (eg SToss) damage not being reduced to 0 when immune. They still got a minus -20 decrease but very rarely they could get a +1 for best damage move which made the move selection random
* Fixed mons having unintended moves (Slowking and Landourus) + ability (Maractus)
* Fixed Belch and Last Resort not seen by AI while in party
* Fixed being able to skip fisherman on 118
* Fixed export issue with Tauros
* Updated Trainer and calc with various fixes and wrong abilities (Marking terrain etc.)
* Tinkatink removed from Granite Cave
* Poke Vial only heals pokemon that are alive
* Improved Battle Info. Added additional window the shows 8the damage roll for AI moves
* Couple niche AI fixes regarding positives/negatives
* Slight change in Mirror Coat/Counter AI. See ai doc
* New Game Plus option for different starters
* Day and Night cycle
* Route 115 grass encounters
* Removed Arctofish and Dracovish from encounter table

### v1.1.1
* Fixes lua script export for mint natures
* Fixes Grass Pelt not seen by AI issue
* Fixes Magma Storm edge case issue that caused opposing mon to lose hp
* Fixes Eject Pack not triggering mid-turn when intim was involved
* Fixes Safari Balls not having 100% catch rate
* Fixed Tera type icons visual issue
* Fixed Belch where sometimes the score got reduced to zero (Note: AI doesn't see it's own Belch damage while in party)
* Fixed Switch ins happening in reverse when every mon had score 0
* Fixes Mold Breaker ignoring abilities that cantBeSurpressed and are breakable at the same time
* Fixes Follow me score if both opposing mons have it and consider it viable
* Tera and Stella Islands are fly locations now
* Removed 6 trainers from Juan split
* Desert Underpass open after getting the 8th Badge
* Lavardige Egg is now a random starter (except Rowlet, Cyndaquil and Oshawott) instead of Kangaskhan
* Tapu Lele access once Waterfall can be used (previously it was post Maxie and Archie)
* Added Zoom Lens on Route 112
* Weather is not displyed each round anymore. Instead there is a notify message in the battle interface

### v1.0.5
* AI didn't see weather abilties in party

### v1.0.4
* Fixed player back sprite issues
* Fixed Dive, Surf and Fly sprite issues
* Fixed Magma Storm Eject Pack issue
* Fixed issue with magma storm AI taking damage.
* Fixed Tapu Koko not chatchable with 5 mons in party.
* Fixed AI not see Grassy Glide priority
* Fixed AI not see Wind Rider and Purifying Salt
* Fixed AI mid turn switch feeding mons to die. It now only switches in 50% of the time if it does no damage or is locked into Encore
* Blaze kick on rapidash at level 30 and Temper Flare tutor (highly requested change)
* Supersweet Syrup might have the wrong message. Not able to repro. Please report if it happens.
* Note: Silver Wind is considered a wind move in expansion
* Togedeamru and Tapu Koko abilities are now hardcoded into the lua script since they weren't exported. Not sure why it happened with those 2

### v1.0.3
* Optional heal option after battle
* Fix AI wrongly simulated damage roll
* Fix AI sending out mons to die if it didn't have any options left that were considered good
* Temporary itemfinder for real this type in players room
* Version identifier ingame
* Fix dazzling abilities in doubles
* Fix Shield Dust not seen by secondary stat drop moves

### v1.0.2
* AI not seeing items and abilities for party mons
* Tirtouga Learnset
* U-turn 50/50 when ai faints target only + Palafin 100% otherwise normal damage move
* Fix protect/endure spam. If protect/endure was used last turn score gets decreased
* Overworld fixes
* Heart Scale TMs need confirmation in shop
* Change clock anytime in room
* All tutors in the overworld have a mon next to them
* temporary itemfinder in players house

### v1.0.1
* Option to change battle speed
* Player character names default to their official names
* Item finder added to Birch
* Fix item dupe bug
* Fix roamers being triggered from player house TV

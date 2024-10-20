## Changelog

### Pokemon Lucid Changelog v1.2

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

### Pokemon Lucid Changelog v1.1.6d
  * Fixed Ogerpon Masks not boosting damage
  * Fixed Scale Shot corrupting the next move used not hitting all targets with a multi target move
  * Picnicker Angelina (Route 114) Leafeon  adjustments:
      * Sharpness -> Technician
      * Leaf Blade -> Bullet Seed
      * Grass Gem -> Loaded Dice

### Pokemon Lucid Changelog v1.1.6c

  * Fixed Fake Out getting an additional +2 if AI mon is faster. Made it tie with faint score
  * Fixed Ogerpon Masks not increasing move base power
  * Fixed AI not seeing boosted Retaliate damage in party
  * Fixed Super candy issue not leveling correctly

### Pokemon Lucid Changelog v1.1.6
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

### Pokemon Lucid Changelog v1.1.3
  * Fixed visual issue with follower sprites (pals got randomly messed up)
  * Fixed Revenge/Payback bug.
  * Fixed rounding issue during NumberOfHits calcs.

### Known issues
  * Rapid spin activates before Toxic Debris
  * Very rare rounding error with gems. Ai might see the 7th roll instead of 8th. Could apply to type boosting moves but not confirmed
  * Forces of Nature signature moves anim broken (visual only)

### Pokemon Lucid Changelog v1.1.2
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

### Pokemon Lucid Changelog v1.1.1
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

### Pokemon Lucid Version 1.0.5 Patch Notes (Emergency Patch)
* AI didn't see weather abilties in party

### Pokemon Lucid Version 1.0.4 Patch Notes
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

### Pokemon Lucid Version 1.0.3 Patch Notes
* Optional heal option after battle
* Fix AI wrongly simulated damage roll
* Fix AI sending out mons to die if it didn't have any options left that were considered good
* Temporary itemfinder for real this type in players room
* Version identifier ingame
* Fix dazzling abilities in doubles
* Fix Shield Dust not seen by secondary stat drop moves

### Pokemon Lucid Version 1.0.2 Patch Notes
* AI not seeing items and abilities for party mons
* Tirtouga Learnset
* U-turn 50/50 when ai faints target only + Palafin 100% otherwise normal damage move
* Fix protect/endure spam. If protect/endure was used last turn score gets decreased
* Overworld fixes
* Heart Scale TMs need confirmation in shop
* Change clock anytime in room
* All tutors in the overworld have a mon next to them
* temporary itemfinder in players house

### Pokemon Lucid Version 1.0.1
* Option to change battle speed
* Player character names default to their official names
* Item finder added to Birch
* Fix item dupe bug
* Fix roamers being triggered from player house TV

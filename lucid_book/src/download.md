### [Download latest release - v1.1.6d](https://github.com/pkLucid/Pokemon-Lucid/releases/tag/Version%2F1.2.0)

### Pokemon Lucid Changelog v1.2
Important: The Google Drive trainer sheet is replaced by a [trainer sheet](https://pklucid.github.io/Pokemon-Lucid-Pokedex/src/roxanne_split.html) inside the porydex

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

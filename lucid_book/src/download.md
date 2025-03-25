## Pokemon Lucid v1.2.7b - Bugfixes for randomizer
Bugfixes only for the randomizer. If you didn't update, you can skip those.

<a href="./v1.2.7/pokemon_lucid_v1.2.7.bps" target="_blank">Download Patch</a>

<a href="./v1.2.7/pokemon_lucid_v1.2.7.lua" target="_blank">Lua Script (Right Click Download)</a>

### Changelog
* Bugfixes
    * Fixes Well Baked Body didn't have any ai
    * Fixes Recoil drastically increased recoil damage (was only in issue in the randomier patch)

## Pokemon Lucid v1.2.7 - Scaled Randomizer Release

Patch must be applied to a fresh copy of pokemon emerald. The new lua script has to be downloaded alogside the patch.

### Download
Updated version to increase threshold for 0-1 badges. Version number wasn't changed.

<a href="./v1.2.7/pokemon_lucid_v1.2.7.bps" target="_blank">Download Patch</a>

<a href="./v1.2.7/pokemon_lucid_v1.2.7.lua" target="_blank">Lua Script (Right Click Download)</a>

### Patch notes
Credits: Glow helped a lot with learnsets, tables and ability ideas

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

### Note
* You can check the encounters you can get on a given route in the encounter table in-game
* Dex will be updated soon

## Pokemon Lucid v1.2.6
Patch must be applied to a fresh copy of pokemon emerald. The new lua script has to be downloaded alogside the patch.

### Download
<a href="./v1.2.6/pokemon_lucid_v1.2.6.bps" target="_blank">Download Patch</a>

<a href="./v1.2.6/pokemon_lucid_v1.2.6.lua" target="_blank">Lua Script (Right Click Download)</a>

### Changelog
* Bugfixes
  * Fixed Melmetals weight
  * Fixed Brick Break/Psychic Fangs/Raging Bull breaking screens if target is immune
  * Fixed Spread Moves criting Battle Armor mons in doubles. Could only happen if the BA mon was in slot 2
  * Fixed hazards using the original types when a mon was terastallized
  * Fixed negative priority moves being affected by dazzling abilities

* Note
  * Santiago Ursaluna still has bulletproof isntead of guts which is not going to be changed

### Current known issues
  * Battle Engine
    * If Eject Button ejects into an Intimidate (applies to all abilites that trigger immediately) mon Life Orb / Shell Bell will miss timing
    * In a 1v2 Multi Battle when the right opponent side has no mons left and 2 mons die at the same time, the left side will sent out a bad egg which can potentially freeze the game
  * Battle AI
    * Hone Claws is a fake move. The ai never considers it.
  * Trainer Mon
    Ursaluna from Santiago has Bulletproof instead of Guts

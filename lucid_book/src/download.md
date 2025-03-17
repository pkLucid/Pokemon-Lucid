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

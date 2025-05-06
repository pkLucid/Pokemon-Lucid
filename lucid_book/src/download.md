## Pokemon Lucid - v1.2.8

<a href="./v1.2.8/pokemon_lucid_v1.2.8.bps" target="_blank">Download Patch</a>

<a href="./v1.2.8/pokemon_lucid_v1.2.8.lua" target="_blank">Lua Script (Right Click Download)</a>

## Fixes
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

## Current known issues
* Battle Engine
  * If both attacker and target have Eject Pack and Eject Button
    * In Lucid the activation is based on speed
    * In vanilla Eject Button always activates before Eject Pack
  * In a 1v2 Multi Battle when the right opponent side has no mons left and 2 mons die at the same time, the left side will sent out a bad egg which can potentially freeze the game
  * Mirror Coat and Counter don't work in double battles (inconsistent)

* Battle AI
  * Hone Claws is a fake move. The ai never considers it.

* Trainer Mon
  Ursaluna from Santiago has Bulletproof instead of Guts



## Pokemon Lucid - v1.2.11

<a href="./v1.2.11/pokemon_lucid_v1.2.11.bps" target="_blank">Download Patch</a>

<a href="./v1.2.11/pokemon_lucid_v1.2.11.lua" target="_blank">Lua Script (Right Click Download)</a>

### Patch Notes
- Fixes Future Sight calculation with mon in the front instead of the back (this was a regression again from a previous release, sorry)

### v1.2.10 Patch Notes

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

#### New Animations (Credits: Linathan)
* All Tera Blast types
* Tachyon Cutter
* Salt Cure
* Glaive Rush
* Triple Dive
* Collosion Course
* Electro Drift
* Psyblade
* Mighty Cleave
* Supercell Slam

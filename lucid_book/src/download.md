## Pokemon Lucid v1.2.3
For players who don't want to update, here are the old [dex](https://lucid-dex-1-2-2.vercel.app/) and [calc](https://lucid-calc-v1-2-2.vercel.app/) for 1.2.2.

### Download
<a href="./v1.2.3/pokemon_lucid_v1.2.3.bps" target="_blank">Download Patch</a>

<a href="./v1.2.3/pokemon_lucid_v1.2.3.lua" target="_blank">Lua Script (Right Click Download)</a>

### Changelog
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

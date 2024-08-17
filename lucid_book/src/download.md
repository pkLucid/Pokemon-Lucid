### [Download latest release](https://github.com/pkLucid/Pokemon-Lucid/releases/tag/Version%2F1.1.4)

### Pokemon Lucid Changelog v1.1.4
  * Note: It is a ups patch this time instead a bps
  * Fixed Mimkyu not knowing that it can endure hit when disguised (Eiscue does not see it for either move category)
  * Fixed niche boosting moves case where the AI thought it boosted when it didn't (only happened when the AI saw both a kill and had a score increase for a boosting moves)
  * Fixed Triple Axel inaccurate damage (still off by a few rolls). (Credits to Toxic)
  * Fixed Terrain move score
  * Fixed Stomping Tantrum / Temper Flare not doubling bp after flinch/paralysis
  * Fixed Moves with positive speed drop/increase effect still getting an increase while in TrickRoom
  * Fixed Defog removing terrain. Gen <= 7 behavior.
  * Fixed Purifying Salt not working on dynamic ghost type moves (e.g. tera blast)
  * Fixed moves like Surf/EQ not behaving like normal double target moves when no partner (ai doc update)
  * Fixed Tera Blast damage category during AI calcs (Added general calc tera section to AI doc)
  * Fixed Booster Energy not increasing Speed
  * Fixed Poltergeist not checking invulnerability (e.g. Phantom Force)
  * Fixed Close Combat, Armor Cannon and Headlong Rush not treated as negative effects
  * Fixed double target move score overlap. When multiply double target moves were present on a mon they all got a score increase on non kill but same NoOfHits
  * Fixed AI thinking Good As Gold blocks moves that target user side (e.g. Stealth Rock)
  * Fixed always crits AI calcs involving intim (only AI, not actual damage)
  * Added option to change day/night time in helper menu under utility
  * Animation updates (Credits expansion)
  * A moves negative effects will be negated if it holds White Herb (added to ai doc)
  * Focus Sash changes on Route 111:
    * Sandslash holds Assault Vest
    * Lycanroc holds Life Orb
    * Sandslash*Alola holds Rowap Berry
    * Beartic holds Muscle Band
    * Golduck holds Wise Glasses
    * Politoed holds Iapapa Berry
  * First 2v1 removed on Route 112
  * Removed optionals from Route 115
  * Protect AI changes (see ai doc)
  * Wide Guard pp reduced to 3
  * Added Lyra as playable character
  * Screech 100% Acc
  * Added Temper Flare to Marowak tutor learnset
  * Added X*Scissor to Heracross tutor learnset
  * Added Teleport as Level 1 tutor to Claydol, Slowking, Meowstic
  * Removed Encore from Samurott
  * Bloodmoon Ursaluna Moon Stone evo at night

### Known issues (Overall)
  * Castform doesn't transform once cloud nine leaves the field
  * If a mon targets it's own partner the move will be redirected if the partner faints before it
  * Rapid spin activates before Toxic Debris
  * Very rare rounding error with gems. Ai might see the 7th roll instead of 8th. Could apply to type boosting moves but not confirmed
  * Forces of Nature signature moves anim broken (visual only)

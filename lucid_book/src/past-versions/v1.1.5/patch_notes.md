### Pokemon Lucid Changelog v1.1.5
  * New Type Icons (Credits Lhea)
  * Fixed priority moves not getting correct score increase if an other priority move was present (eg. Aqua Jet and First Impression) 
  * Fixed protean calcs after the ability activated already (Protean activation is limited to one per switch)
  * Fixed Castform not changing form if Cloud Nine mon siwtches out during weather
  * Fixed Electromorphosis / Charge / not expiring right after electric move usage
  * Fixed Sootopolis visual bug
  * Fixed assurance seeing double damage in party 
  * Fixed Scale Shot not boosting if opposing mon fainted in less then 5 hits
  * Fixed missing berries (Payapa, Tanga, Kasib, Colbur) on 121 (works only on new save)
  * Fixed Round messing up turnorder
  * Fixed AI not always seeing resist berries while in party
  * Fixed AI not seeing items/abilities if the turn was still going and mon was sent in through Eject Pack / Eject Button
  * Fixed visual glitch with duplicate mon
  * Tweaks to mid turn switch in (see ai doc)
  * To avoid confusion Knock Off is a positive effect now
  * If in TrickRoom speed control isn't considered a positive effect. A negative speed reducing effect is just neutral
  * AI Calc for Revenge / Avalanche change: Double damage is only seen when AI slower
  * Thunder Wave 100% acc
  * Added Thick Club to Route 111 and Leek to Jagged Pass 
  * Note: Moves that deal damage and increase a stat are considered just postive effects. Exceptions are Overheat, Leaf Storm, Draco Meteor and Superpower on Contrary

### Known issues (across all versions)
  * After You doesn't work if there is only one mon left on the opposing side  
  * If Eject Button ejects into an Intimidate mon Life Orb / Shell Bell will miss timing
  * If a mon targets it's own partner the move will be redirected if the partner faints before it
  * Rapid spin activates before Toxic Debris
  * Very rare rounding error with gems. Ai might see the 7th roll instead of 8th. Could apply to type boosting moves but not confirmed
  * Forces of Nature signature moves anim broken (visual only)

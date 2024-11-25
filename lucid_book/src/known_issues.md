### Known Issues
  * AI
    * AI might not see players -ate (eg Pixilate) abilities. This doesn't seem consistent 
    * AI might not see that player can damage a substitute with a sound move
    * AI doesn't see that speed reducing status (not damaging status) moves are blocked by covert cloak  
    * Sticky Web AI is inconsistent
  * Battle Engine
    * Eject items + Red Card bug. 
    * Charge seems to be inconsistent
    * If Eject Button ejects into an Intimidate mon Life Orb / Shell Bell will miss timing
    * Rapid spin activates before Toxic Debris
    * Visual bug after a mon attempts to switch if Emergency Exit is triggered
    * Rare rounding damage calc error if any modifiers are applied (gems, transistor, terrains, ...)
      * The damage can be off by 1 which matters in cases when the 7th roll does X damage and 8th roll X+1 damage. In this case the 7th roll might be seen by AI
  * Other
    * Pokemon that learn non-vanilla moves via level up can't learn them via tutors/tms
    * Lady Ruby might not trigger even on new saves

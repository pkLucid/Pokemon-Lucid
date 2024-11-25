### Known Issues
  * AI might not see players -ate (eg Pixilate). This doesn't seem consistent 
  * AI might not see that player can damage a substitute with a sound move
  * AI doesn't see that speed reducing status (not damaging status) moves are blocked by covert cloak  
  * Charge seems to be inconsistent
  * Pokemon that learn non-vanilla moves via level up can't learn them via tutors/tms
  * Sticky Web AI is inconsistent
  * Lady Ruby might not trigger even on new saves
  * If Eject Button ejects into an Intimidate mon Life Orb / Shell Bell will miss timing
  * Rapid spin activates before Toxic Debris
  * Visual bug after a mon attempts to switch if Emergency Exit is triggered
  * Rare rounding damage calc error if any modifiers are applied (gems, transistor, terrains, ...)
    * The damage can be off by 1 which matters in cases when the 7th roll does X damage and 8th roll X+1 damage. In this case the 7th roll might be seen by AI

## Move effects:
  * Status Moves get a +3 if condtions apply.
  * Damage Moves with secondary effects can get +2 if condtions apply (same as status) for this move effects:
    * On player
      * MOVE_EFFECT_PARALYSIS
      * MOVE_EFFECT_POISON
      * MOVE_EFFECT_STEALTH_ROCK
      * MOVE_EFFECT_SPIKES
      * MOVE_EFFECT_THROAT_CHOP
      * MOVE_EFFECT_WRAP
      * MOVE_EFFECT_FLINCH
      * MOVE_EFFECT_SPD_MINUS_1
      * MOVE_EFFECT_SPD_MINUS_2
    * Self
      * MOVE_EFFECT_SPD_PLUS_1
      * MOVE_EFFECT_SPD_PLUS_2
      * MOVE_EFFECT_SPD_MINUS_1 (if Contrary)
      * MOVE_EFFECT_SPD_MINUS_2 (if Contrary)

  * Some effects get a +1 only in some rare instances. That makes them tied with best damage move
  * Moves that target partner get a +10 if conditions apply
  * An AI move that faints the player will have the highest score. Exceptions are TrickRoom, Protect, Palafin-Zero with Flip Turn and specific Double Battle AI quirks (see move effect section).
  * If a move would fail if used by AI it will get a -20

## Status Moves
  * For the following checks order matters (from top to bottom)
  * If the move would fail the AI wont click it

### Speed Control
* Status moves (e.g. Scary Face)
  * If AI cant't drop stats (speed), no increase
  * If AI faster, no increase
  * If AI is still slower (or tied) the next turn, no score increase
  * In any other situation, +3

* Self boosting speed moves (e.g. Flame Charge)
  * If AI faster, no increase
  * If AI is still slower (or tied) the next turn, no score increase
  * If AI faints player in less hits, no score increase
  * If player resists move, no score increase unless the move + best damage move kill next turn
  * In any other situation, +2

* Speed drop moves (e.g. Rock Tomb)
  * If AI cant't drop stats (speed), no increase
  * If AI faster, no increase
  * If AI is still slower (or tied) the next turn, no score increase
  * If player resists move, no score increase unless the move + best damage move kill next turn
  * In any other situation, +2

### Damage moves with a 100% chance effect 
* Effect Paralyze (e.g. Nuzzle)
  * No score increase if player can cure status (berry)
  * +2 if AI slower then player
  * +2 if player needs 3 or more hits to faint
* Effect Poison (+2)
  * Besides score same as Toxic
* Throat Chop (+2)
  * If AI faster and the best damage move from Player is a sound move
* Effect Wrap (Fire Spin, Whirlpool, ...)
  * No score increase if player has Rapid Spin
  * No score increase if player faints AI in 2 or less hits
  * No score increase if player already trapped
  * No score increase if player faints from secondary damage this turn
* Effect Flinch (+2)
  * No score increase if can't flinch
  * No score increase if slower
  * Score increase if player can faint AI

* Protect Doubles (+15 if conditions apply)
  * If either mon has encore, no score increase
  * If AI is faster then both opposing mons, no score increase
  * If AI used protect last turn, no score increase
  * If it's the first turn for AI mon on the field and one opposing mon can faint it, 100% score increase
  * If not first turn and any opposing mon can faint, 50/50 score increase

* Protect Singles (+3 if conditions apply)
  * If AI used protect last turn, no score increase
  * 50/50 to increase score

* Hazards (including Stone Axe / Ceaseless Edge)
  * If AI faints player in less hits and player has a way to remove hazards, no score increase
  * If AI outdamages and player has a way to remove hazards, no score increase
  * 70/30 in favor of no hazards if player has a way to remove rocks
  * If AI/player has only 3 mons left no score increase
  * AI will only set one layer of hazards for each move/hazard type
  * In any other situation, +3 (+2 for Stone Axe / Ceaseless Edge)

* Screens
  * If no corresponding category on player, no score increase
  * If player has a BrickBreak type move
    1. if AI faints player faster, no score increase
    2. Otherwise 30% to be increased by +3
  * In any other situation, +3

* Follow me
  * If partner dies to any player mon, +3
  * If both mons on the field have Follow Me only AI slot 1 (right side) will be able to choose follow me

* Poison
  * If player holds a curing berry AI, no score increase
  * If AI is faster and faints player in 2 or less hits, no score increase
  * If player needs 3 or more hits to faint AI, +3
  * Otherwise +3, 100% if's first turn and 50/50 in any other situation

* Burn (Will-O-Wisp)
  * If player holds a curing berry or has no physical move, no score increase
  * If AI is faster and the best damage move is physical, +3
  * Otherwise +3, 100% if's first turn and 50/50 in any other situation

* Paralysis
  * If player holds a curing berry, no score increase
  * If AI is slower, +3
  * If Player needs 3 or more hits to faint AI, +3

* Sleep (+3)
  * If move would fail or player has Yawn status set, no score increase
  * If player can cure steel or has a beneficial move (sleep talk, snore), no score increase
  * 100% score increase if first turn or AI benefits from sleep status
  * 50/50 otherwise

* Weakness Policy (+10)
  * If it isn't the first turn for either mon, no score increase
  * If partner is faster, has a move that would trigger the policy and need 4 or more hits to faint partner

* Set up except Belly Drum and Speed Control Status moves (+3)
  * If player outspeeds and two taps, AI is not going to set up
  * If AI is faster but you one tap it, it isn't going to set up
  * If it set up the previous turn and is faster + can 2 tap it isn't going to set up
  * If it can kill the player it isn't going to set up
  * If it dies to secondary damage this turn AI does not set up
  * If player has opportunist / unaware it is not going to set up
  * In any other situation it sets up
  * Leaf Storm, Overheat, Draco Meteor and Superpower are set up moves with Contrary

* Increase crit rate +3 (e.g. Focus Energy)
  * If ai faints to player in 2 or less hits (applies to both mons in doubles), no increase.
  * Increase if Super Luck, Sniper, Scope Lens or or high crit move is present

* Sunny Day 
  * +3 if user benefits from sun

* Tailwind
  * No score increase in doubles if only one mon left
  * If Slower +3 (checks average in doubles)
  * +15 on Whitney it Tailwind is not set up yet

* Destiny Bond
  * If player can faint AI and AI faster, +3

* Belly Drum check
  * No set up if AI faints regardless of speed or already increased stats, otherwise +3

* Mirror Coat / Counter
  * No icnrease if AI dies to move
  * No increase if AI has Mirror Coat (Counter) and player has no special (physical) move
  * Otherwise 50/50 to get a +3

* Recover / Heal AI (+3)
  * If plyaer does only 50& or less of the current hp, no score increase
  * If AI faster, 30% of the time no score increase
  * Score increase if heal amount + current HP are higher then best player damage and damage equal or higher current hp

* Trap (+2)
  * If player needs 4 or more hits to faint ai trapping moves get an increase
  * Trapping moves that don't do damage are not included

* Attract (+2)
  * If AI faster and faints player in 2 or less hit, no increase
  * 100% to increase score on the first turn if opposite gender, otherwise 50/50

* Future Sight
  * Seen as a zero damage move (including party) but score is considered neutral unless a future attack is active
  * If AI is faster and faints to player +3
  * If AI is slower and faints in 2 hits to player +3

* Sucker Punch / Thunderclap
  * After first usage score will be decreased by 20 50% of the time

* Decorate
  * +10 on the first turn of user, otherwise 30% of the time

* Beat Up
  * +10 if partner has rage fist or justified and it is first turn of itself or partner

* Skill Swap
  * +10 if beneficial for partner

* Fake Out
  * +3 if it can flinch
  * In doubles it follows the same rules as other moves
  * Does not stack with killing score (only faint score is applied)

* Throat Chop
  * +3 if player has a sound move and it is the highest dmg move

* Salt Cure
  * +2 on first turn of AI mon, 50/50 otherwise

* Substitute (+3)
  * No score Increase if player can take advantage of sub (ability / sound moves that can go through substitute)
  * If slower and after a hit Substitute would fail, no increase
  * Otherwise 50/50 to go for a Sub

* Shed Tail (+3)
  * No score Increase if player can take advantage of sub (ability / sound moves that can go through substitute)
  * If AI has no alive mon in Party, no increase
  * If at 50% hp, no score increase
  * If slower and after a hit Shed Tail would fail, no increase
  * Otherwise increase

* Fickle Beam
  * The AI does not see the random increase in base power

* Round 
  * If both mons have no kills, score increased by 3
  
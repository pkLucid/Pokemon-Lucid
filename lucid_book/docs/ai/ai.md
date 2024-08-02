## Post KO Switch in
  * Palafin outspeeds current player mon: + 8
  * AI Mon faster and can faint target: + 7
  * AI Mon faints target and is not dead to player: +6
  * AI Mon faster and can faint with the same amount of hits or less the opposing mon: + 5
  * AI Mon slower and can faint ai with less hits then opposing mon: +4
  * AI Mon faster: +3
  * AI is slower and dies in one hit +1
  * Anthing else is +2

## Speed
  * AI sees a speed tie, Quick Claw and Quick Draw as faster
  * Priority moves (includes effects that increase priority) are not seen by AI

## Targetting in double battles if one mon sees kill
    Ai side:        Battler 3 Battler 1
    Player side:    Battler 0 Battler 2

  * If Battler 1 sees kill on both player mons and battler 3 sees no kills, battler 1 targets battler 0 and battler 3 targets battler 2
  * If battler 1 sees kill on both player mons and battler 3 sees kill on battler 0, battler 3 targets battler 0 and battler 1 chooses battler 2
  * If both AI mons see kill on both targets, battler 3 will choose battler 2 and battler 1 will choose battler 0
  * If battler 3 sees kill on battler 0 and battler 1 sees kill on battler 2, battler 3 targets battler 0 and battler 1 targets battler 2
  * If AI has only one mon left it chooses randomly

## kill on target
  * Move can kill: +4
  * AI is faster and move can kill: + 2 (singles only)
  * AI can kill with hit escape move (u-turn): 50/50 +2 (singles only)
  * hit switch targer (dragon tail) + 2
  * AI can kill with double target move can kill in a double + 2

## In singles only
 * +10 on prio moves if AI is slower and dead

## Damage moves scores
  * When AI chooses a move it compares all moves that can do damage against each other.
  Moves with a bad effect will be desensitized based on numer of hits.
  For exmaple when Overheat and Flamethrower have the same number of hits to faint AI
  Flamethrower gets a plus one score.
  * When AI sees a kill with several moves a move with a positive effect gets +1.

## Positive move effects (damage moves with 100% chance get the effect)
  * Double target moves in doubles
  * Sound moves if user is holding a Throat Spray
  * Crit moves that don't always crit
  * Trapping moves
  * Brick Break type effects if screens are on players side
  * Drain effects if no Liquid Ooze
  * Fell Stinger
  * Pursuit
  * Switch target out moves (e.g. Dragon Tail)
  * Damage moves that set up Hazards
  * Speed Drop moves (e.g. Bulldoze)
  * Self boosting moves (e.g. power up punch, leaf storm with contrary)

## Negative move effects (damage moves with a negative side effect)
 * Recoil
 * Two turn moves (e.g. Bounce and Solar Beam)
 * Mind Blown, Steel Beam, Explosion type moves, Final Gambit
 * Recoil on miss
 * All moves that have a negative effect on AI unless they have contrary (e.g. Superpower)

## How the AI sees damage
  * The damage the AI sees is the 8th roll (technically it sees all previous rolls as well). and eveything is done in terms on number of hits the.
  * All calculations are done using the above mentioned roll
  * AI see only damage that it will actually deal. Something like Thunderbolt into Volt Absorb will be seen as 0 damage and receive a -20 score. Exceptions are Future Sight and Sucker Punch. Future Sight is always seen as 0 damage but doesn't get a decrease in score. Sucker Punch can get a decrease after the first time it has been used. (see IsDamageMoveUnusable)
  * Note: AI sees one roll lower for gems boost so the 7th (Might apply to type boosting items so just use the 7th roll to be save)
  * The AI sees Tera Blast or stab increased damage as if it did Terastalize when it is possible for the mon to do it (including party)

## Move effects:
  * Moves with regular move effects generally get a +2/+3 if they apply. If I list some effects and don't specify a score you can assume that this is true
  * Some effects get a +1 only in some rare instances. That makes them tied with best damage move
  * Moves that target partner get a +10 if conditions apply
  * Generally a move that faints the ai will have the highest score. Exceptions are TrickRoom and Protect.
  * If a move would fail if used by AI it will get a -20
  * For further information See AI_CalcMoveEffectScore

## Status / Speed Control / Set up
* For the following checks order matters
* If the move would fail the AI wont click it

### Rocks / Screens
* if AI outdamages and player has a way to remove field effect, no score increase
* 70/30 in favor of no rocks if player has a way to remove rocks
* If player has only 3 mons left no rocks set up
* AI will always only set up one layer of hazards
* In any other situation 100% (outside of kill)

### Speed Control
  * If AI cant't drop speed, no increase
  * If AI faster, no increase
  * If AI is still slower (or tied) the next turn, no score increase
  * If AI outdamages player, no score increase
  * If player resists move, no score increase unless the move + best damage move kill next turn
  * In any other situation, increase score

### Poison
* If player holds a curing berry AI wont poison
* If AI is faster and faints player in less then 2 hits it wont posion
* If player needs 3 or more hits to faint AI it will poison
* Otherwise 100% if's first turn and 50/50 in any other situation

### Burn (Will-O-Wisp)
* If player holds a curing berry or has no physical move AI wont try to burn
* If AI is faster and the best damage move is physical AI will try to burn
* Otherwise 100% if's first turn and 50/50 in any other situation

### Paralysis
* If player holds a curing berry AI wont paralyze
* If AI is slower it will paralyze
* If Player needs 3 or more hits to faint AI it will paralyze

### Set up
  * If player outspeeds and two taps, AI is not going to set up
  * If AI is faster but you one tap it, it isn't going to set up
  * If it set up the previous turn and is faster + can 2 tap it isn't going to set up
  * If it can kill the player it isn't going to set up
  * If it dies to secondary damage this turn AI does not set up
  * If player has opportunist / unaware it is not going to set up
  * In any other situation it sets up

## Trap
  * If player needs 4 or more hits to faint ai trapping moves get an increase

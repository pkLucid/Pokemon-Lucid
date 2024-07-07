# AI:

## Post KO Switch in
  * Palafin outspeeds current player mon: + 7
  * AI Mon faster (or speed tie) and can faint target: + 6
  * AI Mon faints target and is not dead to player: +5
  * AI Mon faster (or speed tie) and outdamages: + 4
  * AI Mon slower and outdamages: +3
  * AI Mon faster (or speed tie): +2
  * AI is slower and dies or is outdamaged +0
  * Anthing else is +1

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
  * AI is faster and move can kill: + 2
  * AI can kill with hit escape move (u-turn): 50/50 +2
  * hit switch targer (dragon tail) + 2
  * AI can kill with double target move can kill in a double + 2

## Damage moves scores
  * When AI chooses a move it compares all moves that can do damage against each other.
  Moves with a bad effect will be desensitized based on numer of hits.
  For exmaple when Overheat and Flamethrower have the same number of hits to faint AI
  Flamethrower gets a plus one score.
  * When AI sees a kill with several moves a move with a positive effect gets +1.

## Positive move effects (100% chance get the effect)
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

## Negative move effects
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

## Rocks / Screens
  * if AI outdamages and player has a way to remove field effect, no score increase
  * 70/30 in favor of no rocks if player has a way to remove rocks
  * If player has only 3 mons left no rocks set up
  * AI will always only set up one layer of hazards
  * In any other situation 100% (outside of kill)

## Speed Control
  * If AI cant't drop speed, no increase
  * If AI faster, no increase
  * If AI is still slower (or tied) the next turn, no score increase
  * If AI outdamages player, no score increase
  * If player resists move, no score increase unless the move + best damage move kill next turn
  * In any other situation, increase score

## Trap
  * If player needs 4 or more hits to faint ai trapping move are preffered

## Set up
  * AI will set up until it sees a kill unless it is faster and faints player in 2 hits after the initial(!) set up

## Move effects:
  * Moves with regular move effects generally get a +2/+3 if they apply, sometimes a +1 which makes them tied with best damage move
  * Moves that target partner get a +10 if conditions apply
  * Generally a move that faints the ai will have the highest score. Exceptions are TrickRoom and Protect.
  * For further information See AI_CalcMoveEffectScore
  * if

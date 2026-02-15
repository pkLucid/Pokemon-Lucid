## Post KO Switch in
  * Palafin-Zero outspeeds current player mon: + 8
  * AI Mon faster and can faint target: + 7
  * AI Mon faints target and is not dead to player: +6
  * AI Mon faster and can faint with the same amount of hits or less than opposing mon: + 5
  * AI Mon slower and can faint Player with less hits than opposing mon: +4
  * AI Mon faster: +3
  * AI is slower and dies in one hit +1
  * Anything else is +2

## Sturdy / Focus Sash / Disguise
  * AI is aware of those items (ability) and will include them in the number of hits calculation
  * It will correctly see multi hit moves a breaking endure type effects on a kill unless it is Dragon Darts in doubles

## Speed
  * AI sees a speed tie, Quick Claw and Quick Draw as faster
  * Priority moves on player (includes effects that increase priority) are not seen by AI
  * AI takes lagging tail into account

## Scoring on kills (additive)
  * Move can kill: +4
  * Dragon Tail, Circle Throw + 2
  * Doubles only:
    * If the player previously used Wide Guard (any side, any mon) the damage for AI calcs will be set to zero 20% of the time (meaning it can't be considered as an attacking move)
    * +2 if AI can kill with double target move (e.g. Hyper Voice) /  Applies to Spread target moves that hit all mons (e.g. Surf) only when there is no partner on field

## Critical hit kill (does not stack with kill)
  * Critical hit Increase for moves with a high crit ratio (applies to moves only, and not 100% critical hits)
  * The damage will be calculated for both a critical hit and a non critical hit. If no other move can kill the target but the critical move can, score will be increased by 2 50% of the time

### Singles only
  * If AI is slower and dead +10 on prio moves
  * If AI is faster and move can kill: + 2 (Priority moves are considred as being faster in this case)
  * If AI can kill with hit escape move (u-turn): 50/50 +2

### Doubles only
  * If the player previously used Wide Guard (any side, any mon) the damage for AI calcs will be set to zero 20% of the time (meaning it can't be considered as an attacking move)
  * +2 if AI can kill with double target move (e.g. Hyper Voice) /  Applies to Spread target moves that hit all mons (e.g. Surf) only when there is no partner on field

## Mid turn switch (Calcs are done with a possible switch in candidate)
  * Never switches if current mon on the field is under half of max HP
  * Never switches in Doubles
  * Never switches if player faints mon with 2 or less hits
  * If AI does no damage 50/50
  * If under Encore 50/50
  * Further conditions if the above apply:
    * If AI has baton pass it will only switch with baton pass
    * If faster and faints player in one hit, +5
    * If faster and faints player in same or less hits, +4
    * If slower and faints player in less hits, + 3
    * If AI faster + 2 (an oversight, will be removed in a later verision. it is the last check so will likely never apply)

## How the AI sees damage
The damage the AI sees is always using the 8th roll of the calculator, it will always select moves and switch in using 8th roll.
  * All calculations are done using the above mentioned roll
  * AI see only damage that it will actually deal. Something like Thunderbolt into Volt Absorb will be seen as 0 damage and receive a -20 score.
  * Two-Turn Moves are seen as zero demage if they can't be used the same turn they charge (if weather or power herb are not present)
    * Two-Turn moves that are semi-invulnerable during charge are exluded from this check (e.g. Fly)
  * The AI will see the damage of a 100% crit
  * Explosion is treated like a normal move other then that it is a negative move effect
  * **Additional note**: if AI sees that it can faint the target the move will only get the increase for faint score + possible positive increase.
    * E.g. Fake Out won't get the additional +3 if it sees kill on target. Potentially leading to a tie with other moves

## Tera calcs (Relevant for Tera/Stella Island)
  * The AI sees Tera Blast or stab increased damage as if it did Terastalize when it is possible for the mon to do it (including party)
  * If AI mon has a Tera type while in party or field it will do calcs as if it already terastallized (including Tera Blast)
  * Calcs for Player mon happen only when actually terastallized (including Tera Blast)

## Damage moves scores
  * When AI chooses a move it compares all moves that can do damage against each other and looks for Postive/Negative effects. Moves with a negative effect will be discouraged based on how many hits it will take for AI to faint player mon.
    * Exmaple: If Overheat and Flamethrower have the same number of hits to faint AI Flamethrower gets a plus one score
  * When AI sees a kill with several moves, a move with a positive effect gets +1
  * If several moves with a positive effect are present, all of them get +1
    * Example: If AI sees kill with Knock Off and Rock Tomb, it would select one of those randomly
  * If a negative move is present, the next best dmg move will get a score increase
  * If nothing above applies the highest damage move gets +1 (on a tie all get +1)

## Multi hit moves (e.g. Bullet Seed)
  * Skill link will always be seen as doing the max amount of hits
  * Loaded Dice is seen as 4 hits
  * Population bomb calcs with 10 hits
  * Other moves are doing the specified number of hits (3 if it is random between 2-5)
  * Triple Axel will calc damage as 20 + 40 + 60 and always the 8th roll so the final roll will also be the 8th

## Positive move effects
  * Double target moves in doubles (spread moves like Surf/EQ only when no partner)
  * Sound moves if user is holding a Throat Spray
  * Crit moves that don't always crit
  * Trapping moves
  * Brick Break type effects if screens are on players side
  * Fell Stinger
  * Pursuit
  * Knock Off regardless if user has an item or not (-10 if user has sticky hold, no matter how much damage it does)
  * Switch target out moves (e.g. Dragon Tail)
  * Damage moves that set up Hazards
  * Guaranteed speed drop moves (e.g. Icy Wind)
  * Self boosting moves (e.g. power up punch, leaf storm with contrary)
  * Note:
    * If more then one move is present with a plus effect then both get the plus one
    * Eevee moves aren't positive / negative effects

## Negative move effects (damage moves with a negative side effect)
  * Recoil
  * Mind Blown, Steel Beam, Explosion type moves, Final Gambit
  * Recoil on miss
  * All moves that have a negative effect on AI unless they have contrary or hold a white herb (e.g. Superpower)
  * Note: Moves that would drop speed on AI are considered neutral in Trick Room
  * Note2: A recharge (eg hyper beam) effect is not considered negative

## Scale Shot (can be considered both a negative and positive depending on other moves)
  * If a negative move is present it is considered to be a positive move
  * If a positive move is present it is considered to be a negative move
  * If neither are present, Scale Shot is considered to have no positive / negative effects

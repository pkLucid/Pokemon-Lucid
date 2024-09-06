## Post KO Switch in
* Palafin-Zero outspeeds current player mon: + 8
* AI Mon faster and can faint target: + 7
* AI Mon faints target and is not dead to player: +6
* AI Mon faster and can faint with the same amount of hits or less the opposing mon: + 5
* AI Mon slower and can faint ai with less hits then opposing mon: +4
* AI Mon faster: +3
* AI is slower and dies in one hit +1
* Anthing else is +2

## Sturdy / Focus Sash / Disguise
* AI is aware of those items (ability) and will include them in the number of hits calculation
* It will correctly see multi hit moves a breaking endure type effects on a kill unless it is Dragon Darts in doubles

## Speed
* AI sees a speed tie, Quick Claw and Quick Draw as faster
* Priority moves on player (includes effects that increase priority) are not seen by AI

## Scoring on kills (additive)
* Move can kill: +4
* Doubles only: AI can kill with double target or spread move when no partner + 2
* hit switch targer (dragon tail) + 2

### Singles only
* If AI is slower and dead +10 on prio moves
* If AI is faster and move can kill: + 2 (Priority moves are considred as being faster in this case)
* If AI can kill with hit escape move (u-turn): 50/50 +2

### Doubles only
* AI can kill with double target move +2 (e.g. Dazzling Gleam)
* AI can kill with spread move +2 if partner is dead (e.g. Surf)

## Mid turn switch 
* Never switches in Doubles
* Never switches if player faints mon with 2 ore less hits
* If AI has baton pass it will only switch with baton pass
* If faster and faints player in one hit, +5
* If faster and faints player in same or less hits, +4
* If slower and faints player in less hits, + 3 
* If AI faster + 2 (an oversight, will be removed in a later verision. it is the last check so will likely never apply)
* If AI does no damage 50/50
* If under Encore 50/50

## How the AI sees damage
The damage the AI sees is always using the 8th roll of the calculator, it will always select moves and switch in using 8th roll.
* All calculations are done using the above mentioned roll
* AI see only damage that it will actually deal. Something like Thunderbolt into Volt Absorb will be seen as 0 damage and receive a -20 score.
* The AI will see the damage of a 100% crit
* Two-Turn Moves are seen as zero demage if they can't be used the same turn they charge (if weather or power herb are not present)
* **Bug**: AI might see one roll lower for gems boosts so the 7th (Might apply to type boosting items so just use the 7th roll to be save)
* Explosion is treated like a normal move other then that it is a negative move effect

## Tera calcs (Relevant for Tera/Stella Island)
* The AI sees Tera Blast or stab increased damage as if it did Terastalize when it is possible for the mon to do it (including party)
* If AI mon has a Tera type while in party or field it will do calcs as if it already terastallized (including Tera Blast)
* Calcs for Player mon happen only when actually terastallized (including Tera Blast)

## Damage moves scores
* When AI chooses a move it compares all moves that can do damage against each other and looks for Postive/Negative effects. Moves with a negative effect will be discouraged based on how many hits it will take for AI to faint player mon.
    * Exmaple: If Overheat and Flamethrower have the same number of hits to faint AI Flamethrower gets a plus one score
* When AI sees a kill with several moves, a move with a positive effect gets +1
* If several moves with a positive effect are present, all of them get +1
    * Example: If AI sees kill with Night Slash (high crit) and Rock Tomb (rock tomb), it would select one of those randomly
* If a negative move is present, all non negative moves get +1 based on number of hits (Phase 2 check)
    * Example: If AI sees a 2HKO on player mon with EQ, CC and Raging Bull. Close Combat is considered a negative effect, so both EQ and Raging Bull will get a +1 score

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
* Drain effects if no Liquid Ooze
* Fell Stinger
* Pursuit
* Knock Off
* Switch target out moves (e.g. Dragon Tail)
* Damage moves that set up Hazards
* Guaranteed speed drop moves (e.g. Icy Wind)
* Self boosting moves (e.g. power up punch, leaf storm with contrary)
* Note: If more then one move is present with a plus effect then both get the plus one

## Negative move effects (damage moves with a negative side effect)
* Recoil
* Moves that would target partner
* Two turn moves (e.g. Bounce and Solar Beam) If move can't be used without charging (e.g. Power Herb)
* Mind Blown, Steel Beam, Explosion type moves, Final Gambit
* Recoil on miss
* All moves that have a negative effect on AI unless they have contrary or hold a white herb (e.g. Superpower)

## Scale Shot (can be considered both a negative and positive depending on other moves)
* If a negative move is present it is considered to be a positive move
* If a positive move is present it is considered to be a negative move
* If neither are present, Scale Shot is considered to have no positive / negative effects

## Post KO Switch in
* Palafin-Zero outspeeds current player mon: + 8
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
* Fake out in doubles has the same AI as in singles (+3 for being fake out) and follows the same rules as other moves if the AI sees kill.

## kill on target
* Move can kill: +4
* AI is faster and move can kill: + 2 (singles only. Priority moves are considred as being faster in this case)
* AI can kill with hit escape move (u-turn): 50/50 +2 (singles only)
* hit switch targer (dragon tail) + 2
* AI can kill with double target move or spread move when no partner + 2

## In singles only
* +10 on prio moves if AI is slower and dead

## Damage moves scores
* When AI chooses a move it compares all moves that can do damage against each other. Moves with a bad effect will be discouraged based on numer of hits. For exmaple when Overheat and Flamethrower have the same number of hits to faint AI Flamethrower gets a plus one score.
* When AI sees a kill with several moves a move with a positive effect gets +1
* If several moves with a positive effect are present, all of them get +1
* If a negative move is present, all non negative moves get +1 based on number of hits

## Positive move effects
* Double target moves in doubles (spread moves like Surf/EQ only when no partner)
* Sound moves if user is holding a Throat Spray
* Crit moves that don't always crit
* Trapping moves
* Brick Break type effects if screens are on players side
* Drain effects if no Liquid Ooze
* Fell Stinger
* Pursuit
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
* If an other negative (positive) move is present it is considered to be a positive (negative) move
* If neither are present, Scale Shot is considered to have no positive / negative effects

## How the AI sees damage
* The damage the AI sees is the 8th roll.
* All calculations are done using the above mentioned roll
* AI see only damage that it will actually deal. Something like Thunderbolt into Volt Absorb will be seen as 0 damage and receive a -20 score. Exceptions are Future Sight and Sucker Punch. Future Sight is always seen as 0 damage but doesn't get a decrease in score. Sucker Punch can get a decrease after the first time it has been used.
* Two-Turn Moves are seen as zero demage if they can't be used the same turn they charge (if weather or power herb are not present)
* Note: AI sees one roll lower for gems boost so the 7th (Might apply to type boosting items so just use the 7th roll to be save)
* The AI sees Tera Blast or stab increased damage as if it did Terastalize when it is possible for the mon to do it (including party)

## Move effects:
* Moves with regular move effects generally get a +2/+3 if they apply. If I list some effects and don't specify a score you can assume that this is true
* Some effects get a +1 only in some rare instances. That makes them tied with best damage move
* Moves that target partner get a +10 if conditions apply
* Generally a move that faints the ai will have the highest score. Exceptions are TrickRoom, Protect and Palafin-Zero with Flip Turn.
* If a move would fail if used by AI it will get a -20
* For further information See AI_CalcMoveEffectScore

## Tera calcs (Relevant for Tera/Stella Island)
* If AI mon has a Tera type while in party or field it will do calcs as if it already terastallized (including Tera Blast)
* Calcs for Player mon happen only when actually terastallized (including Tera Blast)

## Mid turn switch (logic same as post ko switch in)
* If AI has baton pass it will only switch with baton pass
* If AI does no damage 50/50
* If under Encore 50/50

## Future Sight
* Seen as a zero damage move (including party) but score is considered neutral unless a future attack is active
* If AI is faster and faints to player +3
* If AI is slower and faints in 2 hits to player +3

## Status Moves
* For the following checks order matters
* If the move would fail the AI wont click it

### Protect (+15 if conditions apply)
* If either mon has encore, no score increase
* If AI is faster then both opposing mons, no score increase
* If AI used protect last turn, no score increase
* If it's the first turn for AI mon on the field and one opposing mon can faint it, 100% score increase
* If not first turn and any opposing mon can faint, 50/50 score increase
* The rules of a double battles still apply. Meaning if AI targets a player mon to kill it, it will not go for protect if the target has no move to faint the AI mon

### Hazards (including Stone Axe / Ceaseless Edge)
* If AI outdamages and player has a way to remove hazards, no score increase
* 70/30 in favor of no hazards if player has a way to remove rocks
* If AI/player has only 3 mons left no score increase
* AI will always only set up one layer of hazards
* In any other situation, +3

### Screens
* If no corresponding category on player, no score increase
* If player has a BrickBreak type move
    1. if AI faints player faster, no score increase
    2. Otherwise 30% to be increased by +3
* In any other situation, +3

### Follow me
* If partner dies to any player mon, +3
* If follow me is present on both ai mons and conditions apply for both mons, only the right side will get a +3

### Speed Control
* If AI cant't drop speed, no increase
* If AI faster, no increase
* If AI is still slower (or tied) the next turn, no score increase
* If AI outdamages player, no score increase
* If player resists move, no score increase unless the move + best damage move kill next turn
* In any other situation, +3

### Poison
* If player holds a curing berry AI, no score increase
* If AI is faster and faints player in less then 2 hits, no score increase
* If player needs 3 or more hits to faint AI, +3
* Otherwise +3, 100% if's first turn and 50/50 in any other situation

### Burn (Will-O-Wisp)
* If player holds a curing berry or has no physical move, no score increase
* If AI is faster and the best damage move is physical, +3
* Otherwise +3, 100% if's first turn and 50/50 in any other situation

### Paralysis
* If player holds a curing berry, no score increase
* If AI is slower, +3
* If Player needs 3 or more hits to faint AI, +3

### Tailwind
* If Slower +3 (checks average in doubles)

### Weakness Policy (+10)
* If it isn't the first turn for either mon, no score increase
* If partner is faster, has a move that would trigger the policy and need 4 or more hits to faint partner

### Destiny Bond
* If player can faint AI and AI faster, +3

### Set up (+2/+3 mostly irrelevant difference)
* If player outspeeds and two taps, AI is not going to set up
* If AI is faster but you one tap it, it isn't going to set up
* If it set up the previous turn and is faster + can 2 tap it isn't going to set up
* If it can kill the player it isn't going to set up
* If it dies to secondary damage this turn AI does not set up
* If player has opportunist / unaware it is not going to set up
* In any other situation it sets up
* Torch Song (Leaf Storm with Contrary) type moves are considered a set up move

### Mirror Coat / Counter
* No icnrease if AI dies to move
* No increase if AI has Mirror Coat (Counter) and player has no special (physical) move
* Otherwise 50/50 to get a +3

### Increase crit Rate +3 (e.g. Focus Energe)
* If either mon faints to 2 or less hits, no increase
* Increase if Super Luck, Sniper, Scope Lens or or high crit move are present

### Recover / Heal AI (+3)
* Tries to heal if heal amount + current HP are higher then best player damage and damage equal or higher current hp

### Trap (+2)
* If player needs 4 or more hits to faint ai trapping moves get an increase


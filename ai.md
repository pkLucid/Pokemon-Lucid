# AI:

## Targetting in double battles if one mon sees kill
    Ai side:        Battler 1 Battler 3
    Player side:    Battler 0 Battler 2
* Battler 1 sees kill on Battler 2 -> Battler 3 will target battler 0
* Battler 1 sees kill on Battler 0 -> Battler 3 will target battler 2
* Battler 1 sees kill on battler both battlers -> Battler 1 targets Battler 2 and Battler 3 targets Battler 0
* All the above apply to Battler 3

## kill on target
* kill: +4
* hit switch targer (dragon tail): + 2
* in doubles double target moves: + 1
* in singles ai is faster: + 2
* in singles kill with hit escape move (u-turn): +2
* in singles pursuit kill: + 1

## Damage moves scores
* When AI chooses a move it compares all moves that can do damage against each other.
  Moves with a bad effect will be desensitized based on numer of hits.
  For exmaple when Overheat and Flamethrower have the same number of hits to faint AI
  Flamethrower gets a plus one score.
* When AI sees a kill with several moves a move with a positive effect gets +1.
  e.g. When Slash and Bulldoze both kill, Bullsdoze gets a +1.
  (see AI_IsMoveEffectInPlus and AI_IsMoveEffectInMinus)

## How damage is seen
* AI sees only damage that it will deal. Something like Thunderbolt
  into Volt Absorb will be seen as 0 damage and receive a -20 score.
  Exceptions are Future Sight and Sucker Punch. Future Sight is always seen
  as 0 damage but doesn't get a decrease in score. Sucker Punch can get a decrease
  after the first time it has been used. (see IsDamageMoveUnusable)

## Move effects
* See AI_CalcMoveEffectScore

## Other
* Generally a move that faints the ai will have the highest score besides TrickRoom and Protect.

## For more information see battle_ai_main.c and battle_ai_util.c
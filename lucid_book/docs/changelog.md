## Changelog

### Pokemon Lucid Changelog v1.1.1
* Fixes lua script export for mint natures
* Fixes Grass Pelt not seen by AI issue
* Fixes Magma Storm edge case issue that caused opposing mon to lose hp
* Fixes Eject Pack not triggering mid-turn when intim was involved
* Fixes Safari Balls not having 100% catch rate
* Fixed Tera type icons visual issue
* Fixed Belch where sometimes the score got reduced to zero (Note: AI doesn't see it's own Belch damage while in party)
* Fixed Switch ins happening in reverse when every mon had score 0
* Fixes Mold Breaker ignoring abilities that cantBeSurpressed and are breakable at the same time
* Fixes Follow me score if both opposing mons have it and consider it viable
* Tera and Stella Islands are fly locations now
* Removed 6 trainers from Juan split
* Desert Underpass open after getting the 8th Badge
* Lavardige Egg is now a random starter (except Rowlet, Cyndaquil and Oshawott) instead of Kangaskhan
* Tapu Lele access once Waterfall can be used (previously it was post Maxie and Archie)
* Added Zoom Lens on Route 112
* Weather is not displyed each round anymore. Instead there is a notify message in the battle interface

### Pokemon Lucid Version 1.0.5 Patch Notes (Emergency Patch)
* AI didn't see weather abilties in party

### Pokemon Lucid Version 1.0.4 Patch Notes
* Fixed player back sprite issues
* Fixed Dive, Surf and Fly sprite issues
* Fixed Magma Storm Eject Pack issue
* Fixed issue with magma storm AI taking damage.
* Fixed Tapu Koko not chatchable with 5 mons in party.
* Fixed AI not see Grassy Glide priority
* Fixed AI not see Wind Rider and Purifying Salt
* Fixed AI mid turn switch feeding mons to die. It now only switches in 50% of the time if it does no damage or is locked into Encore
* Blaze kick on rapidash at level 30 and Temper Flare tutor (highly requested change)
* Supersweet Syrup might have the wrong message. Not able to repro. Please report if it happens.
* Note: Silver Wind is considered a wind move in expansion
* Togedeamru and Tapu Koko abilities are now hardcoded into the lua script since they weren't exported. Not sure why it happened with those 2

### Pokemon Lucid Version 1.0.3 Patch Notes
* Optional heal option after battle
* Fix AI wrongly simulated damage roll
* Fix AI sending out mons to die if it didn't have any options left that were considered good
* Temporary itemfinder for real this type in players room
* Version identifier ingame
* Fix dazzling abilities in doubles
* Fix Shield Dust not seen by secondary stat drop moves

### Pokemon Lucid Version 1.0.2 Patch Notes
* AI not seeing items and abilities for party mons
* Tirtouga Learnset
* U-turn 50/50 when ai faints target only + Palafin 100% otherwise normal damage move
* Fix protect/endure spam. If protect/endure was used last turn score gets decreased
* Overworld fixes
* Heart Scale TMs need confirmation in shop
* Change clock anytime in room
* All tutors in the overworld have a mon next to them
* temporary itemfinder in players house

### Pokemon Lucid Version 1.0.1
* Option to change battle speed
* Player character names default to their official names
* Item finder added to Birch
* Fix item dupe bug
* Fix roamers being triggered from player house TV

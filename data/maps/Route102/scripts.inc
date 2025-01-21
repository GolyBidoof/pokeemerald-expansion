Route102_MapScripts::
	.byte 0

Route102_EventScript_LittleBoy::
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
	end

Route102_EventScript_RouteSignOldale::
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
	end

Route102_EventScript_RouteSignPetalburg::
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
	end

Route102_EventScript_Boy::
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
	end

Route102_EventScript_Calvin::
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
	setvar VAR_0x8004, TRAINER_CALVIN_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
	release
	end

Route102_EventScript_CalvinRegisterMatchCall::
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinTryRegister::
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegister::
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinRematch::
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_ChrryClove::
	trainerbattle_single TRAINER_CHRRYCLOVE_1, Route102_Text_ChrryCloveIntro, Route102_Text_ChrryCloveDefeated, Route102_EventScript_ChrryCloveRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_ChrryCloveRematch
	setvar VAR_0x8004, TRAINER_CHRRYCLOVE_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_ChrryCloveTryRegister
	msgbox Route102_Text_ChrryClovePostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_ChrryCloveRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_ChrryCloveRegisterMatchCall
	release
	end

Route102_EventScript_ChrryCloveRegisterMatchCall::
	msgbox Route102_Text_ChrryCloveRegisterShort, MSGBOX_DEFAULT
	register_matchcall TRAINER_CHRRYCLOVE_1
	release
	end

Route102_EventScript_ChrryCloveTryRegister::
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_ChrryCloveRegister
	msgbox Route102_Text_ChrryClovePostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_ChrryCloveRegister::
	msgbox Route102_Text_ChrryCloveRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CHRRYCLOVE_1
	release
	end

Route102_EventScript_ChrryCloveRematch::
	trainerbattle_rematch TRAINER_CHRRYCLOVE_1, Route102_Text_ChrryCloveRematchIntro, Route102_Text_ChrryCloveRematchDefeated
	msgbox Route102_Text_ChrryCloveRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Toaster::
	trainerbattle_single TRAINER_TOASTER_1, Route102_Text_ToasterIntro, Route102_Text_ToasterDefeated, Route102_EventScript_ToasterRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_ToasterRematch
	setvar VAR_0x8004, TRAINER_TOASTER_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_ToasterTryRegister
	msgbox Route102_Text_ToasterPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_ToasterRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_ToasterRegisterMatchCall
	release
	end

Route102_EventScript_ToasterRegisterMatchCall::
	msgbox Route102_Text_ToasterRegisterShort, MSGBOX_DEFAULT
	register_matchcall TRAINER_TOASTER_1
	release
	end

Route102_EventScript_ToasterTryRegister::
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_ToasterRegister
	msgbox Route102_Text_ToasterPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_ToasterRegister::
	msgbox Route102_Text_ToasterRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_TOASTER_1
	release
	end

Route102_EventScript_ToasterRematch::
	trainerbattle_rematch TRAINER_TOASTER_1, Route102_Text_ToasterRematchIntro, Route102_Text_ToasterRematchDefeated
	msgbox Route102_Text_ToasterRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Ermii::
	trainerbattle_single TRAINER_ERMII_1, Route102_Text_ErmiiIntro, Route102_Text_ErmiiDefeated, Route102_EventScript_ErmiiRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_ErmiiRematch
	setvar VAR_0x8004, TRAINER_ERMII_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_ErmiiTryRegister
	msgbox Route102_Text_ErmiiPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_ErmiiRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_ErmiiRegisterMatchCall
	release
	end

Route102_EventScript_ErmiiRegisterMatchCall::
	msgbox Route102_Text_ErmiiRegisterShort, MSGBOX_DEFAULT
	register_matchcall TRAINER_ERMII_1
	release
	end

Route102_EventScript_ErmiiTryRegister::
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_ErmiiRegister
	msgbox Route102_Text_ErmiiPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_ErmiiRegister::
	msgbox Route102_Text_ErmiiRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ERMII_1
	release
	end

Route102_EventScript_ErmiiRematch::
	trainerbattle_rematch TRAINER_ERMII_1, Route102_Text_ErmiiRematchIntro, Route102_Text_ErmiiRematchDefeated
	msgbox Route102_Text_ErmiiRematchPostBattle, MSGBOX_AUTOCLOSE
	end
	
Route102_EventScript_Rick::
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Tiana::
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Allen::
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_Text_WatchMeCatchPokemon:
	.string "WALLY: {PLAYER}…\n"
	.string "POKéMON hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route102_Text_WallyIDidIt:
	.string "WALLY: I did it… It's my…\n"
	.string "My POKéMON!$"

Route102_Text_LetsGoBack:
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the GYM!$"

Route102_Text_ImNotVeryTall:
	.string "I'm…not very tall, so I sink right\n"
	.string "into tall grass.\p"
	.string "The grass goes up my nose and…\n"
	.string "Fwafwafwafwafwa…\p"
	.string "Fwatchoo!$"

Route102_Text_CatchWholeBunchOfPokemon:
	.string "I'm going to catch a whole bunch of\n"
	.string "POKéMON!$"

Route102_Text_RouteSignOldale:
	.string "ROUTE 102\n"
	.string "{RIGHT_ARROW} OLDALE TOWN$"

Route102_Text_RouteSignPetalburg:
	.string "ROUTE 102\n"
	.string "{LEFT_ARROW} PETALBURG CITY$"

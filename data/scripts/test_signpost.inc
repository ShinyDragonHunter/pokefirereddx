Text_ThisIsATestSignpostMsg:: @ 82C840A
	.string "This is a test message.\n"
	.string "This is a signpost.$"

EventScript_TestSignpostMsg:: @ 82C8436
	msgbox Text_ThisIsATestSignpostMsg, MSGBOX_SIGN
	end

Text_ThisIsATestObjectEventMsg::
	.string "This is a test message.\n"
	.string "This is an object event.$"

EventScript_TestObjectEventMsg::
	textcolor DARK_GRAY
	msgbox Text_ThisIsATestObjectEventMsg, MSGBOX_NPC
	end

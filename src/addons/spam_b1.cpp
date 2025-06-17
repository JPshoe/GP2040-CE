#include "addons/spam_b1.h"
#include "storagemanager.h"
#include "GamepadState.h"
#include "gamepad.h"

bool SpamB1::available()
{
    return true;
}

void SpamB1::setup()
{
}

void SpamB1::process()
{
    Gamepad *gamepad = Storage::getInstance().GetGamepad();

    gamepad->state.buttons = (getMicro() % 1000 > 500) & GAMEPAD_MASK_B1;
}

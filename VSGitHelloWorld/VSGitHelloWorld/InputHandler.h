#pragma once
#include "Event.h"
#include "Input.h"
#include "CloseEvent.h"
#include "CloseInput.h"
#include "LeftMouseClickInput.h"
#include "RandomizeEvent.h"
#include "debug.h"

class InputHandler
{
private:

public:
	Event* handleInput(Input* inptr);
};
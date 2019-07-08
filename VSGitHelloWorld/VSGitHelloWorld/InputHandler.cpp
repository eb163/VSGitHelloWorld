#include "InputHandler.h"

Event* InputHandler::handleInput(Input* inptr)
{
	cout << "Handling input..." << endl;
	Event* evptr = nullptr;
	if (inptr->getType() == InputType::INPUT_CLOSE)
	{
		cout << "Close input processed!" << endl;
		//do stuff here
		evptr = new CloseEvent();
	}

	if (inptr->getType() == InputType::INPUT_LEFTMOUSECLICK)
	{
		cout << "Left mouse click input processed!" << endl;
		evptr = new RandomizeEvent();
	}

	return evptr;
}
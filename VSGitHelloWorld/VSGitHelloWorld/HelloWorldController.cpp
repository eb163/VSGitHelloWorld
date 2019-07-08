#include "HelloWorldController.h"


HelloWorldController::HelloWorldController(Model & m, Viewer & v)
{
	connectModel(m);
	connectViewer(v);
}

HelloWorldController::~HelloWorldController()
{

}

void HelloWorldController::parseInput()
{
	cout << "HelloWorldController.parseInput()" << endl;
	while (inputQueue.empty() == false)
	{
		Input* current = inputQueue.front();
		inputQueue.pop();
		Event* newEvent = handler.handleInput(current);
		if (newEvent->getType() == EventType::EVENT_CLOSED)
		{
			running = false;
		}
		eventQueue.push(newEvent);
		if (current != nullptr)
		{
			delete current;
			current = nullptr;
		}
	}
}

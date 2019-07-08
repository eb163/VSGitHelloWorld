#pragma once
#include "Controller.h"
#include "CloseEvent.h"
#include "RandomizeEvent.h"
#include "InputHandler.h"

class HelloWorldController : public Controller
{

private:
	InputHandler handler;

public:
	HelloWorldController(Model& m, Viewer& v);
	~HelloWorldController();

	void parseInput();
};


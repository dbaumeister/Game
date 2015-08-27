#pragma once
#include "Engine.h"

class InputLoop
{
public:
	InputLoop(Engine* parent);
	~InputLoop();

	void start();
	void stop();

private:
	Engine* parent;
	bool keepRunning;
	void loop();
};


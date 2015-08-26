#pragma once

#include <time.h>
#include "Engine.h"

#define deltaT 1.0/60

class GameLoop
{
public:
	GameLoop(Engine* parent);
	~GameLoop();

	void start();
	void stop();

private:
	bool keepRunning;
	Engine* parent;
	void loop();
};


#pragma once
#include "GameLoop.h"
#include "InputLoop.h"

class Engine
{
public:
	Engine();
	~Engine();

	void start();
	void update();
	void physics();
	void render();
	void input();

private:
	GameLoop* gameLoop;
	InputLoop* inputLoop;
};


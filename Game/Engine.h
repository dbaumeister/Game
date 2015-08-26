#pragma once
#include "GameLoop.h"

class Engine
{
public:
	Engine();
	~Engine();

	void update();
	void physics();
	void render();
	void input();

private:
	GameLoop* gameLoop;
};


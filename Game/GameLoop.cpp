#include "GameLoop.h"



GameLoop::GameLoop(Engine* parent) : keepRunning(false), parent(parent)
{
}


GameLoop::~GameLoop()
{
	if (keepRunning) {
		stop();
	}
}

void GameLoop::start()
{
	keepRunning = true;
	loop();
}

void GameLoop::stop()
{
	keepRunning = false;
}

void GameLoop::loop()
{
	clock_t lag = 0.0;
	clock_t prev = clock();
	clock_t current = clock();

	while (keepRunning) {
		current = clock();
		lag += current - prev;
		prev = current;
		while (lag >= deltaT * CLOCKS_PER_SEC && keepRunning) {
			lag -= deltaT * CLOCKS_PER_SEC;
			parent->physics();
			parent->update();
		}
		parent->render();
	}
}

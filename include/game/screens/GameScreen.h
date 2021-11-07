#ifndef GAMESCREEN_H
#define GAMESCREEN_H
/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "game/entities/Console.h"
#include "game/entities/building/Building.h"

/* Forward Declaration */

class GameScreen {
public:
	int32_t init();
	void deinit();
	void draw();
	void handleEvent(const InputEvent& e);
private:
	Building _building;
	//vector BUTTONS:
	//play button
	//stop button
	//code button

	//timer
	//score

	Console _console;
	//cards

	//intense music

};
#endif
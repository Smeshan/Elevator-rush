#ifndef GAMESCREEN_H
#define GAMESCREEN_H
/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "game/levels/Level.h"

/* Forward Declaration */
struct InputEvent;

class GameScreen {
public:
	int32_t init(const int32_t levelId);
	void deinit();
	void draw();
	void process();
	void handleEvent(const InputEvent& e);

private:
	Level _level;
	//timer
	//powerups menu
	//fps
};
#endif
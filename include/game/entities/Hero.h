#ifndef HERO_H
#define HERO_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>

/* Third-party icnludes */

/* Own icnludes */
#include <manager_utils/drawing/Image.h>

/* Forward Declaration */
struct InputEvent;

class Hero {

public:
	int32_t init();
	void deinit();
	void draw();
	void handleEvent(const InputEvent& e);

private:
	Image _runningGirl;
};
#endif
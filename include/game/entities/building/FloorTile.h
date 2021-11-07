#ifndef FLOORTILE_H
#define FLOORTILE_H
/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/drawing/Image.h"

/* Forward Declaration */
struct InputEvent;

class FloorTile {
public:
	int32_t init(const int32_t _currFloor);
	void deinit();
	void draw();
	void handleEvent(const InputEvent& e);
private:
	Image _floorTile;
	//Image _door1;
	//Image _door2;
	Image _buttons;
};
#endif
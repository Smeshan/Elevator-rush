#ifndef BUILDING_H
#define BUILDING_H
/* C system icnludes */

/* C++ system icnludes */
#include <vector>

/* Third-party icnludes */

/* Own icnludes */
#include "game/entities/building/FloorTile.h"

/* Forward Declaration */

class Building {
public:
	int32_t init();
	void deinit();
	void draw();
	void handleEvent(const InputEvent& e);
private:
	std::vector<FloorTile> _floors;
	int32_t _currFloor = 0;
	int32_t _numOfFloors = 2;

	Image _people;

	//elevator
};
#endif
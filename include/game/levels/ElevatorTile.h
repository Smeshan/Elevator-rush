#ifndef OFFICETILE_H
#define OFFICETILE_H
/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/drawing/Image.h"
#include "game/levels/LevelPos.h"

/* Forward Declaration */	
struct InputEvent;

class ElevatorTile  {
	public:
	int32_t init(const LevelPos& pos);
	void draw();
	void handleEvent(const InputEvent& e);
	private:
	Image _elevatorTileImg;

};
#endif
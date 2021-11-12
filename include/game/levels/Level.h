#ifndef LEVEL_H
#define LEVEL_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>
#include <vector>

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/drawing/Image.h"

#include "game/levels/LevelsConfig.h"
#include "game/levels/ElevatorTile.h"
#include "game/entities/Elevator.h"
#include "game/entities/Office.h"

/* Forward Declaration */
struct InputEvent;

class Level {
public:
	int32_t init(const int32_t levelId);
	void deinit();
	void draw();
	void process();
	void handleEvent(const InputEvent& e);

private:
	std::vector<ElevatorTile> createElevatorTiles();
	int32_t _elevatorShafts = 0;
	int32_t _officeRooms = 0;
	int32_t _floors = 0;
	int32_t _waitingPeople = 0;

	//background

	std::vector<ElevatorTile> _elevatorTiles;
	std::vector<Elevator> _elevators;
	
	//office generator
	std::vector<Office> _offices;

	//person genarator
	std::deque<std::shared_ptr<Person>> _people;
	
};
#endif
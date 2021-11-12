#ifndef ELEVATOR_H
#define ELEVATOR_H
/* C system icnludes */

/* C++ system icnludes */
#include <queue>
#include <vector>

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/drawing/Image.h"
#include "game/entities/Person.h"
#include "game/levels/LevelPos.h"

/* Forward Declaration */

constexpr auto MAX_CAPACITY = 2;

class Elevator {
public:
	int32_t init(const int32_t floor, const int32_t column);
	void deinit();
	void draw();
	void process();
	void gotoFloor(const int32_t floor);

	void addNewPassannger(std::shared_ptr<Person> person);
private:

	Image _elevatorImg;
	LevelPos _levelPos = LevelPos::ZERO;

	int32_t _passangersCount = 0;
	int32_t _capacity = MAX_CAPACITY;
	int32_t _atFloor = 0;
	bool isStopped = true;

	std::vector<std::shared_ptr<Person>> _passangers;
	//std::queue<  > _tasks;

};
#endif
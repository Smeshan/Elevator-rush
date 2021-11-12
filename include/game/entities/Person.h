#ifndef PERSON_H
#define PERSON_H
/* C system icnludes */

/* C++ system icnludes */
#include <memory>

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/drawing/Image.h"
#include "manager_utils/drawing/Text.h"
#include "game/levels/LevelPos.h"

/* Forward Declaration */

class Person {
public:
	int32_t init(const int32_t floor, const int32_t numInLine);
	void deinit();
	void draw();
	void moveForward();
	void setFloorRequest(const int32_t floorRequest);
	int32_t getFloorRequest() const;

private:
	void updateTextPosition(const Point& personPos);

	Image _personImg;
	Text _floorTextImg;

	int32_t _floorRequest = 0;
	LevelPos _levelPos = LevelPos::ZERO;
	Point _textPos = Point::ZERO;
};
#endif
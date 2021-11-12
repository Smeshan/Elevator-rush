#ifndef OFFICE_H
#define OFFICE_H
/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/drawing/Image.h"
#include "manager_utils/drawing/Text.h"
#include "game/entities/Person.h"

/* Forward Declaration */

class Office {
public:
	int32_t init(const int32_t floor, const int32_t column);
	void deinit();
	void draw();

	void increaseRequests();
	void decreaseRequests();

private:

	Point _pos = Point::UNDEFINED;
	Image _floorImg;
	Text _requestsImg;

	int32_t _floorNumber = 0;
	int32_t _requests = 0;

};
#endif
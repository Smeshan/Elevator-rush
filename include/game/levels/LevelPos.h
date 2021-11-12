#ifndef LEVELPOS_H
#define LEVELPOS_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>

/* Third-party icnludes */

/* Own icnludes */

/* Forward Declaration */
#include "utils/drawing/Point.h"

enum TileType {
    ELEVATOR,
	OFFICE,
	EMPTY
};

class LevelPos {
public:
	LevelPos() = default;
	LevelPos(const int32_t inputFloor, const int32_t inputColumn, TileType type);
	LevelPos(const int32_t inputFloor, const int32_t numInLine);

	int32_t floor = 0;
	int32_t column = 0;
	Point pos = Point::ZERO;

	static const LevelPos ZERO;
private:
	TileType _type;

};
#endif
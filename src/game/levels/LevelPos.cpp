/* Corresponding header */
#include "game/levels/LevelPos.h"

/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "game/levels/LevelsConfig.h"

constexpr auto LEVEL_MID_X = 512;
constexpr auto LEVEL_BOT_Y = 768;

const LevelPos LevelPos::ZERO(0, 0, TileType::EMPTY);

LevelPos::LevelPos(const int32_t inputFloor, const int32_t inputColumn, TileType type)
    : floor(inputFloor), column(inputColumn) {
    switch (type) {
    case ELEVATOR:
        pos.x = LEVEL_MID_X - ELEVATOR_TILE_X - (ELEVATOR_TILE_X * inputColumn);
        pos.y = LEVEL_BOT_Y - FLOOR_HEIGHT - (FLOOR_HEIGHT * inputFloor);
        break;
    case OFFICE:
        pos.x = LEVEL_MID_X + OFFICE_TILE_X * inputColumn;
        pos.y = LEVEL_BOT_Y - FLOOR_HEIGHT - (FLOOR_HEIGHT * inputFloor);
        break;
    default:
        break;
    }
}

LevelPos::LevelPos(const int32_t inputFloor, const int32_t numInLine) {
    //TODO somehow draw them before the shafts
    pos.x = LEVEL_MID_X - PERSON_SIZE - ((PERSON_SIZE + PERSON_GAP)* numInLine);
    pos.y = LEVEL_BOT_Y - TILE_GAP - PERSON_SIZE - (FLOOR_HEIGHT * inputFloor);
}

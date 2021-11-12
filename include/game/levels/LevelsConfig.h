#ifndef LEVELSCONFIG_H
#define LEVELSCONFIG_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>

/* Third-party icnludes */

/* Own icnludes */

/* Forward Declaration */

constexpr auto ELEVATOR_TILE_X = 75;
constexpr auto OFFICE_TILE_X = 150;
constexpr auto PERSON_SIZE = 25;

constexpr auto FLOOR_HEIGHT = 150;

constexpr auto TILE_GAP = 10;
constexpr auto PERSON_GAP = 5;

enum LevelConfig {
    ELEVATOR_SHAFTS,
    OFFICE_ROOMS,
    FLOORS,
    LEVEL_CONFIGS_COUNT
};

enum Levels {
    LEVEL_NULL,
    LEVEL_1,
    LEVEL_2,
    LEVEL_COUNT
};

const int32_t LEVELS_CONFIGS[LEVEL_COUNT][LEVEL_CONFIGS_COUNT]{
    // {shafts, offices, floors}
    {0,0,0}, //level null
    {1,1,3}, //level 1
    {2,2,5} //level 2
};

#endif // LEVELSCONFIG_H
#ifndef GAMECONFIG_H
#define GAMECONFIG_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>
#include <unordered_map>

/* Third-party icnludes */

/* Own icnludes */
#include "common/CommonDefines.h"
/* Forward Declaration */
enum Screen{
    MAINMENU,
    GAME,
    LEVELS,
    SETTINGS,
    EXIT
};

struct GameConfig{
   int32_t movingUpAndDownTimerId;
};

#endif
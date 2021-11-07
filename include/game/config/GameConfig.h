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
<<<<<<< HEAD
enum Screen{
    MAINMENU,
    GAME,
    LEVELS,
    SETTINGS,
    EXIT
};

struct GameConfig{
   int32_t movingUpAndDownTimerId;
=======
enum GameScreen{
    MAINMENU,
    GAME,
    LEVELS,
    SETTINGS
};

struct GameConfig{
    //empty
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff
};

#endif
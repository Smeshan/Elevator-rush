#ifndef GAME_H
#define GAME_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>

/* Third-party icnludes */

/* Own icnludes */
#include "game/config/GameConfig.h"
#include "manager_utils/drawing/Image.h"
#include "manager_utils/drawing/Text.h"
#include "manager_utils/audio/Sound.h"
//#include "manager_utils/audio/Music.h"
#include "game/entities/Console.h"
#include "game/entities/SettingsScreen.h"
#include "game/entities/Hero.h"

/* Forward declaration */
struct InputEvent;

class Game {
public:
    int32_t init(const GameConfig& config);
    void deinit();
    void draw();
    void handleEvent(const InputEvent& e);

private:
    Console _console;
    Image _map;
    Image _wheel;
    Hero _girl;
    SettingsScreen _settingsScreen;
    GameScreen _screen = GAME;
};

#endif
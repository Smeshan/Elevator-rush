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
<<<<<<< HEAD
#include "manager_utils/audio/Music.h"
#include "game/proxies/GameProxy.h"
#include "game/screens/SettingsScreen.h"
#include "game/screens/GameScreen.h"
#include "game/screens/MenuScreen.h"
=======
//#include "manager_utils/audio/Music.h"
#include "game/entities/Console.h"
#include "game/entities/SettingsScreen.h"
#include "game/entities/Hero.h"
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff

/* Forward declaration */
struct InputEvent;

class Game : public GameProxy {
public:
    int32_t init(const GameConfig& config);
    void deinit();
    void draw();
    void handleEvent(const InputEvent& e);
    bool checkForExitRequest() const;
private:
<<<<<<< HEAD
    void onButtonPressed(int32_t buttonId) final;

    Screen _screen = MAINMENU;
    Music _menuMusic;
    MenuScreen _menuScreen;
    GameScreen _gameScreen;
    SettingsScreen _settingsScreen;
=======
    Console _console;
    Image _map;
    Image _wheel;
    Hero _girl;
    SettingsScreen _settingsScreen;
    GameScreen _screen = GAME;
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff
};

#endif
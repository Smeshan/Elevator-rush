#ifndef GAME_H
#define GAME_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>

/* Third-party icnludes */

/* Own icnludes */
#include "game/config/GameConfig.h"
#include "manager_utils/audio/Music.h"
#include "game/proxies/GameProxy.h"
#include "game/screens/SettingsScreen.h"
#include "game/screens/GameScreen.h"
#include "game/screens/MenuScreen.h"

/* Forward declaration */
struct InputEvent;

class Game : public GameProxy {
public:
    int32_t init(const GameConfig& config);
    void deinit();
    void draw();
    void process();
    void handleEvent(const InputEvent& e);
    bool checkForExitRequest() const;
private:
    void onButtonPressed(int32_t buttonId) final;

    Screen _screen = MAINMENU;
    Music _menuMusic;
    MenuScreen _menuScreen;
    GameScreen _gameScreen;
    SettingsScreen _settingsScreen;
};

#endif
/* Corresponding header */
#include "game/screens/MenuScreen.h"  

/* C system icnludes */

/* C++ system icnludes */
#include <string>

/* Third-party icnludes */

/* Own icnludes */
#include "sdl_utils/InputEvent.h"
#include "common/CommonDefines.h"

constexpr auto MENU_OPTIONS_COUNT = 5;

constexpr auto MUSIC_BUTTON_POS_X = 965;
constexpr auto MUSIC_BUTTON_POS_Y = 5;

const char* MENUS[MENU_OPTIONS_COUNT]{
    "START",
    "LEVELS",
    "HIGH SCORES",
    "SETTINGS",
    "EXIT"
};

int32_t MenuScreen::init(GameProxy* gameProxy, [[maybe_unused]]int32_t timerId) {
    _background.create(TextureId::BACKGROUND);
    _screenServer.create(TextureId::SCREEN_SERVER_BGR);

    _musicButton.init(gameProxy, Buttons::MUSIC_BUTTON);
    _musicButton.create(TextureId::MUSIC_BUTTON,
        Point(MUSIC_BUTTON_POS_X, MUSIC_BUTTON_POS_Y));
    _musicButton.nextFrame();

    _buildingLigths.resize(LIGHTS_COUNT);
    for (int32_t i = 0; i < LIGHTS_COUNT; ++i) {
        _buildingLigths[i].init(i, TimerId::BUILDING_LIGHT_UPDOWN_ID + i);
        _buildingLigths[i].startAnim();
    }

    _menuOptions.resize(MENU_OPTIONS_COUNT);
    for (int32_t i = 0; i < MENU_OPTIONS_COUNT; ++i) {
        _menuOptions[i].init(gameProxy, i);
        _menuOptions[i].create(MENUS[i], FontId::MENU_40, Colors::GRAY,
            Point(430, 200 + i * 50));
    }
    return EXIT_SUCCESS;
}

void MenuScreen::deinit() {

}

void MenuScreen::draw() {
    _background.draw();
    _musicButton.draw();
    for (int32_t i = 0; i < LIGHTS_COUNT; ++i) {
        _buildingLigths[i].draw();
    }
    _screenServer.draw();
    for (int32_t i = 0; i < MENU_OPTIONS_COUNT; ++i) {
        _menuOptions[i].draw();
    }
}

void MenuScreen::handleEvent(const InputEvent& e) {
    _musicButton.handleEvent(e);
    for (int32_t i = 0; i < MENU_OPTIONS_COUNT; ++i) {
        _menuOptions[i].handleEvent(e);
    }
}

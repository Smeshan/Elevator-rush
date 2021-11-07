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

const char* MENUS[MENU_OPTIONS_COUNT]{
    "START",
    "LEVELS",
    "HIGH SCORES",
    "SETTINGS",
    "EXIT"
};

int32_t MenuScreen::init(GameProxy* gameProxy, int32_t timerId) {
    _background.create(TextureId::BACKGROUND);
    _screenServer.create(TextureId::SCREEN_SERVER_BGR);

    for (int32_t i = 0; i < LIGHTS_COUNT; ++i) {
        BuildingLigth light;
        light.init(i, timerId);
        light.startAnim();
        _buildingLigths.push_back(light);
    }

    _menuOptions.resize(MENU_OPTIONS_COUNT);
    for (int32_t i = 0; i < MENU_OPTIONS_COUNT; ++i) {
        _menuOptions[i].init(gameProxy, i);
        _menuOptions[i].create(MENUS[i], FontId::MENU_40, Colors::GRAY, Point(430, 200 + i * 50));
    }
    return EXIT_SUCCESS;
}

void MenuScreen::deinit() {

}

void MenuScreen::draw() {
    _background.draw();
    _screenServer.draw();
    for (int32_t i = 0; i < LIGHTS_COUNT; ++i) {
        _buildingLigths[i].draw();
    }
    for (int32_t i = 0; i < MENU_OPTIONS_COUNT; ++i) {
        _menuOptions[i].draw();
    }
}

void MenuScreen::handleEvent(const InputEvent& e) {
    for (int32_t i = 0; i < MENU_OPTIONS_COUNT; ++i) {
        _menuOptions[i].handleEvent(e);
    }
}

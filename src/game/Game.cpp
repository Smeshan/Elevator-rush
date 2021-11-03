/* Corresponding header */
#include "game/Game.h"

/* C system includes */

/* C++ system icnludes */
#include <iostream>

/* Third-party icnludes */

/* Own icnludes */
#include "sdl_utils/InputEvent.h"

int32_t Game::init([[maybe_unused]] const GameConfig& config) {

    _map.create(TextureId::GAMEMAP);
    _wheel.create(TextureId::WHEEL);
    _console.init();
    _girl.init();
    _settingsScreen.init();

    return EXIT_SUCCESS;
}

void Game::draw() {
    switch (_screen) {
    case MAINMENU:
        _map.draw();
        break;
    case GAME:
        _console.draw();
        _wheel.draw();
        _girl.draw();
        break;
    case SETTINGS:
        _settingsScreen.draw();
        break;
    default:
        break;
    }
}

void Game::handleEvent(const InputEvent& e) {
    _girl.handleEvent(e);
    if (TouchEvent::KEYBOARD_PRESS == e.type) {
        switch (e.key) {
        case Keyboard::KEY_F1:
            _screen = MAINMENU;
            break;
        case Keyboard::KEY_F2:
            _screen = GAME;
            break;
        case Keyboard::KEY_F3:
            _screen = SETTINGS;
            break;
        default:
            break;
        }
    }
    //QUESTION how to make text field active only on the game screen
    _console.handleEvent(e);
}

void Game::deinit() {
    //destructors will do the work
}
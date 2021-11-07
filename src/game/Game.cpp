/* Corresponding header */
#include "game/Game.h"

/* C system includes */

/* C++ system icnludes */
#include <iostream>

/* Third-party icnludes */

/* Own icnludes */
#include "sdl_utils/InputEvent.h"

int32_t Game::init(const GameConfig& config) {

    _menuScreen.init(this, config.movingUpAndDownTimerId);

    _menuMusic.create(MediaId::MENU_MUSIC);
    _menuMusic.setVolumeMusic(3);

    _gameScreen.init();

    _settingsScreen.init();

    return EXIT_SUCCESS;
}

void Game::draw() {
    switch (_screen) {
    case MAINMENU:
        _menuScreen.draw();
        _menuMusic.play();
        break;
    case GAME:
        _gameScreen.draw();
        break;
    case SETTINGS:
        _settingsScreen.draw();
        break;
    default:
        break;
    }
}

void Game::handleEvent(const InputEvent& e) {
    switch (_screen) {
    case MAINMENU:
        _menuScreen.handleEvent(e);
        break;
    case GAME:
        _gameScreen.handleEvent(e);
        break;
    default:
        break;
    }

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
            case Keyboard::KEY_F7:
            _menuMusic.playPauseMusic();
            break;
            case Keyboard::KEY_F9:
            _menuMusic.setVolumeMusic(60);
            break;
            case Keyboard::KEY_F10:
            _menuMusic.setVolumeMusic(128);
            break;
        default:
            break;
        }
    } 
}

void Game::deinit() {
    //destructors will do the work
}

void Game::onButtonPressed(int32_t buttonId) {
    switch (buttonId) {
    case MainMenuButtons::START_BUTTON:
        _screen = GAME;
        break;
    case MainMenuButtons::SETTINGS_BUTTON:
        _screen = SETTINGS;
        break;
    case MainMenuButtons::EXIT_BUTTON:
        _screen = EXIT;
        break;
    default:
        break;
    }
}

bool Game::checkForExitRequest() const {
    if (_screen != EXIT) {
        return false;
    }
    return true;
}
/* Corresponding header */
#include "game/ui_buttons/MenuButton.h"  

/* C system icnludes */

/* C++ system icnludes */
#include <iostream>
/* Third-party icnludes */

/* Own icnludes */
#include "sdl_utils/InputEvent.h"
#include "game/proxies/GameProxy.h"
#include "common/CommonDefines.h"

int32_t MenuButton::init(GameProxy* gameProxy, int32_t buttonId) {
    if (gameProxy == nullptr) {
        std::cerr << "Error, nullptr provided for gameProxy, buttonId: "
            << buttonId << std::endl;
        return EXIT_FAILURE;
    }
    _gameProxy = gameProxy;
    _buttonId = buttonId;
    _hoverSound.create(MediaId::BUTTON_HOVER);
    return EXIT_SUCCESS;
}

void MenuButton::handleEvent(const InputEvent& e) {
    if (TextButtonBase::containsEvent(e)) {
        if (!_isSoundPlayed) {
            _hoverSound.play();
            _isSoundPlayed = true;
        }
        
        Text::setColor(Colors::BLUE);
        if (e.type == TouchEvent::TOUCH_RELEASE) {
            _gameProxy->onButtonPressed(_buttonId);
        }
    }
    else {
        _isSoundPlayed = false;
        Text::setColor(Colors::BLACK);
    }
}

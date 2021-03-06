/* Corresponding header */
#include "game/ui_buttons/Button.h"  

/* C system icnludes */

/* C++ system icnludes */
#include <iostream>
/* Third-party icnludes */

/* Own icnludes */
#include "sdl_utils/InputEvent.h"
#include "game/proxies/GameProxy.h"


int32_t Button::init(GameProxy* gameProxy, int32_t buttonId) {
    if (gameProxy == nullptr) {
        std::cerr << "Error, nullptr provided for gameProxy, buttonId: "
            << buttonId << std::endl;
        return EXIT_FAILURE;
    }
    _gameProxy = gameProxy;
    _buttonId = buttonId;

    return EXIT_SUCCESS;
}

void Button::handleEvent(const InputEvent& e) {
    if (Button::containsEvent(e)) {
        if (e.type == TouchEvent::TOUCH_RELEASE) {
            nextFrame();
            _gameProxy->onButtonPressed(_buttonId);
        }
    }
}

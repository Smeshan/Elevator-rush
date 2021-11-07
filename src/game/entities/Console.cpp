#include "game/entities/Console.h"  
/* Corresponding header */

/* C system icnludes */

/* C++ system icnludes */
#include <iostream>

/* Third-party icnludes */

/* Own icnludes */
#include "sdl_utils/InputEvent.h"
#include "game/config/GameConfig.h"

int32_t Console::init() {
    _consoleImg.create(TextureId::CONSOLE);

    if (EXIT_SUCCESS != _textField.init(MediaId::SINGLE_KEY_TYPE)) {
        std::cerr << "Error, _textField.init() failed." << std::endl;
    }
    return EXIT_SUCCESS;
}

void Console::deinit() {
    //empty
}

void Console::draw() {
    _consoleImg.draw();
    _textField.draw();
}

void Console::handleEvent(const InputEvent& e) {
    _textField.handleEvent(e);
}

/* Corresponding header */
#include "game/screens/GameScreen.h"  

/* C system icnludes */

/* C++ system icnludes */
#include <string>

/* Third-party icnludes */

/* Own icnludes */
#include "sdl_utils/InputEvent.h"
#include "common/CommonDefines.h"

int32_t GameScreen::init(const int32_t levelId) {
    if (EXIT_SUCCESS != _level.init(levelId)) {
        std::cerr << "_level.init() failed." << std::endl;
    }
    return EXIT_SUCCESS;
}

void GameScreen::deinit() {

}

void GameScreen::draw() {
    _level.draw();
}

void GameScreen::process() {
    _level.process();
}

void GameScreen::handleEvent([[maybe_unused]]const InputEvent& e) {
    _level.handleEvent(e);
}
/* Corresponding header */
#include "game/screens/GameScreen.h"  

/* C system icnludes */

/* C++ system icnludes */
#include <string>

/* Third-party icnludes */

/* Own icnludes */
#include "sdl_utils/InputEvent.h"

int32_t GameScreen::init() {
    _building.init();
    return EXIT_SUCCESS;
}


void GameScreen::deinit() {

}

void GameScreen::draw() {
    _building.draw();
}

void GameScreen::handleEvent([[maybe_unused]] const InputEvent& e) {

}

/* Corresponding header */
#include "game/entities/Hero.h"  

/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "common/CommonDefines.h"
#include "sdl_utils/InputEvent.h"

int32_t Hero::init() {
    _runningGirl.create(TextureId::RUNNING_GIRL);
    return EXIT_SUCCESS;
}

void Hero::deinit() {
    
}

void Hero::draw() {
    _runningGirl.draw();
}

void Hero::handleEvent([[maybe_unused]]const InputEvent& e) {
    
}

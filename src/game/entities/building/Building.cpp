/* Corresponding header */
#include "game/entities/building/Building.h"

/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "sdl_utils/InputEvent.h"

#include "common/CommonDefines.h"

int32_t Building::init() {
    _floors.resize(_numOfFloors);
    for (int32_t i = 0; i < _numOfFloors; ++i) {
        _floors[i].init(i);
    }

    _people.create(TextureId::PEOPLE,Point(430,640));
    _people.nextFrame();
    _people.nextFrame();
    _people.nextFrame();
    _people.nextFrame();
    _people.nextFrame();
    _people.nextFrame();
    return EXIT_SUCCESS;
}

void Building::deinit() {

}

void Building::draw() {
    for (int32_t i = 0; i < _numOfFloors; ++i) {
        _floors[i].draw();
    }
    _people.draw();
}

void Building::handleEvent([[maybe_unused]] const InputEvent& e) {

}

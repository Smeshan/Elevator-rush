/* Corresponding header */
#include "game/entities/building/FloorTile.h"

/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "sdl_utils/InputEvent.h"
#include "common/CommonDefines.h"

constexpr auto FIRST_FLOOR_X = 462;
constexpr auto FIRST_FLOOR_Y = 600;

constexpr auto BUTTONS_X = 475;
constexpr auto BUTTONS_Y = 680;

constexpr auto TILE_SIZE = 150;


int32_t FloorTile::init(const int32_t _currFloor) {
    _floorTile.create(TextureId::FLOOR_TILE,
        Point(FIRST_FLOOR_X, FIRST_FLOOR_Y - _currFloor * TILE_SIZE));
    _buttons.create(TextureId::ELEVATOR_BUTTONS,
        Point(BUTTONS_X, BUTTONS_Y - _currFloor * TILE_SIZE));

    return EXIT_SUCCESS;
}

void FloorTile::deinit() {

}

void FloorTile::draw() {
    _floorTile.draw();
    _buttons.draw();
}

void FloorTile::handleEvent([[maybe_unused]] const InputEvent& e) {

}

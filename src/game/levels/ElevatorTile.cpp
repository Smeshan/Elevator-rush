/* Corresponding header */
#include "game/levels/ElevatorTile.h"
/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "common/CommonDefines.h"
#include "sdl_utils/InputEvent.h"

int32_t ElevatorTile::init(const LevelPos& levelPos) {
    _elevatorTileImg.create(TextureId::ELEVATOR_TILE, Point(levelPos.pos));
    return EXIT_SUCCESS;  
}

void ElevatorTile::draw() {
    _elevatorTileImg.draw();
}

void ElevatorTile::handleEvent(const InputEvent& e) {
    if (_elevatorTileImg.containsPoint(e.pos)) {
        _elevatorTileImg.show();
    } else {
        _elevatorTileImg.hide();
    }
}

/* Corresponding header */
#include "game/animations/BuildingLigth.h"  

/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "common/CommonDefines.h"
#include "game/animations/AnimationsConfig.h"

const int32_t lightPosX[Internals::MAX_BUILDING_LIGHTS_TIMERS]{
    138, 168, 483, 679, 874, 941
};
const int32_t lightPosY[Internals::MAX_BUILDING_LIGHTS_TIMERS]{
    700, 330, 508, 650, 736, 326
};
const int32_t lightMaxHeight[Internals::MAX_BUILDING_LIGHTS_TIMERS]{
    281, 281, 507, 555, 325, 325
};
const int32_t lightMinHeight = 736;

BuildingLigth::~BuildingLigth() {
    if (isActiveTimerId(_movingUpAndDownTimerId)) {
        stopTimer(_movingUpAndDownTimerId);
    }
}

int32_t BuildingLigth::init(int32_t lightIndx, int32_t timerId) {
    _indx = lightIndx;
    _movingUpAndDownTimerId = timerId;

    _ligth.create(TextureId::BUILDING_LIGHT, Point(lightPosX[lightIndx], lightPosY[lightIndx]));
    return EXIT_SUCCESS;
}

void BuildingLigth::deinit() {

}

void BuildingLigth::draw() {
    _ligth.draw();
}

void BuildingLigth::startAnim() {
    Timer::startTimer(35, _movingUpAndDownTimerId, TimerType::PULSE);
}

void BuildingLigth::stopAnim() {
    stopTimer(_movingUpAndDownTimerId);
}

void BuildingLigth::onTimeout(int32_t timerId) {
    if (timerId == _movingUpAndDownTimerId) {
        processAnimation();
    }
    else {
        std::cerr << "Error, recieved unsupported timerId: " << timerId
            << std::endl;
    }
}

void BuildingLigth::processAnimation() {
    if (_goingUp) {
        if (_ligth.getPosition().y < lightMaxHeight[_indx]) {
            _goingUp = !_goingUp;
        }
        _ligth.moveUp(1);
    } else {
        if (_ligth.getPosition().y > lightMinHeight) {
            _goingUp = !_goingUp;
        }
    _ligth.moveDown(1);
    }
}
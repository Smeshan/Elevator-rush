/* Corresponding header */
#include "game/animations/BuildingLigth.h"  

/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "common/CommonDefines.h"

BuildingLigth::~BuildingLigth() {
    if (isActiveTimerId(_movingUpAndDownTimerId)) {
        stopTimer(_movingUpAndDownTimerId);
    }
}

int32_t BuildingLigth::init(int32_t lightIndx, int32_t timerId) {
    _movingUpAndDownTimerId = timerId;

    _ligth.create(TextureId::BUILDING_LIGHT, Point(137 + lightIndx * 50, 603));
    return EXIT_SUCCESS;
}

void BuildingLigth::deinit() {

}

void BuildingLigth::draw() {
    _ligth.draw();
}

void BuildingLigth::startAnim() {
    Timer::startTimer(20, _movingUpAndDownTimerId, TimerType::PULSE);
}

void BuildingLigth::stopAnim() {
    stopTimer(_movingUpAndDownTimerId);
}

void BuildingLigth::onTimeout(int32_t timerId) {
    std::cerr << "BuildingLigth::onTimeout" << std::endl;
    if (timerId == _movingUpAndDownTimerId) {
        processAnimation();
    }
    else {
        std::cerr << "Error, recieved unsupported timerId: " << timerId
            << std::endl;
    }
}

void BuildingLigth::processAnimation() {
        std::cerr << "processAnimation : " << std::endl;
    _ligth.moveUp(25);
}
/* Corresponding header */
#include "game/entities/Person.h"

/* C system icnludes */

/* C++ system icnludes */
#include <string>

/* Third-party icnludes */

/* Own icnludes */
#include "common/CommonDefines.h"


constexpr auto TEXT_POS_X = 8;
constexpr auto TEXT_POS_Y = 25;

int32_t Person::init(const int32_t floor, const int32_t numInLine) {
    _levelPos = LevelPos(floor,numInLine);
    _personImg.create(TextureId::BLUE_PERSON, _levelPos.pos);
    updateTextPosition(_levelPos.pos);
    _floorTextImg.create(std::to_string(_floorRequest).c_str(),
        FontId::TERMINAL_20, Colors::WHITE, _textPos);
    return EXIT_SUCCESS;
}

void Person::deinit() {

}

void Person::draw() {
    _personImg.draw();
    _floorTextImg.draw();
}

void  Person::setFloorRequest(const int32_t floorRequest) {
    _floorRequest = floorRequest;
}

int32_t Person::getFloorRequest() const {
    return _floorRequest;
}

void Person::moveForward() {
    _levelPos.pos.x += 30;
    _personImg.setPosition(_levelPos.pos);
    updateTextPosition(_levelPos.pos);
    _floorTextImg.setPosition(_textPos);
}

void Person::updateTextPosition(const Point& personPos) {
    _textPos = Point(personPos.x + TEXT_POS_X, personPos.y - TEXT_POS_Y);
}

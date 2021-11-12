/* Corresponding header */
#include "game/entities/Elevator.h"

/* C system icnludes */

/* C++ system icnludes */
#include <string>
/* Third-party icnludes */

/* Own icnludes */
#include "common/CommonDefines.h"

int32_t Elevator::init(const int32_t floor, const int32_t column) {
    _levelPos = LevelPos(floor, column, TileType::ELEVATOR);
    _elevatorImg.create(TextureId::ELEVATOR, _levelPos.pos);
    _passangers.resize(_capacity);
    return EXIT_SUCCESS;
}

void Elevator::deinit() {

}

void Elevator::draw() {
    _elevatorImg.draw();
    if (_passangersCount == 0) {
        return;
    }
    for (auto& passanger : _passangers) {
        if (passanger) {
            passanger->draw();
        }
    }

}

void Elevator::process() {
    //update passangers position

    if (isStopped) {
        //leave passangers
        if (_passangersCount < _capacity) {
            //_elevatorProxy->transferPassangers(_atFloor);
        }
    }
    if (_passangersCount > 0) {
        //take requests
    }
    /* if (!_tasks.empty()) {
        //do gotoFloor
    } */
}

void Elevator::gotoFloor(const int32_t newFloor) {
    LevelPos newPos(newFloor, _levelPos.column, TileType::ELEVATOR);
    _levelPos = newPos;
    
    _elevatorImg.setPosition(_levelPos.pos);
    isStopped = false;
    //animation
    isStopped = true;
    _atFloor = _levelPos.floor;
}

void Elevator::addNewPassannger(std::shared_ptr<Person> person) {
    _passangers.push_back(person);
    _passangersCount++;
}
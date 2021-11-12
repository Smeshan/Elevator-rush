/* Corresponding header */
#include "game/levels/Level.h"  

/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "sdl_utils/InputEvent.h"
#include "common/CommonDefines.h"
#include "game/levels/LevelPos.h"

int32_t Level::init(const int32_t levelId) {
    _elevatorShafts = LEVELS_CONFIGS[levelId][ELEVATOR_SHAFTS];
    _officeRooms = LEVELS_CONFIGS[levelId][OFFICE_ROOMS];
    _floors = LEVELS_CONFIGS[levelId][FLOORS];

    _elevatorTiles = createElevatorTiles();

    Office office;
    office.init(1, 0);
    _offices.push_back(office);
    Office anoffice;
    anoffice.init(2, 0);
    _offices.push_back(anoffice);

    Elevator elevator;
    elevator.init(0, 0);
    _elevators.push_back(elevator);

    Person person;
    person.init(0, _waitingPeople);
    _waitingPeople++;
    std::shared_ptr<Person> personPtr = std::make_shared<Person>(person);
    _people.push_back(personPtr);

    return EXIT_SUCCESS;
}

void Level::deinit()
{

}

void Level::draw() {
    for (auto& tile : _elevatorTiles) {
        tile.draw();
    }
    for (auto& elevator : _elevators) {
        elevator.draw();
    }

    for (auto& office : _offices) {
        office.draw();
    }

    for (auto person : _people) {
        person->draw();
    }
}

void Level::process() {

}

void Level::handleEvent(const InputEvent& e) {
    for (auto& tile : _elevatorTiles) {
        tile.handleEvent(e);
    }
    //TODO remove - just for testing
    if (TouchEvent::KEYBOARD_PRESS == e.type) {
        switch (e.key) {
        case Keyboard::KEY_1:
            _offices[0].increaseRequests();
            break;
        case Keyboard::KEY_2:
            _offices[1].increaseRequests();
            break;
        case Keyboard::KEY_NUMPAD_PLUS:
        {
            Person person;
            person.init(0, _waitingPeople);
            std::shared_ptr<Person> personPtr = std::make_shared<Person>(person);
            _people.push_back(personPtr);
            _waitingPeople++;
        }
        break;
        case Keyboard::KEY_NUMPAD_MINUS:
            if (_people.empty()) {
                break;
            }
            _people.pop_front();
            _waitingPeople--;
            for (auto person : _people) {
                person->moveForward();
            }
            break;
        }
    }

}

std::vector<ElevatorTile> Level::createElevatorTiles() {
    std::vector<ElevatorTile> tiles;
    for (int32_t i = 0; i < _floors; ++i) {
        for (int32_t j = 0; j < _elevatorShafts; ++j) {
            LevelPos elevatorPos(i, j, TileType::ELEVATOR);
            ElevatorTile elevatorTile;
            elevatorTile.init(elevatorPos);
            tiles.push_back(elevatorTile);
        }
    }
    return tiles;
}
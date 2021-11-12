/* Corresponding header */
#include "game/entities/Office.h"

/* C system icnludes */

/* C++ system icnludes */
#include <string>
#include <memory>

/* Third-party icnludes */

/* Own icnludes */
#include "common/CommonDefines.h"
#include "game/levels/LevelPos.h"

constexpr auto REQUEST_TEXT_POS_X = 120;
constexpr auto REQUEST_TEXT_POS_Y = 20;

int32_t Office::init(const int32_t floor, const int32_t column) {
    LevelPos levelPos(floor, column, TileType::OFFICE);
    _floorNumber = levelPos.floor;
    _pos = levelPos.pos;
    _floorImg.create(TextureId::BLUE_OFFICES, _pos);
    _floorImg.setFrame(_floorNumber);

    _pos.x += REQUEST_TEXT_POS_X;
    _pos.y += REQUEST_TEXT_POS_Y;
    const char* requestNumText = std::to_string(_requests).c_str();
    _requestsImg.create(requestNumText, FontId::TERMINAL_20, Colors::WHITE, _pos);

    return EXIT_SUCCESS;
}

void Office::deinit() {

}

void Office::draw() {
    _floorImg.draw();
    _requestsImg.draw();
}

void Office::increaseRequests() {
    _requests++;
    const char* requestNumText = std::to_string(_requests).c_str();
    _requestsImg.setText(requestNumText);
}

void Office::decreaseRequests() {
    _requests--;
    const char* requestNumText = std::to_string(_requests).c_str();
    _requestsImg.setText(requestNumText);
}
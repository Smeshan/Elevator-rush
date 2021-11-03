/* Corresponding header */
#include "game/entities/SettingsScreen.h"  

/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "common/CommonDefines.h"

int32_t SettingsScreen::init() {
    _tital.create("SETTINGS", FontId::TERMINAL_20, Colors::WHITE, Point(300, 150));
    _fullScreen.create("Fullscreen:", FontId::TERMINAL_20, Colors::WHITE, Point(200, 225));
    _sounds.create("Sounds:", FontId::TERMINAL_20, Colors::WHITE, Point(200, 255));
    _music.create("Music:", FontId::TERMINAL_20, Colors::WHITE, Point(200, 285));

    _checkBox.create(TextureId::CHECK_BOX, Point(300, 250));
    _uncheckBox.create(TextureId::UNCHECK_BOX, Point(300, 300));
    return EXIT_SUCCESS;
}

void SettingsScreen::deinit() {

}

void SettingsScreen::draw() {
    _tital.draw();
    _fullScreen.draw();
    _sounds.draw();
    _music.draw();
    _checkBox.draw();
    _uncheckBox.draw();
}

/* void SettingsScreen::handleEvent(const InputEvent& e) {

} */

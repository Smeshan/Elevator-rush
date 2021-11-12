/* Corresponding header */
#include "manager_utils/input/ButtonBase.h"  

/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "sdl_utils/InputEvent.h"

void ButtonBase::draw() {
    Image::draw();
}

void ButtonBase::lockInput() {
    _isInputUnlocked = false;
}

void ButtonBase::unlockInput() {
    _isInputUnlocked = true;
}

bool ButtonBase::isInputUnlocked() const{
    return _isInputUnlocked;
}

bool ButtonBase::containsEvent(const InputEvent& e) {
    return Image::containsPoint(e.pos);
}

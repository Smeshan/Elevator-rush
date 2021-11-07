/* Corresponding header */
#include "manager_utils/input/TextButtonBase.h"  

/* C system icnludes */

/* C++ system icnludes */
#include <iostream>

/* Third-party icnludes */

/* Own icnludes */
#include "sdl_utils/InputEvent.h"
#include "utils/drawing/Rectangle.h"

void TextButtonBase::draw(){
    Text::draw();
}

void TextButtonBase::lockInput() {
    _isInputUnlocked = false;
}

void TextButtonBase::unlockInput() {
    _isInputUnlocked = true;
}

bool TextButtonBase::isInputUnlocked() const{
    return _isInputUnlocked;
}

bool TextButtonBase::containsEvent(const InputEvent& e) {
    Rectangle textRect(Text::getPosition().x,
                        Text::getPosition().y,
                        Text::getWidth(),
                        Text::getHeight());
    return textRect.isPointInside(e.pos);
}

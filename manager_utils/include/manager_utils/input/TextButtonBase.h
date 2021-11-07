#ifndef TEXTBUTTONBASE_H
#define TEXTBUTTONBASE_H
/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */

#include "manager_utils/drawing/Text.h"

/* Forward Declaration */
struct InputEvent;

class TextButtonBase : public Text {
public:
	virtual ~TextButtonBase() = default;

	virtual void handleEvent(const InputEvent& e) = 0;

	virtual void draw();

	void lockInput();
	void unlockInput();
	bool isInputUnlocked() const;
	bool containsEvent(const InputEvent& e);
private:
	//Rectangle _boundRect = Rectangle::ZERO;
	bool _isInputUnlocked = true;
};

#endif
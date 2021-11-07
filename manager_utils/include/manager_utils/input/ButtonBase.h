#ifndef BUTTONBASE_H
#define BUTTONBASE_H
/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/drawing/Image.h"
#include "manager_utils/drawing/Text.h"

/* Forward Declaration */
struct InputEvent;

enum ButtonStates {
	UNCLICKED, CLICKED, DISABLED
};

class ButtonBase : public Image {
public:
	virtual ~ButtonBase() = default;

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
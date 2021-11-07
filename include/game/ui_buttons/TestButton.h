#ifndef TESTBUTTON_H
#define TESTBUTTON_H
/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/input/ButtonBase.h"

/* Forward Declaration */
struct GameProxy;

class TestButton : public ButtonBase {
public:
	int32_t init(GameProxy* gameProxy, int32_t buttonId);

	void handleEvent(const InputEvent& e) final;

private:
	GameProxy* _gameProxy = nullptr;
	int32_t _buttonId { 0 };
};
#endif
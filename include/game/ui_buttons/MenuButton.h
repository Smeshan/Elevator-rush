#ifndef MENUBUTTON_H
#define MENUBUTTON_H
/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/input/TextButtonBase.h"
#include "manager_utils/audio/Sound.h"

/* Forward Declaration */
struct GameProxy;

class MenuButton : public TextButtonBase {
public:
	int32_t init(GameProxy* gameProxy, int32_t buttonId);

	void handleEvent(const InputEvent& e) final;

private:
	Sound _hoverSound;
	bool _isSoundPlayed = false;
	GameProxy* _gameProxy = nullptr;
	int32_t _buttonId{ 0 };
};
#endif
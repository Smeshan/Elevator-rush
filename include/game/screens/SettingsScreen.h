#ifndef SETTINGSSCREEN_H
#define SETTINGSSCREEN_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/drawing/Text.h"
#include "manager_utils/drawing/Image.h"

/* Forward Declaration */

struct InputEvent;

class SettingsScreen {
public:
	int32_t init();
	void deinit();
	void draw();
	//void handleEvent(const InputEvent& e);
private:
	Text _tital;
	Text _fullScreen;
	Text _sounds;
	Text _music;

	Image _checkBox;
	Image _uncheckBox;
};
#endif
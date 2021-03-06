#ifndef MENUSCREEN_H
#define MENUSCREEN_H
/* C system icnludes */

/* C++ system icnludes */
#include <vector>

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/drawing/Image.h"
#include "game/proxies/GameProxy.h"
#include "game/ui_buttons/MenuButton.h"
#include "game/animations/BuildingLigth.h"
#include "game/ui_buttons/Button.h"

/* Forward Declaration */
struct InputEvent;

constexpr auto LIGHTS_COUNT = 6;

class MenuScreen {
public:
	int32_t init(GameProxy* gameProxy, int32_t timerId);
	void deinit();
	void draw();
	void handleEvent(const InputEvent& e);
private:
	//void onButtonPressed(int32_t buttonId) final;
	Image _background;
	Image _screenServer;
	Button _musicButton;
	//Image _gameTitle
	std::vector<BuildingLigth> _buildingLigths;
	//
	std::vector<MenuButton> _menuOptions;

};
#endif
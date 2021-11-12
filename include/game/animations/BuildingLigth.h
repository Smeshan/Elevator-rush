#ifndef BUILDINGLIGTH_H
#define BUILDINGLIGTH_H
/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/drawing/Image.h"
#include "manager_utils/time/Timer.h"

/* Forward Declaration */
struct InputEvent;

class BuildingLigth : public Timer {
public:
	~BuildingLigth();
	int32_t init(int32_t lightIndx, int32_t timerId);
	void deinit();
	void draw();

	void startAnim();
	void stopAnim();
private:
	void onTimeout(int32_t timerId) final;
	void processAnimation();
	int32_t _movingUpAndDownTimerId = -1;
	Image _ligth;
	int32_t _indx = -1;
	bool _goingUp = true;
};
#endif
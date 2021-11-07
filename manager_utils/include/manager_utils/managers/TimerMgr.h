#ifndef TIMERMGR_H
#define TIMERMGR_H
/* C system icnludes */

/* C++ system icnludes */
#include <map>
#include <set>
#include <cstdint>

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/managers/MgrBase.h"
#include "manager_utils/time/TimerData.h"
#include "manager_utils/time/Timer.h"
#include "utils/time/Time.h"

/* Forward Declaration */

class TimerMgr : public MgrBase {
public:
	int32_t init();
	void deinit() final;
	void process() final;
	void startTimer(int32_t timerId, const TimerData& data);
	void stopTimer(int32_t timerId);
	//void detachTimerClient(int32_t timerId);
	bool isActiveTimerId(int32_t timerId) const;
	void onInitEnd();
private:
	void removeTimersInternal();
	void onTimerTimeout(int32_t timerId, TimerData& timer);
	Time _elapsedTime;
	std::map<int32_t, TimerData> _timerMap;
	std::set<int32_t>_removeTimerSet;
};

extern TimerMgr* gTimerMgr;
#endif
#ifndef TIMER_H
#define TIMER_H
/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/time/TimerData.h"

/* Forward Declaration */
class Timer {
public:
	virtual ~Timer() = default;
	virtual void onTimeout(int32_t timerId) = 0;
	
	void startTimer(int64_t interval, int32_t timerId, TimerType timerType);
	void stopTimer(int32_t timerId);
	bool isActiveTimerId(int32_t timerId) const;
private:


};
#endif
/* Corresponding header */
#include "manager_utils/time/Timer.h"

/* C system icnludes */

/* C++ system icnludes */
#include <iostream>

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/managers/TimerMgr.h"

void Timer::startTimer(int64_t interval, int32_t timerId, TimerType timerType) {
    if (!gTimerMgr) {
        return;
    }

    constexpr auto minTimerInterval = 20; //ms

    if (interval < minTimerInterval) {
        std::cerr << "Timer with id: " << timerId << " requested interval:"
            << interval << ", which is the lower of the min: " << minTimerInterval
            << std::endl;
        return;
    }

    const TimerData data(interval, interval, this, timerType);
    gTimerMgr->startTimer(timerId, data);
}

void Timer::stopTimer(int32_t timerId) {
    gTimerMgr->stopTimer(timerId);
}
bool Timer::isActiveTimerId(int32_t timerId) const {
    return gTimerMgr->isActiveTimerId(timerId);
}
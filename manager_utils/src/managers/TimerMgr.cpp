/* Corresponding header */
#include "manager_utils/managers/TimerMgr.h"

/* C system icnludes */

/* C++ system icnludes */
#include <iostream>
#include <cstdint>

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/time/Timer.h"

TimerMgr* gTimerMgr = nullptr;

int32_t TimerMgr::init() {
    _elapsedTime.getElapsed();
    return EXIT_SUCCESS;
}

void TimerMgr::deinit() {
    //empty
}

void TimerMgr::removeTimersInternal() {
    for (const int32_t timerId : _removeTimerSet) {
        auto mapIt = _timerMap.find(timerId);
        if (mapIt != _timerMap.end()) {
            _timerMap.erase(mapIt);
        }
    }
    //clear the removeTimerSet
    _removeTimerSet.clear();
}

void TimerMgr::onTimerTimeout(int32_t timerId, TimerData& timer) {
    std::cerr << "onTimerTimeout - timerId: " << timerId << std::endl;
    if (timer.timerType == TimerType::ONESHOT) {
        _removeTimerSet.insert(timerId);
        return;
    }
    timer.tcInstance->onTimeout(timerId);
    timer.remaining += timer.interval;
}

void TimerMgr::process() {
    const int64_t msElapsed = _elapsedTime.getElapsed().toMilliseconds();
    
    for (auto it = _timerMap.begin(); it != _timerMap.end(); ++it) {
        it->second.remaining -= msElapsed;
        if (0 > it->second.remaining) {
            onTimerTimeout(it->first, it->second);
            std::cerr << "TimerMgr::process onTimerTimeout " << std::endl;
        }
    }
    removeTimersInternal();
}

void TimerMgr::startTimer(int32_t timerId, const TimerData& data) {
    std::cerr << "TimerMgr::startTimer timerId: " << timerId << std::endl;
    if (isActiveTimerId(timerId)) {
        std::cerr << "Error, trying to start an already existing timer with ID: "
        << timerId << std::endl;
        return;
    }
    _timerMap.emplace(timerId, data);
}

void TimerMgr::stopTimer(int32_t timerId) {
    if (!isActiveTimerId(timerId)) {
        std::cerr << "Error, trying to stop an already existing timer with ID: "
        << timerId << std::endl;
        return;
    }
    _removeTimerSet.insert(timerId);
}

bool TimerMgr::isActiveTimerId(int32_t timerId) const {
    return (_removeTimerSet.end() == _removeTimerSet.find(timerId))
        && (_timerMap.end() != _timerMap.find(timerId));
}

void TimerMgr::onInitEnd() {
    _elapsedTime.getElapsed();
}

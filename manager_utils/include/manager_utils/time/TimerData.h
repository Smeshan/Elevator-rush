#ifndef TIMEDATA_H
#define TIMEDATA_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>

/* Third-party icnludes */

/* Own icnludes */

/* Forward Declaration */
struct Timer;

enum class TimerType : uint8_t {
    ONESHOT,
    PULSE
};

struct TimerData {
    TimerData(int64_t inputInterval, int64_t inputRemaining,
        Timer* inputTcInstance, TimerType inputTimerType)
        : interval(inputInterval), remaining(inputRemaining),
        tcInstance(inputTcInstance), timerType(inputTimerType) {
    }
    int64_t interval;
    int64_t remaining;
    Timer* tcInstance = nullptr;
    TimerType timerType;
};

#endif 
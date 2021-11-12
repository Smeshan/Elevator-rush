#ifndef ELEVATORPROXY_H
#define ELEVATORPROXY_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>

/* Third-party icnludes */

/* Own icnludes */

/* Forward Declaration */

class ElevatorProxy {
public:
    virtual ~ElevatorProxy() = default;
    virtual void transferPassangers(int32_t floor) = 0;
};
#endif // ELEVATORPROXY_H
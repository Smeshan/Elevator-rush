#ifndef GAMEPROXY_H
#define GAMEPROXY_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>

/* Third-party icnludes */

/* Own icnludes */

/* Forward Declaration */

class GameProxy {
public:
    virtual ~GameProxy() = default;
    virtual void onButtonPressed(int32_t buttonId) = 0;
};

#endif // GAMEPROXY_H
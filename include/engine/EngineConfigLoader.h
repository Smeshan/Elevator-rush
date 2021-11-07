#ifndef ENGINECONFIGLOADER_H
#define ENGINECONFIGLOADER_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>

/* Third-party icnludes */

/* Own icnludes */
#include "engine/config/EngineConfig.h"
#include "utils/tools/AutoResLoader.h"

/* Forward Declaration */

class EngineConfigLoader {


public:
    EngineConfigLoader() = delete;
    ~EngineConfigLoader() = default;

    EngineConfig static loadConfig();

private:
    
};
#endif
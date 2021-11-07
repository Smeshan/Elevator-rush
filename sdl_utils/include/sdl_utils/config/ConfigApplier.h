#ifndef CONFIGAPPLIER_H
#define CONFIGAPPLIER_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>

/* Third-party icnludes */

/* Own icnludes */


/* Forward Declaration */
struct MonitorConfig;

struct ConfigApplier {
public:
    ConfigApplier() = delete;
    ~ConfigApplier();
    static int32_t applyConfigs(MonitorConfig& outConfig);
};
#endif
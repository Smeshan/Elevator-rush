#ifndef IMAGECONTAINERCONFIG_H
#define IMAGECONTAINERCONFIG_H
/* C system icnludes */

/* C++ system icnludes */
#include <unordered_map>

/* Third-party icnludes */

/* Own icnludes */

/* Forward Declaration */
#include "utils/tools/config/ImageConfig.h"

struct ImageContainerConfig {
	std::unordered_map<int32_t, ImageConfig> imageConfigs;
};
#endif
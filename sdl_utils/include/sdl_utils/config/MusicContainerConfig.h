#ifndef MUSICCONTAINERCONFIG_H
#define MUSICCONTAINERCONFIG_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>
#include <unordered_map>

/* Third-party icnludes */

/* Own icnludes */

/* Forward Declaration */

struct MusicConfig {
	std::string length;
	std::string location;
};

struct MusicContainerConfig {
	std::unordered_map<int32_t,MusicConfig> musicConfigs;
};

#endif // MUSICCONTAINERCONFIG_H
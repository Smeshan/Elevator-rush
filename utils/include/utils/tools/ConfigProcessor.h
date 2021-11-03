#ifndef CONFIGPROCESSOR_H
#define CONFIGPROCESSOR_H
/* C system icnludes */

/* C++ system icnludes */
#include <vector>
/* Third-party icnludes */

/* Own icnludes */

/* Forward Declaration */
struct ImageConfig;
struct Resource;

class ConfigProcessor {
public:
	static std::vector<ImageConfig> processImageFiles(
											const std::vector<Resource>& files);

};
#endif
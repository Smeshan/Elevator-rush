#ifndef IMAGECONFIG_H
#define IMAGECONFIG_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>
#include <string>
#include <vector>

/* Third-party icnludes */

/* Own icnludes */
#include "utils/drawing/Rectangle.h"

/* Forward Declaration */

struct ImageConfig {
	std::string name;
	std::string location;
	std::vector<Rectangle> frames;
	int32_t width = 0;
	int32_t height = 0;
	int32_t id = 0;
	int32_t framesCount = 1;
};

#endif // IMAGECONFIG_H
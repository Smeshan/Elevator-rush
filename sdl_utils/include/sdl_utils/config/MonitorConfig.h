#ifndef MONITORCONFIG_H
#define MONITORCONFIG_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdlib>
#include <string>


/* Third-party icnludes */

/* Own icnludes */
#include <utils/drawing/Point.h>

/* Forward Declaration */

enum displayConfig {
    WINDOW_NAME,
    DISPLAY_HEIGHT,
    DISPLAY_WIDTH,
    WINDOW_FLAGS,
    DISPLAY_CONFIG_COUNT
};

enum WindowFlags {
	WINDOW_SHOWN = 4,
	WINDOW_FULLSCREEN = 4097
};

struct MonitorConfig {
	std::string windowName = "";
	Point windowPos = Point::UNDEFINED;

	int32_t windowWidth = 0;
	int32_t windowHeight = 0;
	WindowFlags windowFlags = WINDOW_SHOWN;
};

#endif
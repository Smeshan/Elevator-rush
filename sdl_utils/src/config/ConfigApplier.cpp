/* Corresponding header */
#include "sdl_utils/config/ConfigApplier.h"
/* C system icnludes */

/* C++ system icnludes */
#include <vector>
#include <iostream>

/* Third-party icnludes */

/* Own icnludes */
#include "utils/tools/ConfigValidator.h"
#include "utils/tools/ConfigExtractor.h"
#include "utils/common/CommonPaths.h"
#include "sdl_utils/config/MonitorConfig.h"

int32_t ConfigApplier::applyConfigs(MonitorConfig& outConfig) {
    const std::vector<std::string> configs = ConfigExtractor::readFromFile(MONITOR_CFG_FILE);

    if (EXIT_SUCCESS != ConfigValidator::checkConfig(configs[DISPLAY_WIDTH], INT)) {
        std::cerr << "Validation of config data failed." << std::endl;
        return EXIT_FAILURE;
    }

    if (EXIT_SUCCESS != ConfigValidator::checkConfig(configs[DISPLAY_HEIGHT], INT)) {
        std::cerr << "Validation of config data failed." << std::endl;
        return EXIT_FAILURE;
    }

    if (EXIT_SUCCESS != ConfigValidator::checkConfig(configs[WINDOW_FLAGS], BOOLEAN)) {
        std::cerr << "Validation of config data failed." << std::endl;
        return EXIT_FAILURE;
    }

    outConfig.windowName = configs[WINDOW_NAME];
    outConfig.windowWidth = stoi(configs[DISPLAY_WIDTH]);
    outConfig.windowHeight = stoi(configs[DISPLAY_HEIGHT]);
    const bool isFullScreen = stoi(configs[WINDOW_FLAGS]);

    if (isFullScreen) {
        outConfig.windowFlags = WindowFlags::WINDOW_FULLSCREEN;
    }
    else {
        outConfig.windowFlags = WindowFlags::WINDOW_SHOWN;
    }

    return EXIT_SUCCESS;
}
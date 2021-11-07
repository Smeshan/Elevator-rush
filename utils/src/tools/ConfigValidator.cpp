/* Corresponding header */
#include "utils/tools/ConfigValidator.h"

/* C system icnludes */

/* C++ system icnludes */
#include <iostream>

/* Third-party icnludes */

/* Own icnludes */


int32_t ConfigValidator::checkConfig(const std::string& configValue, configType type) {
    if (configValue == "") {
        std::cerr << "Configuration value is empty. " << std::endl;
        return EXIT_FAILURE;
    }

    switch (type) {
    case INT:
        try {
            [[maybe_unused]] int test = !stoi(configValue);
        }
        catch (std::exception& err) {
            std::cerr << "Error: " << err.what() << "() with argument: " <<
                configValue << std::endl;
            return EXIT_FAILURE;
        }
        break;
    case BOOLEAN:
        if (configValue != "1" && configValue != "0") {
            std::cerr << "Configuration type Boolean is with wrong value: "
                << configValue << std::endl;
            return EXIT_FAILURE;
        }
        break;
    default:
        std::cerr << "Wrong configType passed to switch statment. Type value: "
            << type << std::endl;
        return EXIT_FAILURE;
        break;
    }
    return EXIT_SUCCESS;
}
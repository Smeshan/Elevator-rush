#ifndef CONFIGVALIDATOR_H
#define CONFIGVALIDATOR_H
/* C system icnludes */

/* C++ system icnludes */
#include <string>
#include <cstdint>

/* Third-party icnludes */

/* Own icnludes */

/* Forward Declaration */

enum configType {
    INT,
    STRING,
    BOOLEAN
};

class ConfigValidator {
public:
    static int32_t checkConfig(const std::string& configValue, configType type);
private:
};

#endif
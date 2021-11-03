#ifndef CONFIGEXTRACTOR_H
#define CONFIGEXTRACTOR_H

/* C system icnludes */

/* C++ system icnludes */
#include <string>
#include <vector>

/* Third-party icnludes */

/* Forward Declaration */

struct ConfigExtractor {
public:
    static std::vector<std::string> readFromFile(const std::string& filePath);
};

#endif
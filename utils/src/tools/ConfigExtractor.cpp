/* Corresponding header */
#include "utils/tools/ConfigExtractor.h"

/* C system icnludes */

/* C++ system icnludes */
#include <iostream>
#include <fstream>

/* Third-party icnludes */

/* Own icnludes */

std::vector<std::string> ConfigExtractor::readFromFile(const std::string& filePath) {
        std::vector<std::string> configs;
        std::fstream file(filePath);
        if (!file.is_open()) {
            std::cerr << "Unable to open config file: " << filePath << std::endl;
        }
        std::string config;
        std::string value;
        while (!file.eof()) { // eof -> end of file
            getline(file, config, ':');
            getline(file, value);
            configs.push_back(value);
        }
        file.close();
        return configs;
    }
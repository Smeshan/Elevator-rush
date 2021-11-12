/* Corresponding header */
#include "utils/tools/ConfigProcessor.h"  

/* C system icnludes */

/* C++ system icnludes */
#include <string>
#include <iostream>
#include <sstream>

/* Third-party icnludes */

/* Own icnludes */
#include "utils/tools/config/ImageConfig.h"
#include "utils/tools/ConfigValidator.h"
#include "utils/tools/Resource.h"

std::vector<ImageConfig> ConfigProcessor::processImageFiles(
    const std::vector<Resource>& files) {
    // File name pattern [ID][_][NAME][_][WIDTH][_][HEIGHT]_[FRAMES]
    std::vector<ImageConfig> configs;
    std::string tempStr;

    for (const auto& file : files) {
        ImageConfig info;
        info.location = file.path;
        std::istringstream istr(file.name);

        getline(istr, tempStr, '_');
        if (EXIT_SUCCESS != ConfigValidator::checkConfig(tempStr, INT)) {
            std::cerr << "ConfigValidator::checkConfig() failed"
                << " for config.id with value: " << tempStr
                << ". For file: " << file.path << std::endl;
        }
        info.id = std::stoi(tempStr);

        getline(istr, info.name, '_');

        getline(istr, tempStr, '_');
        if (EXIT_SUCCESS != ConfigValidator::checkConfig(tempStr, INT)) {
            std::cerr << "ConfigValidator::checkConfig() failed"
                << " for config.width with value: " << tempStr
                << ". For file: " << file.path << std::endl;
        }
        info.width = std::stoi(tempStr);

        getline(istr, tempStr, '_');
        if (EXIT_SUCCESS != ConfigValidator::checkConfig(tempStr, INT)) {
            std::cerr << "ConfigValidator::checkConfig() failed"
                << " for config.height with value: " << tempStr
                << ". For file: " << file.path << std::endl;
        }
        info.height = std::stoi(tempStr);

        //if there is frames in the name file
        if (getline(istr, tempStr, '_')) {
            if (EXIT_SUCCESS != ConfigValidator::checkConfig(tempStr, INT)) {
                std::cerr << "ConfigValidator::checkConfig() failed"
                    << " for config.framesCount with value: " << tempStr
                    << ". For file: " << file.path << std::endl;
            }
            info.framesCount = std::stoi(tempStr);

            const int frameWidth = info.width / info.framesCount;

            for (auto i = 0; i < info.framesCount; ++i) {
                info.frames.emplace_back(i * frameWidth, 0, frameWidth, info.height);
            }
        }
        else {
            //if there is no frames or zero frames in the file name
            info.frames.emplace_back(0, 0, info.width, info.height);
        }
        
        configs.push_back(info);
    }
    return configs;
}
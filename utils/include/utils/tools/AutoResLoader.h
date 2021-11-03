#ifndef AUTORESLOADER_H
#define AUTORESLOADER_H

/* C system icnludes */

/* C++ system icnludes */
#include <vector>
#include <string>
#include <cstdint>

/* Third-party icnludes */

/* Own icnludes */
#include "utils/tools/Resource.h"

/* Forward Declaration */

enum resFolder {
    IMAGES,
    FONTS,
    SOUNDS,
    MUSIC,
    RES_FOLDER_COUNT
};

struct AutoResLoader {
public:
	int32_t init();
	std::vector<Resource> getResources(const int32_t folderId);
private:
	std::vector<std::string> _folders;
	std::vector<std::string> getResSubFolders();
};
#endif
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
<<<<<<< HEAD
    IMAGE_FOLDER,
    FONT_FOLDER,
    SOUND_FOLDER,
    MUSIC_FOLDER,
=======
    IMAGES,
    FONTS,
    SOUNDS,
    MUSIC,
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff
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
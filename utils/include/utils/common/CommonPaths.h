#ifndef COMMONPATHS_H
#define COMMONPATHS_H
/* C system icnludes */

/* C++ system icnludes */
#include <string>

/* Third-party icnludes */

/* Own icnludes */

/* Forward Declaration */

static std::string getFilePath(const std::string& path) {
    const std::string parentFolder = "../";
#ifdef RELEASE_BUILD
    return path;
#else
    return parentFolder + path;
#endif
}

const std::string RES_FOLDER_PATH = getFilePath("resources/");

const std::string MENU_FONT_PATH = getFilePath("resources/fonts_1/menu.ttf");
const std::string PERSON_FONT_PATH = getFilePath("resources/fonts_1/terminal.ttf");

const std::string MONITOR_CFG_FILE = "../sdl_utils/include/sdl_utils/config/MonitorConfig.txt";

const std::string MOUSE_HOVER_PATH = "../resources/sounds_2/button_hover.wav";

const std::string MUSIC_FILE_PATH = "../resources/music_3/menu_music.mp3";


#endif // COMMONPATHS_H
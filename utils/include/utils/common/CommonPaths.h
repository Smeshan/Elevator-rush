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
<<<<<<< HEAD
const std::string TERMINAL_FONT_PATH = getFilePath("resources/fonts_1/terminal.ttf");
const std::string MENU_FONT_PATH = getFilePath("resources/fonts_1/menu.ttf");
=======
const std::string FONT_FILE = getFilePath("resources/fonts_1/terminal.ttf");
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff

const std::string MONITOR_CFG_FILE = "../sdl_utils/include/sdl_utils/config/MonitorConfig.txt";

const std::string SOUND_FILE_PATH = "../resources/sounds_2/sound.wav";
const std::string SINGLE_KEY_TYPE_PATH = "../resources/sounds_2/single_key_type.wav";
<<<<<<< HEAD
const std::string MOUSE_HOVER_PATH = "../resources/sounds_2/button_hover.wav";

const std::string MUSIC_FILE_PATH = "../resources/music_3/menu_music.mp3";
=======

const std::string MUSIC_FILE_PATH = "resources/music_3/music.mp3";
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff


#endif // COMMONPATHS_H
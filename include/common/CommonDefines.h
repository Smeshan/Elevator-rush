#ifndef COMMONDEFINES_H
#define COMMONDEFINES_H
/* C system icnludes */

/* C++ system icnludes */
#include <string>
#include <iostream>
#include <dirent.h>

/* Third-party icnludes */

/* Own icnludes */

/* Forward Declaration */

namespace TextureId {

    enum ResourceId {
        BACKGROUND,
        SCREEN_SERVER_BGR,
        BUILDING_LIGHT,
        MUSIC_BUTTON,
        BLUE_OFFICES,
        BLUE_PERSON,
        ELEVATOR,
        ELEVATOR_TILE,
        OFFICE_TILE,
        //add new here
        RES_COUNT
    };

} //namespace TextureId

namespace FontId {
    enum FontIdKeys {
        TERMINAL_14,
        TERMINAL_20,
        MENU_40,
        //add new here
        FONT_COUNT
    };
}

namespace MediaId {
    enum SoundIds {
        RING_SFX,
        SINGLE_KEY_TYPE,
        BUTTON_HOVER,
        //add new here
        SOUNDS_COUNT
    };

    enum MusicIds {
        MENU_MUSIC,
        //add new here
        MUSIC_COUNT
    };
}

enum Internals {
  MAX_BUILDING_LIGHTS_TIMERS = 6
};

namespace TimerId {
    enum Timers {
        SOME_TIMER_ID,
        ANOTHER_TIMER_ID,
        BUILDING_LIGHT_UPDOWN_ID = 1000,
        //reserved
        LAST_BUILD_LIGHT_UPDOWN_ID = BUILDING_LIGHT_UPDOWN_ID + MAX_BUILDING_LIGHTS_TIMERS,
        YET_ANOTEHR_TIMER_ID
    };
}

namespace Buttons {
    enum ButtonsKeys {
        //main menu
        START_BUTTON,
        LEVELS_BUTTON,
        HIGH_SCORES_BUTTON,
        SETTINGS_BUTTON,
        EXIT_BUTTON,
        MUSIC_BUTTON,
        //gamee

    };

}


#endif //COMMONDEFINES_H
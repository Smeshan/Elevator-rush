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
        PEOPLE,
        CONSOLE,
        CHECK_BOX,
        UNCHECK_BOX,
<<<<<<< HEAD
        ELEVATOR_BUTTONS,
        FLOOR_TILE,
        CURSOR,
        BUTTON_START,
        BUTTON_STOP,
=======
        RUNNING_GIRL,
        WHEEL,
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff
        //add new here
        RES_COUNT
    };

} //namespace TextureId

namespace FontId {
    enum FontIdKeys {
        TERMINAL_14,
        TERMINAL_20,
<<<<<<< HEAD
        MENU_40,
=======
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff
        //add new here
        FONT_COUNT
    };
}

namespace MediaId {
    enum SoundIds {
        RING_SFX,
        SINGLE_KEY_TYPE,
<<<<<<< HEAD
        BUTTON_HOVER,
=======
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff
        //add new here
        SOUNDS_COUNT
    };

    enum MusicIds {
        MENU_MUSIC,
        //add new here
        MUSIC_COUNT
    };
}

namespace TimerId {
    enum Timers {
        BUUILDING_LIGHT_UPDOWN
    };
}

#endif //COMMONDEFINES_H
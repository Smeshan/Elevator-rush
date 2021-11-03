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
        ALL_KEYS,
        LAYER_2,
        DOWN,
        GAMEMAP,
        CONSOLE,
        CHECK_BOX,
        UNCHECK_BOX,
        RUNNING_GIRL,
        WHEEL,
        //add new here
        RES_COUNT
    };

} //namespace TextureId

namespace FontId {
    enum FontIdKeys {
        TERMINAL_14,
        TERMINAL_20,
        //add new here
        FONT_COUNT
    };
}

namespace MediaId {
    enum SoundIds {
        RING_SFX,
        SINGLE_KEY_TYPE,
        //add new here
        SOUNDS_COUNT
    };
}

#endif //COMMONDEFINES_H
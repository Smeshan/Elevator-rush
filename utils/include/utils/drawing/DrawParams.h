#ifndef DRAWPARAMS_H
#define DRAWPARAMS_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>

/* Third-party icnludes */

/* Own icnludes */
#include "utils/drawing/Point.h"
#include "utils/drawing/Rectangle.h"

/* Forward Declaration */

inline constexpr int32_t FULL_OPACITY = 255;
inline constexpr int32_t ZERO_OPACITY = 0;

inline constexpr auto INVALID_RESOURCES_ID = -1;

enum class BlendMode : uint8_t {
    NONE = 0, //value for SDL_BLENDMODE_NONE
    BLEND = 1, //value for SDL_BLENDMODE_BLEND
    ADD = 2, //value for SDL_BLENDMODE_ADD
    MOD = 4 //value for SDL_BLENDMODE_MODE
};

enum class WidgetType : uint8_t {
    IMAGE,
    TEXT,
    SPRITE,
    UNKNOWN
};

enum class WidgetFlip : uint8_t {
    NONE,
    HORIZONTAL,
    VERTICAL,
    HORIZONTAL_AND_VERTICAL
};

class DrawParams {
public:
    void reset();

    Rectangle frameRect = Rectangle::ZERO;

    // Top left position of texture
    Point pos = Point::UNDEFINED;

    //Draw dimensions of the texture
    int32_t width = 0;
    int32_t height = 0;

<<<<<<< HEAD
    double rotationAngle = 0.0;
    Point rotationCenter = Point::ZERO;
=======
    double rotation = 0.0;
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff

    int32_t opacity = FULL_OPACITY;
    //unique resourceId
    union {
        int32_t resId = INVALID_RESOURCES_ID;
        int32_t textId;
    };

    WidgetType widgetType = WidgetType::UNKNOWN;
    WidgetFlip flipType = WidgetFlip::NONE;
};
#endif
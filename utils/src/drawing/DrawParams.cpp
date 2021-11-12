/* Corresponding header */
#include "utils/drawing/DrawParams.h"

/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */

void DrawParams::reset() {
    frameRect = Rectangle::ZERO;
    pos = Point::UNDEFINED;
    width = 0;
    height = 0;
    rotationAngle = 0.0;
    rotationCenter = Point::ZERO;
    opacity = FULL_OPACITY;
    resId = INVALID_RESOURCES_ID;
}
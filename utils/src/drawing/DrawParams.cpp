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
<<<<<<< HEAD
    rotationAngle = 0.0;
    rotationCenter = Point::ZERO;
=======
    rotation = 0.0;
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff
    opacity = FULL_OPACITY;
    resId = INVALID_RESOURCES_ID;
}
#ifndef IMAGE_H
#define IMAGE_H
/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */

/* Forward Declaration */
#include "manager_utils/drawing/Widget.h"

class Image : public Widget {
public:
	~Image();
	void create(int32_t resId, const Point& pos = Point::ZERO);
	void destroy();
<<<<<<< HEAD
=======
private:
	int32_t _currFrame {0};
	int32_t _maxFrames {0};

>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff
	int32_t getFrame() const;
	void nextFrame();
	void prevFrame();
	void setFrame(int32_t frameIndx);
<<<<<<< HEAD
private:
	int32_t _currFrame {0};
	int32_t _maxFrames {0};
=======

>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff
};
#endif
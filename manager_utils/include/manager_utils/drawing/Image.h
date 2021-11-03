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
private:
	int32_t _currFrame {0};
	int32_t _maxFrames {0};

	int32_t getFrame() const;
	void nextFrame();
	void prevFrame();
	void setFrame(int32_t frameIndx);

};
#endif
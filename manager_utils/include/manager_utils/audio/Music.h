#ifndef MUSIC_H
#define MUSIC_H
/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/audio/Audio.h"

/* Forward Declaration */

class Music : public Audio {
public:
	~Music();
	void create(int32_t muscId);
	void destroy();
private:

};
#endif
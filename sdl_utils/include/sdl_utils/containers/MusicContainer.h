#ifndef MUSICCONTAINER_H
#define MUSICCONTAINER_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>
#include <unordered_map>

/* Third-party icnludes */

/* Own icnludes */
#include "sdl_utils/config/MusicContainerConfig.h"
#include "sdl_utils/Media.h"

/* Forward Declaration */


class MusicContainer {
public:

protected:

	int32_t playMusicCmd(const int32_t musicId);
	int32_t init(const MusicContainerConfig& configs);

	void playPauseMusic();
	void stopMusic();
	void setVolume(const int32_t volume);

	void deinit();

private:

	int32_t loadSingleMusicRes(const MusicConfig& musicConfig, const int32_t musicId);

	std::unordered_map<int32_t, Mix_Music*> _music;
};
#endif
#ifndef MEDIAMGR_H
#define MEDIAMGR_H
/* C system icnludes */

/* C++ system icnludes */

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/managers/MgrBase.h"
#include "sdl_utils/containers/SoundContainer.h"
#include "sdl_utils/containers/MusicContainer.h"

/* Forward Declaration */
struct MediaMgrConfig;

class MediaMgr : public MgrBase,
				 public SoundContainer, 
				 public MusicContainer {
public:
	MediaMgr() = default;

	MediaMgr(const MediaMgr& other) = delete;
	MediaMgr(MediaMgr&& other) = delete;

	MediaMgr& operator=(const MediaMgr& other) = delete;
	MediaMgr& operator=(MediaMgr&& other) = delete;

	int32_t init(const MediaMgrConfig& config);

	void addPlaySoundCmd(const int32_t sndId);
	void addPlayMusicCmd(const int32_t musicId);

	void playPauseMusic();
	void stopMusic();
	void setVolumeMusic(const int32_t volume);

	void deinit() final;
	void process() final;

private:

};

extern MediaMgr* gMediaMgr;
#endif
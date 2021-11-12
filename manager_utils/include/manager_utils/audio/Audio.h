#ifndef AUDIO_H
#define AUDIO_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>

/* Third-party icnludes */

/* Own icnludes */

/* Forward Declaration */

enum AudioType {
	NONE,
	SOUND,
	MUSIC
};

class Audio {
public:
	void play();
	void reset();

	void playPauseMusic();
	void stopMusic();
	void setVolumeMusic(const int32_t volume);

protected:
	bool _isCreated = false;
	bool _isDestroyed = true;
	bool _isPlaying = false;

	//TODO make it constant
	int32_t _volume = 0;

	int32_t _audioId;
	AudioType _audioType = AudioType::NONE;
};

#endif
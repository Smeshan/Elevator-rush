/* Corresponding header */
#include "manager_utils/audio/Audio.h"  

/* C system icnludes */

/* C++ system icnludes */
#include <iostream>

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/managers/MediaMgr.h"

void Audio::play() {
    if (_audioType == AudioType::SOUND) {
        gMediaMgr->addPlaySoundCmd(_audioId);
    } else {
        gMediaMgr->addPlayMusicCmd(_audioId);
    }
    _isPlaying = true;
}

void Audio::playPauseMusic() {
    gMediaMgr->playPauseMusic();
}

void Audio::stopMusic() {
    if (!_isPlaying) {
        std::cerr << "Audio file is already stoped." << std::endl;
    }
    gMediaMgr->stopMusic();
    _isPlaying = false;
}

void Audio::setVolumeMusic(const int32_t volume) {
    gMediaMgr->setVolumeMusic(volume);
}

void Audio::reset() {
    _isCreated = false;
    _isDestroyed = true;
    _isPlaying = false;
    _audioType = AudioType::NONE;
}

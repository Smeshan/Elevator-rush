/* Corresponding header */
#include "manager_utils/managers/MediaMgr.h"  

/* C system icnludes */

/* C++ system icnludes */
#include <iostream>

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/config/MediaMgrConfig.h"

MediaMgr* gMediaMgr = nullptr;

int32_t MediaMgr::init(const MediaMgrConfig& config) {
    if (EXIT_SUCCESS != SoundContainer::init(config.soundContainerConfig)) {
        std::cerr << "SoundContainer::init() failed." << std::endl;
        return EXIT_FAILURE;
    }

    if (EXIT_SUCCESS != MusicContainer::init(config.musicContainerConfig)) {
        std::cerr << "MusicContainer::init() failed." << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

void MediaMgr::addPlaySoundCmd(const int32_t sndId) {
    SoundContainer::playSoundCmd(sndId);
    //TODO remove one of the containers
    // why is not working with _soundContainer.playSoundCmd(sndId):
}

void MediaMgr::addPlayMusicCmd(const int32_t musicId) {
    MusicContainer::playMusicCmd(musicId);
    //TODO remove one of the containers
    // why is not working with _soundContainer.playSoundCmd(sndId):
}

void MediaMgr::playPauseMusic() {
    MusicContainer::playPauseMusic();
}

void MediaMgr::stopMusic() {
    MusicContainer::stopMusic();
}

void MediaMgr::setVolumeMusic(const int32_t volume) {
     MusicContainer::setVolume(volume);
}

void MediaMgr::deinit() {
    SoundContainer::deinit();
    MusicContainer::deinit();
}

void MediaMgr::process() {

}
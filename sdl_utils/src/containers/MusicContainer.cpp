/* Corresponding header */
#include "sdl_utils/containers/MusicContainer.h"  

/* C system icnludes */

/* C++ system icnludes */
#include <iostream>
/* Third-party icnludes */

/* Own icnludes */

constexpr auto MAX_VOLUME = 128;

int32_t MusicContainer::init(const MusicContainerConfig& configs) {

    for (const auto& pair : configs.musicConfigs) {
        const auto key = pair.first;
        const auto& musicConfig = pair.second;

        if (EXIT_SUCCESS != loadSingleMusicRes(musicConfig, key)) {
            std::cerr << "loadSingleMusicRes() failed for file: "
                << musicConfig.location << std::endl;
            return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}

void MusicContainer::deinit() {
    for (auto& pair : _music) {
        Media::freeMusic(pair.second);
    }
}

int32_t MusicContainer::playMusicCmd(const int32_t musicId) {
    const auto it = _music.find(musicId);
    if (it == _music.end()) {
        std::cerr << "Can't play Music. Music with sndID: " << musicId
            << " not in the MusicConntainer" << std::endl;
        return EXIT_FAILURE;
    }
    if (Mix_PlayingMusic() == false) {
        if (EXIT_SUCCESS != Mix_PlayMusic(it->second, 1)) { // music, loops
            std::cerr << "Mix_PlayMusic() failed. Error: "
                << SDL_GetError() << std::endl;
            return EXIT_FAILURE;
        }
    }

    return EXIT_SUCCESS;
}

void  MusicContainer::playPauseMusic() {
    if (Mix_PausedMusic() == true) {
        Mix_ResumeMusic();
    }
    else {
        Mix_PauseMusic();
    }
}

void  MusicContainer::stopMusic() {
    Mix_HaltMusic();
}

void MusicContainer::setVolume(const int32_t volume) {
    if (volume < 0 || volume > MAX_VOLUME) {
        std::cerr << "Error, wrong value for music volume is given. Volume value: "
            << volume << std::endl;
        return;
    }
    Mix_VolumeMusic(volume);
}

int32_t MusicContainer::loadSingleMusicRes(const MusicConfig& musicConfig,
    const int32_t musicId) {
    Mix_Music* music = nullptr;
    if (EXIT_SUCCESS != Media::createMusicFromFile(musicConfig.location.c_str(), music)) {
        std::cerr << "Media::createMusicFromFile() failed for file: "
            << musicConfig.location << std::endl;
        return EXIT_FAILURE;
    }
    _music[musicId] = music;

    return EXIT_SUCCESS;
}
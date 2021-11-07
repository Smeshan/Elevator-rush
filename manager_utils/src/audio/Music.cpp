/* Corresponding header */
#include "manager_utils/audio/Music.h" 

/* C system icnludes */

/* C++ system icnludes */
#include <iostream>

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/managers/MediaMgr.h"

Music::~Music() {
    if (_isCreated && !_isDestroyed) {
        destroy();
    }
}
void Music::create(int32_t muscId) {
    if (_isCreated) {
        std::cerr << "Error, music with muscId: "
            << muscId << " was already created. Will not create twice." << std::endl;
        return;
    }
    _audioId = muscId;
    _audioType = AudioType::MUSIC;
    _isCreated = true;
    _isDestroyed = false;
}

void Music::destroy() {
    if (_isDestroyed) {
        std::cerr << "Error, music was already destroyed." << std::endl;
        return;
    }
    _isDestroyed = true;
    _isCreated = false;
    Music::reset();
}
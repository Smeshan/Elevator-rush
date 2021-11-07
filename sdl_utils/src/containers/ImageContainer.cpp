/* Corresponding header */
#include "sdl_utils/containers/ImageContainer.h"

/* C system icnludes */

/* C++ system icnludes */
#include <iostream>

/* Third-party icnludes */

/* Own icnludes */
#include "sdl_utils/Texture.h"

static const Frames EMPTY_FRAME{ Rectangle::ZERO };

int32_t ImageContainer::init(const ImageContainerConfig& configs) {
    for (const auto& config : configs.imageConfigs) {
        const auto& element = config.second;
        if (EXIT_SUCCESS != loadSingleResource(element, config.first)) {
            std::cerr << "loadSingleResource() failed for file: " << element.location
                << std::endl;
            return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}

void ImageContainer::deinit() {
    for (auto& pair : _textures) {
        Texture::freeTexture(pair.second);
    }
}

SDL_Texture* ImageContainer::getImageTexture(int32_t resId) const {
    auto it = _textures.find(resId);
    if (it == _textures.end()) {
        std::cerr << "Error, invalid resId: " << resId << " requseted." << std::endl;
        return nullptr;
    }
    return it->second;
}

const Frames& ImageContainer::getImageFrame(int32_t resId) const {
    auto it = _textureFrames.find(resId);
    if (it == _textureFrames.end()) {
        std::cerr << "Error, invalid resId: " << resId
            << " requseted. Returning EMPTY FRAME" << std::endl;
        return EMPTY_FRAME;
    }
    return it->second;
}

int32_t ImageContainer::loadSingleResource(const ImageConfig& resConfig, const int32_t resId) {
    SDL_Texture* texture = nullptr;
    if (EXIT_SUCCESS != Texture::createTextureFromFile(resConfig.location.c_str(), texture)) {
        std::cerr << "Texture::createTextureFromFile() failed for file: " << resConfig.location
            << std::endl;
        return EXIT_FAILURE;
    }

    _textures[resId] = texture;

    _textureFrames[resId] = resConfig.frames;

    return EXIT_SUCCESS;
}
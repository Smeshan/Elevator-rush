/* Corresponding header */
#include "engine/EngineConfigLoader.h"

/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>

/* Third-party icnludes */

/* Own icnludes */
#include "sdl_utils/config/ConfigApplier.h"
#include "utils/tools/ConfigProcessor.h"
#include "common/CommonDefines.h"
#include "utils/common/CommonPaths.h"

constexpr auto MAX_FRAME_RATE = 30;

static void populateMonitorConfig(MonitorConfig& outConfig) {
    if (EXIT_SUCCESS != ConfigApplier::applyConfigs(outConfig)) {
        std::cerr << "Error, ConfigApplier::applyConfigs() faild." << std::endl;
    }
}

// CONTAINERS
static void populateImageContainerConfig(ImageContainerConfig& cfg) {
    AutoResLoader resLoader;
    resLoader.init();

    const std::vector<Resource> imgFiles = resLoader.getResources(IMAGE_FOLDER);
    std::vector<ImageConfig> imgConfigs = ConfigProcessor::processImageFiles(imgFiles);

    for (auto& config : imgConfigs) {
        cfg.imageConfigs.emplace(config.id, config);
    }

    /* for (const auto& image : cfg.imageConfigs) {
        std::cerr << "File loaded -> ID:" << image.second.id << " Name: "
            << image.second.name << " Location: " << image.second.location << " Width: "
            << image.second.frames[0].w << " Height: " << image.second.frames[0].h
            << " Frames: " << image.second.framesCount << std::endl;
    } */
}

static void populateTextContainerConfig(TextContainerConfig& cfg) {
    FontConfig fontConfig;

    fontConfig.location = MENU_FONT_PATH;
    fontConfig.fontSize = 20;
    cfg.fontConfigs.insert(std::make_pair(FontId::TERMINAL_20, fontConfig));

    fontConfig.location = MENU_FONT_PATH;
    fontConfig.fontSize = 40;
    cfg.fontConfigs.insert(std::make_pair(FontId::MENU_40, fontConfig));
}

static void populateSoundContainerConfig(SoundContainerConfig& cfg) {
    SoundConfig soundConfig;

    soundConfig.location = MOUSE_HOVER_PATH;
    soundConfig.length = 10;
    cfg.soundConfigs.insert(std::make_pair(MediaId::BUTTON_HOVER, soundConfig));
}

static void populateMusicContainerConfig(MusicContainerConfig& cfg) {
    MusicConfig musicConfig;

    musicConfig.location = MUSIC_FILE_PATH;
    musicConfig.length = 10;
    cfg.musicConfigs.insert(std::make_pair(MediaId::MENU_MUSIC, musicConfig));
}

// MANAGERS
static void populateDrawMgrConfig(DrawMgrConfig& outConfig) {
    populateMonitorConfig(outConfig.windowConfig);
    outConfig.maxFrameRate = MAX_FRAME_RATE;
}

static void populateRsrcMgrConfig(RsrcMgrConfig& outConfig) {
    populateImageContainerConfig(outConfig.imageContainerConfig);
    populateTextContainerConfig(outConfig.textContainerConfig);
}

static void populateMediaMgrConfig(MediaMgrConfig& outConfig) {
    populateSoundContainerConfig(outConfig.soundContainerConfig);
    populateMusicContainerConfig(outConfig.musicContainerConfig);
}

static void populateManagerHandlerConfig(ManagerHandlerConfig& outConfig) {
    populateDrawMgrConfig(outConfig.drawMgrConfig);
    populateRsrcMgrConfig(outConfig.rsrcMgrConfig);
    populateMediaMgrConfig(outConfig.mediaMgrConfig);
}

// GAME
static void populateGameConfig(GameConfig& outConfig) {
    outConfig.movingUpAndDownTimerId = TimerId::BUILDING_LIGHT_UPDOWN_ID;
}

EngineConfig EngineConfigLoader::loadConfig() {
    EngineConfig cfg;
    populateManagerHandlerConfig(cfg.managerHandlerConfig);
    populateGameConfig(cfg.gameConfig);
    return cfg;
}

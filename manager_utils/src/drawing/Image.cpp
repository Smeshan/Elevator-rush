/* Corresponding header */
#include "manager_utils/drawing/Image.h"  

/* C system icnludes */

/* C++ system icnludes */
#include <iostream>

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/managers/RsrcMgr.h"

Image::~Image() {
    if (_isCreated && !_isDestroyed) {
        destroy();
    }
}

void Image::create(int32_t resId, const Point& pos) {
    if (_isCreated) {
        std::cerr << "Error, image with resId: "
            << resId << " was already created. Will not create twice." << std::endl;
        return;
    }
    const Frames& frames = gRsrcMgr->getImageFrame(resId);
    const auto& firstFrame = frames.front();
<<<<<<< HEAD
    _maxFrames = static_cast<int32_t>(frames.size());
=======
    
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff
    _drawParams.resId = resId;
    _drawParams.frameRect = firstFrame;
    _drawParams.width = firstFrame.w;
    _drawParams.height = firstFrame.h;
    _drawParams.pos = pos;
    if (frames.size() > 1) {
        _drawParams.widgetType = WidgetType::SPRITE;
    }
    else {
        _drawParams.widgetType = WidgetType::IMAGE;
    }

    _isCreated = true;
    _isDestroyed = false;
}

void Image::destroy() {
    if (_isDestroyed) {
        std::cerr << "Error, image with resID: " << _drawParams.resId
            << "was already destroyed." << std::endl;
        return;
    }
    _isDestroyed = true;
    _isCreated = false;
    Widget::reset();
}

int32_t Image::getFrame() const {
    return _currFrame;
}

void Image::nextFrame() {
    _currFrame++;
<<<<<<< HEAD
    if (_currFrame == _maxFrames) {
        _currFrame = 0;
    }
    const Frames& frames = gRsrcMgr->getImageFrame(_drawParams.resId);
    _drawParams.frameRect = frames[_currFrame];
=======
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff
}

void Image::prevFrame() {
    _currFrame--;
<<<<<<< HEAD
    if (_currFrame < 0) {
        _currFrame = _maxFrames - 1;
    }
    const Frames& frames = gRsrcMgr->getImageFrame(_drawParams.resId);
    _drawParams.frameRect = frames[_currFrame];
}

void Image::setFrame(int32_t frameIndx) {
    if (frameIndx < 0 && frameIndx >= _maxFrames) {
        std::cerr << "Erro, trying to set ivalid frameIndx: " << frameIndx <<
        " for image resId" << _drawParams.resId << std::endl;
    }
    const Frames& frames = gRsrcMgr->getImageFrame(_drawParams.resId);
    _drawParams.frameRect = frames[frameIndx];

    _currFrame = frameIndx;
=======
}

void Image::setFrame(int32_t frameIndx) {
    if (frameIndx >= 0 && frameIndx < _maxFrames) {
        _currFrame = frameIndx;
    }
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff
}
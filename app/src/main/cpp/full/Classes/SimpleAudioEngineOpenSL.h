#pragma once
// SimpleAudioEngineOpenSL
// 基类: OpenSLEngine
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "OpenSLEngine.h"


class SimpleAudioEngineOpenSL : public OpenSLEngine {
public:
    SimpleAudioEngineOpenSL();
    undefined4 initEngine();
    undefined4 sharedEngine();
    void end();
    ~SimpleAudioEngineOpenSL();
    float getEffectsVolume();
    void setEffectsVolume(float);
    void playEffect(char const*, bool);
    void pauseEffect(unsigned int);
    void pauseAllEffects();
    void resumeEffect(unsigned int);
    void resumeAllEffects();
    void stopEffect(unsigned int);
    void stopAllEffects();
    void preloadEffect(char const*);
    void unloadEffect(char const*);
};

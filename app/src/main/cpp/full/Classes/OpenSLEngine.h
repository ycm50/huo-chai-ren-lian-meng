#pragma once
// OpenSLEngine
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class OpenSLEngine {
public:
    OpenSLEngine();
    void createEngine(void*);
    void setAllEffectState(int);
    void resumeAllEffects();
    void setEffectsVolume(float);
    float getEffectsVolume();
    void resumeEffect(unsigned int);
    void setEffectState(unsigned int, int, bool);
    int getEffectState(unsigned int);
    void closeEngine();
    ~OpenSLEngine();
    undefined8 recreatePlayer(char const*);
    undefined4 preloadEffect(char const*);
    void setEffectLooping(unsigned int, bool);
    void unloadEffect(char const*);
};

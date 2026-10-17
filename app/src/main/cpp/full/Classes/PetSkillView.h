#pragma once
// PetSkillView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PetSkillView : public cocos2d::CCLayer {
public:
    ~PetSkillView();
    PetSkillView();
    int * create();
    bool init();
    void onEnter();
    void onExit();
};

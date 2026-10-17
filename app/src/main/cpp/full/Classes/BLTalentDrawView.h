#pragma once
// BLTalentDrawView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTalentDrawView : public cocos2d::CCLayer {
public:
    ~BLTalentDrawView();
    BLTalentDrawView();
    int * create();
    undefined4 getPresenter();
    bool init();
    void onEnter();
    void onExit();
};

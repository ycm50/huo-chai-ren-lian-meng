#pragma once
// BLSubmitView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSubmitView : public cocos2d::CCLayer {
public:
    ~BLSubmitView();
    BLSubmitView();
    int * create();
    undefined4 getPresenter();
    undefined4 getSpritebg();
    undefined4 getSpriteframe();
    undefined4 getBtnclose();
    bool init();
    void onEnter();
    void onExit();
};

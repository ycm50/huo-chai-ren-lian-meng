#pragma once
// BLGameAlertView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLGameAlertView : public cocos2d::CCLayer {
public:
    ~BLGameAlertView();
    BLGameAlertView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 getTabBg();
    undefined4 getBtnSure();
    undefined4 getBtnCancle();
    undefined4 getLabSure();
    undefined4 getLabTitle();
    undefined4 getLabCancle();
    void onEnter();
    void onExit();
    bool init();
};

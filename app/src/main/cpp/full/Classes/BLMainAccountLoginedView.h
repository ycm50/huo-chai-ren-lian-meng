#pragma once
// BLMainAccountLoginedView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMainAccountLoginedView : public cocos2d::CCLayer {
public:
    ~BLMainAccountLoginedView();
    BLMainAccountLoginedView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnClose();
    undefined4 getBtnAccountQuite();
    void onEnter();
    void onExit();
    bool init();
};

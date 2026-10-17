#pragma once
// BLMainAccountShuoMingView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMainAccountShuoMingView : public cocos2d::CCLayer {
public:
    ~BLMainAccountShuoMingView();
    BLMainAccountShuoMingView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 getTabBg();
    undefined4 getLabTitle();
    undefined4 getBtnOK();
    undefined4 getBtnClose();
    void onEnter();
    void onExit();
    bool init();
};

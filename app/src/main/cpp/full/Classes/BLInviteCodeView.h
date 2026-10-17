#pragma once
// BLInviteCodeView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLInviteCodeView : public cocos2d::CCLayer {
public:
    ~BLInviteCodeView();
    BLInviteCodeView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 getTabBg();
    undefined4 getLabTitle();
    undefined4 getLabGuize();
    undefined4 getBtnClose();
    undefined4 getBtnCopy();
    undefined4 getBtnFillInCode();
    undefined4 getScrollview();
    void onEnter();
    void onExit();
    bool init();
};

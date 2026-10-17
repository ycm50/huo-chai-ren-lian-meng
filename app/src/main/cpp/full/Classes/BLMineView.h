#pragma once
// BLMineView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMineView : public cocos2d::CCLayer {
public:
    ~BLMineView();
    BLMineView();
    int * create();
    undefined4 getPresenter();
    undefined4 getSpBg();
    undefined4 getBtnCaiJi();
    undefined4 getBtnZhengDuo();
    undefined4 getLabelCaiJi();
    undefined4 getLabelZhengDuo();
    void onEnter();
    void onExit();
    bool init();
};

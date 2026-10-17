#pragma once
// BLArrangeItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLArrangeItemView : public cocos2d::CCLayer {
public:
    void onEnter();
    void onExit();
    ~BLArrangeItemView();
    BLArrangeItemView();
    void initView();
    undefined4 getPresenter();
    undefined4 getBtn();
    undefined4 getLab();
    bool init();
};

#pragma once
// BLLivenessMissionItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLLivenessMissionItemView : public cocos2d::CCLayer {
public:
    ~BLLivenessMissionItemView();
    BLLivenessMissionItemView();
    void initView();
    bool init();
    void onEnter();
    void onExit();
};

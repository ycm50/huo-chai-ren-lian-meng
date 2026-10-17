#pragma once
// BLImmortalsRefineView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLImmortalsRefineView : public cocos2d::CCLayer {
public:
    ~BLImmortalsRefineView();
    void onEnter();
    void onExit();
    BLImmortalsRefineView();
    undefined4 getArrText();
    void initView();
    bool init();
};

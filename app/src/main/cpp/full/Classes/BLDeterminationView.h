#pragma once
// BLDeterminationView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLDeterminationView : public cocos2d::CCLayer {
public:
    ~BLDeterminationView();
    BLDeterminationView();
    void initView();
    bool init();
    void onEnter();
    void onExit();
};

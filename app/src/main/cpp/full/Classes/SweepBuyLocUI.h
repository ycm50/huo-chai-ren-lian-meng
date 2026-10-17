#pragma once
// SweepBuyLocUI
// 基类: UIObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "UIObject.h"


class SweepBuyLocUI : public UIObject {
public:
    SweepBuyLocUI();
    void tick(float);
    ~SweepBuyLocUI();
};

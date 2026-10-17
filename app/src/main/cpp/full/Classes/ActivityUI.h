#pragma once
// ActivityUI
// 基类: UIObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "UIObject.h"


class ActivityUI : public UIObject {
public:
    ActivityUI();
    ~ActivityUI();
    void tick(float);
};

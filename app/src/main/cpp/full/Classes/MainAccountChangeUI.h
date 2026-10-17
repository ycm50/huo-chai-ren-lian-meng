#pragma once
// MainAccountChangeUI
// 基类: UIObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "UIObject.h"


class MainAccountChangeUI : public UIObject {
public:
    MainAccountChangeUI();
    ~MainAccountChangeUI();
    void tick(float);
};

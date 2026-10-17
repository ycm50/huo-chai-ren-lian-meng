#pragma once
// MainAddUI
// 基类: UIObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "UIObject.h"


class MainAddUI : public UIObject {
public:
    MainAddUI();
    ~MainAddUI();
    void tick(float);
};

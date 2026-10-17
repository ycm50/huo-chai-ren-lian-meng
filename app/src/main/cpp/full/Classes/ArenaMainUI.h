#pragma once
// ArenaMainUI
// 基类: UIObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "UIObject.h"


class ArenaMainUI : public UIObject {
public:
    ~ArenaMainUI();
    void tick(float);
    ArenaMainUI();
};

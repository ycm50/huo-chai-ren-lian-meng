#pragma once
// MineSnatchBuyHeroUI
// 基类: UIObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "UIObject.h"


class MineSnatchBuyHeroUI : public UIObject {
public:
    MineSnatchBuyHeroUI();
    ~MineSnatchBuyHeroUI();
    void tick(float);
};

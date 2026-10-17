#pragma once
// GameCrackAlertUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class GameCrackAlertUI {
public:
    int * create();
    ~GameCrackAlertUI();
    void tick(float);
};

#pragma once
// QQCoinViewUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class QQCoinViewUI {
public:
    ~QQCoinViewUI();
    void tick(float);
    int * create();
};

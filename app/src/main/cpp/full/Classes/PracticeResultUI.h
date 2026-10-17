#pragma once
// PracticeResultUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PracticeResultUI {
public:
    int * create();
    ~PracticeResultUI();
    void tick(float);
};

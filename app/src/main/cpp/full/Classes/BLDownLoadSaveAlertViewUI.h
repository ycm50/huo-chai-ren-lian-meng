#pragma once
// BLDownLoadSaveAlertViewUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLDownLoadSaveAlertViewUI {
public:
    void tick(float);
    ~BLDownLoadSaveAlertViewUI();
    int * create();
    void Show();
};

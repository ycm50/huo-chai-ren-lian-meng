#pragma once
// MainPauseCheckData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MainPauseCheckData {
public:
    ~MainPauseCheckData();
    void setCheckDelegate(CEMainPauseCheckDataDelegate*);
    void CheckSuccess();
    void CheckFailed();
    void GetDataFromNet(bool);
};

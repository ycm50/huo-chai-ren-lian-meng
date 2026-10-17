#pragma once
// PairingDownPng
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PairingDownPng {
public:
    undefined8 SavePng(DownPngInfo);
    void onTimer(float);
    void onTimeUpdated();
    void GetDataFromNet(DownPngScene, std::string);
    ~PairingDownPng();
    void AddQueueInfo(DownPngInfo);
};

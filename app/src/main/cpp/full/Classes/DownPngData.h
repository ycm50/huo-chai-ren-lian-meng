#pragma once
// DownPngData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class DownPngData {
public:
    ~DownPngData();
    void GetDataFromNet(std::string, int, bool);
};

#pragma once
// CommonUseData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CommonUseData {
public:
    ~CommonUseData();
    void initAttr(std::vector<int, std::allocator<int>>&);
    CommonUseData(int, int, std::string, int, int, int);
    bool init(CommonUseData*);
};

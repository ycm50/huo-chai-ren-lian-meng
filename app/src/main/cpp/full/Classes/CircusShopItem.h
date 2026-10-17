#pragma once
// CircusShopItem
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CircusShopItem {
public:
    // 补齐 .cpp 中已有但头文件缺的声明
    CircusShopItem();
    ~CircusShopItem();
    CircusShopItem(CircusShopItem const&);
    int operator=(int P2);
};

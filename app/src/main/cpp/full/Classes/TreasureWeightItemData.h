#pragma once
// TreasureWeightItemData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class TreasureWeightItemData {
public:
    void setFixedPos(int, int, int);
    TreasureWeightItemData();
    ~TreasureWeightItemData();
    void getEventDesc(int);
    void getWinDesc(int);
    void getLoseDesc(int);
    void getSpecialDesc(int);
    void formatDesc(std::string&, std::vector<std::vector<std::string, std::allocator<std::string>>, std::allocator<std::vector<std::string, std::allocator<std::string>>>>&);
    void initWithData(char**, int&);
};

#pragma once
// CardData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CardData {
public:
    ~CardData();
    void clearData();
    void PrintCardInfo(std::vector<CardInfo, std::allocator<CardInfo>> *) const;
    void getDiamond(std::vector<CardInfo, std::allocator<CardInfo>> *);
    void setCardData(CardInfo *);
    void GetDataFromNet(URL_CARD *, bool);
};

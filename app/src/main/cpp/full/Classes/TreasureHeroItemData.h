#pragma once
// TreasureHeroItemData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class TreasureHeroItemData {
public:
    TreasureHeroItemData();
    ~TreasureHeroItemData();
    void initWith(char**, int&);
    void initWithID(std::string);
    void saveData();
    TreasureHeroItemData(TreasureHeroItemData const&);
    void updateDie();
    void die();
    void relive();
    void updateInPrison();
    void dropInPrison();
    void outOfPrison();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

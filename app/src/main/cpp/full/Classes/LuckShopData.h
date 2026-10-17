#pragma once
// LuckShopData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class LuckShopData {
public:
    int GetVecorderidbytype(LuckShopItemViewType *);
    int GetLuckShopItemById(int) const;
    void BuyItemSuccessRefresh(int, int);
    void PrintLuckShopIteminfo(LuckShopItem *) const;
    ~LuckShopData();
    void ClearLuckShopData();
    void GetDataFromNet(URL_LUCKSHOP *, bool, int);
    LuckShopData();
    void NoticeLuckShopDataSort();
    void SetLuckShopData(LuckShopItem *);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x58?88 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[88];
};

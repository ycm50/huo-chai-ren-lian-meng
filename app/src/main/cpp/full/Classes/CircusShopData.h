#pragma once
// CircusShopData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CircusShopData {
public:
    int GetVecorderidbytype(CircusShopItemViewType *);
    int GetCircusShopItemById(int) const;
    void BuyItemSuccessRefresh(int, int);
    void PrintCircusShopIteminfo(CircusShopItem *) const;
    ~CircusShopData();
    void ClearCircusShopData();
    void GetDataFromNet(URL_CIRCUSSHOP *, bool, int);
    CircusShopData();
    void NoticeCircusShopDataSort();
    void SetCircusShopData(CircusShopItem *);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x58?88 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[88];
};

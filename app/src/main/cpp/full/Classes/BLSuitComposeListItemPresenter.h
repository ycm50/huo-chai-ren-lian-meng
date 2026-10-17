#pragma once
// BLSuitComposeListItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSuitComposeListItemPresenter : public cocos2d::CCObject {
public:
    ~BLSuitComposeListItemPresenter();
    void onClickItem(cocos2d::CCObject*);
    BLSuitComposeListItemPresenter();
    undefined4 create();
    void initWithView(BLSuitComposeListItemView*);
    void onEnter();
    void onExit();
    undefined4 initNumData(int);
    void initWithData(SuitEquipListItemData*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x18?24 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[24];
};

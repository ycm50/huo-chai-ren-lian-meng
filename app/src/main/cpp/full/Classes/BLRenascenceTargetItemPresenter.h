#pragma once
// BLRenascenceTargetItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLRenascenceTargetItemPresenter : public cocos2d::CCObject {
public:
    ~BLRenascenceTargetItemPresenter();
    BLRenascenceTargetItemPresenter();
    undefined4 create();
    void initWithView(BLRenascenceTargetItemView*);
    void onEnter();
    void onExit();
    void updateVisible(bool);
    void updateWithTopLv();
    void updateWithLVData(int, int);
    void updateWithConsumeData(ConsumeItemData*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x18?24 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[24];
};

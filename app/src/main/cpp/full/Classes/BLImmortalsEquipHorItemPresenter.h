#pragma once
// BLImmortalsEquipHorItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLImmortalsEquipHorItemPresenter : public cocos2d::CCObject {
public:
    ~BLImmortalsEquipHorItemPresenter();
    void onClick(cocos2d::CCObject*, unsigned int);
    BLImmortalsEquipHorItemPresenter();
    undefined4 create();
    void initWithView(BLImmortalsEquipHorItemView*);
    void onEnter();
    void onExit();
    void updateWithIndex(int);
    void updateWithData(ImmortalsRoleItemData*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

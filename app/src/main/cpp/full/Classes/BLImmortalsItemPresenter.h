#pragma once
// BLImmortalsItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLImmortalsItemPresenter : public cocos2d::CCObject {
public:
    ~BLImmortalsItemPresenter();
    BLImmortalsItemPresenter();
    undefined4 create();
    void initWithView(BLImmortalsItemView*);
    void onEnter();
    void onExit();
    void updateWithType(int);
    void updateWithIndex(int);
    void updateWithData(ImmortalsRoleItemData*);
    undefined4 initNumData(int, int);
    void updateWithData(CostItemData*);
    void onClick(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

#pragma once
// BLImmortalsRefinePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLImmortalsRefinePresenter : public cocos2d::CCObject {
public:
    ~BLImmortalsRefinePresenter();
    BLImmortalsRefinePresenter();
    undefined4 create();
    void initWithView(BLImmortalsRefineView*);
    void onExit();
    void updateWithData();
    void resetLockStatus();
    undefined4 checkCost();
    int getRandomValue(int, int);
    undefined4 getArrPrice();
    void updateRefinePrice();
    void onUpdateLock();
    undefined8 updateXiLianShiNum();
    void onBuyXiLianShi(cocos2d::CCObject*);
    void updateRefineAttr();
    void updateInfo();
    void onEnter();
    void onUpdateRole(cocos2d::CCObject*);
    void onUpdateIndex(cocos2d::CCObject*);
    void onRefine(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

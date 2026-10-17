#pragma once
// BLChestRewardItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLChestRewardItemPresenter : public cocos2d::CCObject {
public:
    EquipData* getEquipData() const;
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLChestRewardItemPresenter();
    void setEquipData(EquipData*);
    void onPlayAction(cocos2d::CCObject*);
    void onActionEnd();
    BLChestRewardItemPresenter();
    undefined4 create(BLChestRewardItemView*);
    void onExit();
    void onEnter();
    void initWithView(BLChestRewardItemView*);
    void initWith(EquipData*, int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

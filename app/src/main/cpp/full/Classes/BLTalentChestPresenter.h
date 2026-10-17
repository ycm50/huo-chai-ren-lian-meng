#pragma once
// BLTalentChestPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTalentChestPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLTalentChestPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    BLTalentChestPresenter();
    undefined4 create(BLTalentChestView*);
    void onExit();
    void onEnter();
    void initWithView(BLTalentChestView*);
    void updateEquip(EquipData*);
    void getEquipByStarAndQuity(int, int);
    undefined4 randomReward();
    void onBuyAgain(cocos2d::CCObject*, unsigned int);
    void initWith();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

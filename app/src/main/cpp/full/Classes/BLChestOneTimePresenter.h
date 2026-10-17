#pragma once
// BLChestOneTimePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLChestOneTimePresenter : public cocos2d::CCObject {
public:
    ChestData* getChestData() const;
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLChestOneTimePresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    void setChestData(ChestData*);
    BLChestOneTimePresenter();
    undefined4 create(BLChestOneTimeView*);
    void onExit();
    void onEnter();
    void initWithView(BLChestOneTimeView*);
    void updateEquip(EquipData*);
    undefined4 randomReward();
    void initWith(ChestData*);
    void getEquipByStarAndQuity(int, int);
    void onBuyAgain(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

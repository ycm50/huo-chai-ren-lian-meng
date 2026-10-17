#pragma once
// PKRankRewardResultPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PKRankRewardResultPresenter : public cocos2d::CCObject {
public:
    EquipData* getEquipData() const;
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~PKRankRewardResultPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    void setEquipData(EquipData*);
    PKRankRewardResultPresenter();
    undefined4 create(PKRankRewardResultView*);
    void onExit();
    void onEnter();
    void initWithView(PKRankRewardResultView*);
    void updateEquip(EquipData*);
    void initWith(int, int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

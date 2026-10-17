#pragma once
// BLSkillItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSkillItemPresenter : public cocos2d::CCObject {
public:
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLSkillItemPresenter();
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void showDetail();
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    BLSkillItemPresenter();
    undefined4 create(BLSkillItemView*);
    void onExit();
    void onEnter();
    void initWithView(BLSkillItemView*);
    void updateData(cocos2d::CCObject*);
    void initWithData(BLAttackHurtData*);
    void onUpgrace(cocos2d::CCObject*, unsigned int);
    void onUpgraceMAX(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};

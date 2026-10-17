#pragma once
// BLTreasureHeroPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTreasureHeroPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLTreasureHeroPresenter();
    void tick(float);
    BLTreasureHeroPresenter();
    void onEnter();
    void onExit();
    undefined4 create(BLTreasureHeroView*);
    void initdata();
    void onCancle(cocos2d::CCObject*, unsigned int);
    void initrole();
    void getrandomroleid();
    void onModifyRole();
    void onSure(cocos2d::CCObject*, unsigned int);
    void initboss();
    void initother();
    undefined4 initWithView(BLTreasureHeroView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};

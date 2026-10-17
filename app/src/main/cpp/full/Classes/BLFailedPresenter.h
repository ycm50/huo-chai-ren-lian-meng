#pragma once
// BLFailedPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLFailedPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLFailedPresenter();
    void onQuit(cocos2d::CCObject*, unsigned int);
    void onGetHero(cocos2d::CCObject*, unsigned int);
    void onRelifeComplete(cocos2d::CCObject*);
    BLFailedPresenter();
    undefined4 create(BLFailedView*);
    void onExit();
    void onEnter();
    undefined4 initWithView(BLFailedView*);
    void onAttack(cocos2d::CCObject*, unsigned int);
    void onDefense(cocos2d::CCObject*, unsigned int);
    void onLife(cocos2d::CCObject*, unsigned int);
    undefined4 getUnlock(std::string);
    void onRelife(cocos2d::CCObject*, unsigned int);
    void onEquip(cocos2d::CCObject*, unsigned int);
    void onStrengthen(cocos2d::CCObject*, unsigned int);
    void onSkill(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

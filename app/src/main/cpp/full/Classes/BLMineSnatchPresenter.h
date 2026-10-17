#pragma once
// BLMineSnatchPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMineSnatchPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLMineSnatchPresenter();
    void showSnatch();
    void onHero(cocos2d::CCObject*, unsigned int);
    BLMineSnatchPresenter();
    undefined4 create(BLMineSnatchView*);
    void onEnter();
    void onExit();
    void updateMine();
    void onRecord(cocos2d::CCObject*, unsigned int);
    void updateNum();
    undefined4 initWithView(BLMineSnatchView*);
    void updateHisNumData(cocos2d::CCObject*);
    void onSnatchAdd(cocos2d::CCObject*, unsigned int);
    void onMine1(cocos2d::CCObject*, unsigned int);
    void onMine2(cocos2d::CCObject*, unsigned int);
    void onMine3(cocos2d::CCObject*, unsigned int);
    void onMine4(cocos2d::CCObject*, unsigned int);
    void onMine5(cocos2d::CCObject*, unsigned int);
    void updateNumData(cocos2d::CCObject*);
    void onRefresh(cocos2d::CCObject*, unsigned int);
    void updateMineData(cocos2d::CCObject*);
    void updateTime(float);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

#pragma once
// BLOtherItemDataInfoDownPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLOtherItemDataInfoDownPresenter : public cocos2d::CCObject {
public:
    int getCurrentNum() const;
    void setCurrentNum(int);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    void onEnter();
    void onExit();
    void initWithView(BLOtherItemDataInfoDownView*);
    void onBackPackUpdate(cocos2d::CCObject*);
    void onSell(cocos2d::CCObject*, unsigned int);
    void updateNum();
    void onReduce(cocos2d::CCObject*, unsigned int);
    void onAdd(cocos2d::CCObject*, unsigned int);
    void onMax(cocos2d::CCObject*, unsigned int);
    void initCommonData(CommonUseData*);
    void initPackItemData(BackPackItemData*);
    ~BLOtherItemDataInfoDownPresenter();
    BLOtherItemDataInfoDownPresenter();
    undefined4 create();
    void onUse(cocos2d::CCObject*, unsigned int);
    void goToUIchestFestival(cocos2d::CCObject*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

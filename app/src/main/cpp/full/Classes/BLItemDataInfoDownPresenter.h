#pragma once
// BLItemDataInfoDownPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLItemDataInfoDownPresenter : public cocos2d::CCObject {
public:
    int getCurrentNum() const;
    void setCurrentNum(int);
    int getNumMaxAdjuest() const;
    void setNumMaxAdjuest(int);
    BackPackItemData* getPackItemData() const;
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    void setPackItemData(BackPackItemData*);
    ~BLItemDataInfoDownPresenter();
    void onExit();
    void onEnter();
    void initWithView(BLItemDataInfoDownView*);
    void onSell(cocos2d::CCObject*, unsigned int);
    void onUse(cocos2d::CCObject*, unsigned int);
    void updateNum();
    void onReduce(cocos2d::CCObject*, unsigned int);
    void onAdd(cocos2d::CCObject*, unsigned int);
    void onMax(cocos2d::CCObject*, unsigned int);
    void onBackPackUpdate(cocos2d::CCObject*);
    void setAdjustMaxNum(int);
    void initCommonData(CommonUseData*);
    void initPackItemData(BackPackItemData*);
    BLItemDataInfoDownPresenter();
    undefined4 create(BLItemDataInfoDownView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};

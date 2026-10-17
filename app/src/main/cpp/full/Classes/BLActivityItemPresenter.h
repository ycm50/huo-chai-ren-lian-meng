#pragma once
// BLActivityItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLActivityItemPresenter : public cocos2d::CCObject {
public:
    ActivityData* getItemData() const;
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLActivityItemPresenter();
    void setItemData(ActivityData*);
    void onShowDes();
    BLActivityItemPresenter();
    undefined4 create(BLActivityItemView*);
    void onExit();
    void onEnter();
    void initWith(ActivityData*);
    void initWithView(BLActivityItemView*);
    void addOnGetCallBack(cocos2d::extension::CCControlButton*);
    void addItem(ActivityItemData*);
    void onGet(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

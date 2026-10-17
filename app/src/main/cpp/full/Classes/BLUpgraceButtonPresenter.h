#pragma once
// BLUpgraceButtonPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLUpgraceButtonPresenter : public cocos2d::CCObject {
public:
    cocos2d::extension::CCInvocation* getInvocation() const;
    bool getISTouchDown() const;
    void setISTouchDown(bool);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onUpgraceTouchDown(cocos2d::CCObject*, unsigned int);
    ~BLUpgraceButtonPresenter();
    void setInvocation(cocos2d::extension::CCInvocation*);
    BLUpgraceButtonPresenter();
    undefined4 create(BLUpgraceButtonView*);
    void onExit();
    void onEnter();
    void initWithView(BLUpgraceButtonView*);
    void updateData(cocos2d::CCObject*);
    void upgrace();
    void onUpgrace(cocos2d::CCObject*, unsigned int);
    void tick(float);
    void initWithData(BackPackItemData*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};

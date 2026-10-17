#pragma once
// BLUpgraceMAXButtonPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLUpgraceMAXButtonPresenter : public cocos2d::CCObject {
public:
    cocos2d::extension::CCInvocation* getInvocation() const;
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLUpgraceMAXButtonPresenter();
    void setInvocation(cocos2d::extension::CCInvocation*);
    BLUpgraceMAXButtonPresenter();
    void onEnter();
    void onExit();
    undefined4 create();
    void initWithView(BLUpgraceMAXButtonView*);
    void updateData(cocos2d::CCObject*);
    void initWithData(BackPackItemData*);
    void onUpgrace(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

#pragma once
// BLImmortalsUpgracePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLImmortalsUpgracePresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLImmortalsUpgracePresenter();
    BLImmortalsUpgracePresenter();
    undefined4 create();
    void initWithView(BLImmortalsUpgraceView*);
    void onExit();
    void updateInfo();
    void onEnter();
    void onUpdateIndex(cocos2d::CCObject*);
    void onUpdateRole(cocos2d::CCObject*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

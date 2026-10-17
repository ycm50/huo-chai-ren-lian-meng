#pragma once
// BLItemDataInfoUpPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLItemDataInfoUpPresenter : public cocos2d::CCObject {
public:
    BackPackItemData* getPackItemData() const;
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLItemDataInfoUpPresenter();
    void onClose(cocos2d::CCObject*);
    void setPackItemData(BackPackItemData*);
    BLItemDataInfoUpPresenter();
    undefined4 create(BLItemDataInfoUpView*);
    void onExit();
    void onEnter();
    void initWithView(BLItemDataInfoUpView*);
    void onBackPackUpdate(cocos2d::CCObject*);
    void initCommonData(CommonUseData*);
    void initPackItemData(BackPackItemData*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

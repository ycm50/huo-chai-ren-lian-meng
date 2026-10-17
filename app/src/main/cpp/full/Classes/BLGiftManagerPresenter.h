#pragma once
// BLGiftManagerPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLGiftManagerPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onUpdateDrawTips();
    ~BLGiftManagerPresenter();
    void tick(float);
    void onClose(cocos2d::CCObject*, unsigned int);
    undefined8 onGift(cocos2d::CCObject*, unsigned int);
    BLGiftManagerPresenter();
    void onEnter();
    void onExit();
    undefined4 create(BLGiftManagerView*);
    undefined8 onUpdateAchievementTips();
    void onUpdateLivenessTips();
    void initWithView(BLGiftManagerView*);
    void onFund(cocos2d::CCObject*, unsigned int);
    void setGuize(char const*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

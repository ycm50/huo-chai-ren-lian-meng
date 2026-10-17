#pragma once
// BLMissionCreamBuyPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionCreamBuyPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    int getMode() const;
    void setMode(int);
    void tick(float);
    ~BLMissionCreamBuyPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    BLMissionCreamBuyPresenter();
    void onEnter();
    void onExit();
    undefined4 create(BLMissionCreamBuyView*);
    void initWithView(BLMissionCreamBuyView*);
    void updateWithData(int);
    void onBtnOK(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

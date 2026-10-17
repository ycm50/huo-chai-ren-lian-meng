#pragma once
// BLLivenessMissionItemBtnPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLLivenessMissionItemBtnPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLLivenessMissionItemBtnPresenter();
    BLLivenessMissionItemBtnPresenter();
    undefined4 create();
    void initWithView(BLLivenessMissionItemBtnView*);
    void initWithData(LivenessUserItemData*);
    void onEnter();
    void onExit();
    void receiveReward();
    void onBtn(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

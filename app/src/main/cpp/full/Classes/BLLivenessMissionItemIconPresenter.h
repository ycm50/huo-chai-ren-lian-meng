#pragma once
// BLLivenessMissionItemIconPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLLivenessMissionItemIconPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLLivenessMissionItemIconPresenter();
    BLLivenessMissionItemIconPresenter();
    undefined4 create();
    void initWithView(BLLivenessMissionItemIconView*);
    undefined8 initWithData(std::string);
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

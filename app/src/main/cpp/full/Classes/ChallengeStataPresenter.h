#pragma once
// ChallengeStataPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ChallengeStataPresenter : public cocos2d::CCObject {
public:
    void tick(float);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~ChallengeStataPresenter();
    ChallengeStataPresenter();
    void onEnter();
    void onExit();
    undefined4 create(ChallengeStataView*);
    void initWithView(ChallengeStataView*);
    void updateWinNum(int);
    void updateFailNum(int);
    void initBoxWithType(int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

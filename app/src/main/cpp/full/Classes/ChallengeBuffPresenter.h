#pragma once
// ChallengeBuffPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ChallengeBuffPresenter : public cocos2d::CCObject {
public:
    void tick(float);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~ChallengeBuffPresenter();
    void onResetClick(cocos2d::CCObject*, unsigned int);
    ChallengeBuffPresenter();
    void onEnter();
    void onExit();
    undefined4 create(ChallengeBuffView*);
    void updateDB();
    void onCloseClick(cocos2d::CCObject*, unsigned int);
    void initWithIndex();
    undefined4 initWithView(ChallengeBuffView*);
    void buyBuffNum(cocos2d::CCObject*);
    void onAddAClick(cocos2d::CCObject*, unsigned int);
    void onAddDClick(cocos2d::CCObject*, unsigned int);
    void onAddFlick(cocos2d::CCObject*, unsigned int);
    void resetBuff(cocos2d::CCObject*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

#pragma once
// BLTalentUpInfoPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTalentUpInfoPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onBtnIcon(cocos2d::CCObject*, unsigned int);
    ~BLTalentUpInfoPresenter();
    BLTalentUpInfoPresenter();
    undefined4 create();
    void initWithView(BLTalentUpInfoView*);
    void onEnter();
    void onExit();
    void initWithID(int);
    void checkIsEnough();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

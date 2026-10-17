#pragma once
// BLTalentDrawPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTalentDrawPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLTalentDrawPresenter();
    BLTalentDrawPresenter();
    undefined4 create(BLTalentDrawView*);
    void onEnter();
    void onExit();
    void hideinfo();
    void initinfo(TalentDrawList);
    undefined4 initWithView(BLTalentDrawView*);
    void onDraw(cocos2d::CCObject*, unsigned int);
    void onTalentUpdate();
    void onUpdateNum(TalentDrawData*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

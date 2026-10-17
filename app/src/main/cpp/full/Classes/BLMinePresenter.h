#pragma once
// BLMinePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMinePresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLMinePresenter();
    void onUpdateMineBg(MineData*);
    BLMinePresenter();
    undefined4 create(BLMineView*);
    void onExit();
    void onEnter();
    void changeBgSpView(cocos2d::CCObject*);
    undefined4 initWithView(BLMineView*);
    void onCaiJi(cocos2d::CCObject*, unsigned int);
    void onZhengDuo(cocos2d::CCObject*, unsigned int);
    void showUI(int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

#pragma once
// BLMineCollectPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMineCollectPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onChangebDoBtn();
    ~BLMineCollectPresenter();
    void onProtectSuss();
    void showDefence();
    void showReward();
    undefined8 onChangeDoBtn();
    BLMineCollectPresenter();
    undefined4 create(BLMineCollectView*);
    void onEnter();
    void onExit();
    void rewardFail();
    void changeMainBg();
    void showDownBtn();
    void onDoButton(cocos2d::CCObject*, unsigned int);
    void changeBgSpView(int);
    void changeDownBtn(cocos2d::CCObject*);
    void onChangeView(int);
    void onFreshChangeView(cocos2d::CCObject*);
    void showSerachView(int);
    void recoverSuccess(cocos2d::CCObject*);
    void onProectMine(cocos2d::CCObject*);
    void onBuyKaiFeng(cocos2d::CCObject*);
    void showKongKuang();
    undefined8 onKaiFengEnd();
    void updateShowTime(float);
    void initWithView(BLMineCollectView*);
    void getOneMineInfo(int, int);
    void onDoBtn(cocos2d::CCObject*, unsigned int);
    void showKaiCai(int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x4c?76 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[76];
};

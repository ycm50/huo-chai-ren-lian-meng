#pragma once
// BLTreasureMapPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTreasureMapPresenter : public cocos2d::CCObject {
public:
    void scrollViewDidScroll(cocos2d::extension::CCScrollView*);
    void scrollViewDidZoom(cocos2d::extension::CCScrollView*);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onReceiveMSGEventReward();
    void onReceiveMSGEventFreeDice();
    void onBOOSReward();
    void onTouchUnable();
    void onTouchReset();
    void onReceiveMSGEventCard(cocos2d::CCObject*);
    void onReceiveMSGEventAllCard(cocos2d::CCObject*);
    void onReceiveMSGEventKey(cocos2d::CCObject*);
    void onReceiveMSGEventBadThief(cocos2d::CCObject*);
    void onReceiveMSGEventRelive(cocos2d::CCObject*);
    ~BLTreasureMapPresenter();
    void onReceiveMSGEventDie(cocos2d::CCObject*);
    void onReceiveMSGEventPrison(cocos2d::CCObject*);
    undefined8 onReceiveMSGPassWithPay();
    BLTreasureMapPresenter();
    undefined4 create();
    void initWithView(BLTreasureMapView*);
    void onExit();
    void initData();
    void updateCurOffset();
    void runMoveAction(cocos2d::CCObject*);
    void move(int);
    void onReceiveMSGMove(cocos2d::CCObject*);
    void onReceiveMSGMoveSpecial(cocos2d::CCObject*);
    void onReceiveMSGEventBack(cocos2d::CCObject*);
    void moveTo(int);
    void onReceiveMSGEventDeliver(cocos2d::CCObject*);
    void checkUpdateChapterStatus();
    void onEnter();
    void initMap();
    void initWithData();
    void refreshMap();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x3c?60 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[60];
};

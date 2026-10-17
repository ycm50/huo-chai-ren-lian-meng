#pragma once
// ChallengeMainPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ChallengeMainPresenter : public cocos2d::CCObject {
public:
    void reNameFail(cocos2d::CCObject*);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~ChallengeMainPresenter();
    undefined8 reName();
    void onClose(cocos2d::CCObject*, unsigned int);
    undefined8 updateDimandCount();
    void onChangeHero(cocos2d::CCObject*, unsigned int);
    void onHelp(cocos2d::CCObject*, unsigned int);
    void onStartGame();
    void beginPaoMaDeng(float);
    void onShowBuffView(cocos2d::CCObject*, unsigned int);
    void onUser(cocos2d::CCObject*, unsigned int);
    ChallengeMainPresenter();
    undefined4 create(ChallengeMainView*);
    void onExit();
    void onEnter();
    void onChangeHeroLineUp();
    undefined4 initWithView(ChallengeMainView*);
    void onClick(cocos2d::CCObject*, unsigned int);
    void onFial();
    void updateHeroData();
    void onStart(cocos2d::CCObject*, unsigned int);
    void onBuyTicketSucceed();
    void updateBuff();
    void updatePaoMaDeng();
    void onRecordInfo();
    void onUpdateSelect();
    void onRefreshInfo();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

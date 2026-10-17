#pragma once
// BLInviteCodePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLInviteCodePresenter : public cocos2d::CCObject {
public:
    void tick(float);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void setGuize(char const*);
    void onClose(cocos2d::CCObject*, unsigned int);
    void onFillInCode(cocos2d::CCObject*, unsigned int);
    void onCopy(cocos2d::CCObject*, unsigned int);
    void onExit();
    ~BLInviteCodePresenter();
    BLInviteCodePresenter();
    undefined4 create(BLInviteCodeView*);
    void initScroView();
    int * getMineHttpUpData(int);
    void httpUtils(int);
    void getUserInvitaCode();
    void initWithView(BLInviteCodeView*);
    void onGetReward(cocos2d::CCObject*, cocos2d::CCEvent*);
    void onEnter();
    void onGiftInfo(cocos2d::CCObject*, cocos2d::CCEvent*);
    void onPostRewardData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetUserData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onPostCodeData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x94?148 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[148];
};

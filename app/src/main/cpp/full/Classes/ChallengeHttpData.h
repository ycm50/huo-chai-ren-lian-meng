#pragma once
// ChallengeHttpData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ChallengeHttpData : public cocos2d::CCObject {
public:
    ~ChallengeHttpData();
    ChallengeHttpData();
    int getInstance();
    void startChallenge();
    void winGame();
    void loseGame();
    void onWinGameResponse(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onLoseGameResponse(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onStartChallengeResponse(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x14?20 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[20];
};

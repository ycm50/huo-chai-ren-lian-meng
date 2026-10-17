#pragma once
// ChallengeHttpUtil
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ChallengeHttpUtil : public cocos2d::CCObject {
public:
    ~ChallengeHttpUtil();
    ChallengeHttpUtil();
    int getInstance();
    void getChallengeDate();
    void putChallengeStata(int);
    void getChallengeMostUser();
    void getChallengeRename(std::string *);
    void onGetChallengeDateCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onPutChallengeStataCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetChallengeMostUserCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetChallengeReNameCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};

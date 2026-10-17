#pragma once
// BLMainAccoutLogoinPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMainAccoutLogoinPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onRePassWord(MainFindPasswordData*);
    void tick(float);
    ~BLMainAccoutLogoinPresenter();
    void onCheckSuccess(MainFindPasswordData*);
    void onClose(cocos2d::CCObject*, unsigned int);
    void onCallBackLogin(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    BLMainAccoutLogoinPresenter();
    undefined4 create(BLMainAccoutLogoinView*);
    void onEnter();
    void onExit();
    void onFindPassword(cocos2d::CCObject*, unsigned int);
    void updateInfo();
    void initWithView(BLMainAccoutLogoinView*);
    bool IsValidChar(char);
    undefined8 IsValidEmail(std::string *);
    bool IsValidPass(std::string *);
    void onLogin(cocos2d::CCObject*, unsigned int);
    void changeAccount(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

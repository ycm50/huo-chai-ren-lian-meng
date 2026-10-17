#pragma once
// BLMainAccountChangePresenter
// 基类: UIObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "UIObject.h"


class BLMainAccountChangePresenter : public UIObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onCheckSuccess(MainFindPasswordData*);
    void tick(float);
    void onCallBackLogin(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onClose(cocos2d::CCObject*, unsigned int);
    ~BLMainAccountChangePresenter();
    BLMainAccountChangePresenter();
    undefined4 create(BLMainAccountChangeView*);
    void onExit();
    void onEnter();
    bool IsValidPass(std::string *);
    void onQuite(cocos2d::CCObject*, unsigned int);
    void resetUserPassword();
    void initWithView(BLMainAccountChangeView*);
    void onRePassWord(MainFindPasswordData*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};

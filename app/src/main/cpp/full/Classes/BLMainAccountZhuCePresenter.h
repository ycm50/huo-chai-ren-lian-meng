#pragma once
// BLMainAccountZhuCePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMainAccountZhuCePresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLMainAccountZhuCePresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onCallBackZhuCe(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    BLMainAccountZhuCePresenter();
    undefined4 create(BLMainAccountZhuCeView*);
    void onExit();
    void onEnter();
    void updateInfo();
    void initWithView(BLMainAccountZhuCeView*);
    bool IsValidChar(char);
    undefined8 IsValidEmail(std::string *);
    bool IsValidPass(std::string *);
    void onZhuCe(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

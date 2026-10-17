#pragma once
// SystemRemindBar
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class SystemRemindBar : public cocos2d::CCLayer {
public:
    cocos2d::extension::CCInvocation* getInvocation() const;
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~SystemRemindBar();
    bool init();
    undefined8 scaleTosmallEnd();
    void frontActionEnd();
    void allEnd();
    void setInvocation(cocos2d::extension::CCInvocation*);
    SystemRemindBar();
    void setTitle(std::string *);
    void setRichText(cocos2d::CCArray*);
    void onEnter();
    void onExit();
    int * create();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x11c?284 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[284];
};

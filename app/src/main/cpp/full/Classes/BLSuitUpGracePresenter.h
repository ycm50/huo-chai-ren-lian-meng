#pragma once
// BLSuitUpGracePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSuitUpGracePresenter : public cocos2d::CCObject {
public:
    undefined4 getRoleId() const;
    ~BLSuitUpGracePresenter();
    void onAnimationEnd();
    BLSuitUpGracePresenter();
    undefined4 create();
    void initWithView(BLSuitUpGraceView*);
    void onExit();
    void startAnimation();
    void onUpGraceFail();
    void initWithRoleId(std::string);
    undefined8 onRoleChange(cocos2d::CCObject*);
    void onUpGraceSuccess();
    void onPartChange(cocos2d::CCObject*);
    void onEnter();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

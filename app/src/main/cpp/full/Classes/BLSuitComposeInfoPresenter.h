#pragma once
// BLSuitComposeInfoPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSuitComposeInfoPresenter : public cocos2d::CCObject {
public:
    void onResetClick();
    ~BLSuitComposeInfoPresenter();
    BLSuitComposeInfoPresenter();
    undefined4 create();
    void initWithView(BLSuitComposeInfoView*);
    void onEnter();
    void onExit();
    void removeItem(int, int);
    void initWithId(int);
    void onUpdateInfo(cocos2d::CCObject*);
    void onCompose(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

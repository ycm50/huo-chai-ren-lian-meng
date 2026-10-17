#pragma once
// BLSuitUpGraceInfoPropertyPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSuitUpGraceInfoPropertyPresenter : public cocos2d::CCObject {
public:
    ~BLSuitUpGraceInfoPropertyPresenter();
    BLSuitUpGraceInfoPropertyPresenter();
    undefined4 create();
    void initWithView(BLSuitUpGraceInfoPropertyView*);
    void onEnter();
    void onExit();
    void initMaxLv();
    void initWithData(int, int, bool);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x18?24 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[24];
};

#pragma once
// BLRenascencePropertyPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLRenascencePropertyPresenter : public cocos2d::CCObject {
public:
    ~BLRenascencePropertyPresenter();
    BLRenascencePropertyPresenter();
    undefined4 create();
    void initWithView(BLRenascencePropertyView*);
    void initWithType(kRenascencePropertyType *);
    void onEnter();
    void onExit();
    void createTextArr(int);
    void updateWithData(std::string *);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

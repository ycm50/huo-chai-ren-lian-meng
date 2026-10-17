#pragma once
// BLSuitComposeInfoEffectPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSuitComposeInfoEffectPresenter : public cocos2d::CCObject {
public:
    ~BLSuitComposeInfoEffectPresenter();
    BLSuitComposeInfoEffectPresenter();
    undefined4 create();
    void initWithView(BLSuitComposeInfoEffectView*);
    void initTitText(std::vector<std::string, std::allocator<std::string>> *);
    void initWithData(int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

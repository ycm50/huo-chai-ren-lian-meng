#pragma once
// CircleMoveAct
// 基类: cocos2d::CCAction
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CircleMoveAct : public cocos2d::CCAction {
public:
    ~CircleMoveAct();
    void update(float);
    void startWithTarget(cocos2d::CCNode*);
    CircleMoveAct();
    bool initWithDuration(float, cocos2d::CCPoint const&, float, float);
    cocos2d::CCObject* copyWithZone(cocos2d::CCZone*);
    void create(float, cocos2d::CCPoint const&, float, float);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x54?84 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[84];
};

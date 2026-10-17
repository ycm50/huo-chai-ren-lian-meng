#pragma once
// BLSpeed
// 基类: cocos2d::CCAction
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSpeed : public cocos2d::CCAction {
public:
    bool getISPause() const;
    void setISPause(bool);
    cocos2d::extension::CCInvocation* getFrameInvocation() const;
    cocos2d::extension::CCInvocation* getFpsChange() const;
    bool isDone();
    void setFpsChange(cocos2d::extension::CCInvocation*);
    void setFrameInvocation(cocos2d::extension::CCInvocation*);
    void stop();
    void startWithTarget(cocos2d::CCNode*);
    ~BLSpeed();
    void step(float);
    BLSpeed();
    void initWithAction(cocos2d::CCActionInterval*, float);
    cocos2d::CCObject* copyWithZone(cocos2d::CCZone*);
    int * create(cocos2d::CCActionInterval*, float);
    cocos2d::CCActionInterval* reverse();
    void setInnerAction(cocos2d::CCActionInterval*);
    void pause(int);
    void changeFps(float, float);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x40?64 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[64];
};

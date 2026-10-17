#pragma once
// GuideLayer
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class GuideLayer : public cocos2d::CCLayer {
public:
    GuideStep* getStep() const;
    bool getActioning() const;
    void setActioning(bool);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~GuideLayer();
    void registerWithTouchDispatcher();
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void setStep(GuideStep*);
    void onTouchClick(float);
    undefined8 onBtnClick(cocos2d::CCObject*);
    GuideLayer();
    void refreshStep(GuideStep*);
    void startAction(float);
    void actionEnd();
    bool init();
    void onEnter();
    void onExit();
    int * create();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x130?304 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[304];
};

#pragma once
// GuideSwallowsTouchLayer
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class GuideSwallowsTouchLayer : public cocos2d::CCLayer {
public:
    int * create();
    GuideStep* getStep() const;
    GuideLayer* getGuideLayer() const;
    GuideMaskSprite* getGuideMaskSprite() const;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~GuideSwallowsTouchLayer();
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void setStep(GuideStep*);
    void setGuideMaskSprite(GuideMaskSprite*);
    void setGuideLayer(GuideLayer*);
    GuideSwallowsTouchLayer();
    void refreshStep(GuideStep*);
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x140?320 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[320];
};

#pragma once
// GuideMaskSprite
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class GuideMaskSprite : public cocos2d::CCLayer {
public:
    GuideLayer* getGuideLayer() const;
    GuideStep* getStep() const;
    int getAnchorType() const;
    void setAnchorType(int);
    ~GuideMaskSprite();
    void updateSpriteByScale(float);
    void updateSprite(float);
    void setStep(GuideStep*);
    void setGuideLayer(GuideLayer*);
    GuideMaskSprite();
    void resetMidSprPosition(int);
    undefined8 onScaleMinEnd();
    void onScaleMaxEnd();
    int getAnchorType();
    void resetRect(cocos2d::CCRect, GuideStep*);
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x168?360 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[360];
};

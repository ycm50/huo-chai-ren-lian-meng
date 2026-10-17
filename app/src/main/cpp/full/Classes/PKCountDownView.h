#pragma once
// PKCountDownView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PKCountDownView : public cocos2d::CCLayer {
public:
    cocos2d::extension::CCScale9Sprite* getSpriteBg() const;
    void setSpriteBg(cocos2d::extension::CCScale9Sprite*);
    cocos2d::CCLabelTTF* getLabeDesc() const;
    void setLabeDesc(cocos2d::CCLabelTTF*);
    cocos2d::CCLabelBMFont* getLabeReady() const;
    void setLabeReady(cocos2d::CCLabelBMFont*);
    ~PKCountDownView();
    void tick(float);
    PKCountDownView();
    void startTime(float);
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x124?292 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[292];
};

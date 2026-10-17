#pragma once
// BLMissionItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionItemPresenter : public cocos2d::CCObject {
public:
    int getIndex() const;
    void setIndex(int);
    BLMissionData* getMissionData() const;
    void setMissionData(BLMissionData*);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    void setMissionID(std::string);
    ~BLMissionItemPresenter();
    std::string getMissionID() const;
    BLMissionItemPresenter();
    undefined4 create(BLMissionItemView*);
    void onEnter();
    void onExit();
    void initWithView(BLMissionItemView*);
    void onIngoreTouch();
    void onSweep(cocos2d::CCObject*, unsigned int);
    void initViewInfo();
    void onRole(cocos2d::CCObject*, unsigned int);
    void initWithID(std::string);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};

#pragma once
// BLMissionPlayerInfoPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionPlayerInfoPresenter : public cocos2d::CCObject {
public:
    ~BLMissionPlayerInfoPresenter();
    BLMissionPlayerInfoPresenter();
    undefined4 create();
    void initWithView(BLMissionPlayerInfoView*);
    void onEnter();
    void onExit();
    void updateHeroStatus(int);
    void updateEnemyStatus(int);
    void updatePlayerName(std::string *);
    void updateEnemyName(std::string *);
    undefined8 tick(float);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};

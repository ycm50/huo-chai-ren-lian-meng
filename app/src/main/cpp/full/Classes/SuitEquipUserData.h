#pragma once
// SuitEquipUserData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class SuitEquipUserData : public cocos2d::CCObject {
public:
    ~SuitEquipUserData();
    SuitEquipUserData();
    undefined4 * getEquipedInfo(std::string);
    bool getEquipable(std::string, int);
    int getEquipedNumBySuitId(std::string, int);
    void checkBuffBySuitId(std::string, int, SuitEquipActivatedType);
    int getEquipedNum(std::string);
    int getStatus(std::string);
    void initHeroList();
    void initData();
    bool init();
    undefined8 UpdateSuitData();
    void getActivatedBuff(std::string);
    int getSuitLv(std::string, int);
    undefined8 getBuffLv(std::string, int);
    undefined4 checkBuffByBuffId(std::string, int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x44?68 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[68];
};

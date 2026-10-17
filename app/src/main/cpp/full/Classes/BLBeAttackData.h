#pragma once
// BLBeAttackData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLBeAttackData : public cocos2d::CCObject {
public:
    int getLV() const;
    void setLV(int);
    bool getISFlapX() const;
    void setISFlapX(bool);
    void setBeAttackType(std::string);
    std::string getBeAttackType() const;
    ~BLBeAttackData();
    BLBeAttackData();
    bool init();
    int * create();
    void initWithName(std::string);
    void initWith(char**, int&);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

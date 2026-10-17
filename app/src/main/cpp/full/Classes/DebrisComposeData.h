#pragma once
// DebrisComposeData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class DebrisComposeData : public cocos2d::CCObject {
public:
    int getID() const;
    void setID(int);
    int getEquipID() const;
    void setEquipID(int);
    int getValue() const;
    void setValue(int);
    int getCastType() const;
    void setCastType(int);
    int getCastValue() const;
    void setCastValue(int);
    int getPercent() const;
    void setPercent(int);
    ~DebrisComposeData();
    DebrisComposeData();
    bool init();
    void initWith(char**, int&);
    void initWith(int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};

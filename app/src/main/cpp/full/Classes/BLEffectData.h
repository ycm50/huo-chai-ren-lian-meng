#pragma once
// BLEffectData
// 基类: BLRoleData
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "BLRoleData.h"


class BLEffectData : public BLRoleData {
public:
    int * create();
    void setSound(std::string);
    void setResID(std::string);
    void setID(std::string);
    ~BLEffectData();
    std::string getSound() const;
    std::string getResID() const;
    std::string getID() const;
    BLEffectData();
    bool init();
    void initWithID(std::string);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x34?52 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[52];
};

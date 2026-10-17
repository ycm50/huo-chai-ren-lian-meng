#pragma once
// MirrorRewardData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MirrorRewardData : public cocos2d::CCObject {
public:
    void setReward2(std::string);
    void setReward1(std::string);
    void setMissionID(std::string);
    ~MirrorRewardData();
    std::string getReward2() const;
    std::string getReward1() const;
    std::string getMissionID() const;
    MirrorRewardData();
    bool init();
    void initWith(char**, int&);
    void initWith(int);
    void getRewardIDandNum(std::string);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

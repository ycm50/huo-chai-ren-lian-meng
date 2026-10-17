#pragma once
// CircusData
// 基类: CircusPlayerinfo
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "CircusPlayerinfo.h"


class CircusData : public CircusPlayerinfo {
public:
    void GetDataFromNet(int, bool);
    void refreshchallenge();
    void PrintCircusPlayerinfo(CircusPlayerinfo *, std::string *) const;
    void GetRankingStatus();
    void GetRankingPoint();
    void Setmychallinfo(CircusPlayerinfo *);
    void setmychallmodifyheroinfo(CircusPlayerinfo *, bool);
    undefined8 GetChalInfoById(std::string *) const;
    undefined8 GetPvpInfoById(std::string *) const;
    undefined8 GetHeroInfoById(std::string *) const;
    int GetPvpSimpleInfoById(std::string *);
    undefined4 * GetcircusHreaders();
    void Setchallengermap(CircusPlayerinfo *);
    undefined8 Setpvpmap(CircusPlayerinfo *);
    void Setherorecordmap(CircusPlayerinfo *);
    void initurlmap();
    CircusData();
    undefined4 CheckSocket(int, bool);
    undefined4 getMe();
    ~CircusData();
};

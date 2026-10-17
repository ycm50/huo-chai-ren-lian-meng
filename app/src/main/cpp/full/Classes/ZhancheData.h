#pragma once
// ZhancheData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ZhancheData {
public:
    int getChariotNum() const;
    void setChariotNum(int);
    int getUserOwnChariotRank() const;
    void setUserOwnChariotRank(int);
    undefined4 getpastsearch() const;
    void setpastsearch(int);
    int getMyUserZCInfo() const;
    void setMyUserZCInfo(UserZCInfo *);
    void setUserName(std::string *);
    void setSearchZhanCheInfo(GetexploreChariotInfo *);
    void setMyFlightResult(FlightResult *);
    std::string getUserName() const;
    int getMyFlightResult() const;
    int getSearchZhanCheInfo() const;
    void clearData();
    ~ZhancheData();
    void setMyGetChariotInfo(GetChariotInfo *);
    int getMyGetChariotInfo() const;
    void GetDataFromNet(URL_ZC *, bool);
};

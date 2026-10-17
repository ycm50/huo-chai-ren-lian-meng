#pragma once
// MissionCreamSelectData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MissionCreamSelectData {
public:
    ~MissionCreamSelectData();
    void modifyDBDataByRest(int, int);
    void modifyDBDataByTime(int, int);
    void modifyDBDataByNum(int, int);
    void minusleftdata();
    void buycreamnum();
    void addDBData(int, int, int, int);
    void serachDBData(int);
    void GetDataFromNet(bool);
};

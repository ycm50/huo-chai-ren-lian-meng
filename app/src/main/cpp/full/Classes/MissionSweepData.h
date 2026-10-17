#pragma once
// MissionSweepData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MissionSweepData {
public:
    ~MissionSweepData();
    int isVip();
    undefined8 getExp(int);
    void getCopper(int);
    void modifyDBDataByTime(int, int);
    void modifyDBDataByNum(int, int);
    void modifyDBDataByAllNum(int, int);
    void minusleftdata(int);
    void addleftdatabyvip();
    undefined8 getsweepdiamond(int);
    undefined8 getsweepcoin(int);
    void SetMissionData(BLMissionData*);
    void addDBData(int, int, int, int);
    void serachDBData(int);
    void GetDataFromNet(bool);
    void isMonthCard();
    void serachSweepDBData();
    void getItems(int);
};

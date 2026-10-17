#pragma once
// MonthlyContractData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MonthlyContractData {
public:
    ~MonthlyContractData();
    void sendGetRewardTimeServer();
    bool isTodayGet();
    MonthlyContractData();
    undefined4 getUnusedDays();
    int getUnusedMons();
    bool init();
    void getDataFromServer();
    void saveDataToServer(char const*);
    undefined8 buySuccessed();
    undefined4 * getDayRewards(int);
    void getMonthRewards(int);
    void parseInfo(char const*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x50?80 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[80];
};

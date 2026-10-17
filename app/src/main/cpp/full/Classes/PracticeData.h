#pragma once
// PracticeData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PracticeData {
public:
    ~PracticeData();
    PracticeData();
    undefined4 Getotheritem(PracticeOtherEnum *);
    void deleteDBData(int);
    void getPerMExp(int, int, std::string);
    int GetHeroHttpExp(int);
    void addDBData(PracHeroItem *);
    undefined8 SetDbTime();
    void GetDataFromNet(bool, int);
    undefined8 Setotheritem(int, int);
    void serachDBData();
    void modifyDBData(PracHeroItem *);
    void SetDbData();
    void SetItem(PracDataItem *);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x98?152 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[152];
};

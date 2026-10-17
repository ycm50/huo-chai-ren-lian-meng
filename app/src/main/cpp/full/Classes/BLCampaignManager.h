#pragma once
// BLCampaignManager
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLCampaignManager : public cocos2d::CCObject {
public:
    ~BLCampaignManager();
    BLCampaignManager();
    bool init();
    undefined4 instance();
    void initData();
    void addContentNum(CampaignChildTerm, int);
    void updateDataToDB();
    undefined4 serachDBData(int);
    void modifyDBData(int, int, int);
    void deleteDBData(int);
    undefined4 reTypeById(int);
    int serachDBDataAll();
    void addDBData(int, int, int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x18?24 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[24];
};

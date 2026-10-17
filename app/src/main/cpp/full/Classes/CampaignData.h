#pragma once
// CampaignData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CampaignData {
public:
    ~CampaignData();
    void GetDataFromNet(URL_CAMPAIGN *, bool, int, int);
    undefined4 IsSpecialTermType(int);
    void PrintCampaignInfo(CampaignInfo *);
    void PrintCampaignChildInfo();
    int GetCampaignNowDataById(int, int);
    void CompareWebAndLocalData();
    void isCompleteCampaignChild(int, int, int);
    void CheckCampaignComInfo();
    void AddCampaignData(CampaignChildTerm *, int);
    undefined4 DealHeroOne(CampaignInfo *);
    void ClearCampaignData();
    undefined * GetChildCamInfoById(int) const;
    void ResolveCampaignComInfo();
    void SetLocalRewardData(int, int);
    void ReadLocalDbData();
    void SetCampaignChildData(CampaignChildInfo *);
    void DealCampaignInfo(CampaignInfo *);
    void SetCampaignData(CampaignInfo *);
};

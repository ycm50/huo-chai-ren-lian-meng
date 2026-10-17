#pragma once
// CampaignInfo
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CampaignInfo {
public:
    // 补齐 .cpp 中已有但头文件缺的声明
    CampaignInfo();
    ~CampaignInfo();
int operator=(int P2);
    CampaignInfo(CampaignInfo const&);
};

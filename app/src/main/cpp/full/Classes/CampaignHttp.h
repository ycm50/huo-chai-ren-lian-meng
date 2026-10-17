#pragma once
// CampaignHttp
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CampaignHttp {
public:
    ~CampaignHttp();
    bool GetPutTemplate(int, int);
    bool init(URL_CAMPAIGN, int, int);
    void SysCampaignChildJson(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&);
    void SysCampaignJson(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&);
    void onGetCampaignData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetCampaignHuaWeiData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onPutCampaignData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};

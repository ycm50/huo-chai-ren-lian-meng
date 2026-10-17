#pragma once
// LuckShopDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class LuckShopDataGet {
public:
    ~LuckShopDataGet();
    bool GetPutTemplate(int);
    void SysLuckShopDataJson(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&);
    bool init(URL_LUCKSHOP);
    void onGetLuckShopData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onPutLuckShopData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};

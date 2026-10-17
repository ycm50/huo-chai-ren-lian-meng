#pragma once
// CircusShopDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CircusShopDataGet {
public:
    ~CircusShopDataGet();
    bool GetPutTemplate(int);
    void SysCircusShopDataJson(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&);
    bool init(URL_CIRCUSSHOP);
    void onGetCircusShopData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onPutCircusShopData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};

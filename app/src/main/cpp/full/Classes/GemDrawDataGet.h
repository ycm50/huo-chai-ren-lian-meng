#pragma once
// GemDrawDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class GemDrawDataGet {
public:
    ~GemDrawDataGet();
    bool GetPutTemplate();
    bool init();
    void SysGemDrawJson(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&, int);
    void onPutGemDrawData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetGemDrawData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};

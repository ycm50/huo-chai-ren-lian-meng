#pragma once
// TalentDrawDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class TalentDrawDataGet {
public:
    ~TalentDrawDataGet();
    bool init();
    void SysDrawJson(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&, int);
    void onGetTalentDrawData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};

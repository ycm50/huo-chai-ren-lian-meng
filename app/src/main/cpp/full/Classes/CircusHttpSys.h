#pragma once
// CircusHttpSys
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CircusHttpSys {
public:
    ~CircusHttpSys();
    void onGetOpponentData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetDownZipData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void SysChallengeJson(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&, bool);
    void SysRankingJson(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&);
    bool init(std::string *);
    void onGetChallData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetOwnerData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetPvpRecordData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetHeroRecordData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetDownRankingData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetRankingTimeData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};

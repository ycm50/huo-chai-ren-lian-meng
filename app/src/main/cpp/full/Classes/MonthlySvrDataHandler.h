#pragma once
// MonthlySvrDataHandler
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MonthlySvrDataHandler {
public:
    ~MonthlySvrDataHandler();
    void onHttpRespSave(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    bool init(int, bool, char const*);
    void create(int, bool, char const*);
    void onHttpReceiveTime(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onHttpRespInfo(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};

#pragma once
// Pack4399SvrDataHandler
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class Pack4399SvrDataHandler {
public:
    ~Pack4399SvrDataHandler();
    bool init(int, bool, char const*);
    void create(int, bool, char const*);
    void onHttpRespInfo(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};

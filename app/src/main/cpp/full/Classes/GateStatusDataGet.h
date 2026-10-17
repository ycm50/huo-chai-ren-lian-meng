#pragma once
// GateStatusDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class GateStatusDataGet {
public:
    ~GateStatusDataGet();
    bool init();
    void onGateStatusData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};

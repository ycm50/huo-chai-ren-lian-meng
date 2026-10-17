#pragma once
// NetTimeSyn
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class NetTimeSyn : public cocos2d::CCObject {
public:
    ~NetTimeSyn();
    NetTimeSyn();
    bool init();
    void synLocalTimeByNet(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*));
};

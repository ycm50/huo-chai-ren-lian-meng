#pragma once
// BLArenaGetHttpDataManager
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLArenaGetHttpDataManager : public cocos2d::CCObject {
public:
    cocos2d::CCArray* getContents() const;
    void setContents(cocos2d::CCArray*);
    void onHttpRequestCompleted(cocos2d::CCObject*, cocos2d::extension::CCHttpResponse*);
    ~BLArenaGetHttpDataManager();
    BLArenaGetHttpDataManager();
    bool init();
    undefined4 share();
    undefined8 getHttpDataByTag(char const*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x18?24 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[24];
};

#pragma once
// MirrorDataManager
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MirrorDataManager : public cocos2d::CCObject {
public:
    ~MirrorDataManager();
    MirrorDataManager();
    int getInstance();
    void getMirrorData(int, bool);
    undefined4 getPurchasePrice(int);
    undefined4 getMissionId();
    undefined4 getTotalNum();
    void onGetDataSlientCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetDataCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onUseCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onBuyCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onCheckCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

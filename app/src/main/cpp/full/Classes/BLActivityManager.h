#pragma once
// BLActivityManager
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLActivityManager : public cocos2d::CCObject {
public:
    cocos2d::CCArray* getContents() const;
    void setContents(cocos2d::CCArray*);
    cocos2d::CCArray* getTitles() const;
    void setTitles(cocos2d::CCArray*);
    ~BLActivityManager();
    BLActivityManager();
    bool init();
    undefined4 share();
    void initData();
    void addContentNum(ACTIVITY_COUNT_TYPE, int);
    int * getContentByID(int);
    void updateDataToDB();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

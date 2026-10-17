#pragma once
// GMSpecDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class GMSpecDataGet {
public:
    ~GMSpecDataGet();
    void onUpData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void importTableData(sqlite3*, sqlite3*, std::string);
    void importDBData();
    void updateDB();
    void onSpecGMData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    undefined4 * getGMHeaders();
    undefined4 * getFileGMHeaders();
    bool init();
};

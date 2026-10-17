#pragma once
// DownLoadDataNumDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class DownLoadDataNumDataGet {
public:
    ~DownLoadDataNumDataGet();
    bool init(URL_DownLoadNum);
    void onPutDownLoadNumData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetDownLoadNumData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};

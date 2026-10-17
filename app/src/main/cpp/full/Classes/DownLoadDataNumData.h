#pragma once
// DownLoadDataNumData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class DownLoadDataNumData {
public:
    int getIstatus() const;
    void setIstatus(int);
    ~DownLoadDataNumData();
    void GetDataFromNet(URL_DownLoadNum, bool);
};

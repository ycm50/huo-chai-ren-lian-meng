#pragma once
// GateStatusData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class GateStatusData {
public:
    ~GateStatusData();
    void PrintGateStatusInfo(GateStatusInfo);
    void GetDataFromNet(bool);
    void HandOutData();
    void SetGateStatusInfo(GateStatusInfo);
};

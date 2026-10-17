#pragma once
// ImmortalsRefineLockData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ImmortalsRefineLockData {
public:
    ImmortalsRefineLockData();
    ~ImmortalsRefineLockData();
    int getInstance();
    int checkLockable();
    void lock();
    void unLock();
    void reset();
};

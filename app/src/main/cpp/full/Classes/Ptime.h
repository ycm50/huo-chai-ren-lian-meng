#pragma once
// Ptime
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class Ptime {
public:
    undefined4 getMe();
    undefined8 year(long) const;
    undefined8 mouth(long) const;
    undefined8 day(long) const;
    undefined8 hour(long) const;
    undefined8 minute(long) const;
    undefined8 second(long) const;
    void ConvertExactSecond(long) const;
    void GetLocalTime() const;
};

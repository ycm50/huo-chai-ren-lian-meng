#pragma once
// SignInData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class SignInData {
public:
    ~SignInData();
    void GetDataFromNet(int, bool);
};

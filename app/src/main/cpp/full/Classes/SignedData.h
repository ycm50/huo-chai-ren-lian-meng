#pragma once
// SignedData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class SignedData {
public:
    ~SignedData();
    void PrintSignedDatainfo(SignedInfo *) const;
    undefined4 getDimandReplaceHero();
    void GetDataFromNet(URL_SIGNED *, bool);
};

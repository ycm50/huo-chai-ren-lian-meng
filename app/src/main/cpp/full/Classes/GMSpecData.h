#pragma once
// GMSpecData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class GMSpecData {
public:
    ~GMSpecData();
    void Clearinput();
    void Setgmscene(GMSPEC_SCENESTATUS);
    void Setinput1(std::string);
    void Setinput2(std::string);
    void GetDataFromNet(bool, int);
    void Handle();
};

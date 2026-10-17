#pragma once
// Pack4399Data
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class Pack4399Data {
public:
    ~Pack4399Data();
    void getDataFromServer();
    void saveDataToServer(char const*);
    void parseInfo(char const*);
};

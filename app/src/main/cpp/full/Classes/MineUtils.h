#pragma once
// MineUtils
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MineUtils {
public:
    ~MineUtils();
    void getrecoverminedata(std::string *);
    int * getMineHttpUpData(int);
    void SysMinejsonInfo(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&);
    void setRefreshminedata(std::string *);
};

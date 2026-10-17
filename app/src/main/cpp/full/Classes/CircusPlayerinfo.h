class CircusHeroInfo;
#pragma once
// CircusPlayerinfo
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CircusPlayerinfo {
public:
    // 补齐 .cpp 中已有但头文件缺的声明
    CircusPlayerinfo();
    CircusPlayerinfo(std::string);
int operator=(int P2);
    ~CircusPlayerinfo();
    CircusPlayerinfo(CircusPlayerinfo const&);
};

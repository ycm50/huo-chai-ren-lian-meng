#pragma once
// ZipUnCompress
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ZipUnCompress {
public:
    // 补齐 .cpp 中已有但头文件缺的声明
    ZipUnCompress();
    ~ZipUnCompress();
    bool createDirectory(char const*);
    void checkStoragePath();
    void uncompress();
    ZipUnCompress(std::string, char const*);
};

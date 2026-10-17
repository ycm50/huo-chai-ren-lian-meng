#pragma once
// HttpTarget
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class HttpTarget {
public:
    // 补齐 .cpp 中已有但头文件缺的声明
    int create();
    cocos2d::CCObject* getTarget() const;
    ~HttpTarget();
    void setTarget(cocos2d::CCObject*);
    void create(cocos2d::CCObject*, void (cocos2d::CCObject::*)(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>&));
};

#pragma once
// DebugLocalSys
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class DebugLocalSys {
public:
    ~DebugLocalSys();
    DebugLocalSys();
    void getJsonStringById(std::string *);
    void getJsonIntById(std::string *);
    void getJsonStringGetValueById(std::string *, std::string *);
    void getJsonIntGetValueById(std::string *, std::string *);
    void ReadDebugFile();
};

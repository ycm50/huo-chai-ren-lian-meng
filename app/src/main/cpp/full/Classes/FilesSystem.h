#pragma once
// FilesSystem
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class FilesSystem {
public:
    undefined4 ReadFile(std::string const&, char**);
    ~FilesSystem();
};

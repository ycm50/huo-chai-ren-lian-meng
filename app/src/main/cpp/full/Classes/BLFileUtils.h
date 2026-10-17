#pragma once
// BLFileUtils
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLFileUtils {
public:
    void encodeBase64(void const*, int, char*, int);
    int decodeBase64(char const*, void*, int);
    void encodeFileByXOR(char const*, char const*, char const*);
    void haveFileInRoot(char const*);
};

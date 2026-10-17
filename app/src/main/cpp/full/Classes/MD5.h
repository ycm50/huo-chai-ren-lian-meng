#pragma once
// MD5
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MD5 {
public:
    typedef int md5_context;
    void md5_starts(MD5::md5_context*);
    void md5_process(MD5::md5_context*, unsigned char*);
    void md5_update(MD5::md5_context*, unsigned char*, unsigned long);
    void md5_finish(MD5::md5_context*, unsigned char*);
    void GenerateMD5(unsigned char*, int);
    MD5();
    MD5(unsigned long*);
    MD5(char const*);
    MD5 operator+(uint);
    bool operator==(MD5);
    void ToString();
};

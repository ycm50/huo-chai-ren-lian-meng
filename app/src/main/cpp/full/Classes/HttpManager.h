#pragma once
// HttpManager
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class HttpManager : public cocos2d::CCObject {
public:
    // 补齐 .cpp 中已有但头文件缺的声明
    int sendData(P2, auStack_3c);
    ~HttpManager();
    HttpManager();
    undefined4 shareHttpManager();
    void removeTargetFromArray(HttpTarget*);
    void getPostFields(cocos2d::CCDictionary*);
    void sendData(cocos2d::CCDictionary*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>&));
    void parseRequest(int*, cocos2d::extension::CCHttpResponse*);
    void onResponse(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

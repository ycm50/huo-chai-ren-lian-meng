#pragma once
// HttpUtil
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class HttpUtil : public cocos2d::CCObject {
public:
    // 补齐 .cpp 中已有但头文件缺的声明
    int request();
    ~HttpUtil();
    HttpUtil();
    void onError(cocos2d::extension::CCHttpResponse*);
    void onResponse(cocos2d::extension::CCHttpResponse*);
    void getBodyDic(cocos2d::extension::CCHttpResponse*);
    void initWithFormatAndValist(char const*, __builtin_va_list *);
    void request(std::string, std::string, cocos2d::extension::CCHttpRequest::HttpRequestType, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*), ...);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x18?24 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[24];
};

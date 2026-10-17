#pragma once
// OnSaleHttpUtils
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class OnSaleHttpUtils : public cocos2d::CCObject {
public:
    // 补齐 .cpp 中已有但头文件缺的声明
    int getDataFromNet();
    OnSaleHttpUtils();
    ~OnSaleHttpUtils();
    int getInstance();
    void initWithFormatAndValist(char const*, __builtin_va_list *);
    void getDataFromNet(std::string, std::string, cocos2d::extension::CCHttpRequest::HttpRequestType, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*), ...);
};

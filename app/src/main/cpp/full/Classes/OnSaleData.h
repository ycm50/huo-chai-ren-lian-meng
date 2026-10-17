#pragma once
// OnSaleData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class OnSaleData : public cocos2d::CCObject {
public:
    OnSaleData();
    undefined8 getDataCountByType(EnumOnSaleType);
    int getAllOnSaleData();
    ~OnSaleData();
    void getAllDataFromNet();
    void buyOnSale(int);
    void onSendDataCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void getItemFormData(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&);
    void onGetDataCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x34?52 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[52];
};

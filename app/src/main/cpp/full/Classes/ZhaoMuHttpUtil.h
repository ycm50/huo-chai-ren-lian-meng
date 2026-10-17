#pragma once
// ZhaoMuHttpUtil
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ZhaoMuHttpUtil : public cocos2d::CCObject {
public:
    ~ZhaoMuHttpUtil();
    ZhaoMuHttpUtil();
    int getInstance();
    undefined4 getPostData(int);
    undefined8 setItems(std::vector<ZhaoMuItem, std::allocator<ZhaoMuItem>> *);
    int getItems() const;
    void getItemByType(int);
    void onGetItemByTypeCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

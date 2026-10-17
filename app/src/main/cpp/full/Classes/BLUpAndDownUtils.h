#pragma once
// BLUpAndDownUtils
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLUpAndDownUtils : public cocos2d::CCLayer {
public:
    int * create();
    ~BLUpAndDownUtils();
    void onUpData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    BLUpAndDownUtils();
    void notifaction();
    void importTableData(sqlite3*, sqlite3*, std::string *);
    void importDBData();
    void updateDB();
    void upRes(std::string *, bool);
    void DownRes(std::string *);
    void onGetSignData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x110?272 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[272];
};

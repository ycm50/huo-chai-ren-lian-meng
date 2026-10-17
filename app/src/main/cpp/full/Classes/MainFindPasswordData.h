#pragma once
// MainFindPasswordData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MainFindPasswordData {
public:
    ~MainFindPasswordData();
    void rePassword(std::string);
    void rePasswordCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void setCheckDelegate(CEMainFindPasswordDataDelegate*);
    void CheckSuccess();
    void RePassWord();
    void GetDataFromNet(char const*, char const*, bool);
};

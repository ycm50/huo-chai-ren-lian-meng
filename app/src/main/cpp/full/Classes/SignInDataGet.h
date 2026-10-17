#pragma once
// SignInDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class SignInDataGet {
public:
    ~SignInDataGet();
    bool init();
    void onGetSignInData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};

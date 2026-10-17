#pragma once
// AppDelegate
// 基类: cocos2d::CCApplication
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class AppDelegate : public cocos2d::CCApplication {
public:
    ~AppDelegate();
    bool applicationDidFinishLaunching();
    void applicationWillEnterForeground();
    void applicationDidEnterBackground();
    AppDelegate();
};

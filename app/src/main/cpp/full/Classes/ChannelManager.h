#pragma once
// ChannelManager
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ChannelManager {
public:
    ChannelManager();
    undefined4 shareManager();
    ~ChannelManager();
    bool init();
    bool init(void*);
    void logOut();
    void login();
    undefined4 isLogin();
    void enterPaltform();
    void ShowPausePage();
    void showToolBar(bool);
    void charge(std::string);
};

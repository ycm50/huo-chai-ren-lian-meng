#pragma once
// RoleStarItem
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class RoleStarItem : public cocos2d::CCLayer {
public:
    ~RoleStarItem();
    RoleStarItem();
    void initWith(std::string *);
    void setNum(int);
    bool init();
    void onEnter();
    void onExit();
};

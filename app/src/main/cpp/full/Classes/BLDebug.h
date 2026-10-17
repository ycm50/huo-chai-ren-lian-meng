#pragma once
// BLDebug
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLDebug {
public:
    undefined8 LogBattle(std::string);
    undefined8 LogDB(std::string);
    undefined8 LogUI(std::string);
    undefined8 LogLoadRes(std::string);
    undefined8 LogTime(std::string);
    undefined8 LogLeak(std::string);
    undefined8 LogNet(std::string);
};

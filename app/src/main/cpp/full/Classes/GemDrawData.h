#pragma once
// GemDrawData
// 基类: cocos2d::CCPoint
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class GemDrawData : public cocos2d::CCPoint {
public:
    ~GemDrawData();
    GemDrawData();
    void ChangeNextVector();
    void PrintGemDrawinfo(GemDrawInfo *);
    void PrintGemDrawIteminfo(GemDrawItemInfo *);
    undefined4 Getgemdrawinfo(int);
    void Setgemdrawinfoidandinfo(GemDrawInfo *);
    undefined8 Setviewstatus(int);
    undefined4 Getgemdrawallitemid(int);
    void Setgemdrawalliteminfo(GemDrawItemInfo *, int);
    void GetDataFromNet(URL_GEMDRAW *, int, bool, bool);
    void Setgemdrawinfo(GemDrawInfo *);
    void Setgemdrawallitemid(std::vector<int, std::allocator<int>> *, bool);
};

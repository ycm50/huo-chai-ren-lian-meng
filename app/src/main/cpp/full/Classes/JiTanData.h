#pragma once
// JiTanData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class JiTanData {
public:
    int getDoubleHeroId() const;
    void setDoubleHeroId(int);
    int getLuck() const;
    void setLuck(int);
    ~JiTanData();
    void setMyGetHeroDrawInfo(GetHeroDrawInfo *);
    int getMyGetHeroDrawInfo() const;
    void GetDataFromNet(URL_JT *, bool);
};

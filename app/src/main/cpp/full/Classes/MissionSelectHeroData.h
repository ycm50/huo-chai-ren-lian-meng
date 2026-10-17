#pragma once
// MissionSelectHeroData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MissionSelectHeroData : public cocos2d::CCObject {
public:
    int * create();
    int getType() const;
    void setType(int);
    cocos2d::CCDictionary* getDicHeros() const;
    void setDicHeros(cocos2d::CCDictionary*);
    void setHeros(std::string);
    ~MissionSelectHeroData();
    std::string getHeros() const;
    MissionSelectHeroData();
    bool init();
    void initWithMissionType(int);
    void updateData();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

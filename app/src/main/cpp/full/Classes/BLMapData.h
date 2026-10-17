#pragma once
// BLMapData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMapData : public cocos2d::CCObject {
public:
    int getID() const;
    void setID(int);
    cocos2d::CCDictionary* getDicScenData() const;
    void setDicScenData(cocos2d::CCDictionary*);
    void setRes(std::string);
    void setMapName(std::string);
    ~BLMapData();
    std::string getRes() const;
    std::string getMapName() const;
    BLMapData();
    bool init();
    void initSceneData();
    void initWithMapID(int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

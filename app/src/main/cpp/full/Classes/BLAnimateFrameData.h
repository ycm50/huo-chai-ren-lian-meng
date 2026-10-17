#pragma once
// BLAnimateFrameData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLAnimateFrameData : public cocos2d::CCObject {
public:
    cocos2d::CCObject* getAnimateData() const;
    void setAnimateData(cocos2d::CCObject*);
    ~BLAnimateFrameData();
    BLAnimateFrameData();
    bool init();
    void getPositionByDic(cocos2d::CCDictionary*);
    undefined8 initRotation(std::string&);
    undefined8 initAlpha(std::string&);
    void initBeAttackIndex(std::string&);
    void getRectByDic(cocos2d::CCDictionary*);
    void initSpeedData(std::string&);
    void initScale(std::string&);
    void initWith(cocos2d::CCDictionary*, std::string);

public:
    /* HW_SIZE_PAD (R94): ?????? 0xa4?164 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[164];
};

#pragma once
// BLMapSceneData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMapSceneData : public cocos2d::CCObject {
public:
    int getZorder() const;
    void setZorder(int);
    cocos2d::CCArray* getArrayItems() const;
    void setArrayItems(cocos2d::CCArray*);
    int getPosType() const;
    void setPosType(int);
    float getSpeed() const;
    void setSpeed(float);
    ~BLMapSceneData();
    std::string getSceneName() const;
    void setSceneName(std::string);
    BLMapSceneData();
    bool init();
    void initWithDic(cocos2d::CCDictionary*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

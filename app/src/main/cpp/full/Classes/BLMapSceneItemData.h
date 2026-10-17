#pragma once
// BLMapSceneItemData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMapSceneItemData : public cocos2d::CCObject {
public:
    float getPositionX() const;
    void setPositionX(float);
    float getPositionY() const;
    void setPositionY(float);
    float getRotation() const;
    void setRotation(float);
    float getScaleX() const;
    void setScaleX(float);
    float getScaleY() const;
    void setScaleY(float);
    float getSkewX() const;
    void setSkewX(float);
    float getSkewY() const;
    void setSkewY(float);
    int getType() const;
    void setType(int);
    int getZorder() const;
    void setZorder(int);
    ~BLMapSceneItemData();
    std::string getName() const;
    void setName(std::string);
    BLMapSceneItemData();
    bool init();
    int * create();
    void initWithDic(cocos2d::CCDictionary*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x3c?60 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[60];
};

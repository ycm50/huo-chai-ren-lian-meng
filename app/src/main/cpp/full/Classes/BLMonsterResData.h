#pragma once
// BLMonsterResData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMonsterResData : public cocos2d::CCObject {
public:
    float getSpeed() const;
    void setSpeed(float);
    float getAIDistance() const;
    void setAIDistance(float);
    float getSpriteScale() const;
    void setSpriteScale(float);
    void setResID(std::string);
    std::string getResID() const;
    bool init();
    ~BLMonsterResData();
    BLMonsterResData();
    void initWith(std::string);
    void setThrowRes(std::vector<std::string, std::allocator<std::string>>);
    void setImgRes(std::vector<std::string, std::allocator<std::string>>);
    void setDataRes(std::vector<std::string, std::allocator<std::string>>);
    int getThrowRes() const;
    int getImgRes() const;
    int getDataRes() const;

public:
    /* HW_SIZE_PAD (R94): ?????? 0x48?72 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[72];
};

#pragma once
// ActivityItemData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ActivityItemData : public cocos2d::CCObject {
public:
    int getID() const;
    void setID(int);
    int getTitleID() const;
    void setTitleID(int);
    int getTargetNum() const;
    void setTargetNum(int);
    int getTargetType() const;
    void setTargetType(int);
    int getISGet() const;
    void setISGet(int);
    int getRealNum() const;
    void setRealNum(int);
    void setReward(std::string);
    void setRewDes(std::string);
    void setName(std::string);
    ~ActivityItemData();
    std::string getReward() const;
    std::string getRewDes() const;
    std::string getName() const;
    ActivityItemData();
    bool init();
    void initWith(char**, int&);
    void updateRealNum(int);
    void updateIsGet();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x38?56 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[56];
};

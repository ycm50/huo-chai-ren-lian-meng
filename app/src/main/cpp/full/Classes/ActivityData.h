#pragma once
// ActivityData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ActivityData : public cocos2d::CCObject {
public:
    int getID() const;
    void setID(int);
    int getType() const;
    void setType(int);
    void setDes(std::string);
    void setName(std::string);
    ~ActivityData();
    std::string getDes() const;
    std::string getName() const;
    ActivityData();
    bool init();
    void initWith(char**, int&);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

#pragma once
// TalentData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class TalentData : public cocos2d::CCObject {
public:
    int getID() const;
    void setID(int);
    void setDesc(std::string);
    void setConsume(std::string);
    void setAnimation(std::string);
    void setIcon(std::string);
    void setAttributiva(std::string);
    void setName(std::string);
    std::string getDesc() const;
    std::string getConsume() const;
    std::string getAnimation() const;
    std::string getIcon() const;
    std::string getAttributiva() const;
    std::string getName() const;
    bool init();
    void initWith(char**, int&);
    void initWith(int);
    void getAttributivaByLv(int);
    int getMaxLv();
    std::string getDesc();
    TalentData();
    ~TalentData();
    undefined4 getDebrisInfo(int);
    void initAttrs();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x60?96 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[96];
};

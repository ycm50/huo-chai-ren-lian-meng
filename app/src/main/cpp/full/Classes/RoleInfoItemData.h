#pragma once
// RoleInfoItemData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class RoleInfoItemData : public cocos2d::CCObject {
public:
    int getStar() const;
    void setStar(int);
    int getPriceType() const;
    void setPriceType(int);
    int getPrice() const;
    void setPrice(int);
    void setHunShi(std::string);
    void setHeroId(std::string);
    void setDes(std::string);
    void setIcon(std::string);
    void setImage(std::string);
    void setName(std::string);
    void setID(std::string);
    ~RoleInfoItemData();
    std::string getID() const;
    std::string getHunShi() const;
    std::string getHeroId() const;
    std::string getDes() const;
    std::string getIcon() const;
    std::string getImage() const;
    std::string getName() const;
    RoleInfoItemData();
    bool init();
    void initWith(char**, int&);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x3c?60 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[60];
};

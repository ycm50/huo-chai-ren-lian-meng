#pragma once
// ChestData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ChestData : public cocos2d::CCObject {
public:
    int getID() const;
    void setID(int);
    int getVirtualType() const;
    void setVirtualType(int);
    int getOnePrice() const;
    void setOnePrice(int);
    int getTenPrice() const;
    void setTenPrice(int);
    int getStar() const;
    void setStar(int);
    void setDes(std::string);
    void setIcon(std::string);
    void setName(std::string);
    std::string getDes() const;
    std::string getIcon() const;
    std::string getName() const;
    bool init();
    int getTotalProbabilityOne();
    int getTotalProbabilityTen();
    undefined4 getOneIDbyRandom(int);
    undefined4 getTenIDbyRandom(int);
    ChestData();
    ~ChestData();
    void initProbability(char**, int&);
    void createProbability();
    void initWith(char**, int&);
    undefined4 getChestDatas();
    void initWith(int);
};

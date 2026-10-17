#pragma once
// BLMissionRewardData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionRewardData : public cocos2d::CCObject {
public:
    int getExp() const;
    void setExp(int);
    long long getCopper() const;
    void setCopper(long long);
    long long getDiamond() const;
    void setDiamond(long long);
    int getProbabily() const;
    void setProbabily(int);
    int getFesitems() const;
    void setFesitems(int);
    int getFesprobability() const;
    void setFesprobability(int);
    void setItems(std::string *);
    void setName(std::string *);
    void setID(std::string *);
    std::string getItems() const;
    std::string getName() const;
    std::string getID() const;
    ~BLMissionRewardData();
    BLMissionRewardData();
    bool init();
    void initItems(std::string&);
    void initWitID(std::string *);
    int * create();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x50?80 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[80];
};

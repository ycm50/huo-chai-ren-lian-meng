#pragma once
// BLMonsterGroupData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMonsterGroupData : public cocos2d::CCObject {
public:
    float getPosX() const;
    void setPosX(float);
    bool getISAppear() const;
    void setISAppear(bool);
    int getOverMonster() const;
    void setOverMonster(int);
    int getType() const;
    void setType(int);
    int getMonsterTotalNum() const;
    void setMonsterTotalNum(int);
    void setID(std::string);
    std::string getID() const;
    bool init();
    ~BLMonsterGroupData();
    BLMonsterGroupData();
    undefined4 getszMonsterData() const;
    int getMonsterID() const;
    void setszMonsterData(std::vector<std::string, std::allocator<std::string>>);
    void setMonsterID(std::vector<std::string, std::allocator<std::string>>);
    void countMonsterNum();
    void setMonsterNum(std::vector<int, std::allocator<int>>);
    void initWith(std::string);
    int getMonsterNum() const;

public:
    /* HW_SIZE_PAD (R94): ?????? 0x50?80 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[80];
};

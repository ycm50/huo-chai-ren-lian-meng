#pragma once
// ArenaPlayerData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ArenaPlayerData : public cocos2d::CCObject {
public:
    int * create();
    int getAttack() const;
    void setAttack(int);
    int getDefense() const;
    void setDefense(int);
    int getLife() const;
    void setLife(int);
    int getCrit() const;
    void setCrit(int);
    ~ArenaPlayerData();
    void setMonsterID(std::string);
    std::string getMonsterID() const;
    ArenaPlayerData();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

#pragma once
// RoleData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class RoleData : public cocos2d::CCObject {
public:
    int * create();
    int getLV() const;
    void setLV(int);
    long getExp() const;
    void setExp(long);
    int getSoul() const;
    void setSoul(int);
    bool getISOwen() const;
    void setISOwen(bool);
    int getStar() const;
    void setStar(int);
    int getSkillQ() const;
    void setSkillQ(int);
    int getSkillW() const;
    void setSkillW(int);
    int getSkillE() const;
    void setSkillE(int);
    int getSkillR() const;
    void setSkillR(int);
    int getRenascenceTime() const;
    void setRenascenceTime(int);
    int getAttackBreakCount() const;
    void setAttackBreakCount(int);
    int getDefenceBreakCount() const;
    void setDefenceBreakCount(int);
    int getBloodBreakCount() const;
    void setBloodBreakCount(int);
    void setRoleID(std::string);
    ~RoleData();
    std::string getRoleID() const;
    RoleData();
    bool init();
    void saveData();
    void getSqlResult(std::string, std::string);
    void updateData(std::string, std::string, std::string);
    void getMaxLv();
    void initWihtID(std::string);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x4c?76 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[76];
};

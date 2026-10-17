#pragma once
// BLAttackHurtData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLAttackHurtData {
public:
    int getValueType() const;
    void setValueType(int);
    int getSkillBase() const;
    void setSkillBase(int);
    int getSkillAdd() const;
    void setSkillAdd(int);
    int getBasePrice() const;
    void setBasePrice(int);
    int getAddPrice() const;
    void setAddPrice(int);
    int getAttackType() const;
    void setAttackType(int);
    float getAttackDistance() const;
    void setAttackDistance(float);
    float getAttackDistanceMin() const;
    void setAttackDistanceMin(float);
    int getUnLockLv() const;
    void setUnLockLv(int);
    float getBaseAttr() const;
    void setBaseAttr(float);
    void setName(std::string);
    void setEffect(std::string);
    void setDes(std::string);
    void setIcon(std::string);
    void setAttackName(std::string);
    void setRoleID(std::string);
    std::string getAttackName() const;
    std::string getName() const;
    std::string getEffect() const;
    std::string getDes() const;
    std::string getIcon() const;
    std::string getRoleID() const;
    void getValueBySkillLV(long, int, float);
    ~BLAttackHurtData();
    int getSkillCDTimes() const;
    int getPercentage() const;
    void setSkillCDTimes(std::vector<float, std::allocator<float>>);
    void setPercentage(std::vector<float, std::allocator<float>>);
    void initWith(char**, int&);
    undefined4 getRoleSkillsData(std::string);
    void initWith(std::string, std::string *);
};

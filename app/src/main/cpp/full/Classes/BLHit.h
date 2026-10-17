#pragma once
// BLHit
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLHit : public cocos2d::CCObject {
public:
    float getHurt() const;
    void setHurt(float);
    int getAttackLV() const;
    void setAttackLV(int);
    int getShakeLV() const;
    void setShakeLV(int);
    BLEffectData* getEffectData() const;
    void setEffectData(BLEffectData*);
    BLBeAttackData* getBeAttackData() const;
    void setBeAttackData(BLBeAttackData*);
    BLHitLevelData* getHitLevelData() const;
    void setHitLevelData(BLHitLevelData*);
    cocos2d::CCObject* getAttackHurtData() const;
    int getType() const;
    void setType(int);
    void setRoleID(std::string);
    void setBeAttackEffect(std::string);
    void setBeAttackName(std::string);
    void setHitName(std::string);
    std::string getRoleID() const;
    std::string getBeAttackEffect() const;
    std::string getBeAttackName() const;
    std::string getHitName() const;
    ~BLHit();
    void setAttackHurtData(cocos2d::CCObject*);
    BLHit();
    bool init();
    void initWith(char**, int&);
    void initWith(std::string, std::string *);
    void setAnimateName(std::string);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x48?72 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[72];
};

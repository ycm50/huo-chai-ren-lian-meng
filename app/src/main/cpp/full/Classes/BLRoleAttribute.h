#pragma once
// BLRoleAttribute
// 基类: BLAttrGroupData
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "BLAttrGroupData.h"


class BLRoleAttribute : public BLAttrGroupData {
public:
    int getLV() const;
    void setLV(int);
    float getMissionModulus() const;
    void setMissionModulus(float);
    BLAttrGroupData* getAttrGroupData() const;
    void setAttrGroupData(BLAttrGroupData*);
    int getAttrAttack() const;
    void setAttrAttack(int);
    int getAttrDefense() const;
    void setAttrDefense(int);
    int getAttrLife() const;
    void setAttrLife(int);
    int getAttrAttackPer() const;
    void setAttrAttackPer(int);
    int getAttrLifePer() const;
    void setAttrLifePer(int);
    int getAttrDefensePer() const;
    void setAttrDefensePer(int);
    int getAttrCrit() const;
    void setAttrCrit(int);
    cocos2d::CCDictionary* getDicBuffs() const;
    void setDicBuffs(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicEqiups() const;
    void setDicEqiups(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicRunes() const;
    void setDicRunes(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicSuits() const;
    void setDicSuits(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicRenascence() const;
    void setDicRenascence(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicImmortals() const;
    void setDicImmortals(cocos2d::CCDictionary*);
    bool getISCrit() const;
    void setISCrit(bool);
    float getAttrCritDamage() const;
    void setAttrCritDamage(float);
    bool getNeedCheckPetShield() const;
    void setNeedCheckPetShield(bool);
    std::string getRoleID() const;
    void setRoleID(std::string *);
    void setLife(long);
    void hurtValueAction(long, bool, bool);
    void usePetShield(long);
    ~BLRoleAttribute();
    BLRoleAttribute();
    long getLife();
    void addEquipAttr(EquipBaseData*);
    void addRuneAttr(EquipBaseData*);
    void addSuitAttr(SuitEquipEquipItemData*);
    undefined4 getFightAttrValueByType(int);
    void hitValue(BLRole*, BLHit*);
    int getAttrValueByType(int);
    void UpdateHeroProperty(int);
    void onLvChange(cocos2d::CCObject*);
    void getEquipAttrValueByType(int);
    void getRuneAttrValueByType(int);
    void getSuitAttrValueByType(int);
    void getRenascenceAttrValueByType(int);
    void getImmortalsAttrValueByType(int);
    void getRoleAttrValueByType(int);
    int getEquipAndRuneAttrValueByType(int);
    void updateBuffStatus(float);
    void addImmortalsAttr(ImmortalsAttr*);
    void beHitedValue(BLRole*, BLHit*);
    void initEquipsAttr();
    void initRunesAttr();
    void initRenascenceAttr();
    void addRenascenceAttr();
    void initSuitAttr();
    void ResetHeroProperty();
    void initImmortalsAttr();
    void initWith(std::string *, std::string *, int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x68?104 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[104];
};

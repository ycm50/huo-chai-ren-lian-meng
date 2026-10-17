#pragma once
// PlayerData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PlayerData : public cocos2d::CCObject {
public:
    int * create();
    RoleData* getRoleData() const;
    void setRoleData(RoleData*);
    RoleInfoItemData* getRoleInfoData() const;
    cocos2d::CCArray* getArrayEquipPage() const;
    void setArrayEquipPage(cocos2d::CCArray*);
    cocos2d::CCArray* getArrayRunePage() const;
    void setArrayRunePage(cocos2d::CCArray*);
    cocos2d::CCArray* getArraySuitPage() const;
    void setArraySuitPage(cocos2d::CCArray*);
    BLRoleAttribute* getRoleAttribute() const;
    void setRoleAttribute(BLRoleAttribute*);
    cocos2d::CCDictionary* getDicSkills() const;
    void setDicSkills(cocos2d::CCDictionary*);
    int getCombat() const;
    void setCombat(int);
    void setAttribute(std::string);
    void setRoleInfoData(RoleInfoItemData*);
    std::string getAttribute() const;
    void onCalculateCombat(cocos2d::CCObject*);
    void initRenascenceData(cocos2d::CCObject*);
    void onLvChange(cocos2d::CCObject*);
    bool init();
    undefined8 onUpdateCombat();
    int getImmortalsData();
    void initRunesData(cocos2d::CCObject*);
    void initEquipsData(cocos2d::CCObject*);
    void initSuitData(cocos2d::CCObject*);
    ~PlayerData();
    PlayerData();
    void initImmortalsData(cocos2d::CCObject*);
    void initWithRoleData(RoleData*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x50?80 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[80];
};

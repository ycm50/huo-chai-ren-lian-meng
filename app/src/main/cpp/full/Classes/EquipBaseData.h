#pragma once
// EquipBaseData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class EquipBaseData : public cocos2d::CCObject {
public:
    int getMainKey() const;
    void setMainKey(int);
    int getID() const;
    void setID(int);
    int getStar() const;
    void setStar(int);
    int getEquipMaxLv() const;
    void setEquipMaxLv(int);
    float getPriceModulus() const;
    void setPriceModulus(float);
    int getBasePrice() const;
    void setBasePrice(int);
    float getCritDamage() const;
    void setCritDamage(float);
    float getCriteadd() const;
    void setCriteadd(float);
    cocos2d::CCDictionary* getDicEquipValues() const;
    void setDicEquipValues(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicEquipValuesAdd() const;
    void setDicEquipValuesAdd(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicEquipValuesType() const;
    void setDicEquipValuesType(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicEquipValuesTotal() const;
    void setDicEquipValuesTotal(cocos2d::CCDictionary*);
    void setValueAdd(std::string);
    void setValue(std::string);
    void setName(std::string);
    ~EquipBaseData();
    std::string getValueAdd() const;
    std::string getValue() const;
    std::string getName() const;
    EquipBaseData();
    bool init();
    void updateAttr(int);
    void initWith(char**, int&);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x50?80 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[80];
};

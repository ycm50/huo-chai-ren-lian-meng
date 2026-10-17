#pragma once
// BLTriggerData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTriggerData : public cocos2d::CCObject {
public:
    int getID() const;
    void setID(int);
    float getPosX() const;
    void setPosX(float);
    bool getISAppear() const;
    void setISAppear(bool);
    cocos2d::CCArray* getArrayMonsterGroup() const;
    void setArrayMonsterGroup(cocos2d::CCArray*);
    bool init();
    ~BLTriggerData();
    void initMonsterGroupData();
    BLTriggerData();
    void initWith(int);
    void setMonsterGroups(std::vector<std::string, std::allocator<std::string>>);
    int getMonsterGroups() const;

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};

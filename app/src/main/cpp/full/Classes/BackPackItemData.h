#pragma once
// BackPackItemData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BackPackItemData : public cocos2d::CCObject {
public:
    int * create();
    int getMainKey() const;
    void setMainKey(int);
    int getItemID() const;
    void setItemID(int);
    int getItemNum() const;
    void setItemNum(int);
    int getLV() const;
    void setLV(int);
    int getEquipIndex() const;
    void setEquipIndex(int);
    int getUpGraceTime() const;
    void setUpGraceTime(int);
    void setRoleID(std::string);
    ~BackPackItemData();
    std::string getRoleID() const;
    BackPackItemData();
    bool init();
    void initWith(char**, int&);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};

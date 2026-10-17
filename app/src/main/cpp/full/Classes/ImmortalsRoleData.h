#pragma once
// ImmortalsRoleData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ImmortalsRoleData {
public:
    void getAllData();
    undefined4 getSellPrice(ImmortalsRoleItemData*);
    void upgrace(ImmortalsRoleItemData*);
    void refine(ImmortalsRoleItemData*);
    ~ImmortalsRoleData();
    void initData();
    ImmortalsRoleData();
    void removeItem(ImmortalsRoleItemData*);
    int sortItems();
    void insertItemData(ImmortalsInfoItemData*, int, std::string);
    void addItem(ImmortalsInfoItemData*, int, std::string);
    void addItem(ItemData*, int, std::string);
    void unEquip(ImmortalsRoleItemData*);
    void unEquip(CommonUseData*);
    void equip(ImmortalsRoleItemData*, std::string, int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

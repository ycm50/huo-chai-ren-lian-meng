#pragma once
// BackPackData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BackPackData : public cocos2d::CCObject {
public:
    cocos2d::CCDictionary* getDicPackItems() const;
    void setDicPackItems(cocos2d::CCDictionary*);
    ~BackPackData();
    BackPackData();
    bool init();
    void removeItemWithMainKey(int);
    undefined4 sortByLv(cocos2d::CCArray*);
    undefined4 sortByOrder(cocos2d::CCArray*);
    void sortByOrderInDesc(cocos2d::CCArray*);
    undefined4 sortByQuity(cocos2d::CCArray*);
    undefined4 sortItems();
    void removeItem(BackPackItemData*);
    void upgraceEquip(BackPackItemData*);
    void updateUpGraceTime(BackPackItemData*, int);
    undefined4 getItemDataForCost(ItemData*);
    void getSuitItemData(SuitEquipUserItemData*, std::string *);
    undefined4 getItemData(ItemData*);
    int * insertItemData(ItemData*);
    void equip(BackPackItemData*, std::string *, int);
    void addItemData(ItemData*, bool, int);
    void addItemData(ItemData*, bool);
    void compose(int, BackPackItemData*);
    void debrisCompose(DebrisComposeData*, BackPackItemData*);
    void debrisCompose(DebrisComposeData*, CommonUseData*);
    void unEquip(BackPackItemData*);
    undefined8 unEquip(CommonUseData*);
    void unEquipWithoutNotice(BackPackItemData*);
    void addItemDataWithMainKey(ItemData*, int);
    void arrangeItems();
    void addItemDataChestFestival(ItemData*, int, bool);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x18?24 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[24];
};

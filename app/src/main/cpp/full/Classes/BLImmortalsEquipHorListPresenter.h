#pragma once
// BLImmortalsEquipHorListPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLImmortalsEquipHorListPresenter : public cocos2d::CCObject {
public:
    undefined4 numOfCellItem(BLTableView*);
    ~BLImmortalsEquipHorListPresenter();
    undefined4 sizeOfCellItem(BLTableView*);
    void onUpdateIndex(cocos2d::CCObject*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    BLImmortalsEquipHorListPresenter();
    undefined4 create();
    void initWithView(BLImmortalsEquipHorListView*);
    void onEnter();
    void onExit();
    void updateWithData(PlayerData*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

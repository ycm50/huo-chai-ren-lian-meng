#pragma once
// BLImmortalsInfoPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLImmortalsInfoPresenter : public cocos2d::CCObject {
public:
    void tick(float);
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    ~BLImmortalsInfoPresenter();
    int numOfCellItem(BLTableView*);
    undefined4 sizeOfCellItem(BLTableView*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    BLImmortalsInfoPresenter();
    void onEnter();
    void onExit();
    void resetUI();
    void setPlayer(PlayerData*);
    void setPlayer(int);
    void initWithViewRole(BLImmortalsInfoView*, std::string *);
    void createWithRole(BLImmortalsInfoView*, std::string *);
    undefined8 onRoleSelect(cocos2d::CCObject*);
    void onRefreshUI(cocos2d::CCObject*);
    void onEquipClick(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

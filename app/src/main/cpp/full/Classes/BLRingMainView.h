#pragma once
// BLRingMainView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLRingMainView : public cocos2d::CCLayer {
public:
    cocos2d::CCArray* getArraySel() const;
    void setArraySel(cocos2d::CCArray*);
    cocos2d::CCArray* getArrayItem() const;
    void setArrayItem(cocos2d::CCArray*);
    void keyBackClicked();
    ~BLRingMainView();
    void onUpdateVirtualItemData(cocos2d::CCObject*);
    BLRingMainView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnClose();
    undefined4 getBtnHelp();
    undefined4 getLabVs();
    undefined4 getLabRefresh();
    undefined4 getBtnShare();
    undefined4 getBtnChangeHero();
    undefined4 getBtnRecords();
    undefined4 getBtnStart();
    undefined4 getBtnRefresh();
    undefined4 getTableView();
    undefined4 getBtnUser();
    undefined4 getBtnReward();
    undefined4 getBtnHeroRank();
    undefined4 getBtnShop();
    undefined4 getLabeUserName();
    undefined4 getLabeForce();
    undefined4 getLabelBMRank();
    undefined4 getbgJiFen();
    undefined4 getLabeAre();
    undefined4 getBtnAddCiShu();
    undefined4 getLabeCount();
    undefined4 getSpJifen();
    undefined4 getLabRecommand();
    undefined4 getVirtualItemDiamond();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x18c?396 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[396];
};

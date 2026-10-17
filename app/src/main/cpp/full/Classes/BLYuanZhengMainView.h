#pragma once
// BLYuanZhengMainView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLYuanZhengMainView : public cocos2d::CCLayer {
public:
    cocos2d::CCSprite* getSpPaoChe() const;
    void setSpPaoChe(cocos2d::CCSprite*);
    cocos2d::CCSprite* getSpPaoCheTX() const;
    void setSpPaoCheTX(cocos2d::CCSprite*);
    BLVirtualItemView* getVirtualItemDiamond() const;
    void setVirtualItemDiamond(BLVirtualItemView*);
    ~BLYuanZhengMainView();
    BLYuanZhengMainView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnAddCount();
    undefined4 getBtnClose();
    undefined4 getBtnRest();
    undefined4 getBtnSearch();
    undefined4 getBtnXiJi();
    undefined4 getBtnZhanChe();
    undefined4 getBtnZhanChePeiZhi();
    undefined4 getLabelAddCounter();
    undefined4 getLabelattrack();
    undefined4 getLabelblood();
    undefined4 getLabeldefence();
    undefined4 getLabelHeroBattle();
    undefined4 getLabelMonsterattrack();
    undefined4 getLabelMonsterBattle();
    undefined4 getLabelMonsterdefence();
    undefined4 getLabelMonsterDrop();
    undefined4 getLabelMonsterlevel();
    undefined4 getLabelMonsterspeed();
    undefined4 getLabelRank();
    undefined4 getLabelspeed();
    undefined4 getLabelTip();
    undefined4 getLabelMonsterblood();
    undefined4 getLabelName();
    undefined4 getSpMonster();
    undefined4 getBtnAbout();
    undefined4 getTableView();
    undefined4 getSpsearchBg();
    undefined4 getSpxijitbg();
    undefined4 getSpserach();
    undefined4 getSpZhanChe();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x194?404 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[404];
};

#pragma once
// BLMissionBuyRoleView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionBuyRoleView : public cocos2d::CCLayer {
public:
    ~BLMissionBuyRoleView();
    BLMissionBuyRoleView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 getSprBg();
    undefined4 getbtnRight();
    undefined4 getBtnLeft();
    undefined4 getTableViewRoles();
    undefined4 getTabBg();
    undefined4 getLabTitle();
    undefined4 getBtnClose();
    undefined4 getLabPlayTitle();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x134?308 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[308];
};

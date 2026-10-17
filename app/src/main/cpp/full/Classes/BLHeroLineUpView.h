#pragma once
// BLHeroLineUpView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLHeroLineUpView : public cocos2d::CCLayer {
public:
    ~BLHeroLineUpView();
    BLHeroLineUpView();
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
    undefined4 getLabRoleLimit();
    undefined4 getBtnCancle();
    undefined4 getLabCancle();
    undefined4 getBtnSure();
    undefined4 getLabSure();
    undefined4 getLabPlayTitle();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x148?328 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[328];
};

#pragma once
// BLMainAccoutView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMainAccoutView : public cocos2d::CCLayer {
public:
    ~BLMainAccoutView();
    BLMainAccoutView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnZhuCeAccout();
    undefined4 getBtnLogin();
    undefined4 getBtnJieShao();
    undefined4 getBtnClose();
    undefined4 getBackGround();
    undefined4 getTabBg();
    undefined4 getLabTitle();
    undefined4 getLabZhuCeAccount();
    undefined4 getLabLogin();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x138?312 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[312];
};

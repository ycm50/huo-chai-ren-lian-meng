#pragma once
// BLShareView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLShareView : public cocos2d::CCLayer {
public:
    ~BLShareView();
    BLShareView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnClose();
    undefined4 getLabForce();
    undefined4 getLabRank();
    undefined4 getLabName();
    undefined4 getBtnShare();
    undefined4 getLabShare();
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x130?304 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[304];
};

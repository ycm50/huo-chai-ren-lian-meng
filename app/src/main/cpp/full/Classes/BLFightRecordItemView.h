#pragma once
// BLFightRecordItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLFightRecordItemView : public cocos2d::CCLayer {
public:
    ~BLFightRecordItemView();
    BLFightRecordItemView();
    int * create();
    undefined4 getPreasenter();
    undefined4 getBtnVideo();
    undefined4 getLab();
    undefined4 getLabEnemy();
    undefined4 getLabRank();
    undefined4 getBtnFuChou();
    undefined4 getSprLine();
    void updateData(bool, bool);
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x130?304 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[304];
};

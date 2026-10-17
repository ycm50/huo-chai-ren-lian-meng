#pragma once
// ZhaoMuOnceView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ZhaoMuOnceView : public cocos2d::CCLayer {
public:
    int * create();
    ~ZhaoMuOnceView();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onGetDataFinal();
    ZhaoMuOnceView();
    void getRewardData(int);
    void onNextOnce(cocos2d::CCObject*, unsigned int);
    void addItem();
    void initWiew();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x10c?268 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[268];
};

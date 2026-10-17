#pragma once
// BLRenascenceSuccessPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLRenascenceSuccessPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLRenascenceSuccessPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onSure(cocos2d::CCObject*, unsigned int);
    BLRenascenceSuccessPresenter();
    undefined4 create();
    void initWithView(BLRenascenceSuccessView*);
    void onEnter();
    void onExit();
    void updateWithData(PlayerData*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

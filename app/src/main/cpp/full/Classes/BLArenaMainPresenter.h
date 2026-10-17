#pragma once
// BLArenaMainPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLArenaMainPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLArenaMainPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onLeiTaiSaiWithoutRefresh();
    void onLeiTaiSai();
    void onUpdateJiFen(cocos2d::CCObject*);
    BLArenaMainPresenter();
    undefined4 create(BLArenaMainView*);
    void onExit();
    void onEnter();
    void initWithView(BLArenaMainView*);
    void onGetShopInfoSuccess();
    int getHeroCount();
    void onShop(cocos2d::CCObject*, unsigned int);
    void onClick(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

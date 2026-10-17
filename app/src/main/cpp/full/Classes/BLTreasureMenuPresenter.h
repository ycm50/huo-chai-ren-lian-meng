#pragma once
// BLTreasureMenuPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTreasureMenuPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLTreasureMenuPresenter();
    void onRecieve(cocos2d::CCObject*, unsigned int);
    void onHeroinfo(cocos2d::CCObject*, unsigned int);
    void updateHeroinfo(cocos2d::CCObject*);
    void updateRecieve(cocos2d::CCObject*);
    void updateVirtualData(cocos2d::CCObject*);
    void onAbout(cocos2d::CCObject*, unsigned int);
    void onClose(cocos2d::CCObject*, unsigned int);
    BLTreasureMenuPresenter();
    undefined4 create();
    void initWithView(BLTreasureMenuView*);
    void onEnter();
    void onExit();
    void initWithData();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

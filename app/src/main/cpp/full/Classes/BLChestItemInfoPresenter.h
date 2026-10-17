#pragma once
// BLChestItemInfoPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLChestItemInfoPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLChestItemInfoPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    BLChestItemInfoPresenter();
    undefined4 create(BLChestItemInfoView*);
    void onExit();
    void onEnter();
    void initWithView(BLChestItemInfoView*);
    void onObtain(cocos2d::CCObject*, unsigned int);
    void initEquipData(BackPackItemData*);
    void initPackItemData(BackPackItemData*);
    void initWithItemData(BackPackItemData*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

#pragma once
// BLEquipRuneItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLEquipRuneItemPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLEquipRuneItemPresenter();
    BLEquipRuneItemPresenter();
    void onEnter();
    void onExit();
    undefined4 create();
    void initWithView(BLEquipRuneItemView*);
    void equip();
    void unEquip();
    void onEquip(cocos2d::CCObject*, unsigned int);
    void tick(float);
    void onCompose();
    void onEquipChange(cocos2d::CCObject*);
    void initWithData(BackPackItemData*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

#pragma once
// BLSuitItemDataInfoPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSuitItemDataInfoPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLSuitItemDataInfoPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onUnEquip(cocos2d::CCObject*, unsigned int);
    BLSuitItemDataInfoPresenter();
    undefined4 create(BLSuitItemDataInfoView*);
    void onExit();
    void onEnter();
    void initWithView(BLSuitItemDataInfoView*);
    void initPackItemData(SuitEquipEquipItemData*, BackPackItemData*);
    void initWithItemData(SuitEquipEquipItemData*, int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

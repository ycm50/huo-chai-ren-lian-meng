#pragma once
// BLItemDataInfoPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLItemDataInfoPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    void onUnEquip(cocos2d::CCObject*, unsigned int);
    ~BLItemDataInfoPresenter();
    void onExit();
    void onEnter();
    void initWithView(BLItemDataInfoView*);
    void initEquipData(BackPackItemData*);
    void initWithItemData(BackPackItemData*);
    void initWithCommonData(CommonUseData*);
    void initPackItemData(BackPackItemData*);
    void initEquipData(CommonUseData*);
    BLItemDataInfoPresenter();
    undefined4 create(BLItemDataInfoView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

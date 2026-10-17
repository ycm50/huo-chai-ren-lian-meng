#pragma once
// BLMissionMirrorRoleItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionMirrorRoleItemPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLMissionMirrorRoleItemPresenter();
    void onClick(cocos2d::CCObject*, unsigned int);
    void onUpdateSelect(cocos2d::CCObject*);
    void onBuyRoleClick(cocos2d::CCObject*);
    undefined8 onShowBuyYi();
    BLMissionMirrorRoleItemPresenter();
    undefined4 create();
    void initWithView(BLMissionMirrorRoleItemView*);
    void onEnter();
    void onExit();
    void updateView();
    void updateWithData(MirrorRoleItemData*);
    void onBuyYiComplete(cocos2d::CCObject*);
    void buyRole();
    void onBuyDiamondComplete(cocos2d::CCObject*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

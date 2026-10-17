#pragma once
// BLMissionSelectRoleItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionSelectRoleItemPresenter : public cocos2d::CCObject {
public:
    RoleData* getRoleData() const;
    RoleInfoItemData* getRoleInfoData() const;
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLMissionSelectRoleItemPresenter();
    void setRoleInfoData(RoleInfoItemData*);
    void setRoleData(RoleData*);
    undefined8 onShowBuyYi();
    void onBuyRoleClick(cocos2d::CCObject*);
    BLMissionSelectRoleItemPresenter();
    undefined4 create(BLMissionSelectRoleItemView*);
    void onExit();
    void onEnter();
    void initWithView(BLMissionSelectRoleItemView*);
    void on(cocos2d::CCObject*, unsigned int);
    void onBuyDiamondComplete(cocos2d::CCObject*);
    void selectRole();
    void selectBuyRole();
    void updateData();
    void onBuyYiComplete(cocos2d::CCObject*);
    void initWithPlayerData(PlayerData*);
    void initWithRoleData(RoleData*);
    void initWithMoneyTreePlayerDate(RoleData*);
    void buyRole();
    void onRole(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

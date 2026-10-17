#pragma once
// BLMineCollectHeroItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMineCollectHeroItemPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    RoleData* getRoleData() const;
    RoleInfoItemData* getRoleInfoData() const;
    void tick(float);
    ~BLMineCollectHeroItemPresenter();
    void setRoleInfoData(RoleInfoItemData*);
    void setRoleData(RoleData*);
    undefined8 onShowBuyYi();
    void onBuyRoleClick(cocos2d::CCObject*);
    BLMineCollectHeroItemPresenter();
    void onEnter();
    void onExit();
    undefined4 create(BLMineCollectHeroItemView*);
    void initWithView(BLMineCollectHeroItemView*);
    void onBuyDiamondComplete(cocos2d::CCObject*);
    void buyRole();
    void selectRole();
    void onRole(cocos2d::CCObject*, unsigned int);
    void updateData();
    void initWithPlayerData(PlayerData*);
    void initWithRoleData(RoleData*);
    void onBuyYiComplete(cocos2d::CCObject*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

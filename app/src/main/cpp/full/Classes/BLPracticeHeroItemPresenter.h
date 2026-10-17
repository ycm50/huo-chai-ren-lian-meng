#pragma once
// BLPracticeHeroItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLPracticeHeroItemPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    RoleData* getRoleData() const;
    RoleInfoItemData* getRoleInfoData() const;
    void tick(float);
    ~BLPracticeHeroItemPresenter();
    void setRoleInfoData(RoleInfoItemData*);
    void setRoleData(RoleData*);
    void onBuyYiComplete(cocos2d::CCObject*);
    undefined8 onShowBuyYi();
    void onBuyRoleClick(cocos2d::CCObject*);
    BLPracticeHeroItemPresenter();
    void onEnter();
    void onExit();
    undefined4 create(BLPracticeHeroItemView*);
    void initWithView(BLPracticeHeroItemView*);
    void onBuyDiamondComplete(cocos2d::CCObject*);
    void buyRole();
    void initWithPlayerData(PlayerData*);
    void initWithRoleData(RoleData*);
    void selectRole();
    void onRole(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

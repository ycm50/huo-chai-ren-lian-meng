#pragma once
// BLTreasureRoleItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTreasureRoleItemPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    RoleData* getRoleData() const;
    RoleInfoItemData* getRoleInfoData() const;
    void tick(float);
    void onRole(cocos2d::CCObject*, unsigned int);
    ~BLTreasureRoleItemPresenter();
    void setRoleInfoData(RoleInfoItemData*);
    void setRoleData(RoleData*);
    BLTreasureRoleItemPresenter();
    void onEnter();
    void onExit();
    undefined4 create(BLTreasureRoleItemView*);
    void initWithView(BLTreasureRoleItemView*);
    void updateData();
    void initWithRoleData(RoleData*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

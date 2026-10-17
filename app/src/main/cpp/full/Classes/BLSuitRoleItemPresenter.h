#pragma once
// BLSuitRoleItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSuitRoleItemPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    RoleData* getRoleData() const;
    void setRoleData(RoleData*);
    void tick(float);
    void onChangeRole(cocos2d::CCObject*);
    ~BLSuitRoleItemPresenter();
    BLSuitRoleItemPresenter();
    undefined4 create(BLSuitRoleItemView*);
    void onExit();
    void onEnter();
    void initWithView(BLSuitRoleItemView*);
    void initWithData(RoleInfoItemData*, RoleData*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

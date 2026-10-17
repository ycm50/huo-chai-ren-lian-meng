#pragma once
// BLMissionSelectRolePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionSelectRolePresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onRight(cocos2d::CCObject*, unsigned int);
    void onLeft(cocos2d::CCObject*, unsigned int);
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void tick(float);
    ~BLMissionSelectRolePresenter();
    void numOfCellItem(BLTableView*);
    undefined4 sizeOfCellItem(BLTableView*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    BLMissionSelectRolePresenter();
    undefined4 create(BLMissionSelectRoleView*);
    void onExit();
    void onEnter();
    void updateData(cocos2d::CCObject*);
    void updateSelecetData();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onCancle(cocos2d::CCObject*, unsigned int);
    void onSure(cocos2d::CCObject*, unsigned int);
    void initRolesData();
    void initWithView(BLMissionSelectRoleView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

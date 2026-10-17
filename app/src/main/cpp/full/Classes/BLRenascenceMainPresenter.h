#pragma once
// BLRenascenceMainPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLRenascenceMainPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLRenascenceMainPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onAbout(cocos2d::CCObject*, unsigned int);
    BLRenascenceMainPresenter();
    undefined4 create();
    void initWithView(BLRenascenceMainView*);
    void onExit();
    void updateWithData(std::string);
    void onEnter();
    void onUpdateRoleData(cocos2d::CCObject*);
    void onRefreshRoleData();
    int checkIsReachTarget();
    void renascenceConsumeItemData();
    void onRenascence(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

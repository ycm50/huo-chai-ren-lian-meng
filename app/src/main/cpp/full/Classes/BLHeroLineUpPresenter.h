#pragma once
// BLHeroLineUpPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLHeroLineUpPresenter : public cocos2d::CCObject {
public:
    void tick(float);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void onRight(cocos2d::CCObject*, unsigned int);
    void onLeft(cocos2d::CCObject*, unsigned int);
    ~BLHeroLineUpPresenter();
    void numOfCellItem(BLTableView*);
    undefined4 sizeOfCellItem(BLTableView*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void onClose(cocos2d::CCObject*, unsigned int);
    void onCancle(cocos2d::CCObject*, unsigned int);
    void onSure(cocos2d::CCObject*, unsigned int);
    BLHeroLineUpPresenter();
    void onEnter();
    void onExit();
    undefined4 create(BLHeroLineUpView*);
    void initRolesData();
    void updateData(cocos2d::CCObject*);
    void initWithView(BLHeroLineUpView*);
    void updateSelecetData();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

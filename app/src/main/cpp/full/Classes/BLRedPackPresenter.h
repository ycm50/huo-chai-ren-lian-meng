#pragma once
// BLRedPackPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLRedPackPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void tick(float);
    ~BLRedPackPresenter();
    undefined4 sizeOfCellItem(BLTableView*);
    void onClose(cocos2d::CCObject*, unsigned int);
    void onOpenLuckShop();
    BLRedPackPresenter();
    undefined4 create(BLRedPackView*);
    void onEnter();
    void onExit();
    undefined4 numOfCellItem(BLTableView*);
    void initView();
    undefined4 initWithView(BLRedPackView*);
    void onRed1(cocos2d::CCObject*, unsigned int);
    void onRed2(cocos2d::CCObject*, unsigned int);
    void onOpenRedPack();
    void onNoOpenRedPack();
    void onUpdateLuckFen();
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void onShop(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

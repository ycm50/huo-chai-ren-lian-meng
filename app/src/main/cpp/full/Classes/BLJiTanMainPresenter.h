#pragma once
// BLJiTanMainPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLJiTanMainPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void tick(float);
    ~BLJiTanMainPresenter();
    void updateBtnZhaoMuOne();
    undefined4 sizeOfCellItem(BLTableView*);
    void onClose(cocos2d::CCObject*, unsigned int);
    void onBuyHero(cocos2d::CCObject*, unsigned int);
    void onHelp(cocos2d::CCObject*, unsigned int);
    void onZhaoMuTen(cocos2d::CCObject*, unsigned int);
    void onZhaoMuFree(cocos2d::CCObject*, unsigned int);
    void onZhaoMuOne(cocos2d::CCObject*, unsigned int);
    BLJiTanMainPresenter();
    undefined4 create(BLJiTanMainView*);
    void onExit();
    void onEnter();
    void initWithView(BLJiTanMainView*);
    int numOfCellItem(BLTableView*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void updateHuoYanNum(cocos2d::CCObject*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};

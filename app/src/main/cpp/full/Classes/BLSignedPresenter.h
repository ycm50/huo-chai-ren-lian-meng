#pragma once
// BLSignedPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSignedPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    undefined4 numOfCellItem(BLTableView*);
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void tick(float);
    ~BLSignedPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onAbout(cocos2d::CCObject*, unsigned int);
    undefined4 sizeOfCellItem(BLTableView*);
    BLSignedPresenter();
    undefined4 create(BLSignedView*);
    void onExit();
    void onEnter();
    undefined4 initWithView(BLSignedView*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

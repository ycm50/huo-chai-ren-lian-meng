#pragma once
// BLSuitPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSuitPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    int getCurrentIndex() const;
    void setCurrentIndex(int);
    void tick(float);
    ~BLSuitPresenter();
    void numOfCellItem(BLTableView*);
    undefined4 sizeOfCellItem(BLTableView*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void onClose(cocos2d::CCObject*, unsigned int);
    void listButtonClickAtIndex(BLListButton*, int);
    void onAbout(cocos2d::CCObject*, unsigned int);
    BLSuitPresenter();
    undefined4 create(BLSuitView*);
    void onExit();
    void onEnter();
    void updateRoleDataAtIndex(int);
    undefined4 initWithView(BLSuitView*);
    void updateRoleDataUpGrace(int);
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void updateUpGraceData();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};

#pragma once
// BLEquipPagePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLEquipPagePresenter : public cocos2d::CCObject {
public:
    int getPageIndex() const;
    void setPageIndex(int);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    undefined4 numOfColumn(BLGridView*);
    undefined4 numOfRow(BLGridView*);
    void tick(float);
    void setRoleID(std::string);
    ~BLEquipPagePresenter();
    undefined4 sizeOfGridItem(BLGridView*);
    void nodeOfGridViewAtIndex(BLGridView*, cocos2d::CCNode*, int);
    void touchItemAtIndex(BLGridView*, cocos2d::CCNode*, int);
    std::string getRoleID() const;
    BLEquipPagePresenter();
    undefined4 create(BLEquipPageView*);
    void onExit();
    void onEnter();
    void initWithView(BLEquipPageView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};

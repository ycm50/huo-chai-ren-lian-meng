#pragma once
// BLEquipListPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLEquipListPresenter : public cocos2d::CCObject {
public:
    int getIndex() const;
    void setIndex(int);
    cocos2d::CCArray* getArrayBackItems() const;
    void setArrayBackItems(cocos2d::CCArray*);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void touchItemAtIndex(BLTableView*, int);
    void tick(float);
    ~BLEquipListPresenter();
    void numOfCellItem(BLTableView*);
    undefined4 sizeOfCellItem(BLTableView*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    BLEquipListPresenter();
    undefined4 create(BLEquipListView*);
    void onExit();
    void onEnter();
    void initWithView(BLEquipListView*);
    void updateTitle();
    undefined8 initEuiqpList();
    undefined8 initRuneList();
    void initUpgraceList();
    void initSkillList();
    void initPageIndex(int);
    void onPageChange(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};

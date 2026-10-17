#pragma once
// JingJiShopPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class JingJiShopPresenter : public cocos2d::CCObject {
public:
    void scrollViewDidZoom(cocos2d::extension::CCScrollView*);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    undefined4 numOfRow(BLGridView*);
    ~JingJiShopPresenter();
    void onListenBuyId(cocos2d::CCObject*);
    undefined4 sizeOfGridItem(BLGridView*);
    void onClose(cocos2d::CCObject*, unsigned int);
    void onRefreshImg();
    void onUpdateJiFen(cocos2d::CCObject*);
    JingJiShopPresenter();
    void onEnter();
    void onExit();
    undefined4 create();
    void sortJingJiShopData();
    undefined4 initWithView(JingJiShopView*);
    void listButtonClickAtIndex(BLListButton*, int);
    void tick(float);
    void addItems(std::vector<int, std::allocator<int>> *);
    void touchItemAtIndex(BLGridView*, cocos2d::CCNode*, int);
    undefined4 numOfColumn(BLGridView*);
    void nodeOfGridViewAtIndex(BLGridView*, cocos2d::CCNode*, int);
    void scrollViewDidScroll(cocos2d::extension::CCScrollView*);
    void onBuySuccess();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x38?56 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[56];
};

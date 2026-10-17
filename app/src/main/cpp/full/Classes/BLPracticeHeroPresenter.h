#pragma once
// BLPracticeHeroPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLPracticeHeroPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    ~BLPracticeHeroPresenter();
    void sizeOfCellItem(BLTableView*);
    void onClose(cocos2d::CCObject*, unsigned int);
    void onCancle(cocos2d::CCObject*, unsigned int);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    BLPracticeHeroPresenter();
    void onEnter();
    void onExit();
    undefined4 create(BLPracticeHeroView*);
    void updateSelecetData();
    int numOfCellItem(BLTableView*);
    void onSure(cocos2d::CCObject*, unsigned int);
    void onPracticeSelHero();
    void onPracticeSelTime();
    void onPracticeUpdateExpView();
    void initRolesData();
    undefined4 initWithView(BLPracticeHeroView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

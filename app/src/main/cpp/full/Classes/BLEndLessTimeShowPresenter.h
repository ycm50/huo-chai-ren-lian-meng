#pragma once
// BLEndLessTimeShowPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLEndLessTimeShowPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLEndLessTimeShowPresenter();
    void updateBtnZheDieShow();
    void onBack(cocos2d::CCObject*, unsigned int);
    BLEndLessTimeShowPresenter();
    undefined4 create(BLEndLessTimeShowView*);
    void onEnter();
    void onExit();
    void funHide();
    void funShow();
    void onZheDie(cocos2d::CCObject*, unsigned int);
    void addItem(std::vector<int, std::allocator<int>> *);
    void updateReward(int);
    void initWithView(BLEndLessTimeShowView*);
    void showUpdateEndlessInfo(cocos2d::CCObject*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

#pragma once
// BLMainAddPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMainAddPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLMainAddPresenter();
    BLMainAddPresenter();
    undefined4 create(BLMainAddView*);
    void onExit();
    void onEnter();
    undefined4 initWithView(BLMainAddView*);
    void onGiftChangWan(cocos2d::CCObject*, unsigned int);
    void addItem(std::vector<int, std::allocator<int>> *);
    void onGiftZhuanShu(cocos2d::CCObject*, unsigned int);
    void onGiftChangWanHide();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

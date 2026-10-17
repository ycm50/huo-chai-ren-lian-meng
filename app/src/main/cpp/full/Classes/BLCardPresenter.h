#pragma once
// BLCardPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLCardPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLCardPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    BLCardPresenter();
    undefined4 create(BLCardView*);
    void onEnter();
    void onExit();
    void showView();
    void addItem(std::vector<int, std::allocator<int>> *);
    undefined4 initWithView(BLCardView*);
    void onChangeView(cocos2d::CCObject*);
    void onJiHuo(cocos2d::CCObject*, unsigned int);
    void onChargeComplete(cocos2d::CCObject*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

#pragma once
// BLExpDanPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLExpDanPresenter : public cocos2d::CCObject {
public:
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLExpDanPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    BLExpDanPresenter();
    undefined4 create(BLExpDanView*);
    void onExit();
    void onEnter();
    void getRect(cocos2d::CCObject*);
    void isInside(cocos2d::extension::CCScale9Sprite*, float, float);
    undefined4 initWithView(BLExpDanView*);
    void onUse(cocos2d::CCObject*, unsigned int);
    void updateNum();
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onMax(cocos2d::CCObject*, unsigned int);
    void onReduce(cocos2d::CCObject*, unsigned int);
    void onAdd(cocos2d::CCObject*, unsigned int);
    void updateItem(cocos2d::CCObject*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

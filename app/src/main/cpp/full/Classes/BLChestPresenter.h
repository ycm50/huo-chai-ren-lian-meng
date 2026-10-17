#pragma once
// BLChestPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLChestPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    undefined4 numOfPages(BLPageLayer*);
    void tick(float);
    ~BLChestPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    void nodeOfPageAtIndex(BLPageLayer*, int);
    void pageChange(BLPageLayer*, int);
    BLChestPresenter();
    undefined4 create(BLChestView*);
    void onExit();
    void onEnter();
    undefined4 initWithView(BLChestView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

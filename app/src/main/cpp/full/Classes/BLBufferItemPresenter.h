#pragma once
// BLBufferItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLBufferItemPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLBufferItemPresenter();
    void onUpdateBuffLayer(cocos2d::CCObject*);
    BLBufferItemPresenter();
    undefined4 create(BLBufferItemView*);
    void onExit();
    void onEnter();
    void initWithView(BLBufferItemView*);
    void onAttrack(cocos2d::CCObject*, unsigned int);
    void onDefense(cocos2d::CCObject*, unsigned int);
    void onLife(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

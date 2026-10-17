#pragma once
// PKRankItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PKRankItemPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    void onTip(cocos2d::CCObject*, unsigned int);
    void onEnter();
    void onExit();
    undefined4 initWithView(PKRankItemView*);
    void updateData();
    void onDraw(cocos2d::CCObject*, unsigned int);
    void onHttpDraw(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    PKRankItemPresenter();
    undefined4 create(PKRankItemView*);
    ~PKRankItemPresenter();
    void refreshDrawStatus(cocos2d::CCObject*);
    void initWith(PKAwardData *);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x44?68 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[68];
};

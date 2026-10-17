#pragma once
// BLPoPSalePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLPoPSalePresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    void setStrPayName(std::string);
    ~BLPoPSalePresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    std::string getStrPayName() const;
    undefined8 onPage1(cocos2d::CCObject*, unsigned int);
    undefined8 onPage2(cocos2d::CCObject*, unsigned int);
    BLPoPSalePresenter();
    undefined4 create(BLPoPSaleView*);
    undefined4 initWithView(BLPoPSaleView*);
    void initWithData(std::string);
    void onExit();
    void onEnter();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

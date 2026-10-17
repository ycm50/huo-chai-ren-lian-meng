#pragma once
// PagedScrollView
// 基类: cocos2d::extension::CCScrollView
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PagedScrollView : public cocos2d::extension::CCScrollView {
public:
    void timer(float);
    ~PagedScrollView();
    PagedScrollView();
    void create(cocos2d::CCSize const&, float);
    void enablejiantou(std::string const&);
    void updateOffsetPos(cocos2d::CCObject*);
    void updateOffset();
    void enableIndicator(std::string const&, std::string const&, int);
    void onEnter();
    void onExit();
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1b4?436 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[436];
};

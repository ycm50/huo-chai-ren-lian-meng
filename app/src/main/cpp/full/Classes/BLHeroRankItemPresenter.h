#pragma once
// BLHeroRankItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLHeroRankItemPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    void onGetInfo(cocos2d::CCObject*, unsigned int);
    ~BLHeroRankItemPresenter();
    BLHeroRankItemPresenter();
    undefined4 create(BLHeroRankItemView*);
    void onEnter();
    void onExit();
    void initWithView(BLHeroRankItemView*);
    void updateData(int);
    void initwith(CircusPlayerinfo const&, int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x78?120 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[120];
};

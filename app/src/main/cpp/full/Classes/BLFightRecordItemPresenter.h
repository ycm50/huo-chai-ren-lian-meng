#pragma once
// BLFightRecordItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLFightRecordItemPresenter : public cocos2d::CCObject {
public:
    int getIndex() const;
    void setIndex(int);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLFightRecordItemPresenter();
    void onVideo(cocos2d::CCObject*, unsigned int);
    BLFightRecordItemPresenter();
    void onEnter();
    void onExit();
    undefined4 create(BLFightRecordItemView*);
    void initWithView(BLFightRecordItemView*);
    void initWith(pvpSimplePlayerinfo const&);
    void onFuChou(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

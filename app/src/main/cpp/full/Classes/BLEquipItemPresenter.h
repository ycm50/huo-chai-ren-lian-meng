#pragma once
// BLEquipItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLEquipItemPresenter : public cocos2d::CCObject {
public:
    int getCurrentPage() const;
    void setCurrentPage(int);
    int getIndex() const;
    void setIndex(int);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLEquipItemPresenter();
    BLEquipItemPresenter();
    undefined4 create(BLEquipItemView*);
    void onExit();
    void onEnter();
    void initWithView(BLEquipItemView*);
    void updateData(cocos2d::CCObject*);
    void initWith(int, int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

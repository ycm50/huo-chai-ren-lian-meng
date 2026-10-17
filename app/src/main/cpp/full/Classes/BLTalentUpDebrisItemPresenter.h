#pragma once
// BLTalentUpDebrisItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTalentUpDebrisItemPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLTalentUpDebrisItemPresenter();
    void onBtn(cocos2d::CCObject*, unsigned int);
    BLTalentUpDebrisItemPresenter();
    undefined4 create();
    void initWithView(BLTalentUpDebrisItemView*);
    void initWithData(int, int);
    void onEnter();
    void onExit();
    undefined1 getIsEnough();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

#pragma once
// BLGemDrawPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLGemDrawPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onBlack(cocos2d::CCObject*, unsigned int);
    ~BLGemDrawPresenter();
    void onCloseView(GemDrawData*);
    BLGemDrawPresenter();
    undefined4 create(BLGemDrawView*);
    void onEnter();
    void onExit();
    void onCloseViewData();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onNextVector();
    void onStartGemDraw();
    void onStart(cocos2d::CCObject*, unsigned int);
    void onGetInfo(cocos2d::CCObject*, unsigned int);
    bool tick(float);
    void onUpdateMainView(GemDrawItemList*);
    undefined4 initWithView(BLGemDrawView*);
    void onUpdateGemDraw();
    void onChangeStatus();
    void onPage1(cocos2d::CCObject*, unsigned int);
    void onPage2(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x38?56 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[56];
};

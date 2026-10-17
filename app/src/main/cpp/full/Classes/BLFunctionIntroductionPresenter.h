#pragma once
// BLFunctionIntroductionPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLFunctionIntroductionPresenter : public cocos2d::CCObject {
public:
    void scrollViewDidScroll(cocos2d::extension::CCScrollView*);
    void scrollViewDidZoom(cocos2d::extension::CCScrollView*);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLFunctionIntroductionPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    BLFunctionIntroductionPresenter();
    undefined4 create();
    void initWithView(BLFunctionIntroductionView*);
    void onEnter();
    void onExit();
    void addItem(BLFunctionIntroductionItemView*);
    void identifyData(std::string *);
    int * createItemView(std::string *);
    void updateTit(std::string *);
    void updateWithData(std::string *);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

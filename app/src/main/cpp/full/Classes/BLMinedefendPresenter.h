#pragma once
// BLMinedefendPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMinedefendPresenter : public cocos2d::CCObject {
public:
    void tick(float);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLMinedefendPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    BLMinedefendPresenter();
    void onEnter();
    void onExit();
    undefined4 create(BLMinedefendView*);
    void initScroItem(std::vector<int, std::allocator<int>> *, std::vector<std::string, std::allocator<std::string>> *, std::vector<std::string, std::allocator<std::string>> *);
    void initDate();
    void initWithView(BLMinedefendView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

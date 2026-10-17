#pragma once
// BLVipPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLVipPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLVipPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    BLVipPresenter();
    undefined4 create(BLVipView*);
    void onExit();
    void onEnter();
    void addItem(std::vector<int, std::allocator<int>> *);
    undefined4 initWithView(BLVipView*);
    void requestGetReward();
    void onGet(cocos2d::CCObject*, unsigned int);
    void onChargeComplete(cocos2d::CCObject*);
    void onRequestGetRewardComplete(cocos2d::CCObject*, cocos2d::extension::CCHttpResponse*);
    void onGetComplete(cocos2d::CCObject*, cocos2d::extension::CCHttpResponse*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

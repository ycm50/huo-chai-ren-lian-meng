#pragma once
// BLTalentDownInfoItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTalentDownInfoItemPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLTalentDownInfoItemPresenter();
    void onUpgrace(cocos2d::CCObject*, unsigned int);
    BLTalentDownInfoItemPresenter();
    undefined4 create();
    void initWithView(BLTalentDownInfoItemView*);
    void onEnter();
    void onExit();
    void updateRichText(cocos2d::CCNode*, std::vector<std::string, std::allocator<std::string>> *);
    void initWithData(int, int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

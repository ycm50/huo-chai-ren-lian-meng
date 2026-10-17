#pragma once
// BLPlayerTuPoPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLPlayerTuPoPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLPlayerTuPoPresenter();
    void onAddClick(cocos2d::CCObject*, unsigned int);
    void onDeleteClick(cocos2d::CCObject*, unsigned int);
    void onMaxClick(cocos2d::CCObject*, unsigned int);
    void onCloseClick(cocos2d::CCObject*, unsigned int);
    void onUseClick(cocos2d::CCObject*, unsigned int);
    BLPlayerTuPoPresenter();
    undefined4 create();
    void initWithView(BLPlayerTuPoView*);
    void onExit();
    void onEnter();
    void initWithRoleID(std::string);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};

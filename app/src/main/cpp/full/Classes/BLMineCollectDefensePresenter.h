#pragma once
// BLMineCollectDefensePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMineCollectDefensePresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLMineCollectDefensePresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    BLMineCollectDefensePresenter();
    void onEnter();
    void onExit();
    undefined4 create(BLMineCollectDefenseView*);
    void initWithView(BLMineCollectDefenseView*);
    void updateMineData(cocos2d::CCObject*);
    void onAdd1(cocos2d::CCObject*, unsigned int);
    void onAdd2(cocos2d::CCObject*, unsigned int);
    void onModify(cocos2d::CCObject*, unsigned int);
    void updateRoleData(cocos2d::CCObject*);
    void onStart(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

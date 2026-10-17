#pragma once
// BLTreasureMapItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTreasureMapItemPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLTreasureMapItemPresenter();
    BLTreasureMapItemPresenter();
    undefined4 create();
    void initWithView(BLTreasureMapItemView*);
    void onEnter();
    void onExit();
    void initWithData(TreasureMapItemBase*);
    void reset();
    void triggerEnd();
    void addGameOverInfo();
    void addMoveInfo(int, int);
    void addSpecialMoveInfo(int, int);
    void beforeTrigger();
    void formatDesc(std::vector<std::string, std::allocator<std::string>>&, std::vector<cocos2d::_ccColor3B, std::allocator<cocos2d::_ccColor3B>>&);
    void eventDesc(TreasureDescType *);
    void onTrigger();
    void trigger();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

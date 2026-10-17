#pragma once
// BLWinPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLWinPresenter : public cocos2d::CCObject {
public:
    int getFirstPass() const;
    void setFirstPass(int);
    float getRewardPer() const;
    void setRewardPer(float);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    undefined4 numOfColumn(BLGridView*);
    ~BLWinPresenter();
    undefined4 sizeOfGridItem(BLGridView*);
    undefined8 onQuit(cocos2d::CCObject*, unsigned int);
    void onAgain(cocos2d::CCObject*, unsigned int);
    void numOfRow(BLGridView*);
    void touchItemAtIndex(BLGridView*, int);
    BLWinPresenter();
    undefined4 create(BLWinView*);
    void onEnter();
    void sortBluetoothPackData(cocos2d::CCArray*);
    void sortBackPackData();
    void judageStar();
    void nextMission();
    void onNextMission(cocos2d::CCObject*, unsigned int);
    void nodeOfGridViewAtIndex(BLGridView*, cocos2d::CCNode*, int);
    void initBluetoothData(cocos2d::CCArray*);
    void initData();
    void onExit();
    undefined4 initWithView(BLWinView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x34?52 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[52];
};

#pragma once
// BLMissionMainPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionMainPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    BLMissionChaptersData* getMissionChaptersData() const;
    void setMissionChaptersData(BLMissionChaptersData*);
    void tick(float);
    void numOfPages(BLPageLayer*);
    void onPageChangeByNum(cocos2d::CCObject*, unsigned int);
    void onClose(cocos2d::CCObject*, unsigned int);
    void pageChange(BLPageLayer*, int);
    void onEnter();
    void onExit();
    int getGotStarNum(int);
    undefined4 checkHasStarRewards(int);
    void createPageLayer(cocos2d::CCLayer*, BLMissionChapterItemData*);
    void nodeOfPageAtIndex(BLPageLayer*, int);
    ~BLMissionMainPresenter();
    BLMissionMainPresenter();
    undefined4 create(BLMissionMainView*);
    void initMissionButton();
    void onUpdateStarRewards();
    undefined4 initWithView(BLMissionMainView*);
    void onSweepUpdate();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x44?68 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[68];
};

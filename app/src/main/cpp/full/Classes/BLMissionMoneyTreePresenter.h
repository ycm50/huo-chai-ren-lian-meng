#pragma once
// BLMissionMoneyTreePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionMoneyTreePresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void listButtonClickAtIndex(BLListButton*, int);
    int numOfCellItem(BLTableView*);
    undefined4 sizeOfCellItem(BLTableView*);
    void onClose(cocos2d::CCObject*, unsigned int);
    void onAdjust(cocos2d::CCObject*, unsigned int);
    void onInfo(cocos2d::CCObject*, unsigned int);
    void onAddTime(cocos2d::CCObject*, unsigned int);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void onEnter();
    void onExit();
    void updateMissionData();
    void initHeroData();
    void updateRecommand();
    void updateChallengeTime();
    void onMoneyTreeTimeBuySuccess();
    void updateBtnStatus();
    void updateBtnClickStatus(int);
    void checkModeChallengable(int, bool);
    void updateHeroView();
    void onUpdateHero();
    ~BLMissionMoneyTreePresenter();
    BLMissionMoneyTreePresenter();
    undefined4 create();
    void updateReward();
    void initWithView(BLMissionMoneyTreeView*);
    void onBeginChallenge();
    void onChallenge(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x38?56 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[56];
};

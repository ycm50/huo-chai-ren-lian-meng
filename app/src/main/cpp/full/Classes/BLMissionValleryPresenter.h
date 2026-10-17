#pragma once
// BLMissionValleryPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionValleryPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    int numOfCellItem(BLTableView*);
    void onClose(cocos2d::CCObject*, unsigned int);
    void onAdjust(cocos2d::CCObject*, unsigned int);
    undefined4 sizeOfCellItem(BLTableView*);
    void onInfo(cocos2d::CCObject*, unsigned int);
    void onAddTime(cocos2d::CCObject*, unsigned int);
    void onChallenge(cocos2d::CCObject*, unsigned int);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void onEnter();
    void onExit();
    void updateMissionData();
    void updateRecommand();
    void updateChallengeTime();
    void onValleryTimeBuySuccess();
    void checkModeChallengable(int, bool);
    void updateBtnStatus();
    ~BLMissionValleryPresenter();
    BLMissionValleryPresenter();
    undefined4 create();
    void updateReward();
    void updateHeroView();
    void updateBtnClickStatus(int);
    void listButtonClickAtIndex(BLListButton*, int);
    void initHeroData();
    void initWithView(BLMissionValleryView*);
    void onUpdateHero();
    void onBeginChallenge();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x34?52 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[52];
};

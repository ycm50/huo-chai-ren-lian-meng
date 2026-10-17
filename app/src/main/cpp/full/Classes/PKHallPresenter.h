#pragma once
// PKHallPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PKHallPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    ~PKHallPresenter();
    void tick(float);
    void onClose(cocos2d::CCObject*, unsigned int);
    void openSelectUI(cocos2d::CCObject*, unsigned int);
    void onUser(cocos2d::CCObject*, unsigned int);
    void onReward(cocos2d::CCObject*, unsigned int);
    void openRankUI();
    void onHelp(cocos2d::CCObject*, unsigned int);
    undefined8 refreshCdInfo();
    undefined8 refreshInfo();
    void onCDBtn(cocos2d::CCObject*, unsigned int);
    undefined4 sizeOfCellItem(BLTableView*);
    undefined4 numOfCellItem(BLTableView*);
    void reName();
    void reNameFail(cocos2d::CCObject*);
    PKHallPresenter();
    void onExit();
    undefined4 create();
    bool init();
    undefined4 initWithView(PKHallView*);
    undefined8 login(cocos2d::CCObject*, unsigned int);
    void enterLobby(cocos2d::CCObject*, unsigned int);
    void exitRoom(cocos2d::CCObject*, unsigned int);
    void sendData(cocos2d::CCObject*, unsigned int);
    void setLabInfo(char const*);
    void updatePKHall(char const*);
    void goToReward();
    int * getHeroJson(PlayerData*);
    void onGetReward(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void openReward();
    void refreshUpLine();
    void onChangeHeroLineUp();
    void onEnter();
    void enterRoom(cocos2d::CCObject*, unsigned int);
    void onHeroRank(cocos2d::CCObject*, unsigned int);
    void onUpLined(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onAlertSure(cocos2d::CCObject*);
    void onReduceCD(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void openRank();
    void onGetRank(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void initRankRewards(cocos2d::CCObject*);
    void onInitData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

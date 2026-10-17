#pragma once
// BLResultManager
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLResultManager : public cocos2d::CCObject {
public:
    ~BLResultManager();
    void showMine();
    BLResultManager();
    bool init();
    undefined4 shareManager();
    void showNormalWin();
    void showEliteWin();
    undefined8 showGift(std::string *);
    void showArenaWin();
    void showArenaFaild();
    void showMineWin();
    void showMineFaild();
    void showPKFaild();
    void showPKWin();
    void pickupDropItems();
    void showChallengeWin();
    void showMoneyTreeWin();
    void showChallengeFailed();
    void giftManager();
    void showFailed();
    void returnMainCity();
    void showWin();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x18?24 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[24];
};

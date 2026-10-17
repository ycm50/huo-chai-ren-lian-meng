#pragma once
// BLTreasureDicePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTreasureDicePresenter : public cocos2d::CCObject {
public:
    void onTriggerEnd();
    void onRestartEnd();
    ~BLTreasureDicePresenter();
    void onGetReward(cocos2d::CCObject*, unsigned int);
    void updateBtnRestart();
    BLTreasureDicePresenter();
    undefined4 create();
    void initWithView(BLTreasureDiceView*);
    void onExit();
    void updateView();
    void initWithData();
    void onGetRefreshSuccess();
    void onUpdateFreeDice();
    void updateNormalDicePrice(int);
    void getNetDataFirst();
    void restartCallNet();
    void onRestart(cocos2d::CCObject*, unsigned int);
    void onReStart();
    void getRefreshTimeFromNet();
    void onEnter();
    void updateData();
    void onFirstSuccess();
    void onCheckRestartSuccess();
    void onSpecialDice(cocos2d::CCObject*, unsigned int);
    void onNormalDice(cocos2d::CCObject*, unsigned int);
    void updateDataByNet(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&);
    void onRestartCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onFirstCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetRefreshCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x3c?60 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[60];
};

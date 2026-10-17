#pragma once
// BLGameScene
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLGameScene : public cocos2d::CCLayer {
public:
    int getLoadingStatus() const;
    void setLoadingStatus(int);
    int getCurrentStatus() const;
    void setCurrentStatus(EnumGameSceneStatus *);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onSharkActionEnd(cocos2d::CCObject*);
    void setRecordId(std::string *);
    ~BLGameScene();
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    std::string getRecordId() const;
    int onShowDailySignUI();
    int onGetADValuesCompleted(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void showDailySignUI(float);
    void delayInitMission();
    void delayInitArena();
    undefined8 delayInitMine();
    int delayInitMirrorChallenge();
    void delayInitArenaOnline();
    void delayInitArenaVideo();
    void delayInitChallenge();
    BLGameScene();
    undefined4 shareGameScene();
    int * scene();
    int onTestNetCallBack(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
void setGameStatus(EnumGameSceneStatus);   /* SIG_FIX (R198): original mangled name _ZN11BLGameScene13setGameStatusE19EnumGameSceneStatus has NO P prefix -> by value */
    void enterChallenge();
    void enterDragonCanyon();
    void enterMoneyTree();
    void enterArena();
    void enterMine();
    int enterMirrorChallenge();
    void enterFightVideo();
    undefined8 enterArenaOnline();
    int enterBluetoothControll();
    undefined8 enterCity();
    undefined8 enterTestLeak();
    void exitArena();
    void exitMission();
    void cleanResCache();
    void cleanMainCity();
    void cleanMission();
    void runSharkAction(int, float, float);
    void runWorldFpsChange(int, float, float);
    void showNetQuan();
    void closeNetQuan();
    void showShieldLayer();
    void clearShieldLayer();
    void timeOutCallBack();
    void closeShieldLayer();
    void showBlackLayer();
    void removeBlackLayer();
    void random(float, float);
    void sendMessage();
    void enterMission();
    void onRequestVipComplete(cocos2d::CCObject*, cocos2d::extension::CCHttpResponse*);
    void tick(float);
    void enterTreasure();
    undefined8 sendDailyRequest();
    void requestGetQQCoin(std::string const&);
    void requestVip(cocos2d::CCObject*);
    void requestQQCoin();
    void requestADValues();
    void checkLivenessTime(bool);
    void loadingEnd();
    void enterEndless();
    undefined4 replaceGameScene(float);
    void onRequestGetQQCoinComplete(cocos2d::CCObject*, cocos2d::extension::CCHttpResponse*);
    void onQQCoinRequestCompleted(cocos2d::CCObject*, cocos2d::extension::CCHttpResponse*);
    void onGetLivenessTime(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onLivenessCompleted(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x15c?348 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[348];
};

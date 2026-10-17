#pragma once
// PKOnlineManager
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PKOnlineManager {
public:
    PKOnlineManager();
    ~PKOnlineManager();
    void onEnterLobby();
    void onExitLobby();
    void onEnterRoom();
    void onExitRoom();
    void onGameReady();
    void enterLobby();
    void exitLobby();
    void exitRoom();
    void changeRoom();
    void enterRoom();
    void sendData(char const*);
    void setInfo(char const*);
    void onGameStart(bool);
    void setPKHallPresenter(PKHallPresenter*);
    void loginSuccess();
    void onFriendDisconnect();
    void onDisconnect();
    void loginFail();
    void testLogin(char const*);
    void openResultUI(bool);
    void gameWin();
    void gameFail();
    undefined8 checkConnection(float);
    undefined8 receiveData(char const*);
};

#pragma once
// BluetoothHelper
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BluetoothHelper : public cocos2d::CCObject {
public:
    bool getCltSelCmp() const;
    void setCltSelCmp(bool);
    bool getHostSelCmp() const;
    void setHostSelCmp(bool);
    int getWaitTime() const;
    void setWaitTime(int);
    int getLife() const;
    void setLife(int);
    int getCrit() const;
    void setCrit(int);
    int getAttack() const;
    void setAttack(int);
    int getDefence() const;
    void setDefence(int);
    bool getClientStart() const;
    void setClientStart(bool);
    bool getBlueHostLoadComplete() const;
    void setBlueHostLoadComplete(bool);
    int getBlueMissionType() const;
    void setBlueMissionType(int);
    bool getISRecord() const;
    void setISRecord(bool);
    bool getISPause() const;
    void setISPause(bool);
    bool getISVideo() const;
    void setISVideo(bool);
    bool getISPKOnlineStart() const;
    void setISPKOnlineStart(bool);
    bool getISOnline() const;
    void setISOnline(bool);
    bool init();
    void setStopGame(bool);
    int * clientGetPlayerData();
    undefined4 getclientGetPlayerData();
    void resetRecord();
    void bluetoothLink();
    void bluetoothHost();
    void bluetoothDisconnect();
    undefined1 isHost();
    undefined1 isBlueFight();
    void setIsHost(bool);
    void setIsBlueFight(bool);
    void postPauseGame(cocos2d::CCDictionary*);
    void postResumeGame(cocos2d::CCDictionary*);
    void postClientstartedGame(cocos2d::CCDictionary*);
    void postEnterMainCity(cocos2d::CCDictionary*);
    void postUserAction(cocos2d::CCDictionary*);
    void postAddRole(cocos2d::CCDictionary*);
    void postRoleStatus(cocos2d::CCDictionary*);
    void postRolePos(cocos2d::CCDictionary*);
    void postRoleFlipX(cocos2d::CCDictionary*);
    void postLockWidth(cocos2d::CCDictionary*);
    void postGameEffect(cocos2d::CCDictionary*);
    void postRoleLife(cocos2d::CCDictionary*);
    void postRoleAIMoveTo(cocos2d::CCDictionary*);
    void postGameDrop(cocos2d::CCDictionary*);
    void postSetHero(cocos2d::CCDictionary*);
    void postClientSwitchHero(cocos2d::CCDictionary*);
    void postAddRoleAnimate(cocos2d::CCDictionary*);
    void postShowResult(cocos2d::CCDictionary*);
    void sendBluetoothData(char const*);
    void pauseGame();
    void resumeGame();
    void enterSelectRole();
    void enterMainCity();
    void setHero(std::string);
    undefined8 makeViceSendCMPAgain();
    void onBluetoothAction(cocos2d::CCObject*);
    void clientstartedGame();
    void addRoleAnimate(int, std::string *, std::string);
    void setGameEffect(int);
    void setGameDrop(std::string, std::string *);
    void showOnlineResult(bool);
    void arbitrationOnLineResult(float);
    void setHeroRoleAttr();
    void addRole(std::string, int, int, int, cocos2d::CCPoint *, int, int, bool);
    void rolePos(int, cocos2d::CCPoint *, float, float, float);
    void setLockWidth(float);
    void setRoleAIMoveTo(int, float, float);
    void roleChangeStatus(int, std::string *, int, bool, cocos2d::CCPoint *, bool, float, char const*);
    void roleisFlipX(int, bool);
    void setRoleLife(int, int, int, int, bool, bool);
    ~BluetoothHelper();
    BluetoothHelper();
    undefined4 share();
    void clientEnterGame(cocos2d::CCDictionary*);
    void selectArenaHero();
    void blueConnetScuess();
    void hostGame();
    void postHeroRoleAttr(cocos2d::CCDictionary*);
    void checkViceReady();
    void writeVideoRecord();
    void disConnetScuess();
    void clientCreateMissionData(char const*);
    void postEnterSelectRole(cocos2d::CCDictionary*);
    void receiveBluetoothData(char const*);
    undefined8 tick(float);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x70?112 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[112];
};

#pragma once
// PlatformHelp
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PlatformHelp {
public:
    void showShareSocialView(char const*, char const*);
    void showShareSocialViewWithScreen(char const*);
    undefined4 getLocalLanguage(char const*);
    void gotoAppstoreRating();
    void adInit();
    void showAdMob();
    void showInter();
    void removeAdmob();
    void showLenovoBanner(char const*);
    void hideLenovoBanner();
    void showLenovoInterAD(char const*);
    void closeLenovoInterAD();
    void showLargeBannerAD(char const*);
    void showTopBannerAD(char const*);
    undefined4 isIOS();
    void loginGameCenter();
    void showGameRank();
    void reportScore(int, char const*);
    undefined4 getCurrentRank();
    void deleteFileByName(char const*);
    void copyFileToPathAndEncryption(char const*, char const*, char const*);
    void copyFileToPathAndDecrypt(char const*, char const*, char const*);
    void writeTofile(char*, int, std::string);
    void copyFileToPath(char const*, char const*);
    void showCamera();
    void showAlbum();
    int * getAppVersion();
    int * getMD5(char const*);
    int * ConvertStringFromUTF8ToURL(char const*);
    int * getAppEmChannel();
    int * getVersionRelease();
    void getRunningProcesses();
    bool isHaveSpecialCharacters(char const*);
    void getSimData();
    void isCrack();
    undefined4 getDeviceID();
    undefined4 getMacID();
    undefined4 getAppKey();
    void reyunexit();
    void backButtonPromptShow();
    void getExchangePay();
    void copyCode(std::string);
    void charge(std::string);
    void charge(std::string, int);
    void initDomob();
    void showFreeDiamond();
    void earnDiamond(long long);
    void setBuyCompleteID(char const*);
    void bluetoothLink();
    void bluetoothHost();
    void sendBluetoothData(char const*);
    void disConnetScuess();
    void bluetoothDisconnect();
    void openUrlFanKui(int);
    void openHuaWeiShop(char const*);
    undefined4 CheckNet();
    undefined4 getICCID();
    undefined4 GetUniCom();
    int * getAPPSecretString();
    undefined4 getSecretString();
    void openUrlHuoJiang();
    void opensumbiturl(std::string const&);
    void showAD();
    void getMore();
    void blueConnetScuess();
    undefined8 receiveBluetoothData(char const*);
    void purchaseMonthlyContract(int);
};

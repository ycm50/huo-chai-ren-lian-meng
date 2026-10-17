#pragma once
// DataManager
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class DataManager : public cocos2d::CCObject {
public:
    sqlite3* getGameInfoDB() const;
    void setGameInfoDB(sqlite3*);
    float getAnimationInterval() const;
    void setAnimationInterval(float);
    UserData* getUserData() const;
    void setUserData(UserData*);
    BLMissionData* getCurrentMissionData() const;
    MissionSelectHeroData* getMissionSelectHeroData() const;
    bool getISTestHero() const;
    void setISTestHero(bool);
    int getTestHeroView() const;
    void setTestHeroView(int);
    int getCurrentRoleIndex() const;
    void setCurrentRoleIndex(int);
    int getCurrentSuitRoleIndex() const;
    void setCurrentSuitRoleIndex(int);
    int getCurrentEquipPage() const;
    void setCurrentEquipPage(int);
    int getEquipUIType() const;
    void setEquipUIType(int);
    bool getISShowFreeDiamond() const;
    void setISShowFreeDiamond(bool);
    bool getISBGMusic() const;
    void setISBGMusic(bool);
    bool getIsUniCom() const;
    void setIsUniCom(bool);
    bool getISSoundEffect() const;
    void setISSoundEffect(bool);
    bool getISShowGift() const;
    void setISShowGift(bool);
    bool getISReadyShow() const;
    void setISReadyShow(bool);
    bool getISMissionFailed() const;
    void setISMissionFailed(bool);
    bool getISMissionWin() const;
    void setISMissionWin(bool);
    bool getISShowSevenDay() const;
    void setISShowSevenDay(bool);
    int getBuyType() const;
    void setBuyType(int);
    long getBuyNum() const;
    void setBuyNum(long);
    undefined1 getisSignOk() const;
    void setisSignOk(bool);
    bool getISBuyVip() const;
    void setISBuyVip(bool);
    bool getISGetVipReward() const;
    void setISGetVipReward(bool);
    bool getISShowVipUI() const;
    void setISShowVipUI(bool);
    int getCurrentMissionType() const;
    void setCurrentMissionType(int);
    bool getIsQuiteGame() const;
    void setIsQuiteGame(bool);
    bool getIsFirstRunGame() const;
    void setIsFirstRunGame(bool);
    cocos2d::CCArray* getArrayArenaPlayers() const;
    void setArrayArenaPlayers(cocos2d::CCArray*);
    cocos2d::CCArray* getArrayMinePlayers() const;
    void setArrayMinePlayers(cocos2d::CCArray*);
    int getArenaRank() const;
    void setArenaRank(int);
    int getMoneyTreeLife() const;
    void setMoneyTreeLife(int);
    int getPayType() const;
    void setPayType(int);
    undefined1 getbShowShieldLayer() const;
    void setbShowShieldLayer(bool);
    MaterialData* getMaterialData() const;
    void setMaterialData(MaterialData*);
    SuitEquipUserData* getSuipUserData() const;
    void setSuipUserData(SuitEquipUserData*);
    ChallengePlayerData* getChallengePlayerData() const;
    void setChallengePlayerData(ChallengePlayerData*);
    void setstrGongGaoUrl(std::string *);
    void setLastName(std::string *);
    void setArenaUid(std::string *);
    void setArenaName(std::string *);
    void setUserName(std::string *);
    void setChargeID(std::string *);
    void setBuyCompleteID(std::string *);
    void setShowSaveKey(std::string *);
    undefined4 getstrGongGaoUrl() const;
    std::string getLastName() const;
    std::string getArenaUid() const;
    std::string getArenaName() const;
    std::string getUserName() const;
    std::string getChargeID() const;
    std::string getBuyCompleteID() const;
    std::string getShowSaveKey() const;
    void setMissionSelectHeroData(MissionSelectHeroData*);
    void setCurrentMissionData(BLMissionData*);
    void resetDataManager();
    void resetDataManagerNull();
    void initMaterialData();
    void initSuitUserData();
    void initChallengePlayerData();
    void postBuyComleID();
    void initDailySign();
    undefined8 getDBKey();
    undefined8 getMacDBKey();
    void getAndroidBKey();
    void createItemData(int);
    void getBackPackItemNum(int);
    void sortItems(cocos2d::CCDictionary*);
    void getCurrentPlayer();
    void getCurrentSuitPlayer();
    void getPlayerDataByIndex(int);
    int * getPlayerDataByID(std::string *);
    void getRoleStar(std::string *);
    int getMaxPlayerLv();
    void getSellPrice(BackPackItemData*);
    undefined8 saveDailySignStatue(int, int);
    void getDailySignWeek(int);
    void setStartCount(int);
    int getStartCount();
    int copperOfEliteMission(BLMissionData*);
    undefined4 beforeEnterEliteMission(BLMissionData*);
    void UpdateSuitData();
    void checkSuitBuff(std::string *, std::string);
    bool checkIsPetMode();
    ~DataManager();
    void addBuyCompleID(std::string *);
    void setIsPassMirrorMision(std::vector<std::string, std::allocator<std::string>> *);
    void setBuyCompleteIDs(std::vector<std::string, std::allocator<std::string>> *);
    void setSelectRoles(std::vector<std::string, std::allocator<std::string>> *);
    int getIsPassMirrorMision() const;
    int getBuyCompleteIDs() const;
    int getSelectRoles() const;
    void virtualNumNotEnough(int, long);
    void popBuyUI(float);
    void setDailySignState(DailySignState *);
    DataManager();
    int getDailySignState() const;
    bool init();
    undefined4 shareDataManager();
    void updateDBByAppVersion();
    void initDBData();
    void onSureBuyDiamond(cocos2d::CCObject*);
    void onBuyComplete(cocos2d::CCObject*);
    uint isEnoughVirNumber(int, long, bool);
    std::string getCurrentMission();
    void setCurrentMission(std::string *);
    std::string getCurrentChapter();
    void setCurrentChapter(std::string *);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x110?272 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[272];
};

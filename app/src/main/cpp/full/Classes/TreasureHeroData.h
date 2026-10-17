#pragma once
// TreasureHeroData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class TreasureHeroData {
public:
    void AddLiveHero();
    undefined4 getItemById(std::string *);
    undefined4 IsHaveHeroInDB(std::string *);
    undefined4 checkModifyHeroData();
    void removeIdInVec(std::vector<std::string, std::allocator<std::string>>&, std::string);
    void deleteDBData();
    void deleteDBDataById(std::string *);
    undefined4 randomFight();
    void clearCacheData();
    void deleteData();
    ~TreasureHeroData();
    void insertDBDataById(std::string *);
    undefined8 insertDBData();
    undefined8 distinguishHeroByStatus();
    undefined8 dieById(std::string *);
    undefined4 randomDie();
    void die(std::vector<std::string, std::allocator<std::string>>&);
    undefined8 reliveById(std::string *);
    undefined4 randomRelive();
    void reliveAll();
    undefined8 dropInPrisonById(std::string *);
    void randomDropInPrison();
    undefined8 outOfPrisonById(std::string *);
    void randomOutOfPrison();
    void outAllInPrision();
    int outOfPrisonMax(int&);
    void sortHeroId();
    int initDataFromDB();
    bool init();
    TreasureHeroData();
    void lockHeroData();
    void resetHeroData();
    void refreshHeroData();
    undefined4 checkAddedHeroData();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x54?84 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[84];
};

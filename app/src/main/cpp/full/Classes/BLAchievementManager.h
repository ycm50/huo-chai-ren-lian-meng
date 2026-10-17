#pragma once
// BLAchievementManager
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLAchievementManager : public cocos2d::CCObject {
public:
    cocos2d::CCDictionary* getDicKillMonster() const;
    void setDicKillMonster(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicItems() const;
    void setDicItems(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicKillBoss() const;
    void setDicKillBoss(cocos2d::CCDictionary*);
    AchievementData* getAchievementData() const;
    void setAchievementData(AchievementData*);
    cocos2d::CCDictionary* getDicCompleteAchieve() const;
    void setDicCompleteAchieve(cocos2d::CCDictionary*);
    int getCanGetNum() const;
    void setCanGetNum(int);
    cocos2d::CCDictionary* getGetRewards() const;
    void setGetRewards(cocos2d::CCDictionary*);
    ~BLAchievementManager();
    BLAchievementManager();
    bool init();
    undefined4 share();
    void updateKillMonster(std::string, int);
    void updateKillBoss(std::string, int);
    undefined8 updateAchievement();
    int initData();
    void updateDataToDB();
    void updateItemNum(int, long long);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};

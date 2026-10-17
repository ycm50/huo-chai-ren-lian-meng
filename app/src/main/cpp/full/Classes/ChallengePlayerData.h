#pragma once
// ChallengePlayerData
// 基类: ChallengePlayerItemData
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "ChallengePlayerItemData.h"


class ChallengePlayerData : public ChallengePlayerItemData {
public:
    bool checkHavePartner();
    bool checkHaveEnemy();
    void getHeroInfo(std::string *);
    ~ChallengePlayerData();
    ChallengePlayerData();
    void initPartnerData(std::vector<std::string, std::allocator<std::string>> *);
    void initEnemyData(std::string *);
    void getNextEnemy();
    void getCurPartner();
    void getCurEnemy();
    void getNextPartner();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

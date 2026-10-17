#pragma once
// ChallengeItemData
// 基类: ChallengeRewardItemData
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "ChallengeRewardItemData.h"


class ChallengeItemData : public ChallengeRewardItemData {
public:
    ChallengeItemData();
    void getTotalPercent(std::vector<ChallengeRewardItemData*, std::allocator<ChallengeRewardItemData*>> *);
    void getIndexByPercent(std::vector<ChallengeRewardItemData*, std::allocator<ChallengeRewardItemData*>> *, int);
    ~ChallengeItemData();
    void initWithData(char**, int&);
    void initWithData(ChallengeItemData*);
    int getRandomReward();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};

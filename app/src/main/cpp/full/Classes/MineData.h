#pragma once
// MineData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MineData : public cocos2d::CCObject {
public:
    void setMineBg(MINEBG_ENUM *);
    undefined4 CheckMineData();
    void CheckRefreshData();
    bool CheckSnatchData();
    void minussnatchplayerinfo();
    void PrintmineDatainfo(MineitemData *) const;
    void Setrecoverminehero(std::string *, int, std::vector<MineHeroInfo, std::allocator<MineHeroInfo>>);
    void ClearMineData();
    undefined8 getownminedatabypos(int);
    undefined4 getrefreshminedata();
    undefined4 getsnatchminedata();
    void ClearRefreshData();
    ~MineData();
    MineData();
    void ClearSnatchData();
    void GetDataFromNet(int, bool, int);
    void Setminedata(MineitemData *);
    void Setrecoverminenewinfo();
    void Setrewardminenewinfo(std::vector<MineRewardItemData, std::allocator<MineRewardItemData>> *);
    void Setspecrewardminenewinfo(std::vector<MineRewardItemData, std::allocator<MineRewardItemData>> *);
    void ClearOneMinebyid(int);
    void Setprotectminenewinfo();
    void Setpositionminenewinfo();
    void Setrefreshminedata(MineitemData *);
    void Setsnatchminedata(MineitemData *);

public:
    /* HW_SIZE_PAD (R94): ?????? 0xa0?160 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[160];
};

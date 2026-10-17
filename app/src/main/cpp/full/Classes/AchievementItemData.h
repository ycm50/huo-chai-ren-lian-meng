#pragma once
// AchievementItemData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class AchievementItemData : public cocos2d::CCObject {
public:
    int getID() const;
    void setID(int);
    int getType() const;
    void setType(int);
    bool getISGet() const;
    void setISGet(bool);
    bool getISComplete() const;
    void setISComplete(bool);
    long long getRealNum() const;
    void setRealNum(long long);
    void setDes(std::string);
    void setIcon(std::string);
    void setName(std::string);
    std::string getDes() const;
    std::string getIcon() const;
    std::string getName() const;
    int getValues() const;
    bool init();
    ~AchievementItemData();
    AchievementItemData();
    void setValues(std::vector<std::string, std::allocator<std::string>>);
    void initWith(char**, int&);
    void setRewards(std::vector<int, std::allocator<int>>);
    int getRewards() const;
    void updateStatus();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x50?80 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[80];
};

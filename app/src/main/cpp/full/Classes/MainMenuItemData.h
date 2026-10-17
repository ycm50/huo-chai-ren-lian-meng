#pragma once
// MainMenuItemData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MainMenuItemData : public cocos2d::CCObject {
public:
    int getUID() const;
    void setUID(int);
    int getSubType() const;
    void setSubType(int);
    void setMissionID(std::string);
    void setName(std::string);
    void setIcon(std::string);
    void setID(std::string);
    ~MainMenuItemData();
    std::string getMissionID() const;
    std::string getName() const;
    std::string getIcon() const;
    std::string getID() const;
    MainMenuItemData();
    bool init();
    void initWith(char**, int&);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};

#pragma once
// BLMissionChapterItemData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionChapterItemData : public cocos2d::CCObject {
public:
    void setName(std::string *);
    void setID(std::string *);
    std::string getName() const;
    std::string getID() const;
    int getMissions() const;
    bool init();
    void setMissions(std::vector<std::string, std::allocator<std::string>> *);
    ~BLMissionChapterItemData();
    BLMissionChapterItemData();
    int getPositions() const;
    void setPositions(std::vector<cocos2d::CCPoint, std::allocator<cocos2d::CCPoint>> *);
    void initPosition(std::vector<float, std::allocator<float>> *);
    void initWith(char**, int&);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x34?52 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[52];
};

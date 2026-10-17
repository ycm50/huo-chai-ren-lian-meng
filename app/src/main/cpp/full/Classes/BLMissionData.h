#pragma once
// BLMissionData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionData : public cocos2d::CCObject {
public:
    int * create();
    int getType() const;
    void setType(int);
    int getMap() const;
    void setMap(int);
    BLMonsterGroupData* getObstacle() const;
    void setObstacle(BLMonsterGroupData*);
    cocos2d::CCDictionary* getDicTriggers() const;
    void setDicTriggers(cocos2d::CCDictionary*);
    float getAttrLV() const;
    void setAttrLV(float);
    float getAttrPer() const;
    void setAttrPer(float);
    int getMaxHeros() const;
    void setMaxHeros(int);
    BLDropData* getDropData() const;
    void setDropData(BLDropData*);
    BLDropData* getDropEliteData() const;
    void setDropEliteData(BLDropData*);
    BLDropData* getDropBossData() const;
    void setDropBossData(BLDropData*);
    int getRecomandLV() const;
    void setRecomandLV(int);
    int getMinHeros() const;
    void setMinHeros(int);
    void setRecomand(std::string *);
    void setDropBossID(std::string *);
    void setDropEliteID(std::string *);
    void setDropID(std::string *);
    void setObstacleGroup(std::string *);
    void setSound(std::string *);
    void setDes(std::string *);
    void setIcon(std::string *);
    void setName(std::string *);
    void setMissionID(std::string *);
    std::string getRecomand() const;
    std::string getDropBossID() const;
    std::string getDropEliteID() const;
    std::string getDropID() const;
    std::string getObstacleGroup() const;
    std::string getSound() const;
    std::string getDes() const;
    std::string getIcon() const;
    std::string getName() const;
    std::string getMissionID() const;
    bool init();
    ~BLMissionData();
    void initMonsterGroupData();
    BLMissionData();
    int getTriggers() const;
    int getBossIDs() const;
    void setTriggers(std::vector<std::string, std::allocator<std::string>> *);
    void setBossIDs(std::vector<std::string, std::allocator<std::string>> *);
    undefined8 setTrigersX(std::vector<float, std::allocator<float>> *);
    void initWith(std::string *);
    int getTrigersX() const;

public:
    /* HW_SIZE_PAD (R94): ?????? 0x90?144 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[144];
};

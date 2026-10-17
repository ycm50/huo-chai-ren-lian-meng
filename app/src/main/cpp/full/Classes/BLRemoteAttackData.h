#pragma once
// BLRemoteAttackData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLRemoteAttackData : public cocos2d::CCObject {
public:
    int getPosType() const;
    void setPosType(int);
    int getObjectType() const;
    void setObjectType(int);
    int getAttackTimes() const;
    void setAttackTimes(int);
    int getDistance() const;
    void setDistance(int);
    bool getISTrackRole() const;
    void setISTrackRole(bool);
    bool getISOnlyAttackObject() const;
    void setISOnlyAttackObject(bool);
    bool getISPenetration() const;
    void setISPenetration(bool);
    void setID(std::string);
    ~BLRemoteAttackData();
    std::string getID() const;
    BLRemoteAttackData();
    bool init();
    void initWith(std::string);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};

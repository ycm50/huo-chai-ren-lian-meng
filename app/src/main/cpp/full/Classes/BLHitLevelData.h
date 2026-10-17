#pragma once
// BLHitLevelData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLHitLevelData : public cocos2d::CCObject {
public:
    int getLV() const;
    void setLV(int);
    int getSharkLV() const;
    void setSharkLV(int);
    int getStopFrame() const;
    void setStopFrame(int);
    int getFPS() const;
    void setFPS(int);
    float getFpsTime() const;
    void setFpsTime(float);
    int getRoleObject() const;
    void setRoleObject(int);
    bool getISHited() const;
    void setISHited(bool);
    ~BLHitLevelData();
    BLHitLevelData();
    bool init();
    int * create();
    void initWith(int);
    void initWith(char**, int&);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};

#pragma once
// BLMonsterData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMonsterData : public cocos2d::CCObject {
public:
    int * create();
    float getRoleScale() const;
    void setRoleScale(float);
    int getAI() const;
    void setAI(int);
    int getDrop() const;
    void setDrop(int);
    int getPosX() const;
    void setPosX(int);
    int getPosY() const;
    void setPosY(int);
    BLMonsterResData* getMonsterResData() const;
    void setMonsterResData(BLMonsterResData*);
    int getAttrLV() const;
    void setAttrLV(int);
    int getPaBody() const;
    void setPaBody(int);
    int getEnemyType() const;
    void setEnemyType(int);
    int getBaseY() const;
    void setBaseY(int);
    void setRoleName(std::string);
    void setAttribute(std::string);
    void setResID(std::string);
    void setID(std::string);
    ~BLMonsterData();
    std::string getRoleName() const;
    std::string getAttribute() const;
    std::string getResID() const;
    std::string getID() const;
    BLMonsterData();
    bool init();
    void preLoadResData();
    void initWith(std::string, bool);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x4c?76 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[76];
};

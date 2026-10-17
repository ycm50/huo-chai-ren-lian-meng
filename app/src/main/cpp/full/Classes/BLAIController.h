#pragma once
// BLAIController
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLAIController : public cocos2d::CCObject {
public:
    bool getISRunAI() const;
    void setISRunAI(bool);
    BLRole* getRole() const;
    void setRole(BLRole*);
    int getCurrentSkill() const;
    void setCurrentSkill(int);
    int getAIType() const;
    void setAIType(int);
    bool getAutoGoRight() const;
    void setAutoGoRight(bool);
    bool init();
    void attack();
    void stopAI();
    undefined4 randomNum(int);
    undefined4 isContinueAttack();
    int * nearestRole();
    undefined8 delayJudageAI();
    void attackEnd();
    void skillEnd();
    void beAttackEnd();
    void runOffEnd();
    void patrolEnd();
    undefined8 preAIStatus();
    void beAttack();
    void setAutoGo(bool);
    ~BLAIController();
    BLAIController();
    undefined4 getSkill();
    void skill();
    void judageAI();
    undefined4 isMove();
    void tick(float);
    void startAI();
    void initWithID(int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x70?112 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[112];
};

#pragma once
// AnimationStatusManager
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class AnimationStatusManager : public cocos2d::CCObject {
public:
    AnimationStatusManager();
    void getJumpAttack(int);
    void getDashAttack(int);
    void getSwapWeapon(int);
    void getOverAll();
    void getOverAttack();
    void getOverSkill();
    void isNewStatus(int, int);
    ~AnimationStatusManager();
    undefined8 getSwitchHero();
    undefined4 * getDead(int);
    undefined4 * getLose(int);
    undefined4 * getWin(int);
    undefined8 getGetUp(int);
    undefined8 getFallover(int);
    undefined4 * getBeingAttack(int);
    undefined4 * getHitFly(int);
    undefined4 * getSkill(int);
    void getAttack(int);
    undefined8 getAirAttack(int);
    undefined8 getJumpDownUp(int);
    undefined8 getJump2(int);
    undefined8 getJump(int);
    undefined4 * getMove(int);
    undefined8 getStandOn(int);
    bool init();
    undefined4 shareStatus();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};

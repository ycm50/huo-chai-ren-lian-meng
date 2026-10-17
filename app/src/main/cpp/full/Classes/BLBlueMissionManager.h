#pragma once
// BLBlueMissionManager
// 基类: BLMissionManager
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "BLMissionManager.h"


class BLBlueMissionManager : public BLMissionManager {
public:
    void blueLockWidth(cocos2d::CCObject*);
    ~BLBlueMissionManager();
    undefined8 tick(float);
    undefined8 bludeSetHero(cocos2d::CCObject*);
    void blueChangeRoleFlipX(cocos2d::CCObject*);
    void blueAddAnimate(cocos2d::CCObject*);
    void blueChangeRolePos(cocos2d::CCObject*);
    void blueChangeRoleLife(cocos2d::CCObject*);
    void blueRoleAIMove(cocos2d::CCObject*);
    void blueChangeRoleStatus(cocos2d::CCObject*);
    void hit(BLRoleBase*, BLHit*, bool&, cocos2d::CCArray*);
    void blueClientSwitchHero(cocos2d::CCObject*);
    void bluePKFaile();
    void bluePKWin();
    void blueChangeGameEffect(cocos2d::CCObject*);
    BLBlueMissionManager();
    bool init();
    undefined4 create();
    void blueGameDrop(cocos2d::CCObject*);
    void addMonster(std::string *, int, int, cocos2d::CCPoint *, int, int, bool);
    void blueAddRole(cocos2d::CCObject*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0xd8?216 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[216];
};

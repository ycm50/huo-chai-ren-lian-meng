#pragma once
// BLRiyan
// 基类: BLRoleBase
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "BLRoleBase.h"


class BLRiyan : public BLRoleBase {
public:
    BLRole* getRole() const;
    int getHurt() const;
    void setHurt(int);
    float getTime() const;
    void setTime(float);
    float getLeftTime() const;
    void setLeftTime(float);
    float getHurtRadius() const;
    void setHurtRadius(float);
    bool getISPlayAttack() const;
    void setISPlayAttack(bool);
    void updatePosition();
    void updateFrameData(BLAnimateFrameData*);
    ~BLRiyan();
    void setRole(BLRole*);
    BLRiyan();
    void stand();
    void move();
    undefined8 isAttack(BLRole*);
    undefined8 attack();
    undefined4 playAttackAction();
    void onAttackEnd();
    void removeSelf();
    void onTick(float);
    void tick(float);
    void initAction();
    void initWithRole(BLRole*, int, float, float);
    void onEnter();
    void onExit();
    bool init();
    void setPartnerNode(cocos2d::CCNode*, float);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x358?856 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[856];
};

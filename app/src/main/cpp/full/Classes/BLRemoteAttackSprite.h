#pragma once
// BLRemoteAttackSprite
// 基类: BLRoleBase
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "BLRoleBase.h"


class BLRemoteAttackSprite : public BLRoleBase {
public:
    BLRole* getRole() const;
    BLRole* getHitRole() const;
    BLRemoteAttackData* getRemoteAttackData() const;
    BLAttackHurtData* getAttackData() const;
    float getHitTimes() const;
    void setHitTimes(float);
    bool getISPlayAttack() const;
    void setISPlayAttack(bool);
    BLAnimateFrameData* getAnimateFrameData() const;
    ~BLRemoteAttackSprite();
    cocos2d::CCPoint getThrrow() const;
    void setThrrow(cocos2d::CCPoint *);
    void setHitRole(BLRole*);
    void setAnimateFrameData(BLAnimateFrameData*);
    void setRole(BLRole*);
    void setAttackData(BLAttackHurtData*);
    void setRemoteAttackData(BLRemoteAttackData*);
    BLRemoteAttackSprite();
    void createThrrow(BLRole*, BLAnimateFrameData*, BLRemoteAttackData*, std::string);
    undefined8 stand();
    void move();
    void removeSelf();
    void onAttackEnd();
    undefined1 playAttackAction();
    void attack();
    undefined8 standOnEnd();
    void trackRole();
    void setRemotePosition(cocos2d::CCPoint *);
    void attackNextRole();
    void hit(BLHit*, cocos2d::CCArray*);
    void thrrow(BLAnimateFrameData*, cocos2d::CCArray*);
    void onEnter();
    void onExit();
    bool init();
    void setPartnerNode(cocos2d::CCNode*, float);
    void updatePosition();
    void updateFrameDataInTikc(BLAnimateFrameData*);
    void tick(float);
    void updateFrameData(BLAnimateFrameData*);
    int * create();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x364?868 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[868];
};

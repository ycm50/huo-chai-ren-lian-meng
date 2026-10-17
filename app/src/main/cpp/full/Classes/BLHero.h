#pragma once
// BLHero
// 基类: BLRole
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "BLRole.h"


class BLHero : public BLRole {
public:
    undefined1 getisLeftDown() const;
    void setisLeftDown(bool);
    undefined1 getisRightDown() const;
    void setisRightDown(bool);
    undefined1 getisAttackDown() const;
    void setisAttackDown(bool);
    BLAttackCommob* getAttackCommob() const;
    void onExit();
    void onEnter();
    bool init();
    ~BLHero();
    void setAttackCommob(BLAttackCommob*);
    BLHero();
    void clearAttackCommob();
    void playerActionMove();
    void playerAction(float);
    void tick(float);
    int * create();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x380?896 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[896];
};

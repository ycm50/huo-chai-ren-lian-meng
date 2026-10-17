#pragma once
// BLSprite
// 基类: cocos2d::CCSprite
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSprite : public cocos2d::CCSprite {
public:
    BLRoleData* getRoleData() const;
    void setRoleData(BLRoleData*);
    int getUniqID() const;
    void setUniqID(int);
    float getAnimationTime();
    void tick(float);
    ~BLSprite();
    void initWithRoleID(std::string *);
    void setAnimationTime(float);
    BLSprite();
    void initAnimate();
    void initWithRoleData(BLRoleData*);
    void setBeAttackAction(std::string *, std::string, int);
    void onEnter();
    void onExit();
    bool init();
};

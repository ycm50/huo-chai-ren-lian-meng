#pragma once
// BLEffectSprite
// 基类: BLRoleBase
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "BLRoleBase.h"


class BLEffectSprite : public BLRoleBase {
public:
    BLEffectData* getEffectData() const;
    void tick(float);
    void onExit();
    void onEnter();
    bool init();
    ~BLEffectSprite();
    void setEffectData(BLEffectData*);
    BLEffectSprite();
    void initWith(BLEffectData*);
    void initWithID(std::string);
};

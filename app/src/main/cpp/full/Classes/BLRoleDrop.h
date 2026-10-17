#pragma once
// BLRoleDrop
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLRoleDrop {
public:
    int getEnemyType() const;
    void setEnemyType(int);
    BLDropData* getDropData() const;
    void setDropData(BLDropData*);
    void dropItem(ItemData*);
    BLRoleDrop();
    ~BLRoleDrop();
    void dropCoin();
    void dropExp();
    void dropItems();
    void drop(int);
};

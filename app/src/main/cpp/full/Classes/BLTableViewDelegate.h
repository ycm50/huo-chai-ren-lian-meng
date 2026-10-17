#pragma once
// BLTableViewDelegate
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTableViewDelegate {
public:
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void initComplete(BLTableView*);
};

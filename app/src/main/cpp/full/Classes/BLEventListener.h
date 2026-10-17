#pragma once
// BLEventListener
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLEventListener {
public:
    void onDispatch(BLEvent*);
    BLEventListener();
    ~BLEventListener();
    void removeDispatcher(std::string, BLEventDispatcher*);
};

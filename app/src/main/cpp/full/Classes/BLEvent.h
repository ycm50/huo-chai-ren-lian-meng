#pragma once
// BLEvent
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLEvent {
public:
    BLEventDispatcher* getDispatcher() const;
    void setDispatcher(BLEventDispatcher*);
    void* getData() const;
    void setData(void*);
    ~BLEvent();
    std::string getName() const;
    void setName(std::string);
    int * create();
};

#pragma once
// BLEventDispatcher
// 基类: cocos2d::CCDictionary
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLEventDispatcher : public cocos2d::CCDictionary {
public:
    // 补齐 .cpp 中已有但头文件缺的声明
    int addEventListener(int p1);
    bool hasEventListener(std::string *);
    int dispatchEvent(BLEvent*);
    int removeEventListener(std::string *, BLEventListener*);
    void removeEventListener(std::string, BLEventListener*, void (BLEventListener::*)(BLEvent*));
    void removeAllEventListener();
    void dispatchEvent(std::string *);
    void dispatchEvent(std::string *, void*);
    BLEventDispatcher();
    ~BLEventDispatcher();
    void addEventListener(std::string, BLEventListener*, void (BLEventListener::*)(BLEvent*));
};

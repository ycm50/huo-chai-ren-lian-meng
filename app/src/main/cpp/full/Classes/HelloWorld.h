#pragma once
// HelloWorld
// 基类: cocos2d::CCLayer   (BASEFIX: 原版有 vtable —— scene() 里给对象设了 4 个 vptr 槽(0x39/0x3a/0x3b+主槽),
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


//   且 init() 调 ((cocos2d::CCLayer*)this)->init(). 之前误标为(无) -> 无 vtable -> init()+24 崩(fault 0x18).)
class HelloWorld : public cocos2d::CCLayer {
public:
    ~HelloWorld();
    undefined8 tick(float);
    int * scene();
    void menuCloseCallback(cocos2d::CCObject*);
    void initUserBY();
    void delayInit();
    bool init();
};

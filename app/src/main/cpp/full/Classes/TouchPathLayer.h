#pragma once
// TouchPathLayer
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class TouchPathLayer : public cocos2d::CCLayer {
public:
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void removeTouchPath(cocos2d::CCObject*);
    ~TouchPathLayer();
    TouchPathLayer();
    void addTouchPath(cocos2d::CCTouch*, cocos2d::CCEvent*);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    bool init();
    void onEnter();
    void onExit();
};

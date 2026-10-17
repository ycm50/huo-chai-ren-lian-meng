#pragma once
// BLEndLessTimeRwardItem
// 基类: cocos2d::CCSprite
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLEndLessTimeRwardItem : public cocos2d::CCSprite {
public:
    cocos2d::extension::CCControlButton* getBtnItem() const;
    void setBtnItem(cocos2d::extension::CCControlButton*);
    cocos2d::CCLabelTTF* getLabelNum() const;
    void setLabelNum(cocos2d::CCLabelTTF*);
    ~BLEndLessTimeRwardItem();
    BLEndLessTimeRwardItem();
    void initWithItemdData(char const*, int);
    bool init();
    void onEnter();
    void onExit();
};

#pragma once
// BLBackPackItem
// 基类: cocos2d::CCSprite
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLBackPackItem : public cocos2d::CCSprite {
public:
    cocos2d::CCSprite* getSpriteItem() const;
    void setSpriteItem(cocos2d::CCSprite*);
    cocos2d::CCSprite* getSpriteDebris() const;
    void setSpriteDebris(cocos2d::CCSprite*);
    ~BLBackPackItem();
    BLBackPackItem();
    undefined8 initWithItemdData(ItemData*);
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1bc?444 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[444];
};

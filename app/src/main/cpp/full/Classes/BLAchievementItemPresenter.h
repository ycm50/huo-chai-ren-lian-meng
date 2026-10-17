#pragma once
// BLAchievementItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLAchievementItemPresenter : public cocos2d::CCObject {
public:
    AchievementItemData* getItemData() const;
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLAchievementItemPresenter();
    void setItemData(AchievementItemData*);
    BLAchievementItemPresenter();
    undefined4 create(BLAchievementItemView*);
    void onExit();
    void onEnter();
    void initWithView(BLAchievementItemView*);
    void updateData();
    void initWith(AchievementItemData*);
    void updateStatus(cocos2d::CCObject*);
    void addItem();
    void onGet(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

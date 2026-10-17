#pragma once
// BLDailySignItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLDailySignItemPresenter : public cocos2d::CCObject {
public:
    DailySignItemData* getItemInfoData() const;
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLDailySignItemPresenter();
    void onIconBtn(cocos2d::CCObject*, unsigned int);
    void setItemInfoData(DailySignItemData*);
    BLDailySignItemPresenter();
    undefined4 create(BLDailySignItemView*);
    void onExit();
    void onEnter();
    void initWithView(BLDailySignItemView*);
    void initWithItemData(DailySignItemData*);
    void onGetRewardCompleted();
    void onHttpRequestCompleted(cocos2d::CCObject*, cocos2d::extension::CCHttpResponse*);
    void sendGetRewardRequest();
    void onBtnGet(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

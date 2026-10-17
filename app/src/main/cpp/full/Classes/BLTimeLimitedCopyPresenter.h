#pragma once
// BLTimeLimitedCopyPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTimeLimitedCopyPresenter : public cocos2d::CCObject {
public:
    undefined4 getarrHero() const;
    void setarrHero(cocos2d::CCArray*);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    void onChangeHero(cocos2d::CCObject*, unsigned int);
    void onShowItemInfo(cocos2d::CCObject*, unsigned int);
    void onClose(cocos2d::CCObject*, unsigned int);
    void onAbout(cocos2d::CCObject*, unsigned int);
    void onExit();
    void onEnter();
    void onIconBtn(cocos2d::CCObject*, unsigned int);
    BLTimeLimitedCopyPresenter();
    undefined4 create(BLTimeLimitedCopyView*);
    ~BLTimeLimitedCopyPresenter();
    void updataHero();
    void onPlayStart(cocos2d::CCObject*, unsigned int);
    void getEndLessHero(ENDLESSTYP);
    void onSweepRead(cocos2d::CCObject*, unsigned int);
    void showDropData();
    void initWithView(BLTimeLimitedCopyView*);
    void onOrdi(cocos2d::CCObject*, unsigned int);
    void onMed(cocos2d::CCObject*, unsigned int);
    void onDiff(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};

#pragma once
// BLTalentPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTalentPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLTalentPresenter();
    undefined8 updateActiveStatus();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onVIP(cocos2d::CCObject*, unsigned int);
    void onActive(cocos2d::CCObject*, unsigned int);
    void onTalentActive();
    void onTalentDeActive();
    void onDeActiveSure(cocos2d::CCObject*);
    BLTalentPresenter();
    undefined4 create();
    undefined4 initWithView(BLTalentView*);
    void onEnter();
    void onExit();
    void tick(float);
    void checkDebrisEnough();
    void removeItem(int, int);
    void castDebris();
    void upgraceTalentSuccess();
    void onTalentUpgrace();
    void listButtonClickAtIndex(BLListButton*, int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

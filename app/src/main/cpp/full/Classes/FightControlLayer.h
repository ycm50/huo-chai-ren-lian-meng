#pragma once
// FightControlLayer
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class FightControlLayer : public cocos2d::CCLayer {
public:
    bool getISVideoEnd() const;
    void setISVideoEnd(bool);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void updateAttackCount(cocos2d::CCObject*);
    ~FightControlLayer();
    void onChangeBtnAuto();
    void onPauseCallBack(cocos2d::CCObject*, unsigned int);
    void onUpdateExp(cocos2d::CCObject*);
    void onVideoCallBack(cocos2d::CCObject*, unsigned int);
    void onVideoPlayEnd(cocos2d::CCObject*);
    void onShowCardView();
    void onSwitchHero(cocos2d::CCObject*, unsigned int);
    FightControlLayer();
    void initExpBar();
    void playerAction(BLRole*, int, int);
    void onLeftDown(cocos2d::CCObject*, unsigned int);
    void onRightDown(cocos2d::CCObject*, unsigned int);
    void onLeftUp(cocos2d::CCObject*, unsigned int);
    void onRightUp(cocos2d::CCObject*, unsigned int);
    void onAttackDown(cocos2d::CCObject*, unsigned int);
    void onAttackUp(cocos2d::CCObject*, unsigned int);
    void onSkillCallBack(cocos2d::CCObject*, unsigned int);
    void receiveBluetooth(cocos2d::CCObject*);
    void updateSkillInfo();
    void skillCDTick(float, BLRole*);
    void tick(float);
    void initGoGoGo();
    void initBuffLayer();
    void initEndLessTimeLayer();
    void onAddBlood(cocos2d::CCObject*, unsigned int);
    void updatePlayersInfo(cocos2d::CCObject*);
    void initPlayersInfo();
    void onAuto(cocos2d::CCObject*, unsigned int);
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x164?356 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[356];
};

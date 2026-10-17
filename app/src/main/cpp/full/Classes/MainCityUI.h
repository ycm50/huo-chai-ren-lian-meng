#pragma once
// MainCityUI
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MainCityUI : public cocos2d::CCLayer {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void scrollViewDidZoom(cocos2d::extension::CCScrollView*);
    void tick(float);
    ~MainCityUI();
    void onArea(cocos2d::CCObject*);
    void onToJiTan();
    void onMine();
    void scrollViewDidScroll(cocos2d::extension::CCScrollView*);
    MainCityUI();
    int getHeroCount();
    int getMaxHeroLv();
    void onRoleClick(cocos2d::CCObject*);
    void setEntrancesStatus();
    void onPlayerLvUp(cocos2d::CCObject*);
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x110?272 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[272];
};

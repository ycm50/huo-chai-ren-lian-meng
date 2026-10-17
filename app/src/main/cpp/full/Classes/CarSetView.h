#pragma once
// CarSetView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CarSetView : public cocos2d::CCLayer {
public:
    CarSetPresenter* getPresenter() const;
    void setPresenter(CarSetPresenter*);
    cocos2d::extension::CCControlButton* getClose() const;
    void setClose(cocos2d::extension::CCControlButton*);
    cocos2d::CCLabelTTF* getName() const;
    void setName(cocos2d::CCLabelTTF*);
    cocos2d::CCLabelTTF* getInfo() const;
    void setInfo(cocos2d::CCLabelTTF*);
    cocos2d::CCLabelTTF* getInfo2() const;
    void setInfo2(cocos2d::CCLabelTTF*);
    cocos2d::extension::CCScrollView* getCar() const;
    void setCar(cocos2d::extension::CCScrollView*);
    cocos2d::extension::CCScrollView* getAttack() const;
    void setAttack(cocos2d::extension::CCScrollView*);
    cocos2d::extension::CCScrollView* getDefense() const;
    void setDefense(cocos2d::extension::CCScrollView*);
    undefined4 getlife() const;
    void setlife(cocos2d::extension::CCScrollView*);
    cocos2d::extension::CCScrollView* getSpeed() const;
    void setSpeed(cocos2d::extension::CCScrollView*);
    cocos2d::extension::CCControlButton* getBtn_jiantouz() const;
    void setBtn_jiantouz(cocos2d::extension::CCControlButton*);
    cocos2d::extension::CCControlButton* getBtn_jiantouy() const;
    void setBtn_jiantouy(cocos2d::extension::CCControlButton*);
    ~CarSetView();
    CarSetView();
    int * create();
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x138?312 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[312];
};

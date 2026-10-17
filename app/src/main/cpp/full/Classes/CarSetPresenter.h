#pragma once
// CarSetPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CarSetPresenter : public cocos2d::CCObject {
public:
    void tick(float);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onSaveDataFail();
    void onSaveDataSucceed();
    void onGetDataSucceed();
    void onGetDataFail();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onAddRole(cocos2d::CCObject*, unsigned int);
    void onBuyChariotNum();
    ~CarSetPresenter();
    CarSetPresenter();
    void onEnter();
    void onExit();
    undefined4 create(CarSetView*);
    undefined4 initWithView(CarSetView*);
    void onHttpSaveDataSucceed();
    void initTitle(int);
    void onNextCar(cocos2d::CCObject*, unsigned int);
    void onBeforeCar(cocos2d::CCObject*, unsigned int);
    void onLuckCar(cocos2d::CCObject*, unsigned int);
    void initCarSeting();
    void deletUserNotHaveRole();
    undefined8 setCarData(std::vector<CarData*, std::allocator<CarData*>> *);
    void initCarData();
    void initCar();
    int getCarData() const;

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};

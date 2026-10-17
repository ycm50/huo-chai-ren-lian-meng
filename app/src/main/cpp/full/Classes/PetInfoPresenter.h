#pragma once
// PetInfoPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PetInfoPresenter : public cocos2d::CCObject {
public:
    void tick(float);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void feedPet(cocos2d::CCObject*, unsigned int);
    void onFoodInfo(cocos2d::CCObject*, unsigned int);
    void onFeedPet(cocos2d::CCObject*);
    void onEnter();
    undefined4 initWithView(PetInfoView*);
    void updateEXP();
    void feedSuccess();
    void updateFoodView();
    void updateFeedNum();
    ~PetInfoPresenter();
    void updateTake(std::string *);
    void IsTakeClick(cocos2d::CCObject*, unsigned int);
    void onExit();
    PetInfoPresenter();
    undefined4 create(PetInfoView*);
    void insertNewAnimation(std::string *, int, int);
    void getAnimation(std::string *, int, int);
    void UpdateWiewByPetID(std::string *);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x4c?76 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[76];
};

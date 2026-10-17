#pragma once
// PetPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PetPresenter : public cocos2d::CCObject {
public:
    void tick(float);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~PetPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    void listButtonClickAtIndex(BLListButton*, int);
    void onBtnAbout(cocos2d::CCObject*, unsigned int);
    void onUpdatePetList();
    void onUpdateRoleData(cocos2d::CCObject*);
    PetPresenter();
    void onEnter();
    void onExit();
    undefined4 create(PetView*);
    undefined4 initWithView(PetView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

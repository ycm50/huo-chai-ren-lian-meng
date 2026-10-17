#pragma once
// PetSkillUPButtonPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PetSkillUPButtonPresenter : public cocos2d::CCObject {
public:
    void tick(float);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~PetSkillUPButtonPresenter();
    PetSkillUPButtonPresenter();
    void onEnter();
    void onExit();
    undefined4 create(PetSkillUPButtonView*);
    void initWithView(PetSkillUPButtonView*);
    void updateVithSkillID(SkillUserData*, std::string);
    void onSKillUPOneClick(cocos2d::CCObject*, unsigned int);
    void onSKillUPAllClick(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

#pragma once
// PetSkillUPLabelPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PetSkillUPLabelPresenter : public cocos2d::CCObject {
public:
    void tick(float);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~PetSkillUPLabelPresenter();
    PetSkillUPLabelPresenter();
    void onEnter();
    void onExit();
    undefined4 create(PetSkillUPLabelView*);
    void initWithView(PetSkillUPLabelView*);
    void updateView(SkillUserData*, std::string, int);
    void updateLbLV(SkillUserData*, std::string);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

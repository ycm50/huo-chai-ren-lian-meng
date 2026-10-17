#pragma once
// PetSkillUPPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PetSkillUPPresenter : public cocos2d::CCObject {
public:
    void tick(float);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~PetSkillUPPresenter();
    PetSkillUPPresenter();
    void onEnter();
    void onExit();
    undefined4 create(PetSkillUPView*);
    undefined4 initWithView(PetSkillUPView*);
    void updateZhuanShuSkill();
    void updateView();
    void setNewSkill();
    void onUnlockSkill1(cocos2d::CCObject*, unsigned int*);
    void onUnlockSkill2(cocos2d::CCObject*, unsigned int*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

#pragma once
// BLPetSkillIconPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLPetSkillIconPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLPetSkillIconPresenter();
    void onBtn(cocos2d::CCObject*, unsigned int);
    BLPetSkillIconPresenter();
    undefined4 create();
    void initWithView(BLPetSkillIconView*);
    void onEnter();
    void onExit();
    void updateWithData(int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

#pragma once
// BLPetSkillInfoPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLPetSkillInfoPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLPetSkillInfoPresenter();
    void onBtnClose(cocos2d::CCObject*, unsigned int);
    BLPetSkillInfoPresenter();
    undefined4 create();
    void initWithView(BLPetSkillInfoView*);
    void onEnter();
    void onExit();
    void updateWithData(int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

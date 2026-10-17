#pragma once
// BLPetRefreshSkillPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLPetRefreshSkillPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLPetRefreshSkillPresenter();
    void numOfCellItem(BLTableView*);
    undefined4 sizeOfCellItem(BLTableView*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    BLPetRefreshSkillPresenter();
    undefined4 create();
    void onEnter();
    void onExit();
    void updateCostData();
    void updatePetSkill();
    void initWithView(BLPetRefreshSkillView*);
    void updateWithData(PetUserItemData*);
    void updateWithPet(cocos2d::CCObject*);
    void chagePetSkill();
    void onBtnRefresh(cocos2d::CCObject*, unsigned int);
    void upDatePetSkillAnimation();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};

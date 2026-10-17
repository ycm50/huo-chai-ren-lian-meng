#pragma once
// BLSkillControlButton
// 基类: BLControlButton
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "BLControlButton.h"


class BLSkillControlButton : public BLControlButton {
public:
    int * create();
    ~BLSkillControlButton();
    BLSkillControlButton();
    void setPercentage(int);
    void tick(float, BLRole*);
    void initWithRoleAndSkillName(std::string, std::string *);
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1a0?416 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[416];
};

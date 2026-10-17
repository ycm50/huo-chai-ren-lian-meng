#pragma once
// PetUserItemData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PetUserItemData {
public:
    PetUserItemData();
    ~PetUserItemData();
    int checkSkillUpgraceable(int);
    void updateDB(std::string, std::string *);
    void levelUp();
    void addExp(int);
    undefined1 updateSelect();
    void resetSkill(PetSkillIndex, int);
    void upgraceSkill(int);
    undefined8 initSkillNull();
    void initWithData(char**, int&);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

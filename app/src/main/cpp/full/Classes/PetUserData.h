#pragma once
// PetUserData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PetUserData {
public:
    undefined4 checkIsSkillInUse(int);
    int getPetWithSkill(int);
    int getUsedSkillData(int);
    int getItemData(std::string);
    undefined8 insertSkillInUse(int);
    undefined8 updateSkillInUse();
    ~PetUserData();
    int isPetFree(std::string);
    undefined4 updateSelectStatus(std::string);
    void insertNewPet(std::string);
    undefined8 addPet(std::string);
    bool init();
    PetUserData();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

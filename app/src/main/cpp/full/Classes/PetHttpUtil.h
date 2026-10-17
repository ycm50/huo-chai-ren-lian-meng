#pragma once
// PetHttpUtil
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PetHttpUtil : public cocos2d::CCObject {
public:
    ~PetHttpUtil();
    PetHttpUtil();
    int getInstance();
    void getSkillWashDate();
    void getSkillRefreshData();
    void getTrainPetDate();
    void putTrainPetDate();
    int getTotalValue(std::vector<int, std::allocator<int>>&);
    void setFirstSkillId(int);
    void setSecondSkillId(int);
    void getIndexInVector(std::vector<int, std::allocator<int>>&, int);
    void getIndexById(std::vector<int, std::allocator<int>>&, int);
    void setSkillId();
    void onSkillUnlockCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onSkillRefreshCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onPetTrainGetCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onPetTrainPutCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x3c?60 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[60];
};

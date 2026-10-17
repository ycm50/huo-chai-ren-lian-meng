#pragma once
// TalentUserData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class TalentUserData : public cocos2d::CCObject {
public:
    int getTalentLimit() const;
    void setTalentLimit(int);
    void upgraceLv(TalentUserItemData*);
    TalentUserData();
    ~TalentUserData();
    undefined8 isTalentOpen(TalentUserItemData*);
    void isTalentSelected(TalentUserItemData*);
    undefined8 getItemDataById(int);
    void getActiveTalentAttribute(int);
    undefined8 getActiveTalentId(int);
    void updateSelect(TalentUserItemData*, bool);
    void updateSelect(TalentUserItemData*);
    void getAllTalentData();
    void addTalent(int);
    void checkTalentData();
    bool init();
    void updateOpen(TalentUserItemData*, bool);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};

#pragma once
// BLSuitUpGraceItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSuitUpGraceItemPresenter : public cocos2d::CCObject {
public:
    bool getClickable() const;
    void setClickable(bool);
    int getType() const;
    void setType(int);
    int getPart() const;
    void setPart(int);
    int getLv() const;
    void setLv(int);
    ~BLSuitUpGraceItemPresenter();
    BLSuitUpGraceItemPresenter();
    undefined4 create();
    void initWithView(BLSuitUpGraceItemView*);
    void initWithPartId(SuitEquipPartType *);
    void onEnter();
    void onExit();
    void showInfo();
    void onClick(cocos2d::CCObject*, unsigned int);
    void initWithId(int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};

#pragma once
// BLSuitUpGraceListPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSuitUpGraceListPresenter : public cocos2d::CCObject {
public:
    BackPackItemData* getBackPackItemData() const;
    void setBackPackItemData(BackPackItemData*);
    int getSelIndex() const;
    void setSelIndex(int);
    ~BLSuitUpGraceListPresenter();
    undefined4 getRoleId() const;
    BLSuitUpGraceListPresenter();
    undefined4 create();
    void onEnter();
    void onExit();
    void updateSelIndes(int);
    void initWithData(std::string);
    void initWithView(BLSuitUpGraceListView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

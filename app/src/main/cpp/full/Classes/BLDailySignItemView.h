#pragma once
// BLDailySignItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLDailySignItemView : public cocos2d::CCLayer {
public:
    // 嵌套类型占位（原类型不可恢复）
    typedef int GetBtnState;
    ~BLDailySignItemView();
    BLDailySignItemView();
    int * create();
    undefined4 getPresenter();
    void setIconBtnImage(std::string);
    void setGetBtnState(BLDailySignItemView::GetBtnState);
    undefined4 getLabName();
    undefined4 getSprIcon();
    undefined4 getLabValue();
    undefined4 getLabDate();
    undefined4 getBtnget();
    undefined4 getLabValueText();
    undefined4 getLabValueUnit();
    undefined4 getIconBtn();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x138?312 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[312];
};

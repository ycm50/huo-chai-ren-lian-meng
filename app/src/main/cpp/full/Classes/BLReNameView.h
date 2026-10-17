#pragma once
// BLReNameView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLReNameView : public cocos2d::CCLayer {
public:
    void editBoxEditingDidBegin(cocos2d::extension::CCEditBox*);
    void editBoxEditingDidEnd(cocos2d::extension::CCEditBox*);
    void editBoxReturn(cocos2d::extension::CCEditBox*);
    ~BLReNameView();
    void editBoxTextChanged(cocos2d::extension::CCEditBox*, std::string const&);
    BLReNameView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnOK();
    undefined4 getBtnClose();
    undefined4 getSPBackGround();
    undefined4 getSPTabBg();
    undefined4 getSPZuanshi();
    undefined4 getSpName();
    undefined4 getLabTitle();
    undefined4 getLabBtnOK();
    undefined4 getLab_1();
    undefined4 getLab_2();
    undefined4 getLab_3();
    undefined4 getEditName();
    void setTextDelegate(CEInputBoxDelegate*);
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x148?328 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[328];
};

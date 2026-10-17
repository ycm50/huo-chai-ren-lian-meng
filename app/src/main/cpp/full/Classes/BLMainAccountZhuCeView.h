#pragma once
// BLMainAccountZhuCeView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMainAccountZhuCeView : public cocos2d::CCLayer {
public:
    void editBoxEditingDidBegin(cocos2d::extension::CCEditBox*);
    void editBoxEditingDidEnd(cocos2d::extension::CCEditBox*);
    void editBoxTextChanged(cocos2d::extension::CCEditBox*, std::string const&);
    ~BLMainAccountZhuCeView();
    void editBoxReturn(cocos2d::extension::CCEditBox*);
    BLMainAccountZhuCeView();
    int * create();
    undefined4 getPresenter();
    void addEditBox(cocos2d::extension::CCEditBox*, cocos2d::CCPoint *, char const*, bool);
    undefined4 getBtnClose();
    undefined4 getBtnZhuCe();
    undefined4 getEditEmail();
    undefined4 getEditEmail2();
    undefined4 getEditPass();
    undefined4 getEditPass2();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x14c?332 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[332];
};

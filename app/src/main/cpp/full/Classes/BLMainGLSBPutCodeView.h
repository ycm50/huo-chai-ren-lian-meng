#pragma once
// BLMainGLSBPutCodeView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMainGLSBPutCodeView : public cocos2d::CCLayer {
public:
    void editBoxEditingDidBegin(cocos2d::extension::CCEditBox*);
    void editBoxEditingDidEnd(cocos2d::extension::CCEditBox*);
    void editBoxTextChanged(cocos2d::extension::CCEditBox*, std::string const&);
    void editBoxReturn(cocos2d::extension::CCEditBox*);
    ~BLMainGLSBPutCodeView();
    BLMainGLSBPutCodeView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 getTabBg();
    undefined4 getLabTitle();
    undefined4 getLabTip();
    undefined4 getLabOK();
    undefined4 getBtnClose();
    undefined4 getBtnOK();
    undefined4 getEditContent();
    void onExit();
    void onEnter();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x134?308 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[308];
};

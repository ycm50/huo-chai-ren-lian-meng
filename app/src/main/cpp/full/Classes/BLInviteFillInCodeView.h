#pragma once
// BLInviteFillInCodeView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLInviteFillInCodeView : public cocos2d::CCLayer {
public:
    void editBoxEditingDidBegin(cocos2d::extension::CCEditBox*);
    void editBoxEditingDidEnd(cocos2d::extension::CCEditBox*);
    void editBoxTextChanged(cocos2d::extension::CCEditBox*, std::string const&);
    void editBoxReturn(cocos2d::extension::CCEditBox*);
    ~BLInviteFillInCodeView();
    BLInviteFillInCodeView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 getTabBg();
    undefined4 getLabTitle();
    undefined4 getLabGuize();
    undefined4 getBtnClose();
    undefined4 getEditName();
    undefined4 getBtnGetReward();
    void setTextDelegate(CEInputBoxDelegate1*);
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x130?304 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[304];
};

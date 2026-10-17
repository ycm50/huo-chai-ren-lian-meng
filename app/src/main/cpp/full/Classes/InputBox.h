#pragma once
// InputBox
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class InputBox : public cocos2d::CCLayer {
public:
    int * create();
    void editBoxEditingDidEnd(cocos2d::extension::CCEditBox*);
    void editBoxTextChanged(cocos2d::extension::CCEditBox*, std::string const&);
    void editBoxReturn(cocos2d::extension::CCEditBox*);
    void onExit();
    void onEnter();
    ~InputBox();
    InputBox();
    undefined4 JudgeNumId(char const*);
    undefined4 GetInput();
    void GetText();
    void SetOriColor();
    void IsContainSpeaicl();
    void setTextDelegate(InputBoxDelegate*);
    void SetInputColor();
    void editBoxEditingDidBegin(cocos2d::extension::CCEditBox*);
    void SetMaxLength(int);
    undefined4 getEditBox();
    void SetMaxLength();
    bool init();
};

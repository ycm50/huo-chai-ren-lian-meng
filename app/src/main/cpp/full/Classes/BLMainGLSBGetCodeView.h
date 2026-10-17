#pragma once
// BLMainGLSBGetCodeView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMainGLSBGetCodeView : public cocos2d::CCLayer {
public:
    ~BLMainGLSBGetCodeView();
    BLMainGLSBGetCodeView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnClose();
    void onExit();
    void onEnter();
    bool init();
};

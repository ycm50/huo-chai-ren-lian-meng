#pragma once
// BLMissionMirrorBtnPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionMirrorBtnPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLMissionMirrorBtnPresenter();
    void onResetData();
    BLMissionMirrorBtnPresenter();
    undefined4 create();
    void initWithView(BLMissionMirrorBtnView*);
    void onEnter();
    void onExit();
    void onGetMirrorDataSuccess();
    void updateWithData(int);
    void onClick(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

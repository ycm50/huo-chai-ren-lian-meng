#pragma once
// BLGMSpecTestPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLGMSpecTestPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onUpdateBtn(GMSpecData*);
    void tick(float);
    ~BLGMSpecTestPresenter();
    void onTextChanged(InputBox*);
    void onClose(cocos2d::CCObject*, unsigned int);
    BLGMSpecTestPresenter();
    undefined4 create(BLGMSpecTestView*);
    void onExit();
    void onEnter();
    void onTextDidEnd(InputBox*);
    void showSceneByStatus();
    void onCommit(cocos2d::CCObject*, unsigned int);
    void onMain(cocos2d::CCObject*, unsigned int);
    void getBtnDownMission(cocos2d::CCObject*, unsigned int);
    void getBtnModifyMission(cocos2d::CCObject*, unsigned int);
    void getBtnUpMission(cocos2d::CCObject*, unsigned int);
    undefined4 initWithView(BLGMSpecTestView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x3c?60 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[60];
};

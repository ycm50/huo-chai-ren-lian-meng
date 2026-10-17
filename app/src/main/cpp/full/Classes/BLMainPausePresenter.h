#pragma once
// BLMainPausePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMainPausePresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void updateView();
    ~BLMainPausePresenter();
    void onCheckFailed(MainPauseCheckData*);
    void onFanKui(cocos2d::CCObject*, unsigned int);
    undefined * onDownLoadData();
    void onGLSB(cocos2d::CCObject*, unsigned int);
    void updateTip();
    void updateInfo();
    void onMusic(cocos2d::CCObject*, unsigned int);
    void onSound(cocos2d::CCObject*, unsigned int);
    void onDuiHuan(cocos2d::CCObject*, unsigned int);
    void onClose(cocos2d::CCObject*, unsigned int);
    void onCallBackZhuCe(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void tick(float);
    void onCheckSuccess(MainPauseCheckData*);
    void onSureDownLoadSave(cocos2d::CCObject*);
    BLMainPausePresenter();
    undefined4 create(BLMainPauseView*);
    void onExit();
    void onEnter();
    void initWithView(BLMainPauseView*);
    void updateDevice();
    void onQuit(cocos2d::CCObject*, unsigned int);
    void updateViewYJTD();
    void onGongGao(cocos2d::CCObject*, unsigned int);
    void onAccount(cocos2d::CCObject*, unsigned int);
    void onSaveData(cocos2d::CCObject*, unsigned int);
    void onYJBD(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

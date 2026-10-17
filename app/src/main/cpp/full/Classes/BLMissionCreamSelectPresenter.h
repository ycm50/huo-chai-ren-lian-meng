#pragma once
// BLMissionCreamSelectPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionCreamSelectPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLMissionCreamSelectPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onPage5(cocos2d::CCObject*, unsigned int);
    void onPage3(cocos2d::CCObject*, unsigned int);
    void onPage4(cocos2d::CCObject*, unsigned int);
    void onAddValleryNum(cocos2d::CCObject*, unsigned int);
    void onAddMirrorNum(cocos2d::CCObject*, unsigned int);
    void onUpdateMirrorData();
    void onUpdateValleryData();
    void onIntoVallery();
    void onMirrorBuySuccess();
    void onValleryTimeBuySuccess();
    void onAddMoneyTreeNum(cocos2d::CCObject*, unsigned int);
    void onUpdateMoneyTreeDate();
    BLMissionCreamSelectPresenter();
    undefined4 create(BLMissionCreamSelectView*);
    void onEnter();
    void onExit();
    void onGetMirrorDataSuccess();
    void onAddnum(cocos2d::CCObject*, unsigned int);
    void initview();
    void onCreamUpdate();
    void onUpdateNum(MissionCreamSelectData*);
    void initWithView(BLMissionCreamSelectView*);
    void onPage1(cocos2d::CCObject*, unsigned int);
    void onPage2(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};

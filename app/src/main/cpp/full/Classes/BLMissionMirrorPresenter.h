#pragma once
// BLMissionMirrorPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionMirrorPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    int numOfCellItem(BLTableView*);
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    undefined4 sizeOfCellItem(BLTableView*);
    undefined8 onCancleRole();
    void onSweep(cocos2d::CCObject*, unsigned int);
    void onUpdateNum();
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void onShop(cocos2d::CCObject*, unsigned int);
    void onAbout(cocos2d::CCObject*, unsigned int);
    void onClose(cocos2d::CCObject*, unsigned int);
    void onAddNum(cocos2d::CCObject*, unsigned int);
    undefined8 onPurchaseSuccess();
    ~BLMissionMirrorPresenter();
    BLMissionMirrorPresenter();
    undefined4 create();
    void onEnter();
    void onExit();
    void initWithView(BLMissionMirrorView*);
    void onUpdateSweepBtn();
    void onSelectRole(cocos2d::CCObject*);
    void onChallengeSuccess();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x38?56 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[56];
};

#pragma once
// BLMirrorChallengeResultPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMirrorChallengeResultPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLMirrorChallengeResultPresenter();
    void onQuit(cocos2d::CCObject*, unsigned int);
    void onClickInfo(cocos2d::CCObject*, unsigned int);
    BLMirrorChallengeResultPresenter();
    undefined4 create(BLMirrorChallengeResultView*);
    void onEnter();
    void onExit();
    void initWith(bool);
    void addItem(std::vector<int, std::allocator<int>> *);
    void initWithView(BLMirrorChallengeResultView*);
    void onChallengeSuccess();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};

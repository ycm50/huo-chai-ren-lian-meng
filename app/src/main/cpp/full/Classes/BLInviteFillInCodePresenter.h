#pragma once
// BLInviteFillInCodePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLInviteFillInCodePresenter : public cocos2d::CCObject {
public:
    void tick(float);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onClose(cocos2d::CCObject*, unsigned int);
    void onEnter();
    void onExit();
    ~BLInviteFillInCodePresenter();
    BLInviteFillInCodePresenter();
    undefined4 create(BLInviteFillInCodeView*);
    void setGuize(char const*);
    void initWithView(BLInviteFillInCodeView*);
    void onGetReward(cocos2d::CCObject*, unsigned int);
    void onPostRewardData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x34?52 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[52];
};

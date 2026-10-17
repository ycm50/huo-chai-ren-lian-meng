#pragma once
// BLRoleInfoPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLRoleInfoPresenter : public cocos2d::CCObject {
public:
    int getCurrentIndex() const;
    void setCurrentIndex(int);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    void setCharge(std::string);
    ~BLRoleInfoPresenter();
    std::string getCharge() const;
    void onExp(cocos2d::CCObject*, unsigned int);
    void onTuPo(cocos2d::CCObject*, unsigned int);
    void onRight(cocos2d::CCObject*, unsigned int);
    void onLeft(cocos2d::CCObject*, unsigned int);
    void onUse(cocos2d::CCObject*, unsigned int);
    int numOfPages(BLPageLayer*);
    void nodeOfPageAtIndex(BLPageLayer*, int);
    BLRoleInfoPresenter();
    undefined4 create(BLRoleInfoView*);
    void onExit();
    void onEnter();
    void updateRuneAttr(cocos2d::CCObject*);
    void onGetGiftComplete(cocos2d::CCObject*);
    undefined4 initWithView(BLRoleInfoView*);
    void updateEquipPackNum();
    void updateData(cocos2d::CCObject*);
    void initWithIndex(int);
    void updataExp(cocos2d::CCObject*);
    void pageChange(BLPageLayer*, int);
    void onGift(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};

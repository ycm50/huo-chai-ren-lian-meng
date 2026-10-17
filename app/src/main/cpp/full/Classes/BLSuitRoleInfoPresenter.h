#pragma once
// BLSuitRoleInfoPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSuitRoleInfoPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    int getCurrentIndex() const;
    void setCurrentIndex(int);
    void tick(float);
    void setCharge(std::string);
    ~BLSuitRoleInfoPresenter();
    void upequipsuit(cocos2d::CCObject*);
    void onUnuse(cocos2d::CCObject*, unsigned int);
    std::string getCharge() const;
    BLSuitRoleInfoPresenter();
    undefined4 create(BLSuitRoleInfoView*);
    void onExit();
    void onEnter();
    undefined4 initWithView(BLSuitRoleInfoView*);
    void onBtn1(cocos2d::CCObject*, unsigned int);
    void onBtn2(cocos2d::CCObject*, unsigned int);
    void onBtn3(cocos2d::CCObject*, unsigned int);
    void unequipsuit(int);
    void onSuit1(cocos2d::CCObject*, unsigned int);
    void onSuit2(cocos2d::CCObject*, unsigned int);
    void onSuit3(cocos2d::CCObject*, unsigned int);
    void onSuit4(cocos2d::CCObject*, unsigned int);
    void onSuit5(cocos2d::CCObject*, unsigned int);
    void onSuit6(cocos2d::CCObject*, unsigned int);
    void updateItem(int, std::string *, int);
    void updateData(cocos2d::CCObject*);
    void initWithIndex(int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

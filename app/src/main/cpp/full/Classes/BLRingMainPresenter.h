#pragma once
// BLRingMainPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLRingMainPresenter : public cocos2d::CCObject {
public:
    int getCurrentIndex() const;
    void setCurrentIndex(int);
    cocos2d::CCArray* getArrayHero() const;
    void setArrayHero(cocos2d::CCArray*);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLRingMainPresenter();
    void goToHeroRank();
    void onHelp(cocos2d::CCObject*, unsigned int);
    void onUser(cocos2d::CCObject*, unsigned int);
    void onChangeHero(cocos2d::CCObject*, unsigned int);
    void onShare(cocos2d::CCObject*, unsigned int);
    void onRecordInfo();
    void onGetShopInfoSuccess();
    void onClose(cocos2d::CCObject*, unsigned int);
    undefined8 updateDimandCount();
    undefined4 sizeOfCellItem(BLTableView*);
    void goToReward();
    void onRefreshInfo();
    void onHeroRank(cocos2d::CCObject*, unsigned int);
    void onRecord(cocos2d::CCObject*, unsigned int);
    undefined8 updateCiShu();
    void onUpdateJiFen(cocos2d::CCObject*);
    void onReward(cocos2d::CCObject*, unsigned int);
    void reName();
    void onAddCiShu(cocos2d::CCObject*, unsigned int);
    void onRefresh(cocos2d::CCObject*, unsigned int);
    void reNameFail(cocos2d::CCObject*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void onChangeHeroLineUp();
    BLRingMainPresenter();
    undefined4 create(BLRingMainView*);
    void onExit();
    void initWithView(BLRingMainView*);
    void onClick(cocos2d::CCObject*, unsigned int);
    void initRefresh();
    void onEnter();
    undefined8 updateRefresh(float);
    void tick(float);
    undefined8 updateSelect(int);
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void onUpdateSelect(cocos2d::CCObject*);
    int numOfCellItem(BLTableView*);
    void onStart(cocos2d::CCObject*, unsigned int);
    void onShop(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x34?52 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[52];
};

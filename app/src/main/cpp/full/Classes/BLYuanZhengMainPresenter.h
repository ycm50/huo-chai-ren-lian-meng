#pragma once
// BLYuanZhengMainPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLYuanZhengMainPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onBuyChariotNumFinal();
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void tick(float);
    int sizeOfCellItem(BLTableView*);
    undefined8 updateDimandCount();
    void onZhanChePeiZhi(cocos2d::CCObject*, unsigned int);
    void onRest(cocos2d::CCObject*, unsigned int);
    int onAbout(cocos2d::CCObject*, unsigned int);
    void onSearch(cocos2d::CCObject*, unsigned int);
    void onBuyChariotNum();
    bool onAddCount(cocos2d::CCObject*, unsigned int);
    void onEnter();
    void onExit();
    int getLongZhanCheData(std::vector<std::string, std::allocator<std::string>> *);
    void getWanString(long long);
    void onClick(cocos2d::CCObject*, unsigned int);
    void onZhanChe(cocos2d::CCObject*, unsigned int);
    void onUpdateTSDJ(cocos2d::CCObject*);
    ~BLYuanZhengMainPresenter();
    BLYuanZhengMainPresenter();
    undefined4 create(BLYuanZhengMainView*);
    int insertNewAnimation(std::string *, int, int, std::string *);
    void getAnimation(std::string *, int, int, std::string *);
    void initWithView(BLYuanZhengMainView*);
    void onGetSearchZC();
    void onGetFightResult();
    void onFreash();
    undefined8 onBuyChariotNumSucceed();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onXiJi(cocos2d::CCObject*, unsigned int);
    void toXiJi();
    void toSearch();
    int numOfCellItem(BLTableView*);
    int nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x3c?60 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[60];
};
class zcRankInfo;

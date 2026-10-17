#pragma once
// BLPageLayer
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLPageLayer : public cocos2d::CCLayer {
public:
    bool getISMaxThreePages() const;
    void setISMaxThreePages(bool);
    float getResponseDistance() const;
    void setResponseDistance(float);
    BLPageLayerDelegate* getDelegate() const;
    void setDelegate(BLPageLayerDelegate*);
    bool getIsViewSize() const;
    void setIsViewSize(bool);
    bool getISCache() const;
    void setISCache(bool);
    cocos2d::CCLayer* getContainer() const;
    void setContainer(cocos2d::CCLayer*);
    cocos2d::CCSize getViewSize();
    void registerWithTouchDispatcher();
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    BLPageLayer();
    void cleanupNodes();
    ~BLPageLayer();
    int * create();
    void setCurrentPage(int);
    int getCurrentPage();
    void setViewSize(cocos2d::CCSize *);
    void setDataSource(BLPageLayerDataSource*);
    void isChildIsScrollview(cocos2d::CCNode*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    undefined4 getRealScale(cocos2d::CCNode*);
    void initNewNode();
    void reloadData();
    void onMoveToComplete();
    void moveTo(cocos2d::CCPoint *);
    void nextPage();
    void frontPage();
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    bool init();
    void onExit();
    void visit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x148?328 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[328];
};

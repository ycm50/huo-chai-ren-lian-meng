#pragma once
// BLLuckyDrawPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLLuckyDrawPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLLuckyDrawPresenter();
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void onHelp(cocos2d::CCObject*, unsigned int);
    undefined4 sizeOfCellItem(BLTableView*);
    void onUpdateVirtualItemData(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*, unsigned int);
    BLLuckyDrawPresenter();
    void onEnter();
    void onExit();
    ulonglong reloadRecords();
    void onRecorsPage(cocos2d::CCObject*, unsigned int);
    undefined4 initWithView(BLLuckyDrawView*);
    undefined4 create(BLLuckyDrawView*);
    void requestLuckyDrawOp(ENUM_LUCKYDRAW_OP_TYPE);
    void tick(float);
    int numOfCellItem(BLTableView*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    ulonglong onTurnOnce(cocos2d::CCObject*, unsigned int);
    undefined8 onTurnFive(cocos2d::CCObject*, unsigned int);
    undefined8 resetUI();
    void onHttpRespondInfo(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onHttpRespondResult(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x44?68 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[68];
};

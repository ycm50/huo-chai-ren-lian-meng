#pragma once
// BLGMTestPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLGMTestPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    undefined8 onUpdateBtn(GMData*);
    void onUpdateEndless(GMData*);
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void tick(float);
    ~BLGMTestPresenter();
    void onTextChanged(InputBox*);
    undefined4 sizeOfCellItem(BLTableView*);
    void onClose(cocos2d::CCObject*, unsigned int);
    void onUpdateOwn(GMData*);
    void onUpdateLv(GMData*);
    BLGMTestPresenter();
    undefined4 create(BLGMTestView*);
    void onExit();
    void onEnter();
    void onTextDidEnd(InputBox*);
    uint numOfCellItem(BLTableView*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void showSceneByStatus();
    void onCommit(cocos2d::CCObject*, unsigned int);
    void onMain(cocos2d::CCObject*, unsigned int);
    void getBtnunlockhero(cocos2d::CCObject*, unsigned int);
    void getBtnlvhero(cocos2d::CCObject*, unsigned int);
    void getBtnlevel(cocos2d::CCObject*, unsigned int);
    void getBtnequip(cocos2d::CCObject*, unsigned int);
    void getBtnupgrade(cocos2d::CCObject*, unsigned int);
    void getBtnskill(cocos2d::CCObject*, unsigned int);
    void getBtnother(cocos2d::CCObject*, unsigned int);
    void getBtnsell(cocos2d::CCObject*, unsigned int);
    undefined4 initWithView(BLGMTestView*);
    void onUpdateLevel(GMData*);
    void getBtnendless(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x5c?92 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[92];
};

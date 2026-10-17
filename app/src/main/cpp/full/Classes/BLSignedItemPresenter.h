#pragma once
// BLSignedItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSignedItemPresenter : public cocos2d::CCObject {
public:
    // 嵌套类型占位（原类型不可恢复）
    typedef int SignedState;
    int getItemState() const;
    void setItemState(BLSignedItemPresenter::SignedState *);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLSignedItemPresenter();
    BLSignedItemPresenter();
    undefined4 create(BLSignedItemView*);
    void onExit();
    void onEnter();
    void initWithView(BLSignedItemView*);
    void addItem(std::vector<int, std::allocator<int>> *);
    void initWithData(int);
    void onIconBtn(cocos2d::CCObject*, unsigned int);
    void onSignedSuccess();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};

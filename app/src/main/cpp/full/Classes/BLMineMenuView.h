#pragma once
// BLMineMenuView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMineMenuView : public cocos2d::CCLayer {
public:
    BLVirtualItemView* getItemCopper() const;
    void setItemCopper(BLVirtualItemView*);
    BLVirtualItemView* getItemDiamond() const;
    void setItemDiamond(BLVirtualItemView*);
    ~BLMineMenuView();
    BLMineMenuView();
    undefined4 getPresenter();
    undefined4 getBtnAbout();
    undefined4 getBtnClose();
    void onUpdateVirtualItemData(cocos2d::CCObject*);
    void initView();
    bool init();
    void onExit();
    void onEnter();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x11c?284 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[284];
};

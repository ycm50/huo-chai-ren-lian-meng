#pragma once
// JingJiShopItemNumView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class JingJiShopItemNumView : public cocos2d::CCLayer {
public:
    cocos2d::CCLabelTTF* getLabNum() const;
    void setLabNum(cocos2d::CCLabelTTF*);
    cocos2d::CCLabelTTF* getLabUpgrace() const;
    void setLabUpgrace(cocos2d::CCLabelTTF*);
    cocos2d::CCLayerColor* getLayerColor() const;
    void setLayerColor(cocos2d::CCLayerColor*);
    BLPageControl* getPageControl() const;
    void setPageControl(BLPageControl*);
    cocos2d::CCLabelTTF* getLabStar() const;
    void setLabStar(cocos2d::CCLabelTTF*);
    ~JingJiShopItemNumView();
    JingJiShopItemNumView();
    void setUpgraceLV(int);
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x120?288 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[288];
};

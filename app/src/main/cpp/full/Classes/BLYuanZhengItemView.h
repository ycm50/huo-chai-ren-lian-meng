#pragma once
// BLYuanZhengItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLYuanZhengItemView : public cocos2d::CCLayer {
public:
    int getIndex() const;
    void setIndex(int);
    ~BLYuanZhengItemView();
    BLYuanZhengItemView();
    int * create();
    undefined4 getPresenter();
    undefined4 getSprBG();
    undefined4 getSpNum();
    undefined4 getLabName();
    undefined4 getLabFight();
    undefined4 getBtnInfo();
    undefined4 getSprSel();
    undefined4 getSprimg_icon();
    void onEnter();
    void onExit();
    bool init();
};
class zcRankInfo;

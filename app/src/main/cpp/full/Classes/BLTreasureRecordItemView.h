#pragma once
// BLTreasureRecordItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTreasureRecordItemView : public cocos2d::CCLayer {
public:
    // 补齐 .cpp 中已有但头文件缺的声明
    BLTreasureRecordItemView();
    ~BLTreasureRecordItemView();
    BLTreasureRecordItemView(int);
    int * create(int);
    void initView();
    undefined4 getPresenter();
    undefined4 getSpBg();
    bool init();
    void onEnter();
    void onExit();
};

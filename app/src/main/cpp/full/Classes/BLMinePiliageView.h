#pragma once
// BLMinePiliageView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMinePiliageView : public cocos2d::CCLayer {
public:
    ~BLMinePiliageView();
    BLMinePiliageView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 getTabBg();
    undefined4 getLabTitle();
    undefined4 getLabAllPiliageNumber();
    undefined4 getBtnClose();
    void initMineItem(std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int>>>);
    void onEnter();
    void onExit();
    bool init();
};

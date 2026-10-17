#pragma once
// BLPageControl
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLPageControl : public cocos2d::CCLayer {
public:
    int getPageNum() const;
    void setPageNum(int);
    float getDistance() const;
    void setDistance(float);
    int getPageControlAlignment();
    undefined8 setCurrentPage(int);
    int getCurrentPage();
    void setCurrentImage(std::string);
    void setTintImage(std::string);
    ~BLPageControl();
    std::string getCurrentImage() const;
    std::string getTintImage() const;
    BLPageControl();
    void reload();
    void setPageControlAlignment(EnumPageControlAlignment);
    bool init();
    void onEnter();
    void onExit();
    int * create();
};

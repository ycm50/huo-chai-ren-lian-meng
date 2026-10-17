#pragma once
// PKHallView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PKHallView : public cocos2d::CCLayer {
public:
    cocos2d::CCArray* getArraySel() const;
    void setArraySel(cocos2d::CCArray*);
    cocos2d::CCArray* getArrayItem() const;
    void setArrayItem(cocos2d::CCArray*);
    cocos2d::CCArray* getArrayHero() const;
    void setArrayHero(cocos2d::CCArray*);
    ~PKHallView();
    PKHallView();
    int * create();
    void refreshSelectedHeros(std::vector<std::string, std::allocator<std::string>> *);
    int * newBtn(std::string *);
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x174?372 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[372];
};

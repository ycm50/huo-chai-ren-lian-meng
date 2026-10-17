#pragma once
// BLTalentLimitView
// 基类: cocos2d::CCSprite
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTalentLimitView : public cocos2d::CCSprite {
public:
    cocos2d::extension::CCScale9Sprite* getSpriteBg() const;
    void setSpriteBg(cocos2d::extension::CCScale9Sprite*);
    cocos2d::CCLabelTTF* getLabeTitle() const;
    void setLabeTitle(cocos2d::CCLabelTTF*);
    ~BLTalentLimitView();
    BLTalentLimitView();
    undefined8 refresh();
    void openLimit(cocos2d::CCObject*, unsigned int);
    void onBuyComplete(cocos2d::CCObject*);
    void onEnter();
    void onExit();
    int * newBtn(std::string *);
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1cc?460 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[460];
};

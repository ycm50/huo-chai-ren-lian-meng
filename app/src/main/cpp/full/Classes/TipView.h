#pragma once
// TipView
// 基类: cocos2d::CCSprite
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class TipView : public cocos2d::CCSprite {
public:
    cocos2d::extension::CCScale9Sprite* getSpriteBg() const;
    void setSpriteBg(cocos2d::extension::CCScale9Sprite*);
    cocos2d::CCLabelTTF* getLabeDesc() const;
    void setLabeDesc(cocos2d::CCLabelTTF*);
    ~TipView();
    TipView();
    void setData(char const*);
    void setData(char const*, cocos2d::CCPoint const&);
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c0?448 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[448];
};

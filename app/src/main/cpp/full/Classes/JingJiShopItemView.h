#pragma once
// JingJiShopItemView
// 基类: cocos2d::CCSprite
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class JingJiShopItemView : public cocos2d::CCSprite {
public:
    cocos2d::CCSprite* getSpriteItem() const;
    void setSpriteItem(cocos2d::CCSprite*);
    cocos2d::extension::CCScale9Sprite* getSpriteDebris() const;
    void setSpriteDebris(cocos2d::extension::CCScale9Sprite*);
    cocos2d::CCSprite* getSpriteBg() const;
    void setSpriteBg(cocos2d::CCSprite*);
    cocos2d::extension::CCScale9Sprite* getSpriteSale() const;
    void setSpriteSale(cocos2d::extension::CCScale9Sprite*);
    cocos2d::extension::CCScale9Sprite* getSpriteXiYou() const;
    void setSpriteXiYou(cocos2d::extension::CCScale9Sprite*);
    cocos2d::CCLabelTTF* getLabeName() const;
    void setLabeName(cocos2d::CCLabelTTF*);
    cocos2d::CCLabelTTF* getLabePayCount() const;
    void setLabePayCount(cocos2d::CCLabelTTF*);
    cocos2d::CCLabelTTF* getLabePayNum() const;
    void setLabePayNum(cocos2d::CCLabelTTF*);
    cocos2d::extension::CCControlButton* getBtnBuy() const;
    void setBtnBuy(cocos2d::extension::CCControlButton*);
    ~JingJiShopItemView();
    JingJiShopItemView();
    undefined4 getPresenter();
    bool init();
    void onExit();
    void onEnter();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1dc?476 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[476];
};

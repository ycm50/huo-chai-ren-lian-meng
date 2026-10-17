#pragma once
// BLListButton
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLListButton : public cocos2d::CCLayer {
public:
    int getListType() const;
    void setListType(int);
    float getDistance() const;
    void setDistance(float);
    int getFontSize() const;
    void setFontSize(int);
    cocos2d::_ccColor3B getNormalColor() const;
    void setNormalColor(cocos2d::_ccColor3B *);
    cocos2d::_ccColor3B getSelectColor() const;
    void setSelectColor(cocos2d::_ccColor3B *);
    bool getISStroke() const;
    void setISStroke(bool);
    int getBtnTouchPriority() const;
    void setBtnTouchPriority(int);
    BLListButtonDelegate* getDelegate() const;
    void setDelegate(BLListButtonDelegate*);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void setArrayContentSize(std::vector<cocos2d::CCSize, std::allocator<cocos2d::CCSize>> *);
    void onBtnClick(cocos2d::CCObject*, unsigned int);
    void setSelectIndex(int);
    int getArrayContentSize() const;
    ~BLListButton();
    BLListButton();
    void initWith(std::vector<std::string, std::allocator<std::string>> *, std::vector<std::string, std::allocator<std::string>>, std::vector<std::string, std::allocator<std::string>>, std::vector<std::string, std::allocator<std::string>>);
    int getArraySelectColors() const;
    int getArrayNormalColors() const;
    void setArraySelectColors(std::vector<cocos2d::_ccColor3B, std::allocator<cocos2d::_ccColor3B>> *);
    void setArrayNormalColors(std::vector<cocos2d::_ccColor3B, std::allocator<cocos2d::_ccColor3B>> *);
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x184?388 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[388];
};

#pragma once
// UIObject
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class UIObject : public cocos2d::CCObject {
public:
    unsigned int getUiId() const;
    void setUiId(unsigned int);
    cocos2d::CCLayer* getLayer() const;
    void setLayer(cocos2d::CCLayer*);
    int getHideCount() const;
    void setHideCount(int);
    cocos2d::extension::CCInvocation* getOnCloseListener() const;
    bool init();
    void refreshUi();
    void setOnCloseListener(cocos2d::extension::CCInvocation*);
    void onCloseUi();
    ~UIObject();
    UIObject();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

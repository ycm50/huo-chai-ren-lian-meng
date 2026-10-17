#pragma once
// WebSupport
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class WebSupport : public cocos2d::CCObject {
public:
    ~WebSupport();
    WebSupport();
    void initWebViewParam(float, float, float, float, std::string const&, int, std::string const&);
    void openURL(std::string const&, std::string const&);
    void setWebViewVisible(int, std::string const&);
    void setWHAndPosition(float, float, float, float, std::string const&);
    void onCloseWebView(std::string const&);
    void stopActivityAction(std::string const&);
    void onBackbuttonClick(std::string const&);
    bool canGoBackWeb(std::string const&);
    void ReloadWeb(std::string const&);
    void OnshouldOverrideUrlLoading(cocos2d::CCObject*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x18?24 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[24];
};

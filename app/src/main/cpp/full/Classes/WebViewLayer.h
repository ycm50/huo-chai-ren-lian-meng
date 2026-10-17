#pragma once
// WebViewLayer
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class WebViewLayer : public cocos2d::CCLayer {
public:
    bool init();
    void onExit();
    void onEnter();
    ~WebViewLayer();
    WebViewLayer();
    undefined4 create();
    void webViewDidFinishLoad();
    void delayCallInitWebView(float, float, float, float, std::string const&, bool);
    void setVisible(bool);
    void stopActivityAction();
    undefined8 openURL(char const*);
    void canGoBackWeb();
    void closeWebView();
    void onBackbuttonClick();
    void initWithConfiguration(std::string, std::string, cocos2d::CCSize *, cocos2d::CCPoint *, bool);
    void create(std::string, std::string, cocos2d::CCSize *, cocos2d::CCPoint *, bool);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x118?280 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[280];
};

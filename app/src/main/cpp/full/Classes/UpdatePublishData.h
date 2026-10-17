#pragma once
// UpdatePublishData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class UpdatePublishData : public cocos2d::CCObject {
public:
    void setBug(std::string);
    void setOptimization(std::string);
    void setPlay(std::string);
    void setUpdateDate(std::string);
    ~UpdatePublishData();
    std::string getBug() const;
    std::string getOptimization() const;
    std::string getPlay() const;
    std::string getUpdateDate() const;
    UpdatePublishData();
    int getInstance();
    void getDataFromNet();
    void onGetPublishData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};

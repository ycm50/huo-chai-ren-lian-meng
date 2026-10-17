#pragma once
// BLVideoPlayer
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLVideoPlayer : public cocos2d::CCObject {
public:
    cocos2d::CCArray* getArrayFrameDatas() const;
    void setArrayFrameDatas(cocos2d::CCArray*);
    cocos2d::CCDictionary* getDicVideoData() const;
    void setDicVideoData(cocos2d::CCDictionary*);
    ~BLVideoPlayer();
    void tick(float);
    BLVideoPlayer();
    bool init();
    undefined4 share();
    void startPlay();
    undefined8 stopPlay();
    void initWithName(std::string);
    void writeRecord(cocos2d::CCDictionary*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};

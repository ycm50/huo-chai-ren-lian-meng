#pragma once
// BLRichText
// 基类: cocos2d::CCNode
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLRichText : public cocos2d::CCNode {
public:
    int getDistanceHeight() const;
    void setDistanceHeight(int);
    ~BLRichText();
    BLRichText();
    bool init(cocos2d::CCArray*, int, int);
    void create(cocos2d::CCArray*, int, int);
    void parseContent(std::string *, RichTextData*);
    undefined4 parseNewLine(std::string *, RichTextData*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0xec?236 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[236];
};

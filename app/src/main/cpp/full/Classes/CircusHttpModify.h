#pragma once
// CircusHttpModify
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CircusHttpModify {
public:
    ~CircusHttpModify();
    void onGetModifyData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    bool GetModifyTemplate();
    bool init(std::string *);
};

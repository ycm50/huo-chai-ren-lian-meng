#pragma once
// RichTextData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class RichTextData {
public:
    cocos2d::extension::CCInvocation* getInvocation() const;
    cocos2d::CCObject* getUserObject() const;
    void setUserObject(cocos2d::CCObject*);
    void setInvocation(cocos2d::extension::CCInvocation*);
    ~RichTextData();
    int * create();
};

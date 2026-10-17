#pragma once
// FunctionUnLockItem
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class FunctionUnLockItem : public cocos2d::CCObject {
public:
    cocos2d::CCArray* getUnLock() const;
    void setUnLock(cocos2d::CCArray*);
    cocos2d::CCArray* getNPCID() const;
    void setNPCID(cocos2d::CCArray*);
    ~FunctionUnLockItem();
    FunctionUnLockItem();
    void initWithDic(cocos2d::CCDictionary*);
};

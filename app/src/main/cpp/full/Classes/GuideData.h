#pragma once
// GuideData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class GuideData {
public:
    int getID() const;
    void setID(int);
    int getCompletIndex() const;
    void setCompletIndex(int);
    int getTriggerType() const;
    void setTriggerType(int);
    int getTriggerValue() const;
    void setTriggerValue(int);
    cocos2d::CCArray* getStep() const;
    void setStep(cocos2d::CCArray*);
    bool getISMainUI() const;
    void setISMainUI(bool);
    bool getISCloseAllUI() const;
    void setISCloseAllUI(bool);
    ~GuideData();
    void initWith(char**, int&);
};

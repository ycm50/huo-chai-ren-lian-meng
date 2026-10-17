#pragma once
// TalentDrawData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class TalentDrawData {
public:
    void setcurnum(int);
    void CheckItemInfo(OneTalentDraw *);
    ~TalentDrawData();
    void GetDataFromNet(int, bool);
    void SetItemInfo(OneTalentDraw *, int);
    void SetOtherInfo(OtherTalentDraw *);
};

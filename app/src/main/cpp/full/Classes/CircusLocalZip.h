#pragma once
// CircusLocalZip
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CircusLocalZip {
public:
    ~CircusLocalZip();
    undefined4 getMe();
    undefined4 GetNewRecordId();
    void ReadEmptyRecordId();
    void ClearFileRecordId(std::string *, FILE_ENUM);
    undefined8 ForRecordId();
    void IsExistFileRecordId(std::string *, FILE_ENUM);
    CircusLocalZip();
    void CreateJsonRecordId();
    void Setrecordidvector(std::string *);
    void SysRecordId(std::string *);
    void ReadJsonRecordId();
    void WriteJsonRecordId();
};

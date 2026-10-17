#pragma once
// MainGLSBData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MainGLSBData {
public:
    void setUID(std::string);
    void setToken(std::string);
    void setEmail(std::string);
    void setDeviceId(std::string);
    ~MainGLSBData();
    std::string getEmail() const;
    std::string getToken() const;
    std::string getUID() const;
    std::string getDeviceId() const;
    void clearData();
    undefined8 PrintGLSBInfo();
    void GetDataFromNet(URL_GLSB, bool);
};

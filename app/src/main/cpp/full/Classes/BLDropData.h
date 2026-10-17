#pragma once
// BLDropData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLDropData : public cocos2d::CCObject {
public:
    long getExp() const;
    void setExp(long);
    long getCopperMax() const;
    void setCopperMax(long);
    long getCopperMin() const;
    void setCopperMin(long);
    int getDropType() const;
    void setDropType(int);
    int getProbBase() const;
    void setProbBase(int);
    int getTotalProb() const;
    void setTotalProb(int);
    cocos2d::CCArray* getArrayDropItems() const;
    void setArrayDropItems(cocos2d::CCArray*);
    void setItems(std::string *);
    void setID(std::string *);
    ~BLDropData();
    std::string getItems() const;
    std::string getID() const;
    BLDropData();
    bool init();
    int * initItems(std::string&);
    void initWithID(std::string *);
    undefined4 * randomItems();
    int * create();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x38?56 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[56];
};

#pragma once
// ItemData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ItemData {
public:
    int * create();
int operator=(int P2);
    ItemData(ItemData const&);
    int getID() const;
    void setID(int);
    int getBagType() const;
    void setBagType(int);
    int getBigType() const;
    void setBigType(int);
    int getSubType() const;
    void setSubType(int);
    int getSequence() const;
    void setSequence(int);
    int getLV() const;
    void setLV(int);
    int getQuality() const;
    void setQuality(int);
    int getPrice() const;
    void setPrice(int);
    int getFoldCount() const;
    void setFoldCount(int);
    bool getISCanUse() const;
    void setISCanUse(bool);
    int getCopyID() const;
    void setCopyID(int);
    int getItemNum() const;
    void setItemNum(int);
    int getItemLV() const;
    void setItemLV(int);
    void setValue(std::string *);
    void setDropIcon(std::string *);
    void setDetail(std::string *);
    void setDesc(std::string *);
    void setSmallIcon(std::string *);
    void setIcon(std::string *);
    void setName(std::string *);
    std::string getValue() const;
    std::string getDropIcon() const;
    std::string getDetail() const;
    std::string getDesc() const;
    std::string getSmallIcon() const;
    std::string getIcon() const;
    std::string getName() const;
    bool init();
    undefined8 initWith(ItemData*);
    void initWith(char**, int&);
    void initWith(int);
    ItemData();
    ~ItemData();
    int GetAllEquip();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x7c?124 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[124];
};

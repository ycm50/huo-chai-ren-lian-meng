#pragma once
// GiftItemData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class GiftItemData : public cocos2d::CCObject {
public:
    int getID() const;
    void setID(int);
    cocos2d::_ccColor3B getColorName() const;
    void setColorName(cocos2d::_ccColor3B);
    void setStartPrice(std::string);
    void setPrice(std::string);
    void setName(std::string);
    void setIcon(std::string);
    void setGiftID(std::string);
    std::string getGiftID() const;
    std::string getStartPrice() const;
    std::string getPrice() const;
    std::string getName() const;
    std::string getIcon() const;
    bool init();
    void clearItems();
    void clearTHItems();
    int getTHItems() const;
    ~GiftItemData();
    GiftItemData();
    void setTHItems(std::vector<HEROGIFTITEM, std::allocator<HEROGIFTITEM>>);
    void addTHItems(HEROGIFTITEM);
    void initWith(char**, int&);
    void setItemNum(std::vector<int, std::allocator<int>>);
    void setItems(std::vector<int, std::allocator<int>>);
    int getItemNum() const;
    int getItems() const;
    undefined8 addItems(int, int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x54?84 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[84];
};

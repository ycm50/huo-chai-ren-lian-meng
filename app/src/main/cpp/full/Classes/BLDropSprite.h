#pragma once
// BLDropSprite
// 基类: cocos2d::CCSprite
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLDropSprite : public cocos2d::CCSprite {
public:
    float getMapHeight() const;
    void setMapHeight(float);
    float getStartRotation() const;
    void setStartRotation(float);
    float getGravity() const;
    void setGravity(float);
    float getSpeedX() const;
    void setSpeedX(float);
    float getSpeedY() const;
    void setSpeedY(float);
    float getSpeedAddX() const;
    void setSpeedAddX(float);
    float getSpeedAddY() const;
    void setSpeedAddY(float);
    float getAngle() const;
    void setAngle(float);
    float getAlphaTimes() const;
    void setAlphaTimes(float);
    ItemData* getItemData();
    ~BLDropSprite();
    void setItemData(ItemData*);
    BLDropSprite();
    void initWith(std::string *);
    void actionEnd();
    void tick(float);
    void removeSelf();
    bool init();
    void onEnter();
    void onExit();
    int * create();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1e0?480 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[480];
};

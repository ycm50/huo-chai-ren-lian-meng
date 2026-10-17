#pragma once
// SharkAction
// 基类: cocos2d::CCAction
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class SharkAction : public cocos2d::CCAction {
public:
    int getType() const;
    void setType(int);
    float getModulus() const;
    void setModulus(float);
    cocos2d::extension::CCInvocation* getInvocation() const;
    void step(float);
    void setTargetPosition(cocos2d::CCPoint *);
    cocos2d::CCPoint getTargetPosition() const;
    void setInvocation(cocos2d::extension::CCInvocation*);
    bool isDone();
    void update(float);
    bool init();
    ~SharkAction();
    SharkAction();
    int * create();
    int getSharkPos() const;
    void initWith(std::vector<cocos2d::CCPoint, std::allocator<cocos2d::CCPoint>> *);
    void setSharkPos(std::vector<cocos2d::CCPoint, std::allocator<cocos2d::CCPoint>> *);
    void initSpeedData(std::string&);
    void initWith(int, cocos2d::CCPoint, float);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x4c?76 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[76];
};

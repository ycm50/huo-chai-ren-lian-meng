#pragma once
// BLDataAnimate
// 基类: cocos2d::CCAction
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLDataAnimate : public cocos2d::CCAction {
public:
    int getType() const;
    void setType(int);
    float getBaseScale() const;
    void setBaseScale(float);
    cocos2d::extension::CCInvocation* getInvocation() const;
    void step(float);
    cocos2d::CCPoint getTargetPosition() const;
    void setTargetPosition(cocos2d::CCPoint *);
    ~BLDataAnimate();
    void setInvocation(cocos2d::extension::CCInvocation*);
    bool isDone();
    BLDataAnimate();
    bool init();
    int getAlpha() const;
    void setAlpha(std::vector<float, std::allocator<float>> *);
    void update(float);
    void initAlphaData(std::string&);
    int getScalePos() const;
    int getSharkPos() const;
    void initWith(std::vector<cocos2d::CCPoint, std::allocator<cocos2d::CCPoint>> *);
    void setScalePos(std::vector<cocos2d::CCPoint, std::allocator<cocos2d::CCPoint>> *);
    void setSharkPos(std::vector<cocos2d::CCPoint, std::allocator<cocos2d::CCPoint>> *);
    void initScaleData(std::string&);
    void initSpeedData(std::string&);
    void initWith(int, cocos2d::CCPoint);
    int * create();
};

#pragma once
// GuideStep
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class GuideStep {
public:
    int getCode() const;
    void setCode(int);
    int getDisplayType() const;
    void setDisplayType(int);
    cocos2d::CCArray* getDisplayValue() const;
    void setDisplayValue(cocos2d::CCArray*);
    int getClickType() const;
    void setClickType(int);
    int getBtnID() const;
    void setBtnID(int);
    int getArrowType() const;
    void setArrowType(int);
    int getDecType() const;
    void setDecType(int);
    int getStepEndType() const;
    void setStepEndType(int);
    int getStepEndValue() const;
    void setStepEndValue(int);
    int getActionType() const;
    void setActionType(int);
    bool getISCareer() const;
    void setISCareer(bool);
    bool getISBigBG() const;
    void setISBigBG(bool);
    bool getISSmallBG() const;
    void setISSmallBG(bool);
    void setDecPanel(std::string);
    void setDec(std::string);
    ~GuideStep();
    std::string getDecPanel() const;
    std::string getDec() const;
    void setDecPositon(cocos2d::CCPoint);
    cocos2d::CCPoint getDecPositon() const;
    void setTouch(cocos2d::CCRect);
    cocos2d::CCRect getTouch() const;
    void initWith(char**, int&);
};

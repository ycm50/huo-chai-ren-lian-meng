#pragma once
// Toast
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class Toast : public cocos2d::CCObject {
public:
    bool getISStopAction() const;
    void setISStopAction(bool);
    bool getIsNotPopToList() const;
    void setIsNotPopToList(bool);
    cocos2d::CCArray* getRichText() const;
    cocos2d::CCArray* getTalkAnns() const;
    void setTalkAnns(cocos2d::CCArray*);
    cocos2d::CCNode* getRootNode() const;
    void setRootNode(cocos2d::CCNode*);
    void toastEnd(cocos2d::CCObject*);
    void setRichText(cocos2d::CCArray*);
    void showCombatChange(cocos2d::CCObject*);
    void showExpChange(cocos2d::CCObject*);
    bool init();
    void resetAllStatus();
    void startToast();
    void nextToast(cocos2d::CCObject*);
    void showVirtualItemData(int, int);
    void startVirtualItemData();
    void showVirtualItemData1(int, int);
    void nextVirtualItemData();
    void virtualItemDataEnd(cocos2d::CCObject*);
    void showSystemRemind(std::string *);
    void startRichText();
    void nextNewRichText(cocos2d::CCObject*);
    void richTextEnd(cocos2d::CCObject*);
    void showRichText(cocos2d::CCArray*);
    void reStartAllActions();
    void startSystemRemind();
    void systemRemindEnd(cocos2d::CCObject*, unsigned int);
    Toast();
    undefined4 sharedToast();
    undefined8 showToast(char const*);
    ~Toast();
    undefined8 showNewRichText(cocos2d::CCArray*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x68?104 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[104];
};

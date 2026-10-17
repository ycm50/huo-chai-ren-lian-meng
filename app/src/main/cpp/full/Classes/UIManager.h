#pragma once
// UIManager
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class UIManager : public cocos2d::CCObject {
public:
    int getCurUIId() const;
    void setCurUIId(int);
    int getLastUIId() const;
    void setLastUIId(int);
    cocos2d::CCLayer* getRootLayer() const;
    void setRootLayer(cocos2d::CCLayer*);
    ~UIManager();
    UIManager();
    void tick(float);
    int * createUi(int);
UIObject *getUIObject(int);   /* SIG_FIX (R207): original @0x4db2e4 returns the object (ldr r0,[r0,0x20]; bl objectForKey; pop {r3,pc}) */
    bool hasUIObject(int);
    void removeAllUIObjects();
    void pushUnEnableScrollView(cocos2d::CCArray*);
    void pushUnEnableScrollView(cocos2d::CCObject*);
    void popUnEnableScrollView();
    void clearUnEnableScrollviewPool();
    void getAllScrollViewChild(cocos2d::CCNode*, cocos2d::CCArray*);
    undefined4 getCurAllScrollView();
    void pushCurScrollViewUnEnable();
    void pushUi(UIObject*);
    void removeAllPopUi();
    undefined8 addGongGaoArrayItem(cocos2d::CCObject*);
    void getGongGaoArrayItem(int);
    void getGongGaoPngNum();
    void removeGongGaoArrayItem();
    void initHideMutexUi();
    void initCloseMutexUi();
    bool init();
    undefined4 shareManager();
    void hideMutexUi(UIObject*);
    void unHideMutexUi(UIObject*);
    void removeUIByID(int);
    undefined8 removeAllUIWithOut(std::vector<int, std::allocator<int>> *);
    void closeMutexUi(UIObject*);
    undefined8 addUiObject(UIObject*);
    undefined4 showUIById(int);
    void showAlert(std::string *, std::string, std::string);
    void showAlert(cocos2d::CCArray*, std::string, std::string);
    void showItemDataInfo(ItemData*);
    void showItemDataInfo(std::string *);
    void popTopUi();
    void popUi();
    undefined8 popUI(int);
    undefined8 addUiObjectForTreasureHero(UIObject*);
    undefined4 showUIByIdForTreasureHero(int);
    void showChestItemSelectView(std::string *, int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x48?72 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[72];
};

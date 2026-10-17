#pragma once
// BLFurnacePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLFurnacePresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onCloseSelect(cocos2d::CCObject*, unsigned int);
    undefined4 numOfColumn(BLGridView*);
    undefined4 numOfRow(BLGridView*);
    void tick(float);
    void onGotoBreak(cocos2d::CCObject*, unsigned int);
    void onAbout(cocos2d::CCObject*, unsigned int);
    void onClose(cocos2d::CCObject*, unsigned int);
    undefined4 sizeOfGridItem(BLGridView*);
    void nodeOfGridViewAtIndex(BLGridView*, cocos2d::CCNode*, int);
    void onTouchExchangItem(cocos2d::CCObject*, unsigned int);
    void touchItemAtIndex(BLGridView*, cocos2d::CCNode*, int);
    void onExit();
    void onEnter();
    void sortByStar(cocos2d::CCArray*);
    void sortByLv(cocos2d::CCArray*);
    void sortByQuity(cocos2d::CCArray*);
    undefined4 initWithView(BLFurnaceView*);
    void removeItemFromTable(std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int>>>&);
    void addBreakFlag(cocos2d::CCNode*);
    void removeBreakFlag(cocos2d::CCNode*);
    void getTableItem(int);
    void onUseToBreak(cocos2d::CCObject*, unsigned int);
    BLFurnacePresenter();
    undefined4 create(BLFurnaceView*);
    ~BLFurnacePresenter();
    void addToBackpackOnBreak(int, int);
    void caculateEssenceValue(int&, int&);
    void onTouchSlot(cocos2d::CCObject*, unsigned int);
    undefined8 onItemMoveActionEnd();
    void oneKeyAddSlotItem();
    void onOneKeyAdd(cocos2d::CCObject*, unsigned int);
    void removeItemFromBackpack();
    void doBreak();
    void onBreak(cocos2d::CCObject*, unsigned int);
    void onSureBreak(cocos2d::CCObject*);
    void updateExchangeItems();
    void requestExchangeList();
    void onGotoExchange(cocos2d::CCObject*, unsigned int);
    void requestRefreshList();
    void onTouchRefresh(cocos2d::CCObject*, unsigned int);
    void onSureRefresh(cocos2d::CCObject*);
    void onSureExchange(cocos2d::CCObject*);
    void processBodyData(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&);
    void onRequestExchangeListCompleted(cocos2d::CCObject*, cocos2d::extension::CCHttpResponse*);
    void onRequestRefreshListCompleted(cocos2d::CCObject*, cocos2d::extension::CCHttpResponse*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x58?88 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[88];
};

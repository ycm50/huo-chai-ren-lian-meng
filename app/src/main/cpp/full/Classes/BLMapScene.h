#pragma once
// BLMapScene
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMapScene : public cocos2d::CCLayer {
public:
    float getMapWidth() const;
    void setMapWidth(float);
    float getFloodHeight() const;
    void setFloodHeight(float);
    float getFlood() const;
    void setFlood(float);
    BLMapSceneData* getMapSceneData() const;
    cocos2d::CCDictionary* getDicBatchNode() const;
    cocos2d::CCLayer* getLayerShake() const;
    void setLayerShake(cocos2d::CCLayer*);
    cocos2d::CCDictionary* getDicRoleBatch() const;
    void setDicRoleBatch(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicEffectUpBatch() const;
    void setDicEffectUpBatch(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicEffectDownBatch() const;
    void setDicEffectDownBatch(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicRiyan() const;
    void setDicRiyan(cocos2d::CCDictionary*);
    cocos2d::CCSpriteBatchNode* getBatchNodeDropItem() const;
    void setBatchNodeDropItem(cocos2d::CCSpriteBatchNode*);
    cocos2d::CCLayer* getLayerRole() const;
    void setLayerRole(cocos2d::CCLayer*);
    cocos2d::CCLayer* getLayerFlood() const;
    void setLayerFlood(cocos2d::CCLayer*);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void setMapSceneData(BLMapSceneData*);
    void setDicBatchNode(cocos2d::CCDictionary*);
    ~BLMapScene();
    BLMapScene();
    void setItemProperty(cocos2d::CCNode*, BLMapSceneItemData*);
    void addImage(BLMapSceneItemData*);
    void addAnimate(BLMapSceneItemData*);
    void addItem(BLMapSceneItemData*);
    void initWithData(BLMapSceneData*);
    void addEffectUp(cocos2d::CCNode*, std::string *);
    void addEffectDown(cocos2d::CCNode*, std::string *);
    void addRole(cocos2d::CCNode*, std::string *);
    void addDieSprite(cocos2d::CCNode*, std::string *);
    undefined8 addCoin(cocos2d::CCNode*);
    void addItemData(cocos2d::CCNode*);
    void onShakeEnd(cocos2d::CCObject*, unsigned int);
    void addRiyan(cocos2d::CCNode*, std::string *);
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x140?320 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[320];
};

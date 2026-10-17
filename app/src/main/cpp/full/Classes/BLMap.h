#pragma once
// BLMap
// 基类: cocos2d::CCSprite
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMap : public cocos2d::CCSprite {
public:
    BLMapScene* getMainScene() const;
    void setMainScene(BLMapScene*);
    BLMapData* getMapData() const;
    int getMapID() const;
    void setMapID(int);
    float getMapWidth() const;
    void setMapWidth(float);
    float getFloodHeight() const;
    void setFloodHeight(float);
    float getLockWidth() const;
    void setLockWidth(float);
    cocos2d::CCSpriteBatchNode* getSpriteBatchNodeEffect() const;
    void setSpriteBatchNodeEffect(cocos2d::CCSpriteBatchNode*);
    cocos2d::CCArray* getArrayScenes() const;
    void setArrayScenes(cocos2d::CCArray*);
    cocos2d::CCArray* getArrayWoods() const;
    void setArrayWoods(cocos2d::CCArray*);
    cocos2d::CCArray* getArrayLights() const;
    void setArrayLights(cocos2d::CCArray*);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void setMapData(BLMapData*);
    ~BLMap();
    undefined4 currentMap();
    BLMap();
    void initScenes();
    void initWith(int);
    int * nearestWood(BLRole*);
    void resetLights();
    void tick(float);
    void setCamer(cocos2d::CCPoint *, float);
    void resetCamer();
    void setCamerAndMove(cocos2d::CCPoint *, float);
    void runShakeAction(int, float, float);
    void onEnter();
    void onExit();
    bool init();
    int * create();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1e8?488 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[488];
};

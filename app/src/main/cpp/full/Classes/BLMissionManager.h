#pragma once
// BLMissionManager
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionManager : public cocos2d::CCObject {
public:
    cocos2d::CCArray* getArrayRoles() const;
    cocos2d::CCArray* getArrayPartner() const;
    cocos2d::CCArray* getArrayPet() const;
    cocos2d::CCArray* getArrayEnemy() const;
    cocos2d::CCArray* getArrayRiyan() const;
    cocos2d::CCArray* getArrayRemote() const;
    void setArrayRemote(cocos2d::CCArray*);
    cocos2d::CCArray* getArrayObstacles() const;
    void setArrayObstacles(cocos2d::CCArray*);
    cocos2d::CCArray* getArrayDropItems() const;
    void setArrayDropItems(cocos2d::CCArray*);
    float getBrushLeft() const;
    void setBrushLeft(float);
    float getBrushRight() const;
    void setBrushRight(float);
    cocos2d::CCArray* getArrayPartnerRemove() const;
    void setArrayPartnerRemove(cocos2d::CCArray*);
    cocos2d::CCArray* getArrayEnemyRemove() const;
    void setArrayEnemyRemove(cocos2d::CCArray*);
    cocos2d::CCArray* getArrayRiyanRemove() const;
    void setArrayRiyanRemove(cocos2d::CCArray*);
    cocos2d::CCArray* getArrayRemoteRemove() const;
    void setArrayRemoteRemove(cocos2d::CCArray*);
    cocos2d::CCArray* getArrayObstaclesRemove() const;
    void setArrayObstaclesRemove(cocos2d::CCArray*);
    BLRole* getBluetoothHero() const;
    BLMap* getMap() const;
    void setMap(BLMap*);
    BLMissionData* getMissionData() const;
    BLMonsterGroupData* getCurrentMonsterGroup() const;
    void setCurrentMonsterGroup(BLMonsterGroupData*);
    BLTriggerData* getCurrentTrigger() const;
    void setCurrentTrigger(BLTriggerData*);
    cocos2d::CCDictionary* getDicCurrentSounds() const;
    void setDicCurrentSounds(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicDropItems() const;
    void setDicDropItems(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicRoleBatch() const;
    void setDicRoleBatch(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicEffectUpBatch() const;
    void setDicEffectUpBatch(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicEffectDownBatch() const;
    void setDicEffectDownBatch(cocos2d::CCDictionary*);
    cocos2d::CCSpriteBatchNode* getDicBatchNode() const;
    void setDicBatchNode(cocos2d::CCSpriteBatchNode*);
    bool getISFighting() const;
    void setISFighting(bool);
    bool getISMissionEnd() const;
    void setISMissionEnd(bool);
    cocos2d::CCDictionary* getDicRelifeAttr() const;
    void setDicRelifeAttr(cocos2d::CCDictionary*);
    int getAttackCount() const;
    void setAttackCount(int);
    float getAttackTime() const;
    void setAttackTime(float);
    undefined1 getAutoOpen() const;
    int getChallengerLife() const;
    void setChallengerLife(int);
    int getBeChallengerLife() const;
    void setBeChallengerLife(int);
    bool getIsChallengeMode() const;
    void setIsChallengeMode(bool);
    void setMissionData(BLMissionData*);
    void setBluetoothHero(BLRole*);
    void setArrayRiyan(cocos2d::CCArray*);
    void setArrayEnemy(cocos2d::CCArray*);
    void setArrayPet(cocos2d::CCArray*);
    void setArrayPartner(cocos2d::CCArray*);
    void setArrayRoles(cocos2d::CCArray*);
    cocos2d::CCPoint getCamera() const;
    void setCamera(cocos2d::CCPoint *);
    int getRandomBursh() const;
    void setRandomBursh(std::vector<std::string, std::allocator<std::string>> *);
    BLRole* getHero();
    undefined8 onCamerScaleEnd();
    int onFpsChangeEnd(float);
    undefined4 onDelayMissionFailed(float);
    int onCamerPauseEnd();
    void onEnter();
    void onExit();
    bool init();
    bool judageTouchDropItems();
    undefined8 getFarestHero();
    undefined4 isTriggerOver();
    int isMissionEnd();
    void setCamerScale(cocos2d::CCPoint *, float, float);
    void whiteAction();
    int onWinEffect();
    void missionWin();
    void onChallengeResultWin();
    void onFailedEffect();
    void missionFailed();
    void onChallengeResultFailed();
    void nodeTick(float);
    bool roleArraySort(cocos2d::CCArray*, BLRoleBase*);
    undefined8 switchHero();
    int nearestRole(BLRole*, int, bool);
    undefined4 randomRole(int);
    undefined8 lifeLeastRole(int);
    undefined4 rolesByType(int);
    void runWorldFpsChange(float, float);
    void addEffectUp(cocos2d::CCNode*, std::string *);
    void addEffectDown(cocos2d::CCNode*, std::string *);
    void addRole(cocos2d::CCNode*, std::string *);
    bool addDropItem(ItemData*);
    void exitMission();
    void changeAutoState();
    undefined8 setHero(BLRole*);
    undefined8 switchEnemy();
    int isAttack(BLRoleBase*, BLRole*);
    int hit(BLRoleBase*, BLHit*, bool&, cocos2d::CCArray*);
    BLMissionManager();
    undefined4 create();
    ~BLMissionManager();
    void onSureBuyHero(cocos2d::CCObject*);
    void onDelayMissionWin(float);
    int onBuyHeroComplete(cocos2d::CCObject*);
    int addMonster(std::string *, cocos2d::CCPoint *, int, bool);
    void onRandomBrush(float);
    void brushLeft(std::string *);
    void brushRight(std::string *);
    void brushPosition(std::string *, cocos2d::CCPoint *);
    void brushMonster(BLMonsterGroupData*);
    void judageNextGourp();
    undefined8 judageTrigger();
    void clearRemoveItem();
    void tick(float);

public:
    /* HW_SIZE_PAD (R94): ?????? 0xd4?212 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[212];
};

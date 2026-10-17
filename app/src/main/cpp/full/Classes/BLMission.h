#pragma once
// BLMission
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMission : public cocos2d::CCLayer {
public:
    bool getStopGame() const;
    void setStopGame(bool);
    BLMissionManager* getMissionManager() const;
    BLMissionPlayerInfoView* getPlayerInfoView() const;
    void setPlayerInfoView(BLMissionPlayerInfoView*);
    cocos2d::CCLabelTTF* getLabTime() const;
    void setLabTime(cocos2d::CCLabelTTF*);
    float getTime() const;
    void setTime(float);
    bool getNeedUpdateTime() const;
    void setNeedUpdateTime(bool);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onCountDownEnd();
    void setMissionID(std::string *);
    void setMissionManager(BLMissionManager*);
    ~BLMission();
    std::string getMissionID() const;
    undefined4 currentMission();
    void keyBackClicked();
    BLMission();
    int * create();
    void tick(float);
    void initArenaOnline();
    undefined8 startBleutoothMission();
    void initArenaPlayers();
    void initMinePlayers();
    void createPet(std::string *, cocos2d::CCPoint, int, int);
    void initChallengePlayerInfoView();
    void addChallengeEnemy();
    void addHero(std::string *, cocos2d::CCPoint, int, int);
    void addChallengeHero();
    void initChallengePlayer();
    void addArenaOnline();
    void initArenaVideoPlayers();
    void addArenaplayers();
    void addMineplayers();
    void addObstacles();
    undefined8 startOnlineArenaMission();
    undefined8 startArena();
    undefined8 startMine();
    undefined8 startChallenge();
    void initPet();
    void addPet();
    void preLoadRes();
    undefined8 initWithID(std::string *);
    void addPartners();
    void startMission();
    void reLife();
    void reLifeInTreasure();
    void initPartner();
    void reLifeInDragonCanyon();
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x124?292 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[292];
};

#pragma once
// BLRole
// 基类: BLRoleBase
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "BLRoleBase.h"


class BLRole : public BLRoleBase {
public:
    cocos2d::CCDictionary* getDicActionSeque() const;
    void setDicActionSeque(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicSkillCD() const;
    void setDicSkillCD(cocos2d::CCDictionary*);
    BLAIController* getAIController() const;
    void setAIController(BLAIController*);
    int getBeAttackLV() const;
    void setBeAttackLV(int);
    int getRoleBeAttackLV() const;
    void setRoleBeAttackLV(int);
    bool getISShowLifeBar() const;
    void setISShowLifeBar(bool);
    bool getAutoGo() const;
    bool getAutoFight() const;
    void delayStarAI();
    void onExpActionEnd(cocos2d::CCNode*);
    ~BLRole();
    void onLevelUpActionEnd(cocos2d::CCNode*);
    void onLevelUpTextActionEnd(cocos2d::CCNode*, void*);
    void onWudiEnd();
    void onBatiEnd();
    void onCritActionEnd(cocos2d::CCNode*, void*);
    void onBeAttackRedCallBack();
    void hurtValueAction(long, bool, bool);
    BLRole();
    int * create();
    void addBluetoothSpr(int);
    int fixPos(cocos2d::CCPoint *);
    void roleMove(cocos2d::CCPoint *);
    void startAI();
    void stopAI();
    void moveCommob();
    void switchHero();
    void playNewActionAndStatus(char const*, int, cocos2d::CCAction*, bool, char const*);
    undefined8 standOn(bool);
    void attackEnd(cocos2d::CCObject*);
    void skillAttackEnd(cocos2d::CCObject*);
    void onRunAppearActionEnd(cocos2d::CCNode*, void*);
    void onMoveToEnd();
    undefined8 move();
    void goLeft();
    void goRight();
    void dieBoom();
    void addDieSprite();
    undefined4 die();
    void onGetUpEnd();
    void removeSelf();
    void dieFadeto();
    void onDieEnd();
    void onDieFadetoEnd();
    int attack();
    longlong isSkillCDing(std::string *);
    void setTalentSkillCD(int, float);
    void beingAttack();
    void attackFly();
    void levelUpAction();
    void reLife();
    void levelUpTextAction();
    void onWudi(int);
    void onShuaxin(int);
    void onBati(int);
    void onRiyan();
    void attackEffect(std::string *, int, float, cocos2d::CCPoint);
    void runBeAttackEffect(BLRole*, BLHit*, cocos2d::CCRect);
    void runCritAction(BLRole*, BLHit*, cocos2d::CCRect);
    undefined8 runBlackAction(BLRole*, BLHit*, cocos2d::CCRect);
    void onBlackActionEnd(cocos2d::CCNode*, void*);
    void runAppearAction();
    void setPeltPosition(BLRole*, BLHit*);
    void runBeAttackActionTest(std::string *);
    bool fall();
    void onBeAttackCallBack();
    void getUp();
    void onDelayGetUpEnd();
    undefined8 delayGetUp();
    void onFallEnd();
    void setAttrLifeBuy();
    undefined8 runBeAttackRed();
    int runBlueToothBeAttackAction(BLRole*, BLHit*, cocos2d::CCRect, cocos2d::CCPoint);
    void moveToPosXAndDuration(float, float);
    void moveTo(float);
    void nodeAction(cocos2d::CCNode*);
    void setRoleVisable(bool);
    void getCombat();
    void setAutoFight(bool);
    void setAutoGo(bool);
    void onRealHurt(BLRole*, int);
    void addPetShield();
    void removePetShield();
    int usePetShield(long);
    int randomReward(std::vector<int, std::allocator<int>>&);
    void onTalentSkill(int, int);
    void initRoleAura();
    void createItemAction(ItemData*);
    void dropItem(ItemData*);
    undefined8 onLevelUp(cocos2d::CCObject*);
    void thrrow(BLAnimateFrameData*, cocos2d::CCArray*);
    void setSkillCD(std::string *, std::string *);
    int skillAttack(int);
    void setSkillFrozenCD(int, float);
    int * getItem(int);
    int runBeAttackAction(BLRole*, BLHit*, cocos2d::CCRect, cocos2d::CCPoint);
    undefined4 hit(BLHit*, cocos2d::CCArray*);
    void onEnter();
    void onExit();
    bool init();
    bool setPartnerNode(cocos2d::CCNode*, float);
    void updateFrameData(BLAnimateFrameData*);
    void tick(float);
    void setLifeAndBar(long);
    void setLife(long);
    void setRoleFilpX(bool, bool);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x378?888 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[888];
};

#pragma once
// BLRoleBase
// 基类: BLSprite
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "BLSprite.h"


class BLRoleBase : public BLSprite {
public:
    BLMapScene* getMapScene() const;
    void setMapScene(BLMapScene*);
    int getRoleType() const;
    void setRoleType(int);
    int getRoleSubType() const;
    void setRoleSubType(int);
    int getCurrentStopFrame() const;
    void setCurrentStopFrame(int);
    int getCurrentFps() const;
    void setCurrentFps(int);
    int getAnimationStatus() const;
    void setAnimationStatus(int);
    float getSpeedMoveX() const;
    void setSpeedMoveX(float);
    float getSpeedMoveY() const;
    void setSpeedMoveY(float);
    float getSpeedX() const;
    void setSpeedX(float);
    float getSpeedY() const;
    void setSpeedY(float);
    float getAccelerationX() const;
    void setAccelerationX(float);
    float getAccelerationY() const;
    void setAccelerationY(float);
    float getMoveCommobX() const;
    void setMoveCommobX(float);
    BLSpriteEffect* getSpriteUnder() const;
    void setSpriteUnder(BLSpriteEffect*);
    BLSpriteEffect* getSpriteUp() const;
    void setSpriteUp(BLSpriteEffect*);
    cocos2d::CCSprite* getSpriteRole() const;
    void setSpriteRole(cocos2d::CCSprite*);
    cocos2d::CCSprite* getSpriteUnderParent() const;
    void setSpriteUnderParent(cocos2d::CCSprite*);
    cocos2d::CCSprite* getSpriteUpParent() const;
    void setSpriteUpParent(cocos2d::CCSprite*);
    bool getISCanFlapX() const;
    void setISCanFlapX(bool);
    float getMapHeight() const;
    void setMapHeight(float);
    cocos2d::CCNode* getPartentNode() const;
    void setPartentNode(cocos2d::CCNode*);
    float getRoleScaleX() const;
    void setRoleScaleX(float);
    float getRoleScaleY() const;
    void setRoleScaleY(float);
    float getSpriteScale() const;
    void setSpriteScale(float);
    int getSpeed() const;
    void setSpeed(int);
    float getUnderAttackLevel() const;
    void setUnderAttackLevel(float);
    float getRoleBaseAlpha() const;
    void setRoleBaseAlpha(float);
    float getRoleBaseRotation() const;
    void setRoleBaseRotation(float);
    float getAttackDistance() const;
    void setAttackDistance(float);
    BLMonsterData* getMonsterData() const;
    RoleData* getUserData() const;
    bool getISRoleTouchEnable() const;
    void setISRoleTouchEnable(bool);
    int getSkinId() const;
    void setSkinId(int);
    void setUserData(RoleData*);
    void setMonsterData(BLMonsterData*);
    void setRoleBaseScale(float);
    int getRoleBaseScale();
    void onMoveToEnd();
    void onPauseActionCallBack(cocos2d::CCObject*);
    void onChangeFpsCallBack(cocos2d::CCObject*);
    void onRoleSharkEndCallBack(cocos2d::CCObject*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void hit(BLHit*, cocos2d::CCArray*);
    ~BLRoleBase();
    undefined8 roleMove(cocos2d::CCPoint *);
    void setRoleFilpX(bool, bool);
    void onSpriteFrameUpdate(cocos2d::CCObject*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void thrrow(BLAnimateFrameData*, cocos2d::CCArray*);
    BLRoleBase();
    void removeNodeInMaps();
    void setRoleBaseScale(float, float);
    void setRoleOpacity(int);
    void getFirstFrameBody();
    void updateBody();
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void setRCAttack(cocos2d::CCRect *);
    void setRCThrrow(cocos2d::CCRect *);
    cocos2d::CCRect getRCThrrow(bool);
    void setRCBeingAttack(cocos2d::CCRect *);
    cocos2d::CCRect getRCBeingAttack(bool);
    void getStartPosY();
    void getCenterDistance();
    cocos2d::CCRect getRCAttack(bool);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void setSpeedZero();
    void runEffectAction(BLAnimateData*, bool);
    void runNewAction(char const*, cocos2d::CCAction*, bool);
    undefined8 setRoleAlpha(float);
    void pauseAction(int);
    void changeFps(float, float, bool);
    void runSharkAction(BLHit*, bool);
    void updateEffectPosition();
    void setPartnerNode(cocos2d::CCNode*, float);
    void updatePosition();
    void addThrow(BLRemoteAttackSprite*);
    void skinBody(BLRoleData*, int);
    void updateFrameData(BLAnimateFrameData*);
    void createThrrow(BLRole*, BLAnimateFrameData*, BLRemoteAttackData*, std::string);
    void runRoleSharkAction(BLHit*);
    undefined4 * getRCAttackPoint();
    undefined4 * getRCBeAttackPoint();
    void onEnter();
    void onExit();
    bool init();
    void initWithRoleData(BLRoleData*);
    void tick(float);
};

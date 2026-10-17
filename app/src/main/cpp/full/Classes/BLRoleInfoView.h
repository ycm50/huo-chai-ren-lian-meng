#pragma once
// BLRoleInfoView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLRoleInfoView : public cocos2d::CCLayer {
public:
    cocos2d::extension::CCControlButton* getBtnTuPo() const;
    void setBtnTuPo(cocos2d::extension::CCControlButton*);
    ~BLRoleInfoView();
    BLRoleInfoView();
    int * create();
    undefined4 getPresenter();
    undefined4 getssp_BG();
    undefined4 getSprRoleImage();
    undefined4 getTabBg();
    undefined4 getSprStar1();
    undefined4 getSprStar2();
    undefined4 getSprStar3();
    undefined4 getSprStar4();
    undefined4 getSprStar5();
    undefined4 PageLayerEquips();
    undefined4 getPageControlEquips();
    undefined4 getRoleInfoBG();
    undefined4 getSprAlertBG();
    undefined4 getLabLvTitle();
    undefined4 getLabExpTitle();
    undefined4 getLabLifeTitle();
    undefined4 getLabDefenseTitle();
    undefined4 getLabAttackTitle();
    undefined4 getLabCritTitle();
    undefined4 getLabLV();
    undefined4 getLabExp();
    undefined4 getLabLife();
    undefined4 getLabDefense();
    undefined4 getLabAttack();
    undefined4 getLabCrit();
    undefined4 getBtnUse();
    undefined4 getLabUse();
    undefined4 getLabAlert();
    undefined4 getssp_RoleNameBG();
    undefined4 getLabRoleName();
    undefined4 getLabLifeAdd();
    undefined4 getLabDefenseAdd();
    undefined4 getLabAttackAdd();
    undefined4 getLabCritAdd();
    undefined4 getBtnRight();
    undefined4 getBtnLeft();
    undefined4 getLabFightTitle();
    undefined4 getLabFight();
    undefined4 getBtnGift();
    undefined4 getLabGift();
    undefined4 get();
    undefined4 getLabRunLifeTitle();
    undefined4 getLabRuneDefenseTitle();
    undefined4 getLabRunAttackTitle();
    undefined4 getLabRuneCritTitle();
    undefined4 getLabRuneLife();
    undefined4 getLabRuneDefense();
    undefined4 getLabRuneAttack();
    undefined4 getLabRuneCrit();
    undefined4 getLabRuneTitle();
    undefined4 getBtnExp();
    undefined4 getLabCritDamageTitle();
    undefined4 getLabCritDamage();
    undefined4 getLabCritDamageAdd();
    undefined4 getLabRuneCritDamage();
    undefined4 getLabRuneCritDamageTitle();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1f0?496 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[496];
};

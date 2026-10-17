#pragma once
// GuideManager
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class GuideManager : public cocos2d::CCObject {
public:
    cocos2d::CCDictionary* getDicGuided() const;
    GuideData* getGuideData() const;
    int getCurrentIndex() const;
    void setCurrentIndex(int);
    int getLV() const;
    void setLV(int);
    int getMissionID() const;
    void setMissionID(int);
    int getAcceptTaskID() const;
    void setAcceptTaskID(int);
    int getSubmitTaskID() const;
    void setSubmitTaskID(int);
    int getReceivePack() const;
    void setReceivePack(int);
    int getPlotID() const;
    void setPlotID(int);
    bool getISPlotNextStep() const;
    void setISPlotNextStep(bool);
    GuideLayer* getGuideLayer() const;
    void setGuideLayer(GuideLayer*);
    bool getIsFightRecordNextStep() const;
    void setIsFightRecordNextStep(bool);
    cocos2d::CCLabelTTF* getLabPosition() const;
    void setLabPosition(cocos2d::CCLabelTTF*);
    bool getISGuiding() const;
    void setISGuiding(bool);
    cocos2d::extension::CCControlButton* getBtnSysMenu() const;
    void setBtnSysMenu(cocos2d::extension::CCControlButton*);
    FunctionUnLock* getFunctionUnLock() const;
    void setFunctionUnLock(FunctionUnLock*);
    cocos2d::CCDictionary* getDicUnlockFunction() const;
    void setDicUnlockFunction(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicSceneFunction() const;
    void setDicSceneFunction(cocos2d::CCDictionary*);
    bool getISDelayNext() const;
    void setISDelayNext(bool);
    bool getISRequest() const;
    void setISRequest(bool);
    bool getISShow() const;
    void setISShow(bool);
    void setGuideData(GuideData*);
    void setDicGuided(cocos2d::CCDictionary*);
    ~GuideManager();
    GuideManager();
    void resetGuideManager();
    void removeAllGuideUI();
    void updateToDataBase();
    void fightRecordEnd();
    undefined4 getNewGuide(int);
    undefined4 isNewGuide();
    void showGuideLayer(bool);
    void delayNextStep();
    void plotEnd();
    undefined4 virtualNotEnoughEnd();
    undefined4 netTimeOutRestart();
    void setCurrentCompleteGuideID();
    bool init();
    undefined4 shareManager();
    void startGuideStep();
    void guideExitMission();
    uint judgeGuide();
    void nextStep();
    void onLoadingEnd(cocos2d::CCObject*);
    void onSkipClick(cocos2d::CCObject*, unsigned int);
    void sendTrrigerGuide();
    undefined4 isStepEnd(int);
    undefined4 isCloseUIEnd(int);
};

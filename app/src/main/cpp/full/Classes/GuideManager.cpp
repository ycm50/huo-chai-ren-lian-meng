#include "GuideManager.h"
#include "CCArray.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCDictionary.h"
#include "CCDirector.h"
#include "CCLabelTTF.h"
#include "CCGeometry.h"
#include "GuideLayer.h"
#include "GuideData.h"
#include "BLGameScene.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "FunctionUnLock.h"
#include "UIManager.h"
#include "UserData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
static GuideManager *s_singleton_1 = 0;   /* SINGLETON_BATCH(R73): 原为裸地址单例 */

using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6ac(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079ec74(...);
extern "C" unsigned long UNK_005632fc;
extern "C" unsigned long UNK_0056330e;
extern "C" unsigned long UNK_005634d0;
extern "C" unsigned long UNK_005634e2;
extern "C" unsigned long UNK_00563510;
extern "C" unsigned long UNK_00563522;
extern "C" unsigned long UNK_00563550;
extern "C" unsigned long UNK_00563552;
extern "C" unsigned long UNK_0056357a;
extern "C" unsigned long UNK_00563590;
extern "C" unsigned long UNK_005635ea;
extern "C" unsigned long UNK_00563612;
extern "C" unsigned long UNK_005639be;
extern "C" unsigned long UNK_005639c0;
extern "C" unsigned long UNK_00564250;
extern "C" unsigned long UNK_00564252;
extern "C" unsigned long UNK_0056454e;
extern "C" unsigned long UNK_00564550;
extern "C" unsigned long UNK_00564598;
extern "C" unsigned long UNK_0056459a;
extern "C" unsigned long UNK_00564608;
extern "C" unsigned long UNK_0056460a;
extern "C" unsigned long UNK_00564694;
extern "C" unsigned long UNK_00564696;
extern "C" unsigned long _DAT_00563490;
extern "C" unsigned long _DAT_00563494;
extern "C" unsigned long _DAT_00563498;
extern "C" unsigned long _DAT_00563930;
extern "C" unsigned long _DAT_00563934;
extern "C" unsigned long _DAT_00563bb0;
extern "C" unsigned long _DAT_00563bb4;
extern "C" unsigned long _DAT_00563bb8;
extern "C" unsigned long _DAT_00563bbc;
extern "C" unsigned long _DAT_00563bf8;
extern "C" unsigned long _DAT_00563bfc;
extern "C" unsigned long _DAT_00563c00;
extern "C" unsigned long _DAT_00563f0c;
extern "C" unsigned long _DAT_00563f10;
extern "C" unsigned long _DAT_00563f14;
extern "C" unsigned long _DAT_0056442c;
extern "C" unsigned long _UNK_00563360;
extern "C" unsigned long _UNK_00563364;
extern "C" unsigned long _UNK_005634b8;
extern "C" unsigned long _UNK_005634bc;
extern "C" unsigned long _UNK_00563694;
extern "C" unsigned long _UNK_00563698;
extern "C" unsigned long _UNK_0056369c;
extern "C" unsigned long _UNK_005636a0;
extern "C" unsigned long _UNK_005636a4;
extern "C" unsigned long _UNK_005636a8;
extern "C" unsigned long _UNK_005636ac;
extern "C" unsigned long _UNK_005636b0;
extern "C" unsigned long _UNK_00563a00;
extern "C" unsigned long _UNK_00563a04;
extern "C" unsigned long _UNK_005642e0;
extern "C" unsigned long _UNK_005642e4;
extern "C" unsigned long _UNK_0056456c;
extern "C" unsigned long _UNK_00564570;
extern "C" unsigned long _UNK_005645d0;
extern "C" unsigned long _UNK_005645d4;
extern "C" unsigned long _UNK_005645d8;
extern "C" unsigned long _UNK_005645dc;
extern "C" unsigned long _UNK_00564664;
extern "C" unsigned long _UNK_00564668;
extern "C" unsigned long _UNK_005646c0;
extern "C" unsigned long _UNK_005646c4;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long unaff_d10;
extern "C" unsigned long unaff_r6;
extern "C" unsigned long g_005632fc;
extern "C" unsigned long g_0056330e;
extern "C" unsigned long g_00563360;
extern "C" unsigned long g_00563364;
extern "C" unsigned long g_00563490;
extern "C" unsigned long g_00563494;
extern "C" unsigned long g_00563498;
extern "C" unsigned long g_005634b8;
extern "C" unsigned long g_005634bc;
extern "C" unsigned long g_005634d0;
extern "C" unsigned long g_005634e2;
extern "C" unsigned long g_00563510;
extern "C" unsigned long g_00563522;
extern "C" unsigned long g_00563550;
extern "C" unsigned long g_00563552;
extern "C" unsigned long g_0056357a;
extern "C" unsigned long g_00563590;
extern "C" unsigned long g_005635ea;
extern "C" unsigned long g_00563612;
extern "C" unsigned long g_00563694;
extern "C" unsigned long g_00563698;
extern "C" unsigned long g_0056369c;
extern "C" unsigned long g_005636a0;
extern "C" unsigned long g_005636a4;
extern "C" unsigned long g_005636a8;
extern "C" unsigned long g_005636ac;
extern "C" unsigned long g_005636b0;
extern "C" unsigned long g_00563930;
extern "C" unsigned long g_00563934;
extern "C" unsigned long g_005639be;
extern "C" unsigned long g_005639c0;
extern "C" unsigned long g_00563a00;
extern "C" unsigned long g_00563a04;
extern "C" unsigned long g_00563bb0;
extern "C" unsigned long g_00563bb4;
extern "C" unsigned long g_00563bb8;
extern "C" unsigned long g_00563bbc;
extern "C" unsigned long g_00563bf8;
extern "C" unsigned long g_00563bfc;
extern "C" unsigned long g_00563c00;
extern "C" unsigned long g_00563f0c;
extern "C" unsigned long g_00563f10;
extern "C" unsigned long g_00563f14;
extern "C" unsigned long g_00564250;
extern "C" unsigned long g_00564252;
extern "C" unsigned long g_005642e0;
extern "C" unsigned long g_005642e4;
extern "C" unsigned long g_0056442c;
extern "C" unsigned long g_0056454e;
extern "C" unsigned long g_00564550;
extern "C" unsigned long g_0056456c;
extern "C" unsigned long g_00564570;
extern "C" unsigned long g_00564598;
extern "C" unsigned long g_0056459a;
extern "C" unsigned long g_005645d0;
extern "C" unsigned long g_005645d4;
extern "C" unsigned long g_005645d8;
extern "C" unsigned long g_005645dc;
extern "C" unsigned long g_00564608;
extern "C" unsigned long g_0056460a;
extern "C" unsigned long g_00564664;
extern "C" unsigned long g_00564668;
extern "C" unsigned long g_00564694;
extern "C" unsigned long g_00564696;
extern "C" unsigned long g_005646c0;
extern "C" unsigned long g_005646c4;
cocos2d::CCDictionary* GuideManager::getDicGuided() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x14));
}

GuideData* GuideManager::getGuideData() const
{
  return (GuideData*)(*(undefined4 *)(((int)this) + 0x18));
}

int GuideManager::getCurrentIndex() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void GuideManager::setCurrentIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

int GuideManager::getLV() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void GuideManager::setLV(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

int GuideManager::getMissionID() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void GuideManager::setMissionID(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

int GuideManager::getAcceptTaskID() const
{
  return *(undefined4 *)(((int)this) + 0x28);
}

void GuideManager::setAcceptTaskID(int p1)
{
  *(undefined4 *)(((int)this) + 0x28) = p1;
  return;
}

int GuideManager::getSubmitTaskID() const
{
  return *(undefined4 *)(((int)this) + 0x2c);
}

void GuideManager::setSubmitTaskID(int p1)
{
  *(undefined4 *)(((int)this) + 0x2c) = p1;
  return;
}

int GuideManager::getReceivePack() const
{
  return *(undefined4 *)(((int)this) + 0x30);
}

void GuideManager::setReceivePack(int p1)
{
  *(undefined4 *)(((int)this) + 0x30) = p1;
  return;
}

int GuideManager::getPlotID() const
{
  return *(undefined4 *)(((int)this) + 0x34);
}

void GuideManager::setPlotID(int p1)
{
  *(undefined4 *)(((int)this) + 0x34) = p1;
  return;
}

bool GuideManager::getISPlotNextStep() const
{
  return *(undefined1 *)(((int)this) + 0x38);
}

void GuideManager::setISPlotNextStep(bool p1)
{
  *(undefined1 *)(((int)this) + 0x38) = p1;
  return;
}

GuideLayer* GuideManager::getGuideLayer() const
{
  return (GuideLayer*)(*(undefined4 *)(((int)this) + 0x3c));
}

void GuideManager::setGuideLayer(GuideLayer* p1)
{
  *(undefined4 *)(((int)this) + 0x3c) = (undefined4)(intptr_t)p1;
  return;
}

bool GuideManager::getIsFightRecordNextStep() const
{
  return *(undefined1 *)(((int)this) + 0x40);
}

void GuideManager::setIsFightRecordNextStep(bool p1)
{
  *(undefined1 *)(((int)this) + 0x40) = p1;
  return;
}

cocos2d::CCLabelTTF* GuideManager::getLabPosition() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x44));
}

void GuideManager::setLabPosition(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x44) = (undefined4)(intptr_t)p1;
  return;
}

bool GuideManager::getISGuiding() const
{
  return *(undefined1 *)(((int)this) + 0x48);
}

void GuideManager::setISGuiding(bool p1)
{
  *(undefined1 *)(((int)this) + 0x48) = p1;
  return;
}

cocos2d::extension::CCControlButton* GuideManager::getBtnSysMenu() const
{
  return (cocos2d::extension::CCControlButton*)(*(undefined4 *)(((int)this) + 0x4c));
}

FunctionUnLock* GuideManager::getFunctionUnLock() const
{
  return (FunctionUnLock*)(*(undefined4 *)(((int)this) + 0x50));
}

void GuideManager::setFunctionUnLock(FunctionUnLock* p1)
{
  *(undefined4 *)(((int)this) + 0x50) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCDictionary* GuideManager::getDicUnlockFunction() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x54));
}

cocos2d::CCDictionary* GuideManager::getDicSceneFunction() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x58));
}

bool GuideManager::getISDelayNext() const
{
  return *(undefined1 *)(((int)this) + 0x5c);
}

void GuideManager::setISDelayNext(bool p1)
{
  *(undefined1 *)(((int)this) + 0x5c) = p1;
  return;
}

bool GuideManager::getISRequest() const
{
  return *(undefined1 *)(((int)this) + 0x5d);
}

void GuideManager::setISRequest(bool p1)
{
  *(undefined1 *)(((int)this) + 0x5d) = p1;
  return;
}

bool GuideManager::getISShow() const
{
  return *(undefined1 *)(((int)this) + 0x5e);
}

void GuideManager::setISShow(bool p1)
{
  *(undefined1 *)(((int)this) + 0x5e) = p1;
  return;
}

void GuideManager::setGuideData(GuideData* p1)
{
  if (*(int *)(((int)this) + 0x18) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x18) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  }
  return;
}

void GuideManager::setDicGuided(cocos2d::CCDictionary* p1)
{
  if (*(int *)(((int)this) + 0x14) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x14) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  }
  return;
}

GuideManager::~GuideManager()
{
  undefined4 uVar1;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0056330e + g_00563364);
  if (*(int *)((int)this + 4*(6)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(6)) = 0;
  }
  if (*(int *)((int)this + 4*(0x14)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x14)) = 0;
  }
  if (*(int *)((int)this + 4*(5)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(5)) = 0;
  }
  if (*(int *)((int)this + 4*(0x16)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x16)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void GuideManager::resetGuideManager()
{
  if (*(int **)(&g_005634d0 + g_005634b8) != (int *)0x0) {
    (**(code **)(**(int **)(&g_005634d0 + g_005634b8) + 8))();
  }
  *(undefined4 *)(&g_005634e2 + g_005634bc) = 0;
  return;
}



void GuideManager::fightRecordEnd()
{
  *(undefined1 *)(((int)this) + 0x40) = 1;
  return;
}

undefined4 GuideManager::getNewGuide(int p1)
{
  return 0;
}



void GuideManager::plotEnd()
{
  return;
}




bool GuideManager::init()
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)g_00563bb4 + 0x563aea, (char const*)((intptr_t)"Arial"), g_00563bb8);
  *(int **)(((int)this) + 0x44) = piVar1;
  pcVar5 = *(code **)(*piVar1 + 0x4c);
  uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)auStack_30 = ((cocos2d::CCDirector *)uVar2)->getWinSize();
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(0x3f000000)))));
  uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar3)->getWinSize(); __builtin_memcpy(&auStack_28, &_ws.width, 4); uStack_24 = hw_fbits(_ws.height); }
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(0x3f000000)))));
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_20);
  (**(code **)(**(int **)(((int)this) + 0x44) + 0x1b4))
            (*(int **)(((int)this) + 0x44),g_00563bbc + 0x563b48);
  piVar1 = (int *)((BLGameScene *)this)->shareGameScene();
  (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(((int)this) + 0x44),0x1e);
  if (*(int *)(((int)this) + 0x50) != 0) {
    ((cocos2d::CCObject *)this)->release();
  }
  piVar1 = (int *)((long long)::operator new((size_t)(0x18)));
  0 /* ctorZero */;
  iVar4 = ((FunctionUnLock *)piVar1)->init();
  if (iVar4 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  *(int **)(((int)this) + 0x50) = piVar1;
  if (piVar1 != (int *)0x0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  GuideManager::setCurrentCompleteGuideID();
  return 1;
}

undefined4 GuideManager::shareManager()
{
  undefined4 uVar1;
  
  if (s_singleton_1 == 0) {
    s_singleton_1 = new GuideManager();
    s_singleton_1->init();
  }
  return (undefined4)(intptr_t)s_singleton_1;
}






void GuideManager::onSkipClick(cocos2d::CCObject* p1, unsigned int p2)
{
  GuideManager::nextStep();
  return;
}

// ===== 修复: 补回被误删的函数占位 (20) =====
void GuideManager::setBtnSysMenu(cocos2d::extension::CCControlButton* p1)
{
  *(undefined4 *)(((int)this) + 0x4c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void GuideManager::setDicUnlockFunction(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x54) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void GuideManager::setDicSceneFunction(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x58) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

GuideManager::GuideManager()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GuideManager::removeAllGuideUI()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GuideManager::updateToDataBase()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iStack_1b4;
  undefined1 auStack_1a8 [4];
  undefined1 auStack_1a4 [4];
  undefined1 auStack_1a0 [4];
  undefined1 auStack_19c [4];
  undefined1 auStack_198 [4];
  undefined1 auStack_194 [4];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [4];
  undefined1 auStack_184 [176];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  func_0079e45c(auStack_1a8,(unsigned char *)((char *)&g_00563510 + (intptr_t)(g_00563694)),auStack_d4);
  if (*(int *)(((int)this) + 0x14) != 0) {
    iVar1 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x14) + 0x14));
    iVar4 = (undefined4)(intptr_t)(iVar1);
    if (iVar1 != 0) {
      iVar4 = (undefined4)(intptr_t)(*(int *)(iVar1 + 0x110));
    }
    iStack_1b4 = 0;
    while (iVar1 != 0) {
      if ((*(int *)(iVar1 + 0x104) != 0) &&
         (iVar1 = func_0079e55c(*(int *)(iVar1 + 0x104),
                                  *(undefined4 *)((unsigned char *)((char *)&g_00563550 + (intptr_t)(g_0056369c))),
                                  *(undefined4 *)((unsigned char *)((char *)&g_00563552 + (intptr_t)(g_005636a0))),0), iVar1 != 0)) {
        if (iStack_1b4 != 0) {
          func_0079e69c(auStack_1a8,(unsigned char *)((char *)&g_0056357a + (intptr_t)(g_005636a4)));
        }
        uVar2 = (undefined4)(*(undefined4 *)(iVar1 + 0x14));
        func_0079e43c(auStack_190,0x18);
        func_0079e44c(auStack_188,uVar2);
        func_0079e45c(auStack_198,(unsigned char *)((char *)&g_00563590 + (intptr_t)(g_005636a8)),auStack_d4);
        func_0079e46c(auStack_1a4,auStack_184);
        func_0079e2bc(auStack_198);
        func_0079e47c(auStack_190);
        func_0079e874(auStack_1a8,auStack_1a4);
        func_0079e2bc(auStack_1a4);
        iStack_1b4 = (undefined4)(intptr_t)(iStack_1b4 + 1);
      }
      iVar1 = (undefined4)(intptr_t)(iVar4);
      if (iVar4 != 0) {
        iVar4 = (undefined4)(intptr_t)(*(int *)(iVar4 + 0x110));
      }
    }
  }
  iVar1 = (undefined4)(intptr_t)(func_0079e4bc(auStack_1a8,(unsigned char *)((char *)&g_00563522 + (intptr_t)(g_00563698))));
  if (iVar1 != 0) {
    func_0079e69c(auStack_1a8,(unsigned char *)((char *)&g_005635ea + (intptr_t)(g_005636ac)));
  }
  uVar2 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x18) + 0x18))());
  func_0079e43c(auStack_d4,0x18);
  func_0079e44c(auStack_cc,uVar2);
  func_0079e45c(auStack_194,(unsigned char *)((char *)&g_00563612 + (intptr_t)(g_005636b0)),auStack_190);
  func_0079e46c(auStack_1a0,auStack_c8);
  func_0079e2bc(auStack_194);
  func_0079e47c(auStack_d4);
  func_0079e874(auStack_1a8,auStack_1a0);
  func_0079e2bc(auStack_1a0);
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x28)))());
  func_0079e53c(auStack_19c,auStack_1a8);
  ((UserData *)uVar2)->updateGuideToDataBase((std::string *)(char *)auStack_19c);
  func_0079e2bc(auStack_19c);
  func_0079e2bc(auStack_1a8);
  return;
}

undefined4 GuideManager::isNewGuide()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void GuideManager::showGuideLayer(bool p1)
{
  undefined4 p4 = 0;

  int *piVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  
  piVar1 = *(int **)(((int)this) + 0x3c);
  if (piVar1 != (int *)0x0) {
    uVar3 = (undefined4)(0);
    puVar5 = (undefined4 *)(*piVar1 + 0x90);
    pcVar4 = (code *)*puVar5;
    if (p1 != 0) {
      puVar5 = (undefined4 *)(uint)*(byte *)(((int)this) + 0x5d);
      uVar3 = (undefined4)((uint)puVar5 ^ 1);
    }
    (*pcVar4)(piVar1,uVar3,pcVar4,puVar5,p4);
  }
  piVar1 = *(int **)(((int)this) + 0x60);
  if (piVar1 != (int *)0x0) {
    bVar2 = 0;
    if (p1 != 0) {
      bVar2 = (undefined4)(intptr_t)(*(byte *)(((int)this) + 0x5d) ^ 1);
    }
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,bVar2);
  }
  *(char *)(((int)this) + 0x5e) = (char)p1;
  return;
}

void GuideManager::delayNextStep()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 GuideManager::virtualNotEnoughEnd()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 GuideManager::netTimeOutRestart()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void GuideManager::setCurrentCompleteGuideID()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GuideManager::startGuideStep()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GuideManager::guideExitMission()
{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 auStack_1c [2];
  
  uVar1 = (undefined4)(((cocos2d::CCDictionary *)*(int *)((int)this + 4*(5)))->count());
  piVar2 = (int *)((DataCacheManager *)this)->shareManager();
  (**(code **)(*(int *)(piVar2) + (0x90)))();
  uVar3 = (undefined4)(((cocos2d::CCArray *)this)->count());
  if ((uVar1 < uVar3) && ((char)*(int *)((int)this + 4*(0x12)) == '\0')) {
    piVar2 = (int *)((DataCacheManager *)this)->shareManager();
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x90)))());
    for (uVar1 = 0; uVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar4)->count(), uVar1 < uVar3); uVar1 = uVar1 + 1) {
      iVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar4)->objectAtIndex((unsigned int)uVar1));
      if ((iVar5 != 0) &&
         (piVar2 = (int *)func_0079e55c(iVar5,*(undefined4 *)((unsigned char *)((char *)&g_00564250 + (intptr_t)(g_005642e0))),
                                          *(undefined4 *)((unsigned char *)((char *)&g_00564252 + (intptr_t)(g_005642e4))),0),
         piVar2 != (int *)0x0)) {
        iVar5 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(5)));
        uVar6 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))());
        iVar5 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)iVar5)->objectForKey(uVar6));
        if ((iVar5 == 0) && (iVar5 = (**(code **)(*(int *)(piVar2) + (0x28)))(piVar2), iVar5 == 0xb)) {
          piVar7 = (int *)((DataManager *)this)->shareDataManager();
          uVar6 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x28)))());
          ((UserData *)this)->getMission();
          iVar5 = (undefined4)(intptr_t)(func_0079e6c0(auStack_1c[0]));
          iVar8 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x30)))(piVar2));
          if (iVar5 == iVar8) {
            (**(code **)(*(int *)this + 0x24))(((int)this),piVar2);
            *(undefined1 *)((int)((int)this) + 0x5f) = 0;
            GuideManager::startGuideStep();
            func_0079e2bc(auStack_1c);
            return;
          }
          func_0079e2bc(auStack_1c);
        }
      }
    }
  }
  return;
}

uint GuideManager::judgeGuide()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void GuideManager::nextStep()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GuideManager::onLoadingEnd(cocos2d::CCObject* p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = (int *)GuideManager::shareManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x20))();
  if (piVar1 != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x38))());
    piVar1 = (int *)GuideManager::shareManager();
    uVar3 = (undefined4)((**(code **)(*piVar1 + 0x28))());
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar3));
    if (((iVar4 != 0) &&
        (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_0056454e + (intptr_t)(g_0056456c))),
                                         *(undefined4 *)((unsigned char *)((char *)&g_00564550 + (intptr_t)(g_00564570))),0),
        piVar1 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar1 + 0x70))(), iVar4 == 3)) {
      GuideManager::nextStep();
    }
  }
  return;
}

void GuideManager::sendTrrigerGuide()
{
  undefined4 p4 = 0;

  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  iVar3 = (undefined4)((void)(((UIManager *)(uVar2))->getUIObject(3)),(intptr_t)0);
  if (iVar3 != 0) {
    iVar3 = func_0079e55c(iVar3,*(undefined4 *)((unsigned char *)((char *)&g_00564598 + (intptr_t)(g_005645d0))),
                            *(undefined4 *)((unsigned char *)((char *)&g_0056459a + (intptr_t)(g_005645d4))),0,p4);
    (**(code **)(**(int **)(iVar3 + 0x24) + 0xf8))(*(int **)(iVar3 + 0x24),g_005645d8);
    piVar4 = (int *)(**(code **)(**(int **)(iVar3 + 0x24) + 0xd4))
                              (*(int **)(iVar3 + 0x24),g_005645dc);
    (**(code **)(*(int *)(piVar4) + (0x1c)))(piVar4,1);
    ((GuideManager *)(((int)this)))->nextStep();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xff,0x5645cc);
  (*pcVar1)();
}

undefined4 GuideManager::isStepEnd(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 GuideManager::isCloseUIEnd(int p1)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(((int)this) + 0x18);
  if (piVar3 != (int *)0x0) {
    uVar1 = (undefined4)((**(code **)(*piVar3 + 0x38))(piVar3));
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar1)->objectAtIndex((unsigned int)*(undefined4 *)(((int)this) + 0x1c)));
    if ((((iVar2 != 0) &&
         (piVar3 = (int *)func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_00564694 + (intptr_t)(g_005646c0))),
                                          *(undefined4 *)((unsigned char *)((char *)&g_00564696 + (intptr_t)(g_005646c4))),0),
         piVar3 != (int *)0x0)) && (iVar2 = (**(code **)(*piVar3 + 0x70))(), iVar2 == 2)) &&
       (iVar2 = (**(code **)(*piVar3 + 0x78))(piVar3), p1 == iVar2)) {
      GuideManager::nextStep();
    }
  }
  return 0;
}

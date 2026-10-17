#include "BLArenaResultPresenter.h"
#include "CCLabelTTF.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLArenaResultView.h"
#include "BLLeakUtils.h"
#include "BLMissionData.h"
#include "BLResultManager.h"
#include "CircusData.h"
#include "CircusResultinfo.h"
#include "DataManager.h"
#include "PlatformHelp.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e33c(...);
extern "C" long long func_0079e38c(...);
extern "C" long long func_0079e39c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00654e78;
extern "C" unsigned long UNK_00654e90;
extern "C" unsigned long UNK_00654ea8;
extern "C" unsigned long UNK_00654f18;
extern "C" unsigned long UNK_00654f32;
extern "C" unsigned long UNK_00654f78;
extern "C" unsigned long UNK_00654fa0;
extern "C" unsigned long UNK_00654ff4;
extern "C" unsigned long UNK_00655054;
extern "C" unsigned long UNK_00655072;
extern "C" unsigned long UNK_00655076;
extern "C" unsigned long UNK_00655090;
extern "C" unsigned long UNK_00655094;
extern "C" unsigned long UNK_006550ae;
extern "C" unsigned long UNK_006550b2;
extern "C" unsigned long UNK_006550e0;
extern "C" unsigned long UNK_00655194;
extern "C" unsigned long UNK_006551a4;
extern "C" unsigned long UNK_006553cc;
extern "C" unsigned long UNK_006553d0;
extern "C" unsigned long UNK_006553f6;
extern "C" unsigned long UNK_006553fa;
extern "C" unsigned long UNK_0065540a;
extern "C" unsigned long UNK_00655466;
extern "C" unsigned long UNK_0065546c;
extern "C" unsigned long _UNK_00654e7c;
extern "C" unsigned long _UNK_00654e94;
extern "C" unsigned long _UNK_00654eac;
extern "C" unsigned long _UNK_00654f64;
extern "C" unsigned long _UNK_00654f68;
extern "C" unsigned long _UNK_00654f7c;
extern "C" unsigned long _UNK_00654fa4;
extern "C" unsigned long _UNK_00655040;
extern "C" unsigned long _UNK_0065510c;
extern "C" unsigned long _UNK_00655110;
extern "C" unsigned long _UNK_00655114;
extern "C" unsigned long _UNK_00655118;
extern "C" unsigned long _UNK_0065511c;
extern "C" unsigned long _UNK_00655120;
extern "C" unsigned long _UNK_00655124;
extern "C" unsigned long _UNK_00655128;
extern "C" unsigned long _UNK_006551c8;
extern "C" unsigned long _UNK_006551cc;
extern "C" unsigned long _UNK_0065532c;
extern "C" unsigned long _UNK_0065554c;
extern "C" unsigned long _UNK_00655550;
extern "C" unsigned long _UNK_00655554;
extern "C" unsigned long _UNK_00655558;
extern "C" unsigned long _UNK_0065555c;
extern "C" unsigned long _UNK_00655560;
extern "C" unsigned long _UNK_00655564;
extern "C" unsigned long _UNK_00655568;
extern "C" unsigned long g_00654e78;
extern "C" unsigned long g_00654e7c;
extern "C" unsigned long g_00654e90;
extern "C" unsigned long g_00654e94;
extern "C" unsigned long g_00654ea8;
extern "C" unsigned long g_00654eac;
extern "C" unsigned long g_00654f18;
extern "C" unsigned long g_00654f32;
extern "C" unsigned long g_00654f64;
extern "C" unsigned long g_00654f68;
extern "C" unsigned long g_00654f78;
extern "C" unsigned long g_00654f7c;
extern "C" unsigned long g_00654fa0;
extern "C" unsigned long g_00654fa4;
extern "C" unsigned long g_00654ff4;
extern "C" unsigned long g_00655040;
extern "C" unsigned long g_00655054;
extern "C" unsigned long g_00655072;
extern "C" unsigned long g_00655076;
extern "C" unsigned long g_00655090;
extern "C" unsigned long g_00655094;
extern "C" unsigned long g_006550ae;
extern "C" unsigned long g_006550b2;
extern "C" unsigned long g_006550e0;
extern "C" unsigned long g_0065510c;
extern "C" unsigned long g_00655110;
extern "C" unsigned long g_00655114;
extern "C" unsigned long g_00655118;
extern "C" unsigned long g_0065511c;
extern "C" unsigned long g_00655120;
extern "C" unsigned long g_00655124;
extern "C" unsigned long g_00655128;
extern "C" unsigned long g_00655194;
extern "C" unsigned long g_006551a4;
extern "C" unsigned long g_006551c8;
extern "C" unsigned long g_006551cc;
extern "C" unsigned long g_0065532c;
extern "C" unsigned long g_006553cc;
extern "C" unsigned long g_006553d0;
extern "C" unsigned long g_006553f6;
extern "C" unsigned long g_006553fa;
extern "C" unsigned long g_0065540a;
extern "C" unsigned long g_00655466;
extern "C" unsigned long g_0065546c;
extern "C" unsigned long g_0065554c;
extern "C" unsigned long g_00655550;
extern "C" unsigned long g_00655554;
extern "C" unsigned long g_00655558;
extern "C" unsigned long g_0065555c;
extern "C" unsigned long g_00655560;
extern "C" unsigned long g_00655564;
extern "C" unsigned long g_00655568;
void BLArenaResultPresenter::tick(float p1)
{
  return;
}

bool BLArenaResultPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLArenaResultPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLArenaResultPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLArenaResultPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLArenaResultPresenter::~BLArenaResultPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00654f18 + g_00654f64);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00654f32 + g_00654f68,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLArenaResultPresenter::onBack()
{
  ((BLResultManager *)this)->shareManager();
  ((BLResultManager *)this)->returnMainCity();
  return;
}

void BLArenaResultPresenter::onLeiTaiSai()
{
  undefined4 uVar1;
  
  ((BLResultManager *)this)->shareManager();
  ((BLResultManager *)this)->returnMainCity();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(200);
  return;
}


BLArenaResultPresenter::BLArenaResultPresenter()
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00655054 + (intptr_t)(g_0065510c))));
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  *(int *)this = iVar3 + 8;
  *(undefined1 *)(((int)this) + 7) = 0;
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00655072 + (intptr_t)(g_00655110))));
  uStack_24 = (undefined4)(0);
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_28, 0, (char const*)(unsigned char *)((char *)&g_00655076 + (intptr_t)(g_00655114)), 0);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00655090 + (intptr_t)(g_00655118))));
  uStack_1c = (undefined4)(0);
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_20, 0, (char const*)(unsigned char *)((char *)&g_00655094 + (intptr_t)(g_0065511c)), 0);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_18 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_006550ae + (intptr_t)(g_00655120))));
  uStack_14 = (undefined4)(0);
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_18, 0, (char const*)(unsigned char *)((char *)&g_006550b2 + (intptr_t)(g_00655124)), 0);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar1))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_2c,(unsigned char *)((char *)&g_006550e0 + (intptr_t)(g_00655128)),auStack_30);
  ((BLLeakUtils *)(uVar1))->addClass((std::string)(char*)auStack_2c);
  func_0079e2bc(auStack_2c);
  return;
}

void BLArenaResultPresenter::onEnter()
{
  return;
}

void BLArenaResultPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

undefined4 BLArenaResultPresenter::create(BLArenaResultView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLArenaResultPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLArenaResultPresenter::initWithView(BLArenaResultView* p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int *piVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLArenaResultView *)(p1))->getBtnSure();
  (**(code **)(*(int *)(piVar1) + (0x254)))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00655194 + (intptr_t)(g_006551c8))),0,0x20,p1,p3,
             p4);
  puVar3 = (unsigned char *)((char *)&g_006551a4 + (intptr_t)(g_006551cc));
  uVar2 = (undefined4)(((BLArenaResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabReward());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar3, 0x3f800000, 1);
  uVar2 = (undefined4)(((BLArenaResultView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabRank());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar3, 0x3f800000, 1);
  return;
}

void BLArenaResultPresenter::onChangeResult()
{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  iVar1 = (undefined4)(intptr_t)(((BLArenaResultView *)*(undefined4 *)(((int)this) + 0x18))->getLabRank());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((CircusData *)this)->getMe());
    iStack_28 = *(int *)(iVar2 + 0x170);
    iStack_24 = *(undefined4 *)(iVar2 + 0x174);
    func_0079e53c(auStack_20,iVar2 + 0x178);
    iVar1 = (undefined4)(intptr_t)(iStack_28);
    uStack_1c = (undefined4)(*(undefined4 *)(iVar2 + 0x17c));
    func_0079e2bc(auStack_20);
    iVar3 = (undefined4)(intptr_t)(((CircusData *)this)->getMe());
    iStack_28 = *(int *)(iVar3 + 0x170);
    iStack_24 = *(int *)(iVar3 + 0x174);
    func_0079e53c(auStack_20,iVar3 + 0x178);
    iVar2 = (undefined4)(intptr_t)(iStack_24);
    uStack_1c = (undefined4)(*(undefined4 *)(iVar3 + 0x17c));
    func_0079e2bc(auStack_20);
    if (*(char *)(((int)this) + 0x1d) == '\0') {
      if ((iVar1 < 1) || (g_0065532c < iVar1)) {
        iVar1 = (undefined4)(intptr_t)(g_0065532c);
      }
      piVar4 = (int *)((BLArenaResultView *)*(undefined4 *)(((int)this) + 0x18))->getLabRank();
      pcVar5 = *(code **)(*piVar4 + 0x234);
      ConvertToString<int>(&iStack_28, iVar1, 0);
      (*pcVar5)(piVar4,iStack_28);
    }
    else {
      if (iVar1 <= iVar2) goto code_r0x006552aa;
      if ((iVar2 < 1) || (g_0065532c < iVar2)) {
        iVar2 = (undefined4)(intptr_t)(g_0065532c);
      }
      piVar4 = (int *)((BLArenaResultView *)*(undefined4 *)(((int)this) + 0x18))->getLabRank();
      pcVar5 = *(code **)(*piVar4 + 0x234);
      ConvertToString<int>(&iStack_28, iVar2, 0);
      (*pcVar5)(piVar4,iStack_28);
    }
    func_0079e2bc(&iStack_28);
  }
code_r0x006552aa:
  iVar1 = (undefined4)(intptr_t)(((BLArenaResultView *)*(undefined4 *)(((int)this) + 0x18))->getLabReward());
  if (iVar1 != 0) {
    piVar4 = (int *)((BLArenaResultView *)*(undefined4 *)(((int)this) + 0x18))->getLabReward();
    pcVar5 = *(code **)(*piVar4 + 0x234);
    iVar1 = (undefined4)(intptr_t)(((CircusData *)this)->getMe());
    iStack_28 = *(int *)(iVar1 + 0x170);
    iStack_24 = *(undefined4 *)(iVar1 + 0x174);
    func_0079e53c(auStack_20,iVar1 + 0x178);
    uStack_1c = (undefined4)(*(undefined4 *)(iVar1 + 0x17c));
    ConvertToString<int>(&uStack_2c, uStack_1c, 0);
    (*pcVar5)(piVar4,uStack_2c);
    func_0079e2bc(&uStack_2c);
    func_0079e2bc(auStack_20);
  }
  return;
}

void BLArenaResultPresenter::initWith(bool p1, int p2, int p3)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  undefined1 uStack_50;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  uStack_50 = (undefined1)p1;
  *(undefined1 *)(((int)this) + 0x1d) = uStack_50;
  piVar1 = (int *)((BLArenaResultView *)*(undefined4 *)(((int)this) + 0x18))->getSprSprFaild();
  (**(code **)(*piVar1 + 0x90))(piVar1,p1 ^ 1);
  piVar1 = (int *)((BLArenaResultView *)*(undefined4 *)(((int)this) + 0x18))->getSprSprWin();
  (**(code **)(*piVar1 + 0x90))(piVar1,p1);
  if ((p2 < 1) || (g_0065554c < p2)) {
    p2 = g_0065554c;
  }
  piVar1 = (int *)((BLArenaResultView *)*(undefined4 *)(((int)this) + 0x18))->getLabRank();
  pcVar5 = *(code **)(*piVar1 + 0x234);
  ConvertToString<int>(&uStack_28, p2, 0);
  (*pcVar5)(piVar1,uStack_28);
  func_0079e2bc(&uStack_28);
  piVar1 = (int *)((BLArenaResultView *)*(undefined4 *)(((int)this) + 0x18))->getLabReward();
  pcVar5 = *(code **)(*piVar1 + 0x234);
  ConvertToString<int>(&uStack_28, p3, 0);
  (*pcVar5)(piVar1,uStack_28);
  func_0079e2bc(&uStack_28);
  piVar1 = *(int **)((unsigned char *)((char *)&g_006553cc + (intptr_t)(g_00655550)));
  iVar6 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_006553d0 + (intptr_t)(g_00655554))));
  if ((-1 < *piVar1 << 0x1f) && (iVar2 = func_0079e33c(), iVar2 != 0)) {
    0 /* ctorZero */;
    func_0079e38c(piVar1);
    func_0079e39c(iVar6,*(undefined4 *)((unsigned char *)((char *)&g_006553f6 + (intptr_t)(g_00655558))),
                    (unsigned char *)((char *)&g_006553fa + (intptr_t)(g_0065555c)));
  }
  iVar2 = (undefined4)(intptr_t)(*(int *)(iVar6 + 0xc));
  iStack_38 = *(int *)((unsigned char *)((char *)&g_0065540a + (intptr_t)(g_00655560))) + 0xc;
  iStack_34 = iStack_38;
  iStack_30 = iStack_38;
  iStack_2c = iStack_38;
  iVar6 = (undefined4)(intptr_t)(((CircusData *)this)->getMe());
  func_0079e52c(&iStack_38,iVar6 + 0x70);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar1 + 0x158))(auStack_40,piVar1);
  func_0079e52c(&iStack_34,auStack_40);
  func_0079e2bc(auStack_40);
  func_0079e52c(&iStack_30,iVar2 + -4);
  if (p1 == 0) {
    puVar4 = (unsigned char *)((char *)&g_00655466 + (intptr_t)(g_00655564));
  }
  else {
    puVar4 = (unsigned char *)((char *)&g_0065546c + (intptr_t)(g_00655568));
  }
  func_0079e2dc(&iStack_2c,puVar4);
  iVar6 = (undefined4)(intptr_t)(((CircusData *)this)->getMe());
  func_0079e53c(&uStack_28,&iStack_38);
  func_0079e53c(auStack_24,&iStack_34);
  func_0079e53c(auStack_20,&iStack_30);
  func_0079e53c(auStack_1c,&iStack_2c);
  ((PlatformHelp *)auStack_3c)->getDeviceID();
  func_0079e52c(&uStack_28,auStack_3c);
  func_0079e2bc(auStack_3c);
  func_0079e52c(iVar6 + 0x160,&uStack_28);
  func_0079e52c(iVar6 + 0x164,auStack_24);
  func_0079e52c(iVar6 + 0x168,auStack_20);
  func_0079e52c(iVar6 + 0x16c,auStack_1c);
  ((CircusResultinfo *)&uStack_28)->~CircusResultinfo();
  uVar3 = (undefined4)(((CircusData *)this)->getMe());
  ((CircusData *)uVar3)->GetDataFromNet(6, 1);
  ((CircusResultinfo *)&iStack_38)->~CircusResultinfo();
  return;
}

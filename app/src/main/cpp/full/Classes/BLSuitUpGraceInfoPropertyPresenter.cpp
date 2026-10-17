#include "BLSuitUpGraceInfoPropertyPresenter.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "CCObject.h"
#include "BLSuitUpGraceInfoPropertyView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
#include "SuitEquipEquipData.h"
#include "SuitEquipEquipItemData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e884(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006907b0;
extern "C" unsigned long UNK_006907c4;
extern "C" unsigned long UNK_00690f3a;
extern "C" unsigned long UNK_00690f4c;
extern "C" unsigned long UNK_00691044;
extern "C" unsigned long UNK_0069106e;
extern "C" unsigned long UNK_006910d7;
extern "C" unsigned long UNK_00691d28;
extern "C" unsigned long UNK_00691daf;
extern "C" unsigned long UNK_00691e1e;
extern "C" unsigned long UNK_00691e6c;
extern "C" unsigned long UNK_00691e6e;
extern "C" unsigned long UNK_00691ea6;
extern "C" unsigned long UNK_00691ec1;
extern "C" unsigned long UNK_00691ee2;
extern "C" unsigned long UNK_00691f06;
extern "C" unsigned long UNK_00691f42;
extern "C" unsigned long UNK_00691f60;
extern "C" unsigned long _UNK_006907f4;
extern "C" unsigned long _UNK_006907f8;
extern "C" unsigned long _UNK_00690f78;
extern "C" unsigned long _UNK_00690f7c;
extern "C" unsigned long _UNK_006910f4;
extern "C" unsigned long _UNK_006910f8;
extern "C" unsigned long _UNK_006910fc;
extern "C" unsigned long _UNK_00691100;
extern "C" unsigned long _UNK_00691104;
extern "C" unsigned long _UNK_00692008;
extern "C" unsigned long _UNK_0069200c;
extern "C" unsigned long _UNK_00692010;
extern "C" unsigned long _UNK_00692014;
extern "C" unsigned long _UNK_00692018;
extern "C" unsigned long _UNK_0069201c;
extern "C" unsigned long _UNK_00692020;
extern "C" unsigned long _UNK_00692024;
extern "C" unsigned long _UNK_00692028;
extern "C" unsigned long _UNK_0069202c;
extern "C" unsigned long _UNK_00692030;
extern "C" unsigned long _UNK_00692034;
extern "C" unsigned long _UNK_00692038;
extern "C" unsigned long _UNK_0069203c;
extern "C" unsigned long _UNK_00692040;
extern "C" unsigned long _UNK_00692044;
extern "C" unsigned long _UNK_00692048;
extern "C" unsigned long _UNK_0069204c;
extern "C" unsigned long _UNK_00692050;
extern "C" unsigned long g_006907b0;
extern "C" unsigned long g_006907c4;
extern "C" unsigned long g_006907f4;
extern "C" unsigned long g_006907f8;
extern "C" unsigned long g_00690f3a;
extern "C" unsigned long g_00690f4c;
extern "C" unsigned long g_00690f78;
extern "C" unsigned long g_00690f7c;
extern "C" unsigned long g_00691044;
extern "C" unsigned long g_0069106e;
extern "C" unsigned long g_006910d7;
extern "C" unsigned long g_006910f4;
extern "C" unsigned long g_006910f8;
extern "C" unsigned long g_006910fc;
extern "C" unsigned long g_00691100;
extern "C" unsigned long g_00691104;
extern "C" unsigned long g_00691d28;
extern "C" unsigned long g_00691daf;
extern "C" unsigned long g_00691e1e;
extern "C" unsigned long g_00691e6c;
extern "C" unsigned long g_00691e6e;
extern "C" unsigned long g_00691ea6;
extern "C" unsigned long g_00691ec1;
extern "C" unsigned long g_00691ee2;
extern "C" unsigned long g_00691f06;
extern "C" unsigned long g_00691f42;
extern "C" unsigned long g_00691f60;
extern "C" unsigned long g_00692008;
extern "C" unsigned long g_0069200c;
extern "C" unsigned long g_00692010;
extern "C" unsigned long g_00692014;
extern "C" unsigned long g_00692018;
extern "C" unsigned long g_0069201c;
extern "C" unsigned long g_00692020;
extern "C" unsigned long g_00692024;
extern "C" unsigned long g_00692028;
extern "C" unsigned long g_0069202c;
extern "C" unsigned long g_00692030;
extern "C" unsigned long g_00692034;
extern "C" unsigned long g_00692038;
extern "C" unsigned long g_0069203c;
extern "C" unsigned long g_00692040;
extern "C" unsigned long g_00692044;
extern "C" unsigned long g_00692048;
extern "C" unsigned long g_0069204c;
extern "C" unsigned long g_00692050;
BLSuitUpGraceInfoPropertyPresenter::~BLSuitUpGraceInfoPropertyPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006907c4 + g_006907f8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitUpGraceInfoPropertyPresenter::BLSuitUpGraceInfoPropertyPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00690f4c + g_00690f7c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLSuitUpGraceInfoPropertyPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSuitUpGraceInfoPropertyPresenter::onEnter()
{
  return;
}

void BLSuitUpGraceInfoPropertyPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLSuitUpGraceInfoPropertyPresenter::initWithView(BLSuitUpGraceInfoPropertyView* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLSuitUpGraceInfoPropertyPresenter::initMaxLv()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined1 auStack_2c [4];
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 auStack_24 [4];
  undefined4 auStack_20 [3];
  
  (**(code **)(**(int **)(((int)this) + 0x14) + 0x104))(*(int **)(((int)this) + 0x14),1);
  iVar1 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x14) + 0x8c))());
  uVar2 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar1 + 4),0x3f000000));
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(func_0079e4dc(g_006910f4,uVar3));
  uVar2 = (undefined4)(func_0079e57c(uVar2,uVar3));
  piVar4 = (int *)(**(code **)(**(int **)(((int)this) + 0x14) + 0x8c))();
  uVar3 = (undefined4)(func_0079e4fc(*piVar4 + -0x80000000,0x3f000000));
  cocos2d::CCDirector::sharedDirector();
  uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar5 = (undefined4)(func_0079e4dc(0x40800000,uVar5));
  uVar3 = (undefined4)(func_0079e59c(uVar3,uVar5));
  uStack_28 = 0;
  uStack_27 = 0xff;
  uStack_26 = 0;
  uVar5 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_24,(unsigned char *)((char *)&g_00691044 + (intptr_t)(g_006910f8)),auStack_2c);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_20);
  cocos2d::CCDirector::sharedDirector();
  uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar5 = (undefined4)(func_0079e4dc(g_006910fc,uVar5));
  piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)auStack_20[0], (char const*)(unsigned char *)((char *)&g_0069106e + (intptr_t)(g_00691100)), uVar5);
  func_0079e2bc(auStack_20);
  func_0079e2bc(auStack_24);
  pcVar6 = *(code **)(*piVar4 + 0x7c);
  0 /* ctorZero */;
  (*pcVar6)(piVar4,auStack_20);
  pcVar6 = *(code **)(*piVar4 + 0x4c);
  0 /* ctorZero */;
  (*pcVar6)(piVar4,auStack_20);
  (**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4);
  (**(code **)(*(int *)(piVar4) + (0x1b4)))(piVar4,&uStack_28);
  (**(code **)(**(int **)(((int)this) + 0x14) + 200))(*(int **)(((int)this) + 0x14),piVar4);
  ((cocos2d::CCLabelTTF *)(piVar4))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_006910d7 + (intptr_t)(g_00691104)), 0x3f800000, 1);
  return;
}

void BLSuitUpGraceInfoPropertyPresenter::initWithData(int p1, int p2, bool p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

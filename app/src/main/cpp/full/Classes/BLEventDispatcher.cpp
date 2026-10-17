#include "BLEventDispatcher.h"
#include "BLEvent.h"
#include "BLEventListener.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e834(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004bda5c;
extern "C" unsigned long _DAT_004bda60;
extern "C" unsigned long _DAT_004bdb14;
extern "C" unsigned long _DAT_004bdb18;
extern "C" unsigned long _DAT_004bdb1c;
extern "C" unsigned long _DAT_004bdb20;
extern "C" unsigned long _DAT_004bdbcc;
extern "C" unsigned long _DAT_004bdbd0;
extern "C" unsigned long _DAT_004bdbd4;
extern "C" unsigned long _DAT_004bdce8;
extern "C" unsigned long _DAT_004bdcec;
extern "C" unsigned long _DAT_004bdcf0;
extern "C" unsigned long _DAT_004bdda8;
extern "C" unsigned long _DAT_004bddac;
extern "C" unsigned long _DAT_004bddb0;
extern "C" unsigned long _DAT_004bddb4;
extern "C" unsigned long _DAT_004bdedc;
extern "C" unsigned long _DAT_004bdefc;
extern "C" unsigned long _DAT_004be344;
extern "C" unsigned long _DAT_004be348;
extern "C" unsigned long _DAT_004be34c;
extern "C" unsigned long _DAT_004be350;
extern "C" unsigned long _DAT_004be354;
extern "C" unsigned long _DAT_004be358;
extern "C" unsigned long g_004bda5c;
extern "C" unsigned long g_004bda60;
extern "C" unsigned long g_004bdb14;
extern "C" unsigned long g_004bdb18;
extern "C" unsigned long g_004bdb1c;
extern "C" unsigned long g_004bdb20;
extern "C" unsigned long g_004bdbcc;
extern "C" unsigned long g_004bdbd0;
extern "C" unsigned long g_004bdbd4;
extern "C" unsigned long g_004bdce8;
extern "C" unsigned long g_004bdcec;
extern "C" unsigned long g_004bdcf0;
extern "C" unsigned long g_004bdda8;
extern "C" unsigned long g_004bddac;
extern "C" unsigned long g_004bddb0;
extern "C" unsigned long g_004bddb4;
extern "C" unsigned long g_004bdedc;
extern "C" unsigned long g_004bdefc;
extern "C" unsigned long g_004be344;
extern "C" unsigned long g_004be348;
extern "C" unsigned long g_004be34c;
extern "C" unsigned long g_004be350;
extern "C" unsigned long g_004be354;
extern "C" unsigned long g_004be358;
bool BLEventDispatcher::hasEventListener(std::string * p1)
{
  undefined4 p4 = 0;

  int iVar1;
  int iVar2;
  
  iVar1 = (int)(intptr_t)((int)(intptr_t)(((cocos2d::CCDictionary *)this)->objectForKey(*(undefined4 *)(((int)this) + 4))));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = func_0079e55c(iVar1,*(undefined4 *)(g_004bda5c + 0x4bda4e),
                            *(undefined4 *)(g_004bda60 + 0x4bda50),0,p4);
  }
  return iVar2 != 0;
}

int BLEventDispatcher::dispatchEvent(BLEvent* p1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iStack_24;
  undefined1 auStack_1c [8];
  
  iVar7 = g_004bdb14;
  uVar6 = (undefined4)(*(undefined4 *)(((int)this) + 4));
  (**(code **)(*(int *)(intptr_t)p1 + 0x18))(auStack_1c);
  iVar7 = iVar7 + 0x4bda7e;
  iVar1 = (int)(intptr_t)(int)(intptr_t)((cocos2d::CCDictionary *)uVar6)->objectForKey(*(std::string *)(void *)auStack_1c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = func_0079e55c(iVar1,*(undefined4 *)(iVar7 + g_004bdb18),
                            *(undefined4 *)(iVar7 + g_004bdb1c),0);
  }
  func_0079e2bc(auStack_1c);
  if (iVar2 != 0) {
    iStack_24 = ((cocos2d::CCArray *)iVar2)->count();
    uVar8 = (undefined4)(0);
    while (uVar4 = ((cocos2d::CCArray *)iVar2)->count(), uVar8 < uVar4) {
      iVar1 = ((cocos2d::CCArray *)iVar2)->count();
      iVar9 = uVar8 + ((iStack_24 == iVar1) - 1);
      iVar3 = (int)(intptr_t)((cocos2d::CCArray *)iVar2)->objectAtIndex((unsigned int)iVar9);
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = func_0079e55c(iVar3,*(undefined4 *)(iVar7 + g_004bdb18),
                                *(undefined4 *)(iVar7 + g_004bdb20),0);
      }
      pcVar5 = *(code **)(iVar1 + 0x1c);
      iVar3 = (int)*(uint *)(iVar1 + 0x20) >> 1;
      if ((*(uint *)(iVar1 + 0x20) & 1) != 0) {
        pcVar5 = *(code **)(pcVar5 + *(int *)(*(int *)(iVar1 + 0x18) + iVar3));
      }
      (*pcVar5)(*(int *)(iVar1 + 0x18) + iVar3,p1);
      iStack_24 = ((cocos2d::CCArray *)iVar2)->count();
      uVar8 = (undefined4)(iVar9 + 1);
    }
  }
  return 0;
}

int BLEventDispatcher::removeEventListener(std::string * p1, BLEventListener* p2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  
  piVar8 = (int *)(void *)&p1;
  iVar2 = (int)(intptr_t)p2;
  iVar1 = (int)(intptr_t)((cocos2d::CCDictionary *)this)->objectForKey(*(undefined4 *)(((int)this) + 4));
  piVar5 = piVar8;
  if (iVar1 != 0) {
    piVar5 = *(int **)(g_004bdbcc + 0x4bdb3e);
    iVar2 = func_0079e55c(iVar1,piVar5,*(undefined4 *)(g_004bdbd0 + 0x4bdb42),0,p2,piVar8,
                            iVar2);
    if (iVar2 != 0) {
      iVar1 = ((cocos2d::CCArray *)this)->count();
      uVar6 = (undefined4)(0);
      while (uVar4 = ((cocos2d::CCArray *)iVar2)->count(), uVar6 < uVar4) {
        iVar3 = ((cocos2d::CCArray *)iVar2)->count();
        iVar7 = uVar6 + ((iVar1 == iVar3) - 1);
        iVar3 = (int)(intptr_t)((cocos2d::CCArray *)iVar2)->objectAtIndex((unsigned int)iVar7);
        iVar1 = 0;
        if (iVar3 != 0) {
          iVar1 = func_0079e55c(iVar3,piVar5,*(undefined4 *)(g_004bdbd4 + 0x4bdb7e),0);
        }
        if (((*(int *)(*(int *)(iVar1 + 0x14) + -0xc) == *(int *)(*(int *)(intptr_t)&p1 + -0xc)) &&
            (iVar3 = func_0079e60c(), iVar3 == 0)) && (*(int *)(iVar1 + 0x18) == (int)(intptr_t)p2)) {
          ((cocos2d::CCArray *)iVar2)->removeObject((cocos2d::CCObject*)iVar1, 1);
        }
        iVar1 = ((cocos2d::CCArray *)iVar2)->count();
        uVar6 = (undefined4)(iVar7 + 1);
      }
    }
  }
  return ghidra_CONCAT44(piVar5,p2);
}

void BLEventDispatcher::removeAllEventListener()
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 auStack_1c [8];
  
  iVar8 = g_004bdda8 + 0x4bdd0c;
  if (*(int *)(((int)this) + 4) != 0) {
    iVar5 = *(int *)(*(int *)(((int)this) + 4) + 0x14);
    iVar3 = iVar5;
    if (iVar5 == 0) goto LAB_004bdd90;
    do {
      iVar3 = iVar5;
      iVar5 = *(int *)(iVar5 + 0x110);
LAB_004bdd90:
      if (iVar3 == 0) break;
      uVar1 = (undefined4)(0);
      if (*(int *)(iVar3 + 0x104) != 0) {
        uVar1 = func_0079e55c(*(int *)(iVar3 + 0x104),*(undefined4 *)(iVar8 + g_004bddac),
                                *(undefined4 *)(iVar8 + g_004bddb0),0);
      }
      for (uVar6 = 0; uVar4 = ((cocos2d::CCArray *)uVar1)->count(), uVar6 < uVar4; uVar6 = uVar6 + 1)
      {
        iVar2 = (int)(intptr_t)((cocos2d::CCArray *)uVar1)->objectAtIndex((unsigned int)uVar6);
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = func_0079e55c(iVar2,*(undefined4 *)(iVar8 + g_004bddac),
                                  *(undefined4 *)(iVar8 + g_004bddb4),0);
        }
        uVar7 = (undefined4)(*(undefined4 *)(iVar3 + 0x18));
        func_0079e53c(auStack_1c,iVar3 + 0x14);
        ((BLEventListener *)uVar7)->removeDispatcher(*(std::string *)(void *)auStack_1c, (BLEventDispatcher*)((int)this));
        func_0079e2bc(auStack_1c);
      }
    } while (iVar5 != 0);
  }
  ((cocos2d::CCDictionary *)*(undefined4 *)(((int)this) + 4))->removeAllObjects();
  return;
}

void BLEventDispatcher::dispatchEvent(std::string * p1, void* p2)
{
  int *piVar1;
  code *pcVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_1c = (undefined4)(p1);
  uStack_18 = (undefined4)(p2);
  piVar1 = (int *)((BLEvent *)this)->create();
  pcVar2 = *(code **)(*piVar1 + 0x1c);
  func_0079e53c(&uStack_1c,p1);
  (*pcVar2)(piVar1,&uStack_1c);
  func_0079e2bc(&uStack_1c);
  (**(code **)(*piVar1 + 0x2c))(piVar1,0);
  (**(code **)(*piVar1 + 0x24))(piVar1,((int)this));
  (**(code **)(*(int *)this + 0x14))(((int)this),piVar1);
  ((cocos2d::CCObject *)piVar1)->autorelease();
  return;
}

BLEventDispatcher::BLEventDispatcher()
{
  int iVar1;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar1 = ((long long)::operator new((size_t)(0x1c)));
  0 /* ctorZero */;
  *(int *)((int)this + 4*(1)) = iVar1;
  return;
}

BLEventDispatcher::~BLEventDispatcher()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  BLEventDispatcher::removeAllEventListener();
  ((cocos2d::CCObject *)*(int *)((int)this + 4*(1)))->release();
  return;
}

int BLEventDispatcher::addEventListener(int p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;
  undefined4 p5 = 0;

  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  int *piStack_6c;
  int iStack_68;
  int iStack_5c;
  int iStack_58;
  undefined1 auStack_54 [8];
  int aiStack_4c [3];
  undefined1 auStack_40 [4];
  int aiStack_3c [3];
  undefined1 auStack_30 [4];
  int aiStack_2c [4];
  
  iVar1 = (int)(intptr_t)((cocos2d::CCDictionary *)this)->objectForKey(*(undefined4 *)(((int)this) + 4));
  if (iVar1 != 0) {
    iStack_68 = func_0079e55c(iVar1,*(undefined4 *)(g_004be344 + 0x4be1ba),
                                *(undefined4 *)(g_004be348 + 0x4be1bc),0);
    if (iStack_68 != 0) goto LAB_004be1e4;
  }
  iStack_68 = ((long long)::operator new((size_t)(0x18)));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)iStack_68)->autorelease();
  ((cocos2d::CCDictionary *)*(undefined4 *)(((int)this) + 4))->setObject((cocos2d::CCObject*)iStack_68, p1);
LAB_004be1e4:
  piVar2 = (int *)((long long)::operator new((size_t)(0x24)));
  (void)(((long long)::memset((void *)(piVar2),(int)(0),(size_t)(0x24))));
  0 /* ctorZero */;
  *piVar2 = *(int *)(g_004be34c + 0x4be202) + 8;
  piVar2[5] = *(int *)(g_004be350 + 0x4be20c) + 0xc;
  ((cocos2d::CCObject *)piVar2)->autorelease();
  func_0079e834(piVar2 + 5,p1);
  piVar2[7] = p4;
  piVar2[6] = p3;
  piVar2[8] = p5;
  iVar4 = *(int *)(p3 + 4);
  ; /* Rb_tree 桩化 */
  if (iVar1 == iVar4 + 4) {
    aiStack_4c[0] = 0;
    aiStack_4c[1] = 0;
    aiStack_4c[2] = 0;
  iStack_5c = (int)this;
    ((std::vector<BLEventDispatcher*, std::allocator<BLEventDispatcher*>> *)aiStack_4c)->push_back(*(BLEventDispatcher **)&iStack_5c);
    uVar5 = (undefined4)(*(undefined4 *)(p3 + 4));
    func_0079e53c(auStack_40,p1);
  ; /* vector 构造垃圾桩化 */
    func_0079e53c(auStack_30,auStack_40);
  ; /* vector 构造垃圾桩化 */
  ; /* Rb_tree 桩化 */
    if (aiStack_2c[0] != 0) {
      (void)(::operator delete((void *)(aiStack_2c[0])));
    }
    func_0079e2bc(auStack_30);
    if (aiStack_3c[0] != 0) {
      (void)(::operator delete((void *)(aiStack_3c[0])));
    }
    func_0079e2bc(auStack_40);
    if (aiStack_4c[0] != 0) {
      (void)(::operator delete((void *)(aiStack_4c[0])));
    }
  }
  else {
    piStack_6c = *(int **)(iVar1 + 0x14);
  ; /* LAB_ 跳表垃圾桩化 */
    while( true ) {
      piVar3 = *(int **)(iVar1 + 0x18);
      if (piVar3 <= piStack_6c) break;
      iVar4 = (int)*(int *)&(*piStack_6c);
      piStack_6c = piStack_6c + 1;
      if (iVar4 == ((int)this)) {
        cocos2d::CCMessageBox((char const*)puVar6, (char const*)"错误");
      }
    }
    iStack_58 = (int)this;
    if (piVar3 == *(int **)(iVar1 + 0x1c)) {
  ((std::vector<BLEventDispatcher *, std::allocator<BLEventDispatcher *>> *)((int)iVar1 + 0x14))->push_back(*(BLEventDispatcher **)&iStack_58);
    }
    else {
      if (piVar3 != (int *)0x0) {
  *piVar3 = (int)this;
      }
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 4;
    }
  }
  ((cocos2d::CCArray *)iStack_68)->addObject((cocos2d::CCObject*)piVar2);
                    /* WARNING: Could not recover jumptable at 0x004be308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return 0;
}

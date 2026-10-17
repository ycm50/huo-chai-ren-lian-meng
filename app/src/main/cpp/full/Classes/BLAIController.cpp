#include "BLAIController.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCString.h"
#include "CCDictionary.h"
#include "BLLeakUtils.h"
#include "BLMission.h"
#include "BLRole.h"
#include "BLRoleAttribute.h"
#include "BLRoleBase.h"
#include "DataManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6ac(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e864(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0043490c;
extern "C" unsigned long _DAT_00434910;
extern "C" unsigned long _DAT_00434914;
extern "C" unsigned long _DAT_00434918;
extern "C" unsigned long _DAT_00434a94;
extern "C" unsigned long _DAT_00434a98;
extern "C" unsigned long _DAT_00434a9c;
extern "C" unsigned long _DAT_00434aa0;
extern "C" unsigned long _DAT_00434aa4;
extern "C" unsigned long _DAT_00434aa8;
extern "C" unsigned long _DAT_00434aac;
extern "C" unsigned long _DAT_00434ab0;
extern "C" unsigned long _DAT_00434ab4;
extern "C" unsigned long _DAT_00434ab8;
extern "C" unsigned long _DAT_00434abc;
extern "C" unsigned long _DAT_00434d4c;
extern "C" unsigned long _DAT_00434d50;
extern "C" unsigned long _DAT_00434d54;
extern "C" unsigned long _DAT_00434de8;
extern "C" unsigned long _DAT_00434dec;
extern "C" unsigned long _DAT_00434df0;
extern "C" unsigned long _DAT_00434df4;
extern "C" unsigned long _DAT_00434df8;
extern "C" unsigned long _DAT_00434ff8;
extern "C" unsigned long _DAT_00434ffc;
extern "C" unsigned long _DAT_00435000;
extern "C" unsigned long _DAT_004350dc;
extern "C" unsigned long _DAT_004350e0;
extern "C" unsigned long _DAT_004351ac;
extern "C" unsigned long _DAT_004351b0;
extern "C" unsigned long _DAT_004351b4;
extern "C" unsigned long _DAT_004351b8;
extern "C" unsigned long _DAT_004353c4;
extern "C" unsigned long _DAT_004353c8;
extern "C" unsigned long _DAT_004353cc;
extern "C" unsigned long _DAT_004353d0;
extern "C" unsigned long _DAT_004353d4;
extern "C" unsigned long _DAT_004353d8;
extern "C" unsigned long _DAT_004353dc;
extern "C" unsigned long _DAT_004353e0;
extern "C" unsigned long _DAT_004353e4;
extern "C" unsigned long _DAT_004353e8;
extern "C" unsigned long _DAT_004354e0;
extern "C" unsigned long _DAT_004354e4;
extern "C" unsigned long _DAT_004354e8;
extern "C" unsigned long _DAT_004354ec;
extern "C" unsigned long _DAT_004354f0;
extern "C" unsigned long _DAT_004354f4;
extern "C" unsigned long _DAT_004354f8;
extern "C" unsigned long _DAT_00435920;
extern "C" unsigned long _DAT_00435924;
extern "C" unsigned long _DAT_00435928;
extern "C" unsigned long _DAT_0043592c;
extern "C" unsigned long _DAT_00435930;
extern "C" unsigned long _DAT_00435934;
extern "C" unsigned long _DAT_00435938;
extern "C" unsigned long _DAT_0043593c;
extern "C" unsigned long _DAT_00435940;
extern "C" unsigned long _DAT_00435944;
extern "C" unsigned long _DAT_00435eb0;
extern "C" unsigned long _DAT_00435eb4;
extern "C" unsigned long _DAT_00435eb8;
extern "C" unsigned long _DAT_00435ebc;
extern "C" unsigned long _DAT_00435ec0;
extern "C" unsigned long _DAT_00435ec4;
extern "C" unsigned long _DAT_00435ec8;
extern "C" unsigned long _DAT_00435f74;
extern "C" unsigned long _DAT_004362c4;
extern "C" unsigned long _DAT_004362c8;
extern "C" unsigned long _DAT_004362cc;
extern "C" unsigned long _DAT_004362d0;
extern "C" unsigned long _DAT_004362d4;
extern "C" unsigned long _DAT_004362d8;
extern "C" unsigned long _DAT_004362dc;
extern "C" unsigned long _DAT_004362e0;
extern "C" unsigned long _DAT_004362e4;
extern "C" unsigned long _DAT_004362e8;
extern "C" unsigned long _DAT_004362ec;
extern "C" unsigned long _DAT_004362f0;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_0043490c;
extern "C" unsigned long g_00434910;
extern "C" unsigned long g_00434914;
extern "C" unsigned long g_00434918;
extern "C" unsigned long g_00434a94;
extern "C" unsigned long g_00434a98;
extern "C" unsigned long g_00434a9c;
extern "C" unsigned long g_00434aa0;
extern "C" unsigned long g_00434aa4;
extern "C" unsigned long g_00434aa8;
extern "C" unsigned long g_00434aac;
extern "C" unsigned long g_00434ab0;
extern "C" unsigned long g_00434ab4;
extern "C" unsigned long g_00434ab8;
extern "C" unsigned long g_00434abc;
extern "C" unsigned long g_00434d4c;
extern "C" unsigned long g_00434d50;
extern "C" unsigned long g_00434d54;
extern "C" unsigned long g_00434de8;
extern "C" unsigned long g_00434dec;
extern "C" unsigned long g_00434df0;
extern "C" unsigned long g_00434df4;
extern "C" unsigned long g_00434df8;
extern "C" unsigned long g_00434ff8;
extern "C" unsigned long g_00434ffc;
extern "C" unsigned long g_00435000;
extern "C" unsigned long g_004350dc;
extern "C" unsigned long g_004350e0;
extern "C" unsigned long g_004351ac;
extern "C" unsigned long g_004351b0;
extern "C" unsigned long g_004351b4;
extern "C" unsigned long g_004351b8;
extern "C" unsigned long g_004353c4;
extern "C" unsigned long g_004353c8;
extern "C" unsigned long g_004353cc;
extern "C" unsigned long g_004353d0;
extern "C" unsigned long g_004353d4;
extern "C" unsigned long g_004353d8;
extern "C" unsigned long g_004353dc;
extern "C" unsigned long g_004353e0;
extern "C" unsigned long g_004353e4;
extern "C" unsigned long g_004353e8;
extern "C" unsigned long g_004354e0;
extern "C" unsigned long g_004354e4;
extern "C" unsigned long g_004354e8;
extern "C" unsigned long g_004354ec;
extern "C" unsigned long g_004354f0;
extern "C" unsigned long g_004354f4;
extern "C" unsigned long g_004354f8;
extern "C" unsigned long g_00435920;
extern "C" unsigned long g_00435924;
extern "C" unsigned long g_00435928;
extern "C" unsigned long g_0043592c;
extern "C" unsigned long g_00435930;
extern "C" unsigned long g_00435934;
extern "C" unsigned long g_00435938;
extern "C" unsigned long g_0043593c;
extern "C" unsigned long g_00435940;
extern "C" unsigned long g_00435944;
extern "C" unsigned long g_00435eb0;
extern "C" unsigned long g_00435eb4;
extern "C" unsigned long g_00435eb8;
extern "C" unsigned long g_00435ebc;
extern "C" unsigned long g_00435ec0;
extern "C" unsigned long g_00435ec4;
extern "C" unsigned long g_00435ec8;
extern "C" unsigned long g_00435f74;
extern "C" unsigned long g_004362c4;
extern "C" unsigned long g_004362c8;
extern "C" unsigned long g_004362cc;
extern "C" unsigned long g_004362d0;
extern "C" unsigned long g_004362d4;
extern "C" unsigned long g_004362d8;
extern "C" unsigned long g_004362dc;
extern "C" unsigned long g_004362e0;
extern "C" unsigned long g_004362e4;
extern "C" unsigned long g_004362e8;
extern "C" unsigned long g_004362ec;
extern "C" unsigned long g_004362f0;
bool BLAIController::getISRunAI() const
{
  return *(undefined1 *)(((int)this) + 0x14);
}

void BLAIController::setISRunAI(bool p1)
{
  *(undefined1 *)(((int)this) + 0x14) = p1;
  return;
}

BLRole* BLAIController::getRole() const
{
  return (BLRole*)(*(undefined4 *)(((int)this) + 0x18));
}

void BLAIController::setRole(BLRole* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}

int BLAIController::getCurrentSkill() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void BLAIController::setCurrentSkill(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

int BLAIController::getAIType() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void BLAIController::setAIType(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

bool BLAIController::getAutoGoRight() const
{
  return *(undefined1 *)(((int)this) + 0x6d);
}

void BLAIController::setAutoGoRight(bool p1)
{
  *(undefined1 *)(((int)this) + 0x6d) = p1;
  return;
}

bool BLAIController::init()
{
  return 1;
}



undefined4 BLAIController::randomNum(int p1)
{
  undefined4 uVar1;
  undefined4 extraout_r1;
  
  if (p1 < 1) {
    p1 = 1;
  }
  uVar1 = (undefined4)(func_0079e8a4());
  func_0079e8b4(uVar1,p1);
  return extraout_r1;
}

undefined4 BLAIController::isContinueAttack()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  (**(code **)(**(int **)(((int)this) + 0x18) + 0x3a8))();
  iVar1 = ((cocos2d::CCDictionary *)this)->count();
  uVar3 = (undefined4)(0);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(int **)(((int)this) + 0x18) + 0x3a8))();
    if (iVar1 != 0) {
      pcVar5 = *(char **)(iVar1 + 0x14);
      pcVar6 = pcVar5;
      if (pcVar5 != (char *)0x0) {
        pcVar6 = *(char **)(pcVar5 + 0x110);
      }
      while (pcVar5 != (char *)0x0) {
        if (*pcVar5 == '\0') {
          iVar4 = ((intptr_t)"Should not call this function for integer dictionary");
          iVar1 = 0 /* ctorZero */;
          if (iVar1 == 0) {
            cocos2d::CCLog((char const*)((intptr_t)"Assert failed: %s"), iVar4);
          }
          if (*pcVar5 == '\0') {
            func_0079e864(6,((intptr_t)"cocos2d-x assert"),((intptr_t)"%s function:%s line:%d"),
                            ((intptr_t)"/Users/hoolai/Documents/projects/lol_hulai/cocos2d/projects/DiabloLOL/proj.android_RongHe/../../../cocos2dx/cocoa/CCDictionary.h"),((intptr_t)"getStrKey"),99);
          }
        }
        func_0079e45c(auStack_1c,pcVar5,auStack_20);
        iVar1 = func_0079e4bc(auStack_1c,g_00434a94 + 0x43499c);
        if (iVar1 == 0) {
          iVar1 = ((BLRole *)*(undefined4 *)(((int)this) + 0x18))->attack();
          if ((iVar1 != 0) && (iVar1 = BLAIController::randomNum(100), 100 < iVar1)) {
LAB_00434a7c:
            (**(code **)(**(int **)(((int)this) + 0x18) + 0x3a8))();
            ((cocos2d::CCDictionary *)this)->removeAllObjects();
          }
        }
        else {
          iVar1 = func_0079e4bc(auStack_1c,g_00434ab0 + 0x434a16);
          if (iVar1 == 0) {
            uVar3 = (undefined4)(*(undefined4 *)(((int)this) + 0x18));
            uVar2 = (undefined4)(100);
          }
          else {
            iVar1 = func_0079e4bc(auStack_1c,g_00434ab4 + 0x434a2a);
            if (iVar1 == 0) {
              uVar3 = (undefined4)(*(undefined4 *)(((int)this) + 0x18));
              uVar2 = (undefined4)(0x65);
            }
            else {
              iVar1 = func_0079e4bc(auStack_1c,g_00434ab8 + 0x434a3e);
              if (iVar1 == 0) {
                uVar3 = (undefined4)(*(undefined4 *)(((int)this) + 0x18));
                uVar2 = (undefined4)(0x66);
              }
              else {
                iVar1 = func_0079e4bc(auStack_1c,g_00434abc + 0x434a52);
                if (iVar1 != 0) goto LAB_004349ac;
                uVar2 = (undefined4)(0x67);
                uVar3 = (undefined4)(*(undefined4 *)(((int)this) + 0x18));
              }
            }
          }
          iVar1 = ((BLRole *)uVar3)->skillAttack(uVar2);
          if ((iVar1 != 0) && (iVar1 = BLAIController::randomNum(100), 0x50 < iVar1))
          goto LAB_00434a7c;
        }
LAB_004349ac:
        func_0079e2bc(auStack_1c);
        pcVar5 = pcVar6;
        if (pcVar6 != (char *)0x0) {
          pcVar6 = *(char **)(pcVar6 + 0x110);
        }
      }
    }
    uVar3 = (undefined4)(1);
  }
  return uVar3;
}



void BLAIController::attackEnd()
{
  int iVar1;
  
  (**(code **)(**(int **)(((int)this) + 0x18) + 0x3a8))();
  iVar1 = ((cocos2d::CCDictionary *)this)->count();
  if (iVar1 == 0) {
    BLAIController::delayJudageAI();
  }
  return;
}

void BLAIController::skillEnd()
{
  int iVar1;
  
  (**(code **)(**(int **)(((int)this) + 0x18) + 0x3a8))();
  iVar1 = ((cocos2d::CCDictionary *)this)->count();
  if (iVar1 == 0) {
    BLAIController::delayJudageAI();
  }
  return;
}

void BLAIController::beAttackEnd()
{
  BLAIController::delayJudageAI();
  return;
}

void BLAIController::runOffEnd()
{
  BLAIController::delayJudageAI();
  return;
}

void BLAIController::patrolEnd()
{
  BLAIController::delayJudageAI();
  return;
}



void BLAIController::setAutoGo(bool p1)
{
  *(undefined1 *)(((int)this) + 0x6c) = p1;
  return;
}

BLAIController::~BLAIController()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  if (*(int *)((int)this + 4*(0x10)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x10)) = 0;
  }
  if (*(int *)((int)this + 4*(0x1a)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x1a)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLAIController"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(((int)this) + 0x19);
  ((std::vector<int, std::allocator<int>> *)((int)this) + 0xd)->~vector();
  ((std::vector<int, std::allocator<int>> *)((int)this) + 10)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLAIController::BLAIController()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_004351b0 + 0x43510c));
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  *(int *)((int)this + 4*(0xf)) = 0;
  *(int *)((int)this + 4*(0x19)) = iVar2 + 0xc;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x10)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(int *)((int)this + 4*(0x17)) = 1;
  iVar2 = (undefined4)(intptr_t)(g_004351b4);
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(0x11)) = 0;
  *(int *)((int)this + 4*(0x12)) = 0;
  *(undefined1 *)(((int)this) + 5) = 0;
  *(int *)((int)this + 4*(0x1a)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(0x18)) = 0;
  *(int *)((int)this + 4*(0x15)) = 0;
  *(int *)((int)this + 4*(0x16)) = iVar2;
  *(int *)((int)this + 4*(0x14)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLAIController"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(undefined1 *)(((int)this) + 0x1b) = 0;
  *(undefined1 *)((int)((int)this) + 0x6d) = 0;
  return;
}





void BLAIController::tick(float p1)
{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(((int)this) + 0x14) != '\0') {
    uVar1 = (undefined4)(func_0079e59c(*(undefined4 *)(((int)this) + 0x4c)));
    *(undefined4 *)(((int)this) + 0x4c) = uVar1;
    if ((*(char *)(((int)this) + 0x6c) == '\0') || (*(char *)(((int)this) + 0x6d) == '\0')) {
      iVar2 = *(int *)(((int)this) + 0x5c);
      if ((iVar2 == 1) || ((iVar2 == 4 || (iVar2 - 7U < 2)))) {
        iVar2 = BLAIController::isMove();
        if (iVar2 != 0) {
          return;
        }
        if ((*(int *)(((int)this) + 0x5c) == 1) || (*(int *)(((int)this) + 0x5c) == 8)) {
          BLAIController::judageAI();
          return;
        }
      }
      iVar2 = BLAIController::isContinueAttack();
      if (iVar2 == 0) {
        BLAIController::preAIStatus();
      }
    }
    else {
      ((BLRole *)*(undefined4 *)(((int)this) + 0x18))->goRight();
    }
  }
  return;
}

void BLAIController::startAI()
{
  *(undefined1 *)(((int)this) + 0x14) = 1;
  BLAIController::judageAI();
  ((cocos2d::CCNode *)*(undefined4 *)(((int)this) + 0x18))->stopActionByTag(0x7d);
  return;
}

// ===== 修复: 补回被误删的函数占位 (11) =====
void BLAIController::attack()
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  *(undefined4 *)(((int)this) + 0x60) = 0x68;
  *(undefined4 *)(((int)this) + 0x5c) = 4;
  cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%s1"), g_0043490c + 0x434872);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(&uStack_20,uVar1,auStack_1c);
  iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x18) + 0x248))());
  uVar1 = (undefined4)(*(undefined4 *)(iVar2 + 0x14));
  func_0079e45c(auStack_1c,uStack_20,auStack_24);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar1)->objectForKey((char const *)auStack_1c));
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)func_0079e55c(iVar2,*(undefined4 *)(g_00434914 + 0x4348b6),
                                    *(undefined4 *)(g_00434918 + 0x4348b8),0);
  }
  func_0079e2bc(auStack_1c);
  if (piVar3 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x18)))(piVar3);
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x78)))());
    uVar4 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x18) + 0x340))());
    uVar1 = (undefined4)(func_0079e4fc(uVar1,uVar4));
    *(undefined4 *)(((int)this) + 0x54) = uVar1;
  }
  func_0079e2bc(&uStack_20);
  return;
}

void BLAIController::stopAI()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int * BLAIController::nearestRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

undefined8 BLAIController::delayJudageAI()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 BLAIController::preAIStatus()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  if ((*(int *)(((int)this) + 0x68) == 0) ||
     (iVar1 = ((BLRoleAttribute *)(*(int *)(((int)this) + 0x68) + 0x1c4))->getLife(), iVar1 < 1)) {
    piVar6 = (int *)((BLAIController *)(((int)this)))->nearestRole();
    if (piVar6 != (int *)0x0) {
      iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x290)))(piVar6));
      iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x18) + 0x290))());
      if (iVar1 != iVar2) goto LAB_00434e96;
      *(undefined4 *)(((int)this) + 0x5c) = 8;
      goto LAB_00434e9a;
    }
LAB_00434eb8:
    uVar3 = (undefined4)(0);
  }
  else {
    piVar6 = *(int **)(((int)this) + 0x68);
LAB_00434e96:
    if (piVar6 == (int *)0x0) goto LAB_00434eb8;
LAB_00434e9a:
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x60)))(piVar6));
    uVar4 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x18) + 0x60))());
    uVar3 = (undefined4)(func_0079e57c(uVar3,uVar4));
  }
  if (*(int *)(((int)this) + 0x5c) != 4) {
    if ((*(int *)(((int)this) + 0x5c) == 7) &&
       ((iVar1 = (**(code **)(**(int **)(((int)this) + 0x18) + 0x2b0))(), iVar1 == 4 ||
        (iVar1 = (**(code **)(**(int **)(((int)this) + 0x18) + 0x2b0))(), iVar1 == 3)))) {
      ((BLAIController *)(((int)this)))->delayJudageAI();
    }
    goto LAB_00434ff6;
  }
  iVar1 = (undefined4)(intptr_t)(func_0079e4ec(uVar3,g_00434ff8));
  piVar6 = *(int **)(((int)this) + 0x18);
  if (iVar1 == 0) {
    iVar1 = (undefined4)(intptr_t)(func_0079e7b4(uVar3,g_00434ffc));
    if (iVar1 != 0) {
      pcVar5 = *(code **)(*piVar6 + 0x25c);
      uVar4 = (undefined4)(1);
      goto LAB_00434ef8;
    }
  }
  else {
    uVar4 = (undefined4)(0);
    pcVar5 = *(code **)(*piVar6 + 0x25c);
LAB_00434ef8:
    (*pcVar5)(piVar6,uVar4,0);
  }
  piVar6 = *(int **)(((int)this) + 0x18);
  if (*(int *)(((int)this) + 0x60) == 0x68) {
    iVar1 = (undefined4)(intptr_t)(((BLRole *)(piVar6))->attack());
    if (iVar1 == 0) goto LAB_00434ff6;
    uVar3 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x18) + 0x3a8))());
    func_0079e45c(&uStack_1c,g_00435000 + 0x434f24,&iStack_20);
    iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar3))->objectForKey(*(std::string const*)&uStack_1c));
    func_0079e2bc(&uStack_1c);
    if ((iVar1 != 0) && (iVar1 = ((BLAIController *)(((int)this)))->randomNum(100), 100 < iVar1)) {
      pcVar5 = *(code **)(**(int **)(((int)this) + 0x18) + 0x3a8);
LAB_00434f4e:
      (*pcVar5)();
      ((cocos2d::CCDictionary *)this)->removeAllObjects();
    }
  }
  else {
    iVar1 = (undefined4)(intptr_t)(func_0079e4ec(uVar3,g_00434ff8));
    if (iVar1 == 0) {
      iVar1 = (undefined4)(intptr_t)(func_0079e7b4(uVar3,g_00434ffc));
      if (iVar1 != 0) {
        pcVar5 = *(code **)(*piVar6 + 0x25c);
        uVar3 = (undefined4)(1);
        goto LAB_00434f94;
      }
    }
    else {
      uVar3 = (undefined4)(0);
      pcVar5 = *(code **)(*piVar6 + 0x25c);
LAB_00434f94:
      (*pcVar5)(piVar6,uVar3,0);
    }
    iVar1 = (undefined4)(intptr_t)(((BLRole *)(*(undefined4 *)(((int)this) + 0x18)))->skillAttack(*(undefined4 *)(((int)this) + 0x60)));
    if (iVar1 == 0) goto LAB_00434ff6;
    iVar1 = (undefined4)(intptr_t)(((BLAIController *)(((int)this)))->randomNum(100));
    if (0x50 < iVar1) {
      pcVar5 = *(code **)(**(int **)(((int)this) + 0x18) + 0x3a8);
      goto LAB_00434f4e;
    }
  }
  *(undefined4 *)(((int)this) + 0x5c) = 7;
  *(undefined4 *)(((int)this) + 0x4c) = 0;
LAB_00434ff6:
  return ghidra_CONCAT44(uStack_1c,iStack_20);
}

void BLAIController::beAttack()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLAIController::getSkill()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLAIController::skill()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLAIController::judageAI()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLAIController::isMove()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLAIController::initWithID(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

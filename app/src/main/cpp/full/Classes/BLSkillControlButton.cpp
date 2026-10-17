#include "BLSkillControlButton.h"
#include "CCDictionary.h"
#include "CCProgressTimer.h"
#include "CCObject.h"
#include "BLRole.h"
#include "CCString.h"
#include "BLControlButton.h"
#include "BLLeakUtils.h"
#include "BLRoleAttribute.h"
#include "DataCacheManager.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005226bc;
extern "C" unsigned long UNK_005226f6;
extern "C" unsigned long UNK_0052273c;
extern "C" unsigned long UNK_00522764;
extern "C" unsigned long UNK_0052277c;
extern "C" unsigned long UNK_005227b2;
extern "C" unsigned long UNK_00522850;
extern "C" unsigned long UNK_00522862;
extern "C" unsigned long UNK_00522884;
extern "C" unsigned long UNK_00522890;
extern "C" unsigned long UNK_0052289c;
extern "C" unsigned long UNK_005228a8;
extern "C" unsigned long UNK_005228b6;
extern "C" unsigned long UNK_005228b8;
extern "C" unsigned long UNK_0052293e;
extern "C" unsigned long UNK_00522a9c;
extern "C" unsigned long UNK_00522b44;
extern "C" unsigned long UNK_00522bc8;
extern "C" unsigned long UNK_00522bca;
extern "C" unsigned long UNK_00522bda;
extern "C" unsigned long _DAT_00522a70;
extern "C" unsigned long _DAT_00522a74;
extern "C" unsigned long _DAT_00522a78;
extern "C" unsigned long _DAT_00522a7c;
extern "C" unsigned long _UNK_00522728;
extern "C" unsigned long _UNK_0052272c;
extern "C" unsigned long _UNK_00522740;
extern "C" unsigned long _UNK_00522768;
extern "C" unsigned long _UNK_005227dc;
extern "C" unsigned long _UNK_005227e0;
extern "C" unsigned long _UNK_00522964;
extern "C" unsigned long _UNK_00522968;
extern "C" unsigned long _UNK_0052296c;
extern "C" unsigned long _UNK_00522970;
extern "C" unsigned long _UNK_00522974;
extern "C" unsigned long _UNK_00522978;
extern "C" unsigned long _UNK_0052297c;
extern "C" unsigned long _UNK_00522980;
extern "C" unsigned long _UNK_00522984;
extern "C" unsigned long _UNK_00522988;
extern "C" unsigned long _UNK_00522c58;
extern "C" unsigned long _UNK_00522c5c;
extern "C" unsigned long _UNK_00522c60;
extern "C" unsigned long _UNK_00522c64;
extern "C" unsigned long _UNK_00522c68;
extern "C" unsigned long _UNK_00522c6c;
extern "C" unsigned long g_005226bc;
extern "C" unsigned long g_005226f6;
extern "C" unsigned long g_00522728;
extern "C" unsigned long g_0052272c;
extern "C" unsigned long g_0052273c;
extern "C" unsigned long g_00522740;
extern "C" unsigned long g_00522764;
extern "C" unsigned long g_00522768;
extern "C" unsigned long g_0052277c;
extern "C" unsigned long g_005227b2;
extern "C" unsigned long g_005227dc;
extern "C" unsigned long g_005227e0;
extern "C" unsigned long g_00522850;
extern "C" unsigned long g_00522862;
extern "C" unsigned long g_00522884;
extern "C" unsigned long g_00522890;
extern "C" unsigned long g_0052289c;
extern "C" unsigned long g_005228a8;
extern "C" unsigned long g_005228b6;
extern "C" unsigned long g_005228b8;
extern "C" unsigned long g_0052293e;
extern "C" unsigned long g_00522964;
extern "C" unsigned long g_00522968;
extern "C" unsigned long g_0052296c;
extern "C" unsigned long g_00522970;
extern "C" unsigned long g_00522974;
extern "C" unsigned long g_00522978;
extern "C" unsigned long g_0052297c;
extern "C" unsigned long g_00522980;
extern "C" unsigned long g_00522984;
extern "C" unsigned long g_00522988;
extern "C" unsigned long g_00522a70;
extern "C" unsigned long g_00522a74;
extern "C" unsigned long g_00522a78;
extern "C" unsigned long g_00522a7c;
extern "C" unsigned long g_00522a9c;
extern "C" unsigned long g_00522b44;
extern "C" unsigned long g_00522bc8;
extern "C" unsigned long g_00522bca;
extern "C" unsigned long g_00522bda;
extern "C" unsigned long g_00522c58;
extern "C" unsigned long g_00522c5c;
extern "C" unsigned long g_00522c60;
extern "C" unsigned long g_00522c64;
extern "C" unsigned long g_00522c68;
extern "C" unsigned long g_00522c6c;
int * BLSkillControlButton::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x1a0)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

BLSkillControlButton::~BLSkillControlButton()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005226bc + g_00522728);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x33c;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x36c;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x378;
  *(int *)((int)this + 4*(0x42)) = iVar2 + 0x388;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005226f6 + g_0052272c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  BLControlButton::~BLControlButton();
  return;
}

BLSkillControlButton::BLSkillControlButton()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0052277c + g_005227dc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x33c;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x36c;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x378;
  *(int *)((int)this + 4*(0x42)) = iVar2 + 0x388;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005227b2 + g_005227e0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLSkillControlButton::setPercentage(int p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x198));
  uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p1)))));
  ((cocos2d::CCProgressTimer *)uVar2)->setPercentage(uVar1);
  return;
}




void BLSkillControlButton::onEnter()
{
  BLControlButton::onEnter();
  return;
}

void BLSkillControlButton::onExit()
{
  BLControlButton::onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLSkillControlButton::tick(float p1, BLRole* p2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined4 uStack_30;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x67)) + 0x90))((int *)*(int *)((int)this + 4*(0x67)),0);
  if (((int)(intptr_t)(int)(intptr_t)p2 == 0) || (iVar1 = ((BLRoleAttribute *)(p2 + 0x71))->getLife(), iVar1 < 1)
     ) {
    uStack_30 = (undefined4)(0);
    goto code_r0x0052282c;
  }
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)this + 0x118))(((int)this)));
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_00522850 + (intptr_t)(g_00522964)),auStack_20);
  if (iVar1 == 0x65) {
    puVar5 = (unsigned char *)((char *)&g_00522862 + (intptr_t)(g_00522968));
code_r0x00522860:
    func_0079e2dc(auStack_1c,puVar5);
  }
  else {
    if (iVar1 == 0x66) {
      puVar5 = (unsigned char *)((char *)&g_00522884 + (intptr_t)(g_0052296c));
      goto code_r0x00522860;
    }
    if (iVar1 == 0x67) {
      puVar5 = (unsigned char *)((char *)&g_00522890 + (intptr_t)(g_00522970));
      goto code_r0x00522860;
    }
    if (iVar1 == 0x69) {
      puVar5 = (unsigned char *)((char *)&g_0052289c + (intptr_t)(g_00522974));
      goto code_r0x00522860;
    }
    if (iVar1 == 0x6a) {
      puVar5 = (unsigned char *)((char *)&g_005228a8 + (intptr_t)(g_00522978));
      goto code_r0x00522860;
    }
  }
  uVar2 = (undefined4)((**(code **)(*(int *)(p2) + (0x3b0)))(p2));
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar2))->objectForKey((char const *)auStack_1c));
  if ((iVar1 == 0) ||
     (iVar1 = func_0079e55c(iVar1,*(undefined4 *)((unsigned char *)((char *)&g_005228b6 + (intptr_t)(g_0052297c))),
                              *(undefined4 *)((unsigned char *)((char *)&g_005228b8 + (intptr_t)(g_00522980))),0), iVar1 == 0)) {
    uStack_30 = (undefined4)(0);
  }
  else {
    uVar7 = (undefined4)(*(undefined4 *)(iVar1 + 0x14));
    uVar3 = (undefined4)(func_0079e57c(uVar7,*(undefined4 *)(iVar1 + 0x18)));
    iVar4 = (undefined4)(intptr_t)(func_0079e4ec(uVar3,0));
    uVar2 = (undefined4)(uVar3);
    if (iVar4 == 0) {
      uVar2 = (undefined4)(0);
    }
    uVar2 = (undefined4)(func_0079e4dc(uVar2,uVar7));
    uStack_30 = (undefined4)(func_0079e4fc(uVar2,g_00522984));
    iVar4 = (undefined4)(intptr_t)(func_0079e4ec(uVar3,0));
    if (iVar4 != 0) {
      piVar8 = (int *)*(int *)((int)this + 4*(0x67));
      pcVar6 = *(code **)(*piVar8 + 0x234);
      uVar9 = (undefined4)(intptr_t)(func_0079e62c(uVar3));
      uVar2 = (undefined4)((undefined4)((ulonglong)uVar9 >> 0x20));
      cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0052293e + (intptr_t)(g_00522988)), uVar2, (int)uVar9, uVar2);
      uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      (*pcVar6)(piVar8,uVar2);
    }
    piVar8 = (int *)*(int *)((int)this + 4*(0x67));
    iVar4 = (int)*(int *)&(*piVar8);
    uVar2 = (undefined4)(func_0079e57c(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x18)));
    iVar1 = (undefined4)(intptr_t)(func_0079e4ec(uVar2,0));
    (**(code **)(iVar4 + 0x90))(piVar8,iVar1 != 0);
  }
  func_0079e2bc(auStack_1c);
code_r0x0052282c:
  ((cocos2d::CCProgressTimer *)(*(int *)((int)this + 4*(0x66))))->setPercentage(uStack_30);
  return;
}

void BLSkillControlButton::initWithRoleAndSkillName(std::string p1, std::string * p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLSkillControlButton::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

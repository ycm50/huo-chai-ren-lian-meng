#include "BLTreasureEffectPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCInteger.h"
#include "CCDirector.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLTreasureEffectView.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006a6a9e;
extern "C" unsigned long UNK_006a6ab6;
extern "C" unsigned long UNK_006a6bc4;
extern "C" unsigned long UNK_006a6bfc;
extern "C" unsigned long UNK_006a6c20;
extern "C" unsigned long UNK_006a6c22;
extern "C" unsigned long UNK_006a6c3a;
extern "C" unsigned long UNK_006a6c3e;
extern "C" unsigned long UNK_006a6d08;
extern "C" unsigned long UNK_006a6d22;
extern "C" unsigned long UNK_006a6dbc;
extern "C" unsigned long UNK_006a6de4;
extern "C" unsigned long UNK_006a6e22;
extern "C" unsigned long UNK_006a6e3c;
extern "C" unsigned long UNK_006a6eb4;
extern "C" unsigned long UNK_006a6f36;
extern "C" unsigned long UNK_006a6f38;
extern "C" unsigned long UNK_006a6f66;
extern "C" unsigned long UNK_006a6ff0;
extern "C" unsigned long UNK_006a6ff2;
extern "C" unsigned long UNK_006a7020;
extern "C" unsigned long _UNK_006a6abc;
extern "C" unsigned long _UNK_006a6ac0;
extern "C" unsigned long _UNK_006a6ca8;
extern "C" unsigned long _UNK_006a6cac;
extern "C" unsigned long _UNK_006a6cb0;
extern "C" unsigned long _UNK_006a6cb4;
extern "C" unsigned long _UNK_006a6cb8;
extern "C" unsigned long _UNK_006a6cbc;
extern "C" unsigned long _UNK_006a6da8;
extern "C" unsigned long _UNK_006a6dac;
extern "C" unsigned long _UNK_006a6dc0;
extern "C" unsigned long _UNK_006a6de8;
extern "C" unsigned long _UNK_006a6efc;
extern "C" unsigned long _UNK_006a6f00;
extern "C" unsigned long _UNK_006a6f04;
extern "C" unsigned long _UNK_006a6f08;
extern "C" unsigned long _UNK_006a6fbc;
extern "C" unsigned long _UNK_006a6fc0;
extern "C" unsigned long _UNK_006a6fc4;
extern "C" unsigned long _UNK_006a7074;
extern "C" unsigned long _UNK_006a7078;
extern "C" unsigned long _UNK_006a707c;
extern "C" unsigned long g_006a6a9e;
extern "C" unsigned long g_006a6ab6;
extern "C" unsigned long g_006a6abc;
extern "C" unsigned long g_006a6ac0;
extern "C" unsigned long g_006a6bc4;
extern "C" unsigned long g_006a6bfc;
extern "C" unsigned long g_006a6c20;
extern "C" unsigned long g_006a6c22;
extern "C" unsigned long g_006a6c3a;
extern "C" unsigned long g_006a6c3e;
extern "C" unsigned long g_006a6ca8;
extern "C" unsigned long g_006a6cac;
extern "C" unsigned long g_006a6cb0;
extern "C" unsigned long g_006a6cb4;
extern "C" unsigned long g_006a6cb8;
extern "C" unsigned long g_006a6cbc;
extern "C" unsigned long g_006a6d08;
extern "C" unsigned long g_006a6d22;
extern "C" unsigned long g_006a6da8;
extern "C" unsigned long g_006a6dac;
extern "C" unsigned long g_006a6dbc;
extern "C" unsigned long g_006a6dc0;
extern "C" unsigned long g_006a6de4;
extern "C" unsigned long g_006a6de8;
extern "C" unsigned long g_006a6e22;
extern "C" unsigned long g_006a6e3c;
extern "C" unsigned long g_006a6eb4;
extern "C" unsigned long g_006a6efc;
extern "C" unsigned long g_006a6f00;
extern "C" unsigned long g_006a6f04;
extern "C" unsigned long g_006a6f08;
extern "C" unsigned long g_006a6f36;
extern "C" unsigned long g_006a6f38;
extern "C" unsigned long g_006a6f66;
extern "C" unsigned long g_006a6fbc;
extern "C" unsigned long g_006a6fc0;
extern "C" unsigned long g_006a6fc4;
extern "C" unsigned long g_006a6ff0;
extern "C" unsigned long g_006a6ff2;
extern "C" unsigned long g_006a7020;
extern "C" unsigned long g_006a7074;
extern "C" unsigned long g_006a7078;
extern "C" unsigned long g_006a707c;
bool BLTreasureEffectPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}


void BLTreasureEffectPresenter::onEnter()
{
  return;
}

void BLTreasureEffectPresenter::onExit()
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

BLTreasureEffectPresenter::BLTreasureEffectPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLTreasureEffectPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x30))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

BLTreasureEffectPresenter::~BLTreasureEffectPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void BLTreasureEffectPresenter::onDiceAnimateEnd()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(**(int **)(((int)this) + 0x18) + 0x90);
  (*pcVar4)(*(int **)(((int)this) + 0x18),0,p3,pcVar4,p4);
  if (*(char *)(((int)this) + 0x2c) == '\0') {
    uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    uVar2 = (undefined4)(cocos2d::CCInteger::create(*(undefined4 *)(((int)this) + 0x28)));
    puVar3 = (unsigned char *)((char *)&g_006a6ab6 + (intptr_t)(g_006a6ac0));
  }
  else {
    uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    uVar2 = (undefined4)(cocos2d::CCInteger::create(*(undefined4 *)(((int)this) + 0x28)));
    puVar3 = (unsigned char *)((char *)&g_006a6a9e + (intptr_t)(g_006a6abc));
  }
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)puVar3, (cocos2d::CCObject*)uVar2);
  return;
}


void BLTreasureEffectPresenter::startDiceAnimate(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureEffectPresenter::onReceiveDiceMsg(cocos2d::CCObject* p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined1 auStack_14 [4];
  
  *(undefined1 *)(((int)this) + 0x2c) = 0;
  (**(code **)(**(int **)(((int)this) + 0x18) + 0x90))(*(int **)(((int)this) + 0x18),1);
  if ((((int)(intptr_t)(int)(intptr_t)p1 != 0) &&
      (iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_006a6f36 + (intptr_t)(g_006a6fbc))),
                               *(undefined4 *)((unsigned char *)((char *)&g_006a6f38 + (intptr_t)(g_006a6fc0))),0), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x14) - 1U < 6)) {
    *(int *)(((int)this) + 0x28) = *(int *)(iVar1 + 0x14);
    BLTreasureEffectPresenter::startDiceAnimate(((int)this));
    return;
  }
  uVar2 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_006a6f66 + (intptr_t)(g_006a6fc4)),auStack_24);
  ((BLLanguage *)(uVar2))->getString((std::string)(char*)auStack_1c);
  func_0079e45c(auStack_14,uStack_18,auStack_20);
  0 /* ctorZero */;
  func_0079e2bc(auStack_14);
  func_0079e2bc(&uStack_18);
  func_0079e2bc(auStack_1c);
  return;
}

void BLTreasureEffectPresenter::onReceiveSpecialDiceMsg(cocos2d::CCObject* p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined1 auStack_14 [4];
  
  *(undefined1 *)(((int)this) + 0x2c) = 1;
  (**(code **)(**(int **)(((int)this) + 0x18) + 0x90))();
  if ((((int)(intptr_t)(int)(intptr_t)p1 != 0) &&
      (iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_006a6ff0 + (intptr_t)(g_006a7074))),
                               *(undefined4 *)((unsigned char *)((char *)&g_006a6ff2 + (intptr_t)(g_006a7078))),0), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x14) - 1U < 6)) {
    *(int *)(((int)this) + 0x28) = *(int *)(iVar1 + 0x14);
    BLTreasureEffectPresenter::startDiceAnimate(((int)this));
    return;
  }
  uVar2 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_006a7020 + (intptr_t)(g_006a707c)),auStack_24);
  ((BLLanguage *)(uVar2))->getString((std::string)(char*)auStack_1c);
  func_0079e45c(auStack_14,uStack_18,auStack_20);
  0 /* ctorZero */;
  func_0079e2bc(auStack_14);
  func_0079e2bc(&uStack_18);
  func_0079e2bc(auStack_1c);
  return;
}

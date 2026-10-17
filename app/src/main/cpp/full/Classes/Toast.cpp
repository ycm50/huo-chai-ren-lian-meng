#include "Toast.h"
#include "CCAction.h"
#include "CCActionInstant.h"
#include "CCActionInterval.h"
#include "CCNotificationCenter.h"
#include "CCDictionary.h"
#include "CCInvocation.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "CCGeometry.h"
#include "CombatNode.h"
#include "ExpNode.h"
#include "SystemRemindBar.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
static Toast *s_singleton_1 = 0;   /* SINGLETON_BATCH(R73): 原为裸地址单例 */

using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long func_0079e55c(...);
extern "C" unsigned long g_004e11b6;
extern "C" unsigned long g_004e11d4;
extern "C" unsigned long g_004e11b8;
extern "C" unsigned long g_004e11d0;
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079ec24(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004e0c96;
extern "C" unsigned long UNK_004e0cb2;
extern "C" unsigned long UNK_004e0db2;
extern "C" unsigned long UNK_004e0dce;
extern "C" unsigned long UNK_004e0dea;
extern "C" unsigned long UNK_004e0f8e;
extern "C" unsigned long UNK_004e0ffe;
extern "C" unsigned long UNK_004e1026;
extern "C" unsigned long UNK_004e107a;
extern "C" unsigned long UNK_004e1132;
extern "C" unsigned long UNK_004e1498;
extern "C" unsigned long UNK_004e16a2;
extern "C" unsigned long _DAT_004e1254;
extern "C" unsigned long _DAT_004e131c;
extern "C" unsigned long _DAT_004e1320;
extern "C" unsigned long _DAT_004e1324;
extern "C" unsigned long _DAT_004e13e4;
extern "C" unsigned long _DAT_004e160c;
extern "C" unsigned long _DAT_004e1610;
extern "C" unsigned long _DAT_004e1614;
extern "C" unsigned long _DAT_004e1618;
extern "C" unsigned long _DAT_004e161c;
extern "C" unsigned long _DAT_004e1658;
extern "C" unsigned long _DAT_004e165c;
extern "C" unsigned long _DAT_004e1660;
extern "C" unsigned long _UNK_004e0d80;
extern "C" unsigned long _UNK_004e0d84;
extern "C" unsigned long _UNK_004e0d88;
extern "C" unsigned long _UNK_004e0d8c;
extern "C" unsigned long _UNK_004e0ecc;
extern "C" unsigned long _UNK_004e0ed0;
extern "C" unsigned long _UNK_004e0ed4;
extern "C" unsigned long _UNK_004e0ed8;
extern "C" unsigned long _UNK_004e0edc;
extern "C" unsigned long _UNK_004e0ee0;
extern "C" unsigned long _UNK_004e10b4;
extern "C" unsigned long _UNK_004e10b8;
extern "C" unsigned long _UNK_004e10bc;
extern "C" unsigned long _UNK_004e10c0;
extern "C" unsigned long _UNK_004e10c4;
extern "C" unsigned long _UNK_004e10c8;
extern "C" unsigned long _UNK_004e10cc;
extern "C" unsigned long _UNK_004e1170;
extern "C" unsigned long _UNK_004e14cc;
extern "C" unsigned long _UNK_004e14d0;
extern "C" unsigned long _UNK_004e174c;
extern "C" unsigned long g_004e0c96;
extern "C" unsigned long g_004e0cb2;
extern "C" unsigned long g_004e0d80;
extern "C" unsigned long g_004e0d84;
extern "C" unsigned long g_004e0d88;
extern "C" unsigned long g_004e0d8c;
extern "C" unsigned long g_004e0db2;
extern "C" unsigned long g_004e0dce;
extern "C" unsigned long g_004e0dea;
extern "C" unsigned long g_004e0ecc;
extern "C" unsigned long g_004e0ed0;
extern "C" unsigned long g_004e0ed4;
extern "C" unsigned long g_004e0ed8;
extern "C" unsigned long g_004e0edc;
extern "C" unsigned long g_004e0ee0;
extern "C" unsigned long g_004e0f8e;
extern "C" unsigned long g_004e0ffe;
extern "C" unsigned long g_004e1026;
extern "C" unsigned long g_004e107a;
extern "C" unsigned long g_004e10b4;
extern "C" unsigned long g_004e10b8;
extern "C" unsigned long g_004e10bc;
extern "C" unsigned long g_004e10c0;
extern "C" unsigned long g_004e10c4;
extern "C" unsigned long g_004e10c8;
extern "C" unsigned long g_004e10cc;
extern "C" unsigned long g_004e1132;
extern "C" unsigned long g_004e1170;
extern "C" unsigned long g_004e1254;
extern "C" unsigned long g_004e131c;
extern "C" unsigned long g_004e1320;
extern "C" unsigned long g_004e1324;
extern "C" unsigned long g_004e13e4;
extern "C" unsigned long g_004e1498;
extern "C" unsigned long g_004e14cc;
extern "C" unsigned long g_004e14d0;
extern "C" unsigned long g_004e160c;
extern "C" unsigned long g_004e1610;
extern "C" unsigned long g_004e1614;
extern "C" unsigned long g_004e1618;
extern "C" unsigned long g_004e161c;
extern "C" unsigned long g_004e1658;
extern "C" unsigned long g_004e165c;
extern "C" unsigned long g_004e1660;
extern "C" unsigned long g_004e16a2;
extern "C" unsigned long g_004e174c;
bool Toast::getISStopAction() const
{
  return *(undefined1 *)(((int)this) + 0x14);
}

void Toast::setISStopAction(bool p1)
{
  *(undefined1 *)(((int)this) + 0x14) = p1;
  return;
}

bool Toast::getIsNotPopToList() const
{
  return *(undefined1 *)(((int)this) + 0x15);
}

void Toast::setIsNotPopToList(bool p1)
{
  *(undefined1 *)(((int)this) + 0x15) = p1;
  return;
}

cocos2d::CCArray* Toast::getRichText() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x18));
}

cocos2d::CCArray* Toast::getTalkAnns() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x1c));
}

void Toast::setTalkAnns(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCNode* Toast::getRootNode() const
{
  return (cocos2d::CCNode*)(*(undefined4 *)(((int)this) + 0x20));
}

void Toast::setRootNode(cocos2d::CCNode* p1)
{
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  return;
}

void Toast::setRichText(cocos2d::CCArray* p1)
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




void Toast::resetAllStatus()
{
  *(undefined4 *)(((int)this) + 0x24) = 0;
  *(undefined4 *)(((int)this) + 0x28) = 0;
  *(undefined4 *)(((int)this) + 0x2c) = 0;
  *(undefined4 *)(((int)this) + 0x38) = 0;
  *(undefined4 *)(((int)this) + 0x30) = 0;
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x5c))->removeAllObjects();
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x60))->removeAllObjects();
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 100))->removeAllObjects();
  return;
}


void Toast::nextToast(cocos2d::CCObject* p1)
{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(((int)this) + 0x40);
  func_0079ec24(iVar2);
  func_0079e2bc(iVar2 + 8);
  (void)(::operator delete((void *)(iVar2)));
  iVar2 = 0;
  for (piVar1 = *(int **)(((int)this) + 0x40); piVar1 != (int *)(((int)this) + 0x40);
      piVar1 = (int *)*piVar1) {
    iVar2 = iVar2 + 1;
  }
  if (iVar2 == 0) {
    *(undefined4 *)(((int)this) + 0x24) = 0;
  }
  else {
    Toast::startToast();
  }
  return;
}

void Toast::showVirtualItemData(int p1, int p2)
{
  return;
}

void Toast::startVirtualItemData()
{
  return;
}

void Toast::showVirtualItemData1(int p1, int p2)
{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(((int)this) + 0x15) != '\0') {
    piVar1 = (int *)((long long)::operator new((size_t)(0x20)));
    0 /* ctorZero */;
    iVar2 = *(int *)(&g_004e1132 + g_004e1170);
    piVar1[6] = 1;
    *piVar1 = iVar2 + 8;
    piVar1[5] = 0;
    *(undefined1 *)(piVar1 + 7) = 0;
    ((cocos2d::CCObject *)piVar1)->autorelease();
    piVar1[6] = p2;
    piVar1[5] = p1;
    ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x60))->addObject((cocos2d::CCObject*)piVar1);
  }
  if ((*(int *)(((int)this) + 0x2c) == 0) && (*(char *)(((int)this) + 0x14) == '\0')) {
    Toast::startVirtualItemData();
  }
  return;
}

void Toast::nextVirtualItemData()
{
  int iVar1;
  
  iVar1 = ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x60))->count();
  if (iVar1 != 0) {
    ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x60))->removeObjectAtIndex(0, 1);
    iVar1 = ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x60))->count();
    if (iVar1 != 0) {
      Toast::startVirtualItemData();
      return;
    }
  }
  *(undefined4 *)(((int)this) + 0x2c) = 0;
  return;
}



void Toast::nextNewRichText(cocos2d::CCObject* p1)
{
  int iVar1;
  
  ((cocos2d::CCObject *)**(undefined4 **)(((int)this) + 0x50))->release();
  iVar1 = *(int *)(((int)this) + 0x50) + 4;
  if (iVar1 != *(int *)(((int)this) + 0x54)) {
    if (*(int *)(((int)this) + 0x54) - iVar1 >> 2 != 0) {
      func_0079e68c();
    }
  }
  iVar1 = *(int *)(((int)this) + 0x54) + -4;
  *(int *)(((int)this) + 0x54) = iVar1;
  if (iVar1 - *(int *)(((int)this) + 0x50) >> 2 == 0) {
    *(undefined4 *)(((int)this) + 0x3c) = 0;
  }
  else {
    Toast::startRichText();
  }
  return;
}

void Toast::richTextEnd(cocos2d::CCObject* p1)
{
  return;
}

void Toast::showRichText(cocos2d::CCArray* p1)
{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 auStack_28 [4];
  int iStack_24;
  undefined1 auStack_20 [12];
  
  if (p1 != 0) {
    (**(code **)(*(int *)this + 0x2c))();
    if ((char)*(int *)((int)this + 4*(5)) == '\0') {
      uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
      { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar1)->getWinSize(); __builtin_memcpy(&auStack_28, &_ws.width, 4); iStack_24 = hw_fbits(_ws.height); }
      piVar2 = (int *)((SystemRemindBar *)this)->create();
      pcVar3 = *(code **)(*piVar2 + 0x4c);
      uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_24 + -0x80000000),(int)(0x3f000000)))));
      uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(g_004e13e4)))));
      0 /* ctorZero */;
      (*pcVar3)(piVar2,auStack_20);
      (**(code **)(*(int *)*(int *)((int)this + 4*(8)) + 200))((int *)*(int *)((int)this + 4*(8)),piVar2);
      ((SystemRemindBar *)piVar2)->setRichText((cocos2d::CCArray*)p1);
      (**(code **)(*(int *)this + 0x2c))(((int)this),0);
    }
  }
  return;
}

void Toast::reStartAllActions()
{
  *(undefined1 *)(((int)this) + 0x14) = 0;
  if (*(int *)(((int)this) + 0x2c) == 0) {
    Toast::startVirtualItemData();
  }
  if (*(char *)(((int)this) + 0x14) == '\0') {
    Toast::showRichText((cocos2d::CCArray*)*(undefined4 *)(((int)this) + 0x18));
  }
  return;
}


void Toast::systemRemindEnd(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(((int)this) + 0x48);
  func_0079ec24(iVar2);
  func_0079e2bc(iVar2 + 8);
  (void)(::operator delete((void *)(iVar2)));
  iVar2 = 0;
  for (piVar1 = *(int **)(((int)this) + 0x48); piVar1 != (int *)(((int)this) + 0x48);
      piVar1 = (int *)*piVar1) {
    iVar2 = iVar2 + 1;
  }
  if (iVar2 == 0) {
    *(undefined4 *)(((int)this) + 0x38) = 0;
  }
  else {
    Toast::startSystemRemind();
  }
  return;
}

Toast::Toast()
{
  int iVar1;
  undefined4 uVar2;
  
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(0x10)) = (int)(((int)this) + 0x10);
  *(int *)((int)this + 4*(0x11)) = (int)(((int)this) + 0x10);
  *(int *)((int)this + 4*(0x12)) = (int)(((int)this) + 0x12);
  *(int *)((int)this + 4*(0x13)) = (int)(((int)this) + 0x12);
  *(int *)((int)this + 4*(0x14)) = 0;
  *(int *)((int)this + 4*(0x15)) = 0;
  *(int *)((int)this + 4*(0x16)) = 0;
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x17)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x18)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x19)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(7)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(undefined1 *)(((int)this) + 5) = 0;
  *(undefined1 *)((int)((int)this) + 0x15) = 1;
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0xf)) = 0;
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)("u\fM"), 0, (char const*)"EVENT_COMBAT_WORD", 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)(g_004e1618 + 0x4e15dc), 0, (char const*)"EVENT_EXP", 0);
  return;
}

undefined4 Toast::sharedToast()
{
  undefined4 uVar1;
  
  if (s_singleton_1 == 0) {
    s_singleton_1 = new Toast();
    s_singleton_1->init();
  }
  return (undefined4)(intptr_t)s_singleton_1;
}


Toast::~Toast()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (11) =====
void Toast::toastEnd(cocos2d::CCObject* p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  (**(code **)(*(int *)(p1) + (0xec)))(p1,1,p3,*(code **)(*(int *)p1 + 0xec),p4);
  return;
}

void Toast::showCombatChange(cocos2d::CCObject* p1)
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar1))->getWinSize(); uStack_28 = hw_fbits(_ws.width); uStack_24 = hw_fbits(_ws.height); }
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_004e0c96 + (intptr_t)(g_004e0d80)),auStack_2c);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_20));
  func_0079e2bc(auStack_20);
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_004e0cb2 + (intptr_t)(g_004e0d84)),auStack_2c);
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_20));
  func_0079e2bc(auStack_20);
  iVar4 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x20) + 0xd4))(*(int **)(((int)this) + 0x20),g_004e0d88));
  if (iVar4 != 0) {
    piVar5 = (int *)(**(code **)(**(int **)(((int)this) + 0x20) + 0xd4))
                              (*(int **)(((int)this) + 0x20),g_004e0d88);
    (**(code **)(*(int *)(piVar5) + (0xe8)))();
  }
  iVar2 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x14));
  iVar3 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x14));
  if (iVar2 != iVar3) {
    piVar5 = (int *)::operator new(0x100);
    ::new ((void *)piVar5) CombatNode();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
    iVar2 = (undefined4)(intptr_t)(((CombatNode *)(piVar5))->init(iVar2, iVar3));
    if (iVar2 == 0) {
      (**(code **)(*(int *)(piVar5) + (8)))(piVar5);
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x4e0d1a);
      (*pcVar7)();
    }
    ((cocos2d::CCObject *)(piVar5))->autorelease();
    (**(code **)(*(int *)(piVar5) + (0x11c)))(piVar5,g_004e0d88);
    pcVar7 = *(code **)(*piVar5 + 0x4c);
    uVar1 = (undefined4)(func_0079e4fc(uStack_28,0x3f000000));
    uVar6 = (undefined4)(func_0079e4dc(uStack_24,g_004e0d8c));
    0 /* ctorZero */;
    (*pcVar7)(piVar5,auStack_20);
    (**(code **)(**(int **)(((int)this) + 0x20) + 200))(*(int **)(((int)this) + 0x20),piVar5);
  }
  return;
}

void Toast::showExpChange(cocos2d::CCObject* p1)
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar1))->getWinSize(); uStack_28 = hw_fbits(_ws.width); uStack_24 = hw_fbits(_ws.height); }
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_004e0db2 + (intptr_t)(g_004e0ecc)),auStack_2c);
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_20));
  func_0079e2bc(auStack_20);
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_004e0dce + (intptr_t)(g_004e0ed0)),auStack_2c);
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_20));
  func_0079e2bc(auStack_20);
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_004e0dea + (intptr_t)(g_004e0ed4)),auStack_2c);
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(p1))->objectForKey((char const *)auStack_20));
  func_0079e2bc(auStack_20);
  iVar5 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x20) + 0xd4))(*(int **)(((int)this) + 0x20),g_004e0ed8));
  if (iVar5 != 0) {
    piVar6 = (int *)(**(code **)(**(int **)(((int)this) + 0x20) + 0xd4))
                              (*(int **)(((int)this) + 0x20),g_004e0ed8);
    (**(code **)(*(int *)(piVar6) + (0xe8)))();
  }
  iVar5 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x14));
  iVar2 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x14));
  if (iVar5 != iVar2) {
    uVar1 = (undefined4)(*(undefined4 *)(iVar4 + 0x14));
    piVar6 = (int *)::operator new(0x100);
    ::new ((void *)piVar6) ExpNode();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
    iVar2 = (undefined4)(intptr_t)(((ExpNode *)(piVar6))->init(iVar5, iVar2, uVar1));
    if (iVar2 == 0) {
      (**(code **)(*(int *)(piVar6) + (8)))(piVar6);
                    /* WARNING: Does not return */
      pcVar8 = (code *)software_udf(0xff,0x4e0e5a);
      (*pcVar8)();
    }
    ((cocos2d::CCObject *)(piVar6))->autorelease();
    (**(code **)(*(int *)(piVar6) + (0x11c)))(piVar6,g_004e0ed8);
    pcVar8 = *(code **)(*piVar6 + 0x4c);
    uVar1 = (undefined4)(func_0079e4fc(uStack_28,0x3f000000));
    uVar7 = (undefined4)(func_0079e4dc(uStack_24,g_004e0edc));
    uVar7 = (undefined4)(func_0079e57c(uVar7,g_004e0ee0));
    0 /* ctorZero */;
    (*pcVar8)(piVar6,auStack_20);
    (**(code **)(**(int **)(((int)this) + 0x20) + 200))(*(int **)(((int)this) + 0x20),piVar6);
  }
  return;
}

bool Toast::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void Toast::startToast()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void Toast::virtualItemDataEnd(cocos2d::CCObject* p1)
{
  undefined4 p4 = 0;

  int *piVar1;
  
  if (((int)(intptr_t)(int)(intptr_t)p1 != 0) &&
     (piVar1 = (int *)func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_004e11b6 + (intptr_t)(g_004e11d4))),
                                      *(undefined4 *)((unsigned char *)((char *)&g_004e11b8 + (intptr_t)(g_004e11d0))),0,p4),
     piVar1 != (int *)0x0)) {
    (**(code **)(*(int *)(piVar1) + (0xec)))(piVar1,1);
  }
  return;
}

void Toast::showSystemRemind(std::string * p1)
{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 auStack_28 [4];
  int iStack_24;
  undefined1 auStack_20 [12];
  
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar1)->getWinSize(); __builtin_memcpy(&auStack_28, &_ws.width, 4); iStack_24 = hw_fbits(_ws.height); }
  piVar2 = (int *)((SystemRemindBar *)this)->create();
  pcVar3 = *(code **)(*piVar2 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(iStack_24 + -0x80000000,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,g_004e1254));
  0 /* ctorZero */;
  (*pcVar3)(piVar2,auStack_20);
  (**(code **)(**(int **)(((int)this) + 0x20) + 200))(*(int **)(((int)this) + 0x20),piVar2);
  func_0079e53c(auStack_20,p1);
  ((SystemRemindBar *)piVar2)->setTitle((std::string *)(char *)auStack_20);
  func_0079e2bc(auStack_20);
  return;
}

void Toast::startRichText()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined1 auStack_28 [4];
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(int *)((int)this + 4*(0x15)) - *(int *)((int)this + 4*(0x14)) >> 2 != 0) {
    *(int *)((int)this + 4*(0xf)) = 1;
    uVar1 = (undefined4)(cocos2d::CCArray::create());
    ((cocos2d::CCArray *)(uVar1))->initWithArray((cocos2d::CCArray*)*(undefined4 *)*(int *)((int)this + 4*(0x14)));
    (**(code **)(*(int *)this + 0x2c))(((int)this),uVar1);
    uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar2))->getWinSize(); __builtin_memcpy(&auStack_28, &_ws.width, 4); iStack_24 = hw_fbits(_ws.height); }
    piVar3 = (int *)((SystemRemindBar *)this)->create();
    pcVar4 = *(code **)(*piVar3 + 0x4c);
    uVar2 = (undefined4)(func_0079e4fc(iStack_24 + -0x80000000,0x3f000000));
    uVar2 = (undefined4)(func_0079e59c(uVar2,g_004e131c));
    0 /* ctorZero */;
    (*pcVar4)(piVar3,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(8)) + 200))((int *)*(int *)((int)this + 4*(8)),piVar3);
    ((SystemRemindBar *)(piVar3))->setRichText((cocos2d::CCArray*)uVar1);
    uVar1 = (undefined4)(cocos2d::CCDelayTime::create(g_004e1320));
    uStack_20 = (undefined4)(*(undefined4 *)(")\u0013M"));
    uStack_1c = (undefined4)(0);
    uVar2 = (undefined4)(cocos2d::CCCallFuncO::create((cocos2d::CCObject*)((int)this), 0 /*memptr*/, 0));
    uVar1 = (undefined4)(cocos2d::CCSequence::create((cocos2d::CCFiniteTimeAction*)uVar1, uVar2, 0));
    ((cocos2d::CCNode *)(piVar3))->runAction((cocos2d::CCAction*)uVar1);
    (**(code **)(*(int *)this + 0x2c))(((int)this),0);
  }
  return;
}

void Toast::startSystemRemind()
{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x38) = 1;
  func_0079e53c(auStack_30,*(int *)(((int)this) + 0x48) + 8);
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar1)->getWinSize(); __builtin_memcpy(&auStack_28, &_ws.width, 4); iStack_24 = hw_fbits(_ws.height); }
  piVar2 = (int *)((SystemRemindBar *)this)->create();
  pcVar3 = *(code **)(*piVar2 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(iStack_24 + -0x80000000,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,g_004e14cc));
  0 /* ctorZero */;
  (*pcVar3)(piVar2,&uStack_20);
  (**(code **)(**(int **)(((int)this) + 0x20) + 200))(*(int **)(((int)this) + 0x20),piVar2);
  func_0079e53c(auStack_2c,auStack_30);
  ((SystemRemindBar *)piVar2)->setTitle((std::string *)(char *)auStack_2c);
  func_0079e2bc(auStack_2c);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004e1498 + (intptr_t)(g_004e14d0))));
  uStack_1c = (undefined4)(0);
  uVar1 = (undefined4)(intptr_t)(cocos2d::extension::CCInvocation::create((cocos2d::CCObject*)((int)this), 0 /*memptr*/, 0));
  (**(code **)(*(int *)(piVar2) + (0x1fc)))(piVar2,uVar1);
  func_0079e2bc(auStack_30);
  return;
}

undefined8 Toast::showToast(char const* p1)
{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  uVar1 = (undefined4)(Toast::sharedToast());
  func_0079e45c(&uStack_14,p1,&uStack_18);
  ((Toast *)uVar1)->showSystemRemind((std::string *)(char *)uStack_14);
  func_0079e2bc(&uStack_14);
  return ghidra_CONCAT44(uStack_14,uStack_18);
}

undefined8 Toast::showNewRichText(cocos2d::CCArray* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

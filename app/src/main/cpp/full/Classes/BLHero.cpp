#include "BLHero.h"
#include "CCObject.h"
#include "BLAttackCommob.h"
#include "BLLeakUtils.h"
#include "BLRole.h"
#include "BLRoleAttribute.h"
#include "BluetoothHelper.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e924(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00438e14;
extern "C" unsigned long _DAT_00438e20;
extern "C" unsigned long _DAT_00438e2c;
extern "C" unsigned long _DAT_00438e38;
extern "C" unsigned long _DAT_00438f08;
extern "C" unsigned long _DAT_00438f0c;
extern "C" unsigned long _DAT_00438f10;
extern "C" unsigned long _DAT_00438f14;
extern "C" unsigned long _DAT_00439018;
extern "C" unsigned long _DAT_0043901c;
extern "C" unsigned long _DAT_00439020;
extern "C" unsigned long _DAT_00439024;
extern "C" unsigned long _DAT_00439028;
extern "C" unsigned long _DAT_0043902c;
extern "C" unsigned long _DAT_00439180;
extern "C" unsigned long _DAT_00439184;
extern "C" unsigned long _DAT_00439188;
extern "C" unsigned long _DAT_0043918c;
extern "C" unsigned long _DAT_00439218;
extern "C" unsigned long _DAT_0043921c;
extern "C" unsigned long _DAT_00439220;
extern "C" unsigned long _UNK_00438e6c;
extern "C" unsigned long _UNK_00438e80;
extern "C" unsigned long _UNK_00438f28;
extern "C" unsigned long _UNK_00438f3c;
extern "C" unsigned long g_00438e14;
extern "C" unsigned long g_00438e20;
extern "C" unsigned long g_00438e2c;
extern "C" unsigned long g_00438e38;
extern "C" unsigned long g_00438e6c;
extern "C" unsigned long g_00438e80;
extern "C" unsigned long g_00438f08;
extern "C" unsigned long g_00438f0c;
extern "C" unsigned long g_00438f10;
extern "C" unsigned long g_00438f14;
extern "C" unsigned long g_00438f28;
extern "C" unsigned long g_00438f3c;
extern "C" unsigned long g_00439018;
extern "C" unsigned long g_0043901c;
extern "C" unsigned long g_00439020;
extern "C" unsigned long g_00439024;
extern "C" unsigned long g_00439028;
extern "C" unsigned long g_0043902c;
extern "C" unsigned long g_00439180;
extern "C" unsigned long g_00439184;
extern "C" unsigned long g_00439188;
extern "C" unsigned long g_0043918c;
extern "C" unsigned long g_00439218;
extern "C" unsigned long g_0043921c;
extern "C" unsigned long g_00439220;
undefined1 BLHero::getisLeftDown() const
{
  return *(undefined1 *)(((int)this) + 0x378);
}

void BLHero::setisLeftDown(bool p1)
{
  *(undefined1 *)(((int)this) + 0x378) = p1;
  return;
}

undefined1 BLHero::getisRightDown() const
{
  return *(undefined1 *)(((int)this) + g_00438e14);
}

void BLHero::setisRightDown(bool p1)
{
  *(undefined1 *)(((int)this) + g_00438e20) = p1;
  return;
}

undefined1 BLHero::getisAttackDown() const
{
  return *(undefined1 *)(((int)this) + g_00438e2c);
}

void BLHero::setisAttackDown(bool p1)
{
  *(undefined1 *)(((int)this) + g_00438e38) = p1;
  return;
}

BLAttackCommob* BLHero::getAttackCommob() const
{
  return (BLAttackCommob*)(*(undefined4 *)(((int)this) + 0x37c));
}

void BLHero::onExit()
{
  BLRole::onExit();
  return;
}

void BLHero::onEnter()
{
  BLRole::onEnter();
  return;
}


BLHero::~BLHero()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar3 = *(int *)(g_00438f08 + 0x438e8e);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar3 + 0x410;
  *(int *)((int)this + 4*(0x3d)) = iVar3 + 0x450;
  iVar1 = g_00438f0c;
  *(int *)((int)this + 4*(0x71)) = iVar3 + 0x468;
  *(int *)((int)this + 4*(0x8b)) = iVar3 + iVar1;
  *(int *)((int)this + 4*(0x8c)) = iVar3 + g_00438f10;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLHero"),&piStack_18);
  ((BLLeakUtils *)uVar2)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  BLRole::~BLRole();
  return;
}

void BLHero::setAttackCommob(BLAttackCommob* p1)
{
  if (*(int *)(((int)this) + 0x37c) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x37c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x37c) = (undefined4)(intptr_t)p1;
  }
  return;
}

BLHero::BLHero()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar3 = *(int *)(g_00439018 + 0x438f8e);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar3 + 0x410;
  *(int *)((int)this + 4*(0x3d)) = iVar3 + 0x450;
  iVar1 = g_0043901c;
  *(int *)((int)this + 4*(0x71)) = iVar3 + 0x468;
  *(int *)((int)this + 4*(0x8b)) = iVar3 + iVar1;
  *(int *)((int)this + 4*(0x8c)) = iVar3 + g_00439020;
  *(undefined1 *)(((int)this) + 0xde) = 0;
  *(undefined1 *)((int)((int)this) + g_00439024) = 0;
  *(undefined1 *)((int)((int)this) + g_00439028) = 0;
  *(int *)((int)this + 4*(0xdf)) = 0;
  *(undefined1 *)(((int)this) + 0xda) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLHero"),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


void BLHero::playerAction(float p1)
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = ((BLRoleAttribute *)((int)this) + 0x71)->getLife();
  if (0 < iVar1) {
    iVar1 = *(int *)((int)this + 4*(0xdf));
    if (iVar1 != 0) {
      uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar1 + 0x18)),(int)(p1)))));
      *(undefined4 *)(iVar1 + 0x18) = uVar2;
      iVar3 = *(int *)((int)this + 4*(0xdf));
      uVar4 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(*(undefined4 *)(iVar3 + 0x18)))));
      iVar1 = func_0079e924((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),g_00439218,g_0043921c
                              ,p4);
      if (iVar1 == 0) {
        if (*(int *)(iVar3 + 0x14) == 0x68) {
          iVar1 = BLRole::attack();
        }
        else {
          iVar1 = BLRole::skillAttack(((int)this));
        }
        if (iVar1 != 0) {
          (**(code **)(*(int *)this + 0x3fc))(((int)this),0);
          return;
        }
      }
      else {
        (**(code **)(*(int *)this + 0x3fc))(((int)this),0);
      }
    }
    if (*(char *)((int)((int)this) + g_00439220) != '\0') {
      BLRole::attack();
    }
    BLHero::playerActionMove();
  }
  return;
}

void BLHero::tick(float p1)
{
  int iVar1;
  
  if ((*(int **)(((int)this) + 0x344) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(((int)this) + 0x344) + 0x18))(), iVar1 == 0)) {
    BLHero::playerAction(p1);
  }
  BLRole::tick(p1);
  return;
}

int * BLHero::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x380)));
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

// ===== 修复: 补回被误删的函数占位 (3) =====
bool BLHero::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLHero::clearAttackCommob()
{
  undefined4 p4 = 0;

  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)this + 0x3fc);
  (*pcVar1)(((int)this),0,*(int *)this,pcVar1,p4);
  return;
}

void BLHero::playerActionMove()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

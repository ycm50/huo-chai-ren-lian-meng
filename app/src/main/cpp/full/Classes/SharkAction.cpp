#include "SharkAction.h"
#include "BLLeakUtils.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_006cf5be(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e804(...);
extern "C" long long func_0079e814(...);
extern "C" long long func_0079e824(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006cf602;
extern "C" unsigned long UNK_006cf606;
extern "C" unsigned long UNK_006cf61c;
extern "C" unsigned long _DAT_006cf71c;
extern "C" unsigned long _DAT_006cf720;
extern "C" unsigned long _DAT_006cf724;
extern "C" unsigned long _DAT_006cf908;
extern "C" unsigned long _DAT_006cf90c;
extern "C" unsigned long _DAT_006cf910;
extern "C" unsigned long _DAT_006cf914;
extern "C" unsigned long _DAT_006cfa14;
extern "C" unsigned long _DAT_006cfa18;
extern "C" unsigned long _DAT_006cfa1c;
extern "C" unsigned long _DAT_006cfa20;
extern "C" unsigned long _DAT_006cfa24;
extern "C" unsigned long _UNK_006cf674;
extern "C" unsigned long _UNK_006cf678;
extern "C" unsigned long _UNK_006cf67c;
extern "C" unsigned long _UNK_006cf7b0;
extern "C" unsigned long g_006cf602;
extern "C" unsigned long g_006cf606;
extern "C" unsigned long g_006cf61c;
extern "C" unsigned long g_006cf674;
extern "C" unsigned long g_006cf678;
extern "C" unsigned long g_006cf67c;
extern "C" unsigned long g_006cf71c;
extern "C" unsigned long g_006cf720;
extern "C" unsigned long g_006cf724;
extern "C" unsigned long g_006cf7b0;
extern "C" unsigned long g_006cf908;
extern "C" unsigned long g_006cf90c;
extern "C" unsigned long g_006cf910;
extern "C" unsigned long g_006cf914;
extern "C" unsigned long g_006cfa14;
extern "C" unsigned long g_006cfa18;
extern "C" unsigned long g_006cfa1c;
extern "C" unsigned long g_006cfa20;
extern "C" unsigned long g_006cfa24;
int SharkAction::getType() const
{
  return *(undefined4 *)(((int)this) + 0x40);
}

void SharkAction::setType(int p1)
{
  *(undefined4 *)(((int)this) + 0x40) = p1;
  return;
}

float SharkAction::getModulus() const
{
  return *(undefined4 *)(((int)this) + 0x44);
}

void SharkAction::setModulus(float p1)
{
  *(undefined4 *)(((int)this) + 0x44) = p1;
  return;
}

cocos2d::extension::CCInvocation* SharkAction::getInvocation() const
{
  return (cocos2d::extension::CCInvocation*)(*(undefined4 *)(((int)this) + 0x48));
}



cocos2d::CCPoint SharkAction::getTargetPosition() const
{ return cocos2d::CCPoint(); }

void SharkAction::setInvocation(cocos2d::extension::CCInvocation* p1)
{
  if (*(int *)(((int)this) + 0x48) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x48) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x48) = (undefined4)(intptr_t)p1;
  }
  return;
}



bool SharkAction::init()
{
  return 1;
}

SharkAction::~SharkAction()
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar2 = (int *)((unsigned char *)((char *)&g_006cf606 + (intptr_t)(g_006cf678)));
  *(int *)this = *(int *)((unsigned char *)((char *)&g_006cf602 + (intptr_t)(g_006cf674))) + 8;
  iVar3 = (int)*(int *)&(*piVar2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_006cf61c + (intptr_t)(g_006cf67c)),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  if (*(int *)((int)this + 4*(0x12)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x12)) = 0;
  }
  ((std::vector<cocos2d::CCPoint, std::allocator<cocos2d::CCPoint>> *)((int)this) + 0xb)->~vector();
  *(int *)this = iVar3 + 8;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCAction(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

SharkAction::SharkAction()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int * SharkAction::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x4c)));
  0 /* ctorZero */;
  iVar2 = ((SharkAction *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

int SharkAction::getSharkPos() const
{
  undefined4 p2 = 0;

  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(p2 + 0x30) - *(int *)(p2 + 0x2c);
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  iVar1 = 0;
  if (iVar2 >> 3 != 0) {
    if (g_006cf7b0 < (uint)(iVar2 >> 3)) {
      func_0079e5bc();
    }
    iVar1 = ((long long)::operator new((size_t)(iVar2)));
  }
  *(int *)this = iVar1;
  *(int *)((int)this + 4*(1)) = iVar1;
  *(int *)((int)this + 4*(2)) = iVar1 + iVar2;
  iVar1 = func_006cf5be(*(undefined4 *)(p2 + 0x2c),*(undefined4 *)(p2 + 0x30));
  *(int *)((int)this + 4*(1)) = iVar1;
  return ((int)this);
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void SharkAction::step(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void SharkAction::setTargetPosition(cocos2d::CCPoint * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool SharkAction::isDone()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void SharkAction::update(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}


void SharkAction::setSharkPos(std::vector<cocos2d::CCPoint, std::allocator<cocos2d::CCPoint>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void SharkAction::initSpeedData(std::string& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

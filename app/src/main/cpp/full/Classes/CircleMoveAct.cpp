#include "CircleMoveAct.h"
#include "CCActionInterval.h"
#include "CCGeometry.h"
#include "CCAction.h"
#include "CCZone.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCDirector.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0042ed08;
extern "C" unsigned long _DAT_0042ede8;
extern "C" unsigned long _DAT_0042ee50;
extern "C" unsigned long _DAT_0042ee54;
extern "C" unsigned long g_0042ed08;
extern "C" unsigned long g_0042ede8;
extern "C" unsigned long g_0042ee50;
extern "C" unsigned long g_0042ee54;
CircleMoveAct::~CircleMoveAct()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCAction(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}



CircleMoveAct::CircleMoveAct()
{
  0 /* ctorZero */;
  *(int *)((int)this + 4*(8)) = 0;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void CircleMoveAct::update(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircleMoveAct::startWithTarget(cocos2d::CCNode* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool CircleMoveAct::initWithDuration(float p1, cocos2d::CCPoint const& p2, float p3, float p4)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCActionInterval *)this)->initWithDuration((float)0));
  if (iVar1 != 0) {
    *(undefined4 *)(((int)this) + 0x2c) = p1;
    ((cocos2d::CCPoint *)(((int)this) + 0x30))->operator=(p2);
    *(undefined4 *)(((int)this) + 0x3c) = 0x3f800000;
    *(undefined4 *)(((int)this) + 0x38) = p3;
    *(undefined4 *)(((int)this) + 0x40) = p4;
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCDirector::sharedDirector());
    func_0079e4dc(p4,p1);
    uVar4 = (undefined4)(intptr_t)(func_0079e62c());
    uVar4 = func_0079e724((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),*(undefined4 *)(iVar2 + 0x38)
                            ,*(undefined4 *)(iVar2 + 0x3c));
    func_0079e63c((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),g_0042ee50,g_0042ee54);
    uVar3 = (undefined4)(func_0079e7e4());
    *(undefined4 *)(((int)this) + 0x44) = uVar3;
    *(undefined4 *)(((int)this) + 0x48) = 0;
  }
  return iVar1 != 0;
}

cocos2d::CCObject* CircleMoveAct::copyWithZone(cocos2d::CCZone* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void CircleMoveAct::create(float p1, cocos2d::CCPoint const& p2, float p3, float p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

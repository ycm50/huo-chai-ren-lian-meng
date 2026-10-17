#include "CircusRankingTime.h"
#include "CircusData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00476d9c;
extern "C" unsigned long _DAT_00476e10;
extern "C" unsigned long _DAT_00476e50;
extern "C" unsigned long _DAT_00476e54;
extern "C" unsigned long g_00476d9c;
extern "C" unsigned long g_00476e10;
extern "C" unsigned long g_00476e50;
extern "C" unsigned long g_00476e54;
CircusRankingTime::~CircusRankingTime()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void CircusRankingTime::onTimer(float p1)
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar1 = ((CircusData *)this)->getMe();
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar1 + 400)),(int)(p1)))));
  iVar1 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x <= _y)?1:0);}((int)(uVar2),(int)(0))));
  if (iVar1 != 0) {
    iVar1 = ((CircusData *)this)->getMe();
    *(undefined4 *)(iVar1 + 400) = 0;
    piVar3 = (int *)cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(0);
    uVar4 = (undefined4)((**(code **)(*piVar3 + 0x30))());
    ((cocos2d::CCScheduler *)uVar4)->unscheduleUpdateForTarget((cocos2d::CCObject const*)((int)this));
  }
  iVar1 = ((CircusData *)this)->getMe();
  *(undefined4 *)(iVar1 + 400) = uVar2;
  return;
}

CircusRankingTime::CircusRankingTime()
{
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void CircusRankingTime::onTimeUpdated()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

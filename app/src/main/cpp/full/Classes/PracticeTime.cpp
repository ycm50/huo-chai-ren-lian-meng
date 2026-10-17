#include "PracticeTime.h"
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
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e50c(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004a32b8;
extern "C" unsigned long _DAT_004a32bc;
extern "C" unsigned long _DAT_004a32fc;
extern "C" unsigned long _DAT_004a3360;
extern "C" unsigned long _DAT_004a3364;
extern "C" unsigned long _DAT_004a35d0;
extern "C" unsigned long _UNK_004a3378;
extern "C" unsigned long _UNK_004a33a0;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_004a32b8;
extern "C" unsigned long g_004a32bc;
extern "C" unsigned long g_004a32fc;
extern "C" unsigned long g_004a3360;
extern "C" unsigned long g_004a3364;
extern "C" unsigned long g_004a3378;
extern "C" unsigned long g_004a33a0;
extern "C" unsigned long g_004a35d0;
void PracticeTime::onTimer(float p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r2;
  int iVar4;
  
  iVar4 = *(int *)(((int)this) + 0x24);
  while (iVar4 != ((int)this) + 0x1c) {
    if (*(char *)(iVar4 + 0x1c) != '\0') {
      uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p1),(int)(*(undefined4 *)(iVar4 + 0x14))))));
      *(undefined4 *)(iVar4 + 0x14) = uVar1;
      uVar2 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar4 + 0x18))))));
      iVar3 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x >= _y)?1:0);}((int)(uVar1),(int)(uVar2))));
      if (iVar3 != 0) {
        *(undefined1 *)(iVar4 + 0x1c) = 0;
        *(undefined1 *)(iVar4 + 0x1d) = 1;
        uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
        ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)((intptr_t)"MSG_PRACTICE_UPDATEVIEW"));
      }
    }
    iVar4 = func_0079e31c(iVar4);
    p3 = extraout_r2;
  }
  uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x30));
  iVar4 = func_0079e4ec(uVar2,0,p3,((int)this) + 0x1c,p4);
  uVar1 = (undefined4)(g_004a32bc);
  if (iVar4 != 0) {
    iVar4 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x > _y)?1:0);}((int)(uVar2),(int)(g_004a32bc))));
    if (iVar4 != 0) {
      *(undefined4 *)(((int)this) + 0x30) = uVar1;
    }
    uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(((int)this) + 0x30)),(int)(p1)))));
    iVar4 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x <= _y)?1:0);}((int)(uVar1),(int)(0))));
    if (iVar4 == 0) {
      *(undefined4 *)(((int)this) + 0x30) = uVar1;
    }
    else {
      *(undefined4 *)(((int)this) + 0x30) = 0;
    }
  }
  return;
}

void PracticeTime::onTimeUpdated()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PracticeTime::SetMineTime(int p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(p1)))));
  *(undefined4 *)(((int)this) + 0x30) = uVar1;
  return;
}

PracticeTime::~PracticeTime()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

PracticeTime::PracticeTime()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PracticeTime::Settimevec(int p1, int p2, bool p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

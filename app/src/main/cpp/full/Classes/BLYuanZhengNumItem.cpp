#include "BLYuanZhengNumItem.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006b794c;
extern "C" unsigned long UNK_006b7960;
extern "C" unsigned long UNK_006b7b02;
extern "C" unsigned long UNK_006b7b14;
extern "C" unsigned long UNK_006b7b50;
extern "C" unsigned long UNK_006b7bf4;
extern "C" unsigned long _UNK_006b7990;
extern "C" unsigned long _UNK_006b7994;
extern "C" unsigned long _UNK_006b7b40;
extern "C" unsigned long _UNK_006b7b44;
extern "C" unsigned long _UNK_006b7ce4;
extern "C" unsigned long _UNK_006b7ce8;
extern "C" unsigned long _UNK_006b7cec;
extern "C" unsigned long _UNK_006b7cf0;
extern "C" unsigned long _UNK_006b7cf4;
extern "C" unsigned long _UNK_006b7cf8;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long g_006b794c;
extern "C" unsigned long g_006b7960;
extern "C" unsigned long g_006b7990;
extern "C" unsigned long g_006b7994;
extern "C" unsigned long g_006b7b02;
extern "C" unsigned long g_006b7b14;
extern "C" unsigned long g_006b7b40;
extern "C" unsigned long g_006b7b44;
extern "C" unsigned long g_006b7b50;
extern "C" unsigned long g_006b7bf4;
extern "C" unsigned long g_006b7ce4;
extern "C" unsigned long g_006b7ce8;
extern "C" unsigned long g_006b7cec;
extern "C" unsigned long g_006b7cf0;
extern "C" unsigned long g_006b7cf4;
extern "C" unsigned long g_006b7cf8;
BLYuanZhengNumItem::~BLYuanZhengNumItem()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006b7960 + g_006b7994,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCNode(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLYuanZhengNumItem::BLYuanZhengNumItem()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006b7b14 + g_006b7b44,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLYuanZhengNumItem::setIndex(int p1)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int *piVar8;
  int iVar9;
  code *pcVar10;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 auStack_64 [2];
  undefined1 auStack_5c [4];
  undefined4 uStack_58;
  undefined1 auStack_54 [4];
  undefined4 auStack_50 [10];
  undefined1 auStack_28 [12];
  int iStack_1c;
  
  piVar8 = *(int **)(&g_006b7b50 + g_006b7ce4);
  iStack_1c = (int)*(int *)&(*piVar8);
  if (g_006b7ce8 < p1 - 1U) {
    p1 = g_006b7cec;
  }
  *(int *)((int)this + 4*(0x39)) = p1;
  (void)(((long long)::memset((void *)(auStack_50 + 1),(int)(0),(size_t)(0x24))));
  func_0079e964(p1,10);
  iVar9 = 1;
  auStack_50[1] = extraout_r1;
  while (9 < p1) {
    p1 = ((long long)((int)(p1) / (int)(10)));
    func_0079e964(p1,10);
    auStack_50[iVar9 + 1] = extraout_r1_00;
    iVar9 = iVar9 + 1;
  }
  uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iVar9)))));
  iVar2 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(0x3f800000))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iVar2 + -0x80000000),(int)(0x3f000000)))));
  iStack_88 = 0;
  uStack_84 = (undefined4)(0);
  do {
    (void)(((long long)::memset((void *)(auStack_28),(int)(0),(size_t)(0xc))));
    (void)(((long long)::sprintf((char *)(auStack_28),(char const *)(&g_006b7bf4 + g_006b7cf0),auStack_50[iVar9 - iStack_88])));
    func_0079e45c(auStack_54,auStack_28,auStack_5c);
    piVar3 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_54);
    (**(code **)(*(int *)this + 200))(((int)this),piVar3);
    pcVar10 = *(code **)(*piVar3 + 0x4c);
    uVar4 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_88)))));
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar4)))));
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(g_006b7cf4)))));
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_64[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar6)))));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_58);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar10)(piVar3,auStack_54);
    puVar7 = (undefined4 *)(**(code **)(*piVar3 + 0x8c))(piVar3);
    uStack_84 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_84),(int)(*puVar7)))));
    iStack_88 = iStack_88 + 1;
  } while (iStack_88 != iVar9);
  iVar9 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x > _y)?1:0);}((int)(uStack_84),(int)(g_006b7cf8))));
  if (iVar9 != 0) {
    uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_006b7cf8),(int)(uStack_84)))));
    (**(code **)(*(int *)this + 0x40))(((int)this),uVar1);
  }
  if (iStack_1c != *piVar8) {
    func_0079e914();
  }
  return;
}

void BLYuanZhengNumItem::updateData(int p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  if (*(int *)((int)this + 4*(0x39)) != p1) {
    (**(code **)(*(int *)this + 0x104))(((int)this),1,p3,*(code **)(*(int *)this + 0x104),p4);
    BLYuanZhengNumItem::setIndex(p1);
  }
  return;
}


void BLYuanZhengNumItem::onEnter()
{
  ((cocos2d::CCNode *)this)->onEnter();
  return;
}

void BLYuanZhengNumItem::onExit()
{
  ((cocos2d::CCNode *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLYuanZhengNumItem::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

#include "PKData.h"
#include "PKAwardData.h"
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
extern "C" long long func_0079e6c0(...);
extern "C" unsigned long UNK_006179b4;
extern "C" unsigned long UNK_006179be;
extern "C" unsigned long UNK_00617a24;
extern "C" unsigned long UNK_00617a34;
extern "C" unsigned long UNK_00617a88;
extern "C" unsigned long UNK_00617a98;
extern "C" unsigned long UNK_00617aa6;
extern "C" unsigned long UNK_00617ab0;
extern "C" unsigned long UNK_00617b10;
extern "C" unsigned long UNK_00617b20;
extern "C" unsigned long UNK_00617b2e;
extern "C" unsigned long UNK_00617b38;
extern "C" unsigned long UNK_00617b98;
extern "C" unsigned long _UNK_006179e8;
extern "C" unsigned long _UNK_006179ec;
extern "C" unsigned long _UNK_00617a38;
extern "C" unsigned long _UNK_00617a3c;
extern "C" unsigned long _UNK_00617ab8;
extern "C" unsigned long _UNK_00617abc;
extern "C" unsigned long _UNK_00617ac0;
extern "C" unsigned long _UNK_00617ac4;
extern "C" unsigned long _UNK_00617b40;
extern "C" unsigned long _UNK_00617b44;
extern "C" unsigned long _UNK_00617b48;
extern "C" unsigned long _UNK_00617b4c;
extern "C" unsigned long _UNK_00617c54;
extern "C" unsigned long g_006179b4;
extern "C" unsigned long g_006179be;
extern "C" unsigned long g_006179e8;
extern "C" unsigned long g_006179ec;
extern "C" unsigned long g_00617a24;
extern "C" unsigned long g_00617a34;
extern "C" unsigned long g_00617a38;
extern "C" unsigned long g_00617a3c;
extern "C" unsigned long g_00617a88;
extern "C" unsigned long g_00617a98;
extern "C" unsigned long g_00617aa6;
extern "C" unsigned long g_00617ab0;
extern "C" unsigned long g_00617ab8;
extern "C" unsigned long g_00617abc;
extern "C" unsigned long g_00617ac0;
extern "C" unsigned long g_00617ac4;
extern "C" unsigned long g_00617b10;
extern "C" unsigned long g_00617b20;
extern "C" unsigned long g_00617b2e;
extern "C" unsigned long g_00617b38;
extern "C" unsigned long g_00617b40;
extern "C" unsigned long g_00617b44;
extern "C" unsigned long g_00617b48;
extern "C" unsigned long g_00617b4c;
extern "C" unsigned long g_00617b98;
extern "C" unsigned long g_00617c54;
PKData::PKData()
{
  int iVar1;
  
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  iVar1 = *(int *)(&g_006179be + g_006179ec) + 0xc;
  *(int *)((int)this + 4*(6)) = iVar1;
  *(int *)((int)this + 4*(7)) = iVar1;
  *(int *)((int)this + 4*(8)) = iVar1;
  *(int *)((int)this + 4*(0xe)) = 0;
  *(int *)((int)this + 4*(0xf)) = 0;
  *(int *)((int)this + 4*(0x10)) = 0;
  *(int *)((int)this + 4*(0x11)) = 0;
  *(int *)((int)this + 4*(0x12)) = 0;
  *(int *)((int)this + 4*(0x13)) = 0;
  *(int *)((int)this + 4*(0x14)) = iVar1;
  *(int *)((int)this + 4*(0x15)) = 0;
  *(int *)((int)this + 4*(0x16)) = 0;
  *(int *)((int)this + 4*(0x17)) = 0;
  *(int *)((int)this + 4*(0x1a)) = 0;
  *(int *)((int)this + 4*(0x1b)) = 0;
  *(int *)((int)this + 4*(0x1c)) = 0;
  *(undefined1 *)(((int)this) + 5) = 0;
  return;
}

int PKData::create()
{
  int iVar1;
  
  iVar1 = ((long long)::operator new((size_t)(0x74)));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)iVar1)->autorelease();
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)iVar1)->retain();
  }
  return iVar1;
}

undefined4 PKData::getIns()
{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(&g_00617a24 + g_00617a38);
  if (*piVar2 == 0) {
    iVar1 = PKData::create();
    *piVar2 = iVar1;
  }
  return *(undefined4 *)(&g_00617a34 + g_00617a3c);
}



PKData::~PKData()
{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4*(0x1a));
  iVar2 = *(int *)((int)this + 4*(0x1b));
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  for (; iVar1 != iVar2; iVar1 = iVar1 + 0x20) {
    if (*(int *)(iVar1 + 0x14) != 0) {
      (void)(::operator delete((void *)(*(int *)(iVar1 + 0x14))));
    }
    func_0079e2bc(iVar1 + 8);
    func_0079e2bc(iVar1 + 4);
  }
  if (*(int *)((int)this + 4*(0x1a)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x1a)))));
  }
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x15)->~vector();
  func_0079e2bc(((int)this) + 0x14);
  iVar2 = *(int *)((int)this + 4*(0x12));
  for (iVar1 = *(int *)((int)this + 4*(0x11)); iVar1 != iVar2; iVar1 = iVar1 + 0x24) {
    ((PKAwardData *)iVar1)->~PKAwardData();
  }
  if (*(int *)((int)this + 4*(0x11)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x11)))));
  }
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0xe)->~vector();
  func_0079e2bc(((int)this) + 8);
  func_0079e2bc(((int)this) + 7);
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
undefined4 PKData::getRankName(long p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 PKData::getRankImageUrl(long p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

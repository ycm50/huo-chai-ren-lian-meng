#include "SuitEquipUpGraceItemData.h"
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
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" unsigned long _DAT_004ac160;
extern "C" unsigned long _DAT_004ac164;
extern "C" unsigned long _DAT_004ac464;
extern "C" unsigned long _DAT_004ac468;
extern "C" unsigned long _DAT_004ac46c;
extern "C" unsigned long _DAT_004ac470;
extern "C" unsigned long _DAT_004ac474;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long extraout_r3_00;
extern "C" unsigned long g_004ac160;
extern "C" unsigned long g_004ac164;
extern "C" unsigned long g_004ac464;
extern "C" unsigned long g_004ac468;
extern "C" unsigned long g_004ac46c;
extern "C" unsigned long g_004ac470;
extern "C" unsigned long g_004ac474;
SuitEquipUpGraceItemData::SuitEquipUpGraceItemData()
{
  int iVar1;
  
  *(int *)((int)this + 4*(1)) = *(int *)(g_004ac160 + 0x4ac11c) + 0xc;
  iVar1 = g_004ac164;
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(4)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)this = 0;
  func_0079e2dc(((int)this) + 1,iVar1 + 0x4ac134);
  *(int *)((int)this + 4*(2)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(4)) = *(int *)((int)this + 4*(3));
  return;
}

SuitEquipUpGraceItemData::~SuitEquipUpGraceItemData()
{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(((int)this) + 0xc); puVar1 != *(undefined4 **)(((int)this) + 0x10);
      puVar1 = puVar1 + 1) {
    (void)(::operator delete((void *)(*puVar1)));
  }
  *(int *)(((int)this) + 0x10) = *(int *)(((int)this) + 0xc);
  if (*(int *)(((int)this) + 0xc) != 0) {
    (void)(::operator delete((void *)(*(int *)(((int)this) + 0xc))));
  }
  func_0079e2bc(((int)this) + 4);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void SuitEquipUpGraceItemData::initWithData(char** p1, int& p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

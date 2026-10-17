#include "LuckShopItem.h"
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
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5bc(...);
extern "C" unsigned long _DAT_0048ae9c;
extern "C" unsigned long g_0048ae9c;
LuckShopItem::~LuckShopItem()
{
  if (*(int *)(((int)this) + 0x34) != 0) {
    (void)(::operator delete((void *)(*(int *)(((int)this) + 0x34))));
  }
  func_0079e2bc(((int)this) + 0x14);
  func_0079e2bc(((int)this) + 0x10);
  func_0079e2bc(((int)this) + 0xc);
  func_0079e2bc(((int)this) + 8);
  return;
}

LuckShopItem::LuckShopItem()
{
  undefined4 p2 = 0;

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  func_0079e53c(((int)this) + 2,p2 + 2);
  func_0079e53c(((int)this) + 3,p2 + 3);
  func_0079e53c(((int)this) + 4,p2 + 4);
  func_0079e53c(((int)this) + 5,p2 + 5);
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  iVar5 = 0 - 0;
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  *(int *)((int)this + 4*(0xf)) = 0;
  puVar1 = (undefined4 *)0x0;
  if (iVar5 >> 3 != 0) {
    if (g_0048ae9c < (uint)(iVar5 >> 3)) {
      func_0079e5bc();
    }
    puVar1 = (undefined4 *)((long long)::operator new((size_t)(iVar5)));
  }
  *(int *)((int)this + 4*(0xf)) = (int)puVar1 + iVar5;
  *(int *)((int)this + 4*(0xd)) = (int)(intptr_t)puVar1;
  *(int *)((int)this + 4*(0xe)) = (int)(intptr_t)puVar1;
  puVar6 = (undefined4 *)0;
  puVar2 = (undefined4 *)0;
  puVar3 = puVar1;
  for (puVar4 = puVar2; puVar4 != puVar6; puVar4 = puVar4 + 2) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = (int)*(int *)&(*puVar4);
      puVar3[1] = puVar4[1];
    }
    puVar3 = puVar3 + 2;
  }
  *(int *)((int)this + 4*(0xe)) = (int)puVar1 + ((int)puVar4 - (int)puVar2 & 0xfffffff8U);
  return;
}

int LuckShopItem::operator=(int P2)
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  undefined4 uVar1;
  
  *(int *)this = 0;
  uVar1 = (undefined4)(0);
  *(int *)((int)this + 4*(1)) = uVar1;
  func_0079e52c(((int)this) + 2,p2 + 2,p3,uVar1,p4);
  func_0079e52c(((int)this) + 3,p2 + 3);
  func_0079e52c(((int)this) + 4,p2 + 4);
  func_0079e52c(((int)this) + 5,p2 + 5);
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  ; /* LuckShopItemContent 垃圾已桩化 */
  return ((int)this);
}

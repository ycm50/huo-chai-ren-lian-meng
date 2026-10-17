#include "HEROGIFTITEM.h"
#include "CCObject.h"
#include "GiftItemData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0049ca9c(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0049cb34;
extern "C" unsigned long _DAT_0049cb38;
extern "C" unsigned long _DAT_0049cba0;
extern "C" unsigned long _DAT_0049cc64;
extern "C" unsigned long _DAT_0049cc68;
extern "C" unsigned long _DAT_0049cc6c;
extern "C" unsigned long _DAT_0049cc70;
extern "C" unsigned long g_0049cb34;
extern "C" unsigned long g_0049cb38;
extern "C" unsigned long g_0049cba0;
extern "C" unsigned long g_0049cc64;
extern "C" unsigned long g_0049cc68;
extern "C" unsigned long g_0049cc6c;
extern "C" unsigned long g_0049cc70;
int GiftItemData::getID() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void GiftItemData::setID(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

cocos2d::_ccColor3B GiftItemData::getColorName() const
{
  uint c = *(uint *)(((int)this) + 0x44);
  cocos2d::_ccColor3B col; col.r = c & 0xff; col.g = (c >> 8) & 0xff; col.b = (c >> 16) & 0xff;
  return col;
}

void GiftItemData::setColorName(cocos2d::_ccColor3B p1)
{
  undefined1 uStack_2;
  uStack_2 = (undefined1)((*(int *)(intptr_t)&p1) >> 0x10);
  *(short *)(((int)this) + 0x44) = (short)*(int *)(intptr_t)&p1;
  *(undefined1 *)(((int)this) + 0x46) = uStack_2;
  return;
}

void GiftItemData::setStartPrice(std::string p1)
{
  func_0079e52c(((int)this) + 0x40);
  return;
}

void GiftItemData::setPrice(std::string p1)
{
  func_0079e52c(((int)this) + 0x3c);
  return;
}

void GiftItemData::setName(std::string p1)
{
  func_0079e52c(((int)this) + 0x38);
  return;
}

void GiftItemData::setIcon(std::string p1)
{
  func_0079e52c(((int)this) + 0x34);
  return;
}

void GiftItemData::setGiftID(std::string p1)
{
  func_0079e52c(((int)this) + 0x30);
  return;
}

std::string GiftItemData::getGiftID() const
{
  undefined4 p2 = 0;

  func_0079e53c(((int)this),p2 + 0x30);
  return std::string();
}

std::string GiftItemData::getStartPrice() const
{
  undefined4 p2 = 0;

  func_0079e53c(((int)this),p2 + 0x40);
  return std::string();
}

std::string GiftItemData::getPrice() const
{
  undefined4 p2 = 0;

  func_0079e53c(((int)this),p2 + 0x3c);
  return std::string();
}

std::string GiftItemData::getName() const
{
  undefined4 p2 = 0;

  func_0079e53c(((int)this),p2 + 0x38);
  return std::string();
}

std::string GiftItemData::getIcon() const
{
  undefined4 p2 = 0;

  func_0079e53c(((int)this),p2 + 0x34);
  return std::string();
}

bool GiftItemData::init()
{
  return 1;
}

void GiftItemData::clearItems()
{
  *(undefined4 *)(((int)this) + 0x1c) = *(undefined4 *)(((int)this) + 0x18);
  *(undefined4 *)(((int)this) + 0x28) = *(undefined4 *)(((int)this) + 0x24);
  return;
}

int GiftItemData::getTHItems() const
{
  undefined4 p2 = 0;

  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(p2 + 0x4c) - *(int *)(p2 + 0x48);
  uVar2 = (undefined4)((iVar3 >> 2) * g_0049cb34);
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  if (uVar2 == 0) {
    iVar1 = 0;
  }
  else {
    if (g_0049cb38 <= uVar2 && uVar2 - g_0049cb38 != 0) {
      func_0079e5bc();
    }
    iVar1 = ((long long)::operator new((size_t)(iVar3)));
  }
  *(int *)this = iVar1;
  *(int *)((int)this + 4*(1)) = iVar1;
  *(int *)((int)this + 4*(2)) = iVar1 + iVar3;
  iVar3 = func_0049ca9c(*(undefined4 *)(p2 + 0x48),*(undefined4 *)(p2 + 0x4c));
  *(int *)((int)this + 4*(1)) = iVar3;
  return 0;
}

GiftItemData::~GiftItemData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
; /* Destroy_aux 桩化 */
  if (*(int *)((int)this + 4*(0x12)) != 0) {
  }
  func_0079e2bc(((int)this) + 0x10);
  func_0079e2bc(((int)this) + 0xf);
  func_0079e2bc(((int)this) + 0xe);
  func_0079e2bc(((int)this) + 0xd);
  func_0079e2bc(((int)this) + 0xc);
  ((std::vector<int> *)((int)this) + 9)->~vector();
  ((std::vector<int> *)((int)this) + 6)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

GiftItemData::GiftItemData()
{
  int iVar1;
  int iVar2;
  
  0 /* ctorZero */;
  iVar1 = g_0049cc68;
  iVar2 = *(int *)(g_0049cc64 + 0x49cbd0);
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)this = iVar2 + 8;
  iVar2 = g_0049cc6c;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  iVar2 = *(int *)(iVar2 + 0x49cbe2);
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  iVar2 = iVar2 + 0xc;
  *(int *)((int)this + 4*(0xc)) = iVar2;
  *(int *)((int)this + 4*(0xd)) = iVar2;
  *(int *)((int)this + 4*(0xe)) = iVar2;
  *(int *)((int)this + 4*(0xf)) = iVar2;
  *(int *)((int)this + 4*(0x10)) = iVar2;
  *(int *)((int)this + 4*(0x12)) = 0;
  *(int *)((int)this + 4*(0x13)) = 0;
  *(int *)((int)this + 4*(0x14)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  func_0079e2dc(((int)this) + 0xc,iVar1 + 0x49cc00);
  func_0079e2dc(((int)this) + 0xf,((intptr_t)"10"));
  return;
}

void GiftItemData::setTHItems(std::vector<HEROGIFTITEM, std::allocator<HEROGIFTITEM>> p1)
{
  ((std::vector<HEROGIFTITEM, std::allocator<HEROGIFTITEM>> *)this) ->operator=(std::vector<HEROGIFTITEM>());
  return;
}

void GiftItemData::addTHItems(HEROGIFTITEM p1)
{
  int iVar1;
  
  iVar1 = *(int *)(((int)this) + 0x4c);
  if (iVar1 == *(int *)(((int)this) + 0x50)) {
  ; /* _M_insert_aux 桩化 */
  }
  else {
    if (iVar1 != 0) {
      0 /* ctorZero */;
    }
    *(int *)(((int)this) + 0x4c) = *(int *)(((int)this) + 0x4c) + 0x14;
  }
  return;
}

void GiftItemData::initWith(char** p1, int& p2)
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 *apuStack_24 [4];
  
  iVar2 = 0;
  ; /* *p2 误引用桩化 */
  uVar1 = (undefined4)(((long long)::atoi((const char *)(*(undefined4 *)((iVar2 + 1) * 4 + p1)))));
  *(undefined4 *)(((int)this) + 0x14) = uVar1;
  iVar2 = 0;
  ; /* *p2 误引用桩化 */
  func_0079e45c(auStack_28,*(undefined4 *)((iVar2 + 1) * 4 + p1),auStack_2c);
  0 /* ctorZero */;
  ((std::vector<int, std::allocator<int>> *)((int)this) + 0x18)->operator=(std::vector<int>());
  ((std::vector<int> *)apuStack_24)->~vector();
  func_0079e2bc(auStack_28);
  iVar2 = 0;
  ; /* *p2 误引用桩化 */
  func_0079e45c(auStack_28,*(undefined4 *)((iVar2 + 1) * 4 + p1),auStack_2c);
  0 /* ctorZero */;
  ((std::vector<int, std::allocator<int>> *)((int)this) + 0x24)->operator=(std::vector<int>());
  ((std::vector<int> *)apuStack_24)->~vector();
  func_0079e2bc(auStack_28);
  iVar2 = 0;
  ; /* *p2 误引用桩化 */
  func_0079e2dc(((int)this) + 0x30,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = 0;
  ; /* *p2 误引用桩化 */
  func_0079e2dc(((int)this) + 0x34,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = 0;
  ; /* *p2 误引用桩化 */
  func_0079e2dc(((int)this) + 0x38,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = 0;
  ; /* *p2 误引用桩化 */
  func_0079e2dc(((int)this) + 0x3c,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = 0;
  ; /* *p2 误引用桩化 */
  func_0079e2dc(((int)this) + 0x40,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = 0;
  ; /* *p2 误引用桩化 */
  func_0079e45c(auStack_28,*(undefined4 *)((iVar2 + 1) * 4 + p1),auStack_2c);
  0 /* ctorZero */;
  func_0079e2bc(auStack_28);
  ; /* *p2 误引用桩化 */
  ; /* _M_range_check 桩化 */
  *(char *)(((int)this) + 0x44) = (char)*apuStack_24[0];
  ; /* range_check 桩化 */
  *(char *)(((int)this) + 0x45) = (char)apuStack_24[0][1];
  ; /* range_check 桩化 */
  *(char *)(((int)this) + 0x46) = (char)apuStack_24[0][2];
  ((std::vector<int> *)apuStack_24)->~vector();
  return;
}

void GiftItemData::setItemNum(std::vector<int, std::allocator<int>> p1)
{
  ((std::vector<int, std::allocator<int>> *)this) ->operator=(std::vector<int>());
  return;
}

void GiftItemData::setItems(std::vector<int, std::allocator<int>> p1)
{
  ((std::vector<int, std::allocator<int>> *)this) ->operator=(std::vector<int>());
  return;
}

int GiftItemData::getItemNum() const
{
  undefined4 p2 = 0;

  ; /* vector 构造垃圾桩化 */
  return 0;
}

int GiftItemData::getItems() const
{
  undefined4 p2 = 0;

  ; /* vector 构造垃圾桩化 */
  return 0;
}

undefined8 GiftItemData::addItems(int p1, int p2)
{
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = (undefined4)(p2);
  uStack_c = (undefined4)(p1);
  ((std::vector<int, std::allocator<int>> *)((int)this) + 0x18)->push_back(*(int *)&uStack_c);
  ((std::vector<int, std::allocator<int>> *)((int)this) + 0x24)->push_back(*(int *)&uStack_10);
  return ghidra_CONCAT44(uStack_c,uStack_10);
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void GiftItemData::clearTHItems()
/* DESTROYAUX_V1: 1 处降级 */
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(((int)this) + 0x48));
  (void)0; /* DESTROYAUX 降级 */
  *(undefined4 *)(((int)this) + 0x4c) = uVar1;
  return;
}

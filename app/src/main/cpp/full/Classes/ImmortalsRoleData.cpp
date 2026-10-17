#include "ImmortalsRoleData.h"
#include "CCNotificationCenter.h"
#include "ImmortalsInfoItemData.h"
#include "DBUtil.h"
#include "DataManager.h"
#include "ImmortalsAttr.h"
#include "ImmortalsRoleItemData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0042f3fc(...);
extern "C" long long func_00442068(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e864(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079eb34(...);
extern "C" unsigned long _DAT_00482160;
extern "C" unsigned long _DAT_00482164;
extern "C" unsigned long _DAT_00482168;
extern "C" unsigned long _DAT_0048216c;
extern "C" unsigned long _DAT_00482170;
extern "C" unsigned long _DAT_00482174;
extern "C" unsigned long _DAT_0048236c;
extern "C" unsigned long _DAT_00482370;
extern "C" unsigned long _DAT_00482374;
extern "C" unsigned long _DAT_00482378;
extern "C" unsigned long _DAT_0048237c;
extern "C" unsigned long _DAT_00482380;
extern "C" unsigned long _DAT_00482384;
extern "C" unsigned long _DAT_00482388;
extern "C" unsigned long _DAT_0048238c;
extern "C" unsigned long _DAT_00482820;
extern "C" unsigned long _DAT_00482824;
extern "C" unsigned long _DAT_00482ac4;
extern "C" unsigned long _DAT_00482ac8;
extern "C" unsigned long _DAT_00482acc;
extern "C" unsigned long _DAT_00482ad0;
extern "C" unsigned long _DAT_00482ad4;
extern "C" unsigned long _DAT_00482ad8;
extern "C" unsigned long _DAT_00482adc;
extern "C" unsigned long _DAT_00482ae0;
extern "C" unsigned long _DAT_00482ae4;
extern "C" unsigned long _DAT_00482ae8;
extern "C" unsigned long _DAT_00482d8c;
extern "C" unsigned long _DAT_00482d90;
extern "C" unsigned long _DAT_00483034;
extern "C" unsigned long _DAT_00483038;
extern "C" unsigned long _DAT_0048303c;
extern "C" unsigned long _DAT_00483040;
extern "C" unsigned long _DAT_00483044;
extern "C" unsigned long _DAT_00483048;
extern "C" unsigned long _DAT_0048304c;
extern "C" unsigned long _DAT_00483050;
extern "C" unsigned long _DAT_004833b0;
extern "C" unsigned long _DAT_004833b4;
extern "C" unsigned long _DAT_004833b8;
extern "C" unsigned long _DAT_004833bc;
extern "C" unsigned long _DAT_004833c0;
extern "C" unsigned long _DAT_004833c4;
extern "C" unsigned long _DAT_004833c8;
extern "C" unsigned long _DAT_004833cc;
extern "C" unsigned long _DAT_004833d0;
extern "C" unsigned long _DAT_004833d4;
extern "C" unsigned long _DAT_004833d8;
extern "C" unsigned long _DAT_004833dc;
extern "C" unsigned long _DAT_004833e0;
extern "C" unsigned long _DAT_004833e4;
extern "C" unsigned long _DAT_004833e8;
extern "C" unsigned long _DAT_004833ec;
extern "C" unsigned long _DAT_004833f0;
extern "C" unsigned long _DAT_004833f4;
extern "C" unsigned long _DAT_004833f8;
extern "C" unsigned long _DAT_004834cc;
extern "C" unsigned long _DAT_00483500;
extern "C" unsigned long _DAT_00483688;
extern "C" unsigned long _DAT_0048368c;
extern "C" unsigned long _DAT_00483690;
extern "C" unsigned long _DAT_00483694;
extern "C" unsigned long _DAT_00483698;
extern "C" unsigned long _DAT_0048369c;
extern "C" unsigned long _DAT_004836a0;
extern "C" unsigned long _DAT_004836a4;
extern "C" unsigned long _DAT_004839f0;
extern "C" unsigned long _DAT_004839f4;
extern "C" unsigned long _DAT_004839f8;
extern "C" unsigned long _DAT_004839fc;
extern "C" unsigned long _DAT_00483a00;
extern "C" unsigned long _DAT_00483a04;
extern "C" unsigned long _DAT_00483a08;
extern "C" unsigned long _DAT_00483a0c;
extern "C" unsigned long _DAT_00483a10;
extern "C" unsigned long _DAT_00483a14;
extern "C" unsigned long _DAT_00483a18;
extern "C" unsigned long _DAT_00483a1c;
extern "C" unsigned long g_00482160;
extern "C" unsigned long g_00482164;
extern "C" unsigned long g_00482168;
extern "C" unsigned long g_0048216c;
extern "C" unsigned long g_00482170;
extern "C" unsigned long g_00482174;
extern "C" unsigned long g_0048236c;
extern "C" unsigned long g_00482370;
extern "C" unsigned long g_00482374;
extern "C" unsigned long g_00482378;
extern "C" unsigned long g_0048237c;
extern "C" unsigned long g_00482380;
extern "C" unsigned long g_00482384;
extern "C" unsigned long g_00482388;
extern "C" unsigned long g_0048238c;
extern "C" unsigned long g_00482820;
extern "C" unsigned long g_00482824;
extern "C" unsigned long g_00482ac4;
extern "C" unsigned long g_00482ac8;
extern "C" unsigned long g_00482acc;
extern "C" unsigned long g_00482ad0;
extern "C" unsigned long g_00482ad4;
extern "C" unsigned long g_00482ad8;
extern "C" unsigned long g_00482adc;
extern "C" unsigned long g_00482ae0;
extern "C" unsigned long g_00482ae4;
extern "C" unsigned long g_00482ae8;
extern "C" unsigned long g_00482d8c;
extern "C" unsigned long g_00482d90;
extern "C" unsigned long g_00483034;
extern "C" unsigned long g_00483038;
extern "C" unsigned long g_0048303c;
extern "C" unsigned long g_00483040;
extern "C" unsigned long g_00483044;
extern "C" unsigned long g_00483048;
extern "C" unsigned long g_0048304c;
extern "C" unsigned long g_00483050;
extern "C" unsigned long g_004833b0;
extern "C" unsigned long g_004833b4;
extern "C" unsigned long g_004833b8;
extern "C" unsigned long g_004833bc;
extern "C" unsigned long g_004833c0;
extern "C" unsigned long g_004833c4;
extern "C" unsigned long g_004833c8;
extern "C" unsigned long g_004833cc;
extern "C" unsigned long g_004833d0;
extern "C" unsigned long g_004833d4;
extern "C" unsigned long g_004833d8;
extern "C" unsigned long g_004833dc;
extern "C" unsigned long g_004833e0;
extern "C" unsigned long g_004833e4;
extern "C" unsigned long g_004833e8;
extern "C" unsigned long g_004833ec;
extern "C" unsigned long g_004833f0;
extern "C" unsigned long g_004833f4;
extern "C" unsigned long g_004833f8;
extern "C" unsigned long g_004834cc;
extern "C" unsigned long g_00483500;
extern "C" unsigned long g_00483688;
extern "C" unsigned long g_0048368c;
extern "C" unsigned long g_00483690;
extern "C" unsigned long g_00483694;
extern "C" unsigned long g_00483698;
extern "C" unsigned long g_0048369c;
extern "C" unsigned long g_004836a0;
extern "C" unsigned long g_004836a4;
extern "C" unsigned long g_004839f0;
extern "C" unsigned long g_004839f4;
extern "C" unsigned long g_004839f8;
extern "C" unsigned long g_004839fc;
extern "C" unsigned long g_00483a00;
extern "C" unsigned long g_00483a04;
extern "C" unsigned long g_00483a08;
extern "C" unsigned long g_00483a0c;
extern "C" unsigned long g_00483a10;
extern "C" unsigned long g_00483a14;
extern "C" unsigned long g_00483a18;
extern "C" unsigned long g_00483a1c;
void ImmortalsRoleData::getAllData()
{
  return;
}

undefined4 ImmortalsRoleData::getSellPrice(ImmortalsRoleItemData* p1)
{
  return 0;
}



ImmortalsRoleData::~ImmortalsRoleData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}


ImmortalsRoleData::ImmortalsRoleData()
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(((int)this) + 4);
  func_0079e34c(iVar1,0,0x10);
  *(undefined4 *)(((int)this) + 0x14) = 0;
  *(int *)(((int)this) + 0xc) = iVar1;
  *(int *)(((int)this) + 0x10) = iVar1;
  *(undefined4 *)(((int)this) + 0x18) = 0;
  *(undefined4 *)(((int)this) + 0x1c) = 0;
  *(undefined4 *)(((int)this) + 0x20) = 0;
  ((std::map<int, ImmortalsRoleItemData*, std::less<int>, std::allocator<std::pair<int const, ImmortalsRoleItemData*>>> *)((int)this))->erase(0);
  *(int *)(((int)this) + 0xc) = iVar1;
  *(undefined4 *)(((int)this) + 8) = 0;
  *(int *)(((int)this) + 0x10) = iVar1;
  *(undefined4 *)(((int)this) + 0x14) = 0;
  *(undefined4 *)(((int)this) + 0x1c) = *(undefined4 *)(((int)this) + 0x18);
  ImmortalsRoleData::initData();
  return;
}

// ===== 修复: 补回被误删的函数占位 (9) =====
void ImmortalsRoleData::upgrace(ImmortalsRoleItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ImmortalsRoleData::refine(ImmortalsRoleItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ImmortalsRoleData::initData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ImmortalsRoleData::removeItem(ImmortalsRoleItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int ImmortalsRoleData::sortItems()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void ImmortalsRoleData::insertItemData(ImmortalsInfoItemData* p1, int p2, std::string p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ImmortalsRoleData::addItem(ImmortalsInfoItemData* p1, int p2, std::string p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ImmortalsRoleData::unEquip(ImmortalsRoleItemData* p1)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [8];
  
  puVar1 = (undefined4 *)func_0079e2fc(0x40);
  0 /* ctorZero */;
  *puVar1 = *(undefined4 *)(p1 + 4);
  puVar1[0xe] = *(undefined4 *)(p1 + 0xc);
  puVar1[0xf] = *(undefined4 *)(p1 + 0x10);
  uVar2 = (undefined4)(*(undefined4 *)(p1 + 0x14));
  ((ImmortalsAttr *)this)->ToString();
  ImmortalsRoleData::addItem((ImmortalsInfoItemData*)puVar1, uVar2, (std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  ImmortalsRoleData::removeItem((ImmortalsRoleItemData*)p1);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)"EVENT_IMMORTALS_CHANGE");
  return;
}

void ImmortalsRoleData::equip(ImmortalsRoleItemData* p1, std::string p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

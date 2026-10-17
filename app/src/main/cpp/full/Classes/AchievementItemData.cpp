#include "AchievementItemData.h"
#include "CCObject.h"
using namespace cocos2d;
#include <new>   // ghost_fix.js 自动补齐
// 兜底声明
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0046796e(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e6ac(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079ea54(...);
extern "C" unsigned long g_00467a00;
extern "C" unsigned long g_00467ab0;
extern "C" unsigned long g_00467b68;
extern "C" unsigned long g_00467b70;
extern "C" unsigned long g_00467b6c;
extern "C" unsigned long g_00467b74;
extern "C" unsigned long g_00467b78;
extern "C" unsigned long g_00467db8;
extern "C" unsigned long g_00468118;
extern "C" unsigned long g_0046811c;
extern "C" unsigned long g_00468120;

// R14: 重置为纯占位形态(原恢复体存在编译错误, 待后续逐函数修复)

int AchievementItemData::getID() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void AchievementItemData::setID(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

int AchievementItemData::getType() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void AchievementItemData::setType(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

bool AchievementItemData::getISGet() const
{
  return *(undefined1 *)(((int)this) + 0x40);
}

void AchievementItemData::setISGet(bool p1)
{
  *(undefined1 *)(((int)this) + 0x40) = p1;
  return;
}

bool AchievementItemData::getISComplete() const
{
  return *(undefined1 *)(((int)this) + 0x41);
}

void AchievementItemData::setISComplete(bool p1)
{
  *(undefined1 *)(((int)this) + 0x41) = p1;
  return;
}

long long AchievementItemData::getRealNum() const
{
  return *(undefined8 *)(((int)this) + 0x48);
}

void AchievementItemData::setRealNum(long long p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  *(undefined4 *)(((int)this) + 0x48) = p3;
  *(undefined4 *)(((int)this) + 0x4c) = p4;
  return;
}

void AchievementItemData::setDes(std::string p1)
{
  func_0079e52c(((int)this) + 0x24);
  return;
}

void AchievementItemData::setIcon(std::string p1)
{
  func_0079e52c(((int)this) + 0x20);
  return;
}

void AchievementItemData::setName(std::string p1)
{
  func_0079e52c(((int)this) + 0x1c);
  return;
}

std::string AchievementItemData::getDes() const
{ return *(std::string *)(((int)this) + 0x24); }

std::string AchievementItemData::getIcon() const
{ return *(std::string *)(((int)this) + 0x20); }

std::string AchievementItemData::getName() const
{ return *(std::string *)(((int)this) + 0x1c); }

int AchievementItemData::getValues() const
{
  undefined4 p2 = 0;

  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(p2 + 0x2c) - *(int *)(p2 + 0x28);
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  iVar1 = 0;
  if (iVar2 >> 2 != 0) {
    if (g_00467a00 < (uint)(iVar2 >> 2)) {
      func_0079e5bc();
    }
    iVar1 = ((long long)::operator new((size_t)(iVar2)));
  }
  *(int *)this = iVar1;
  *(int *)((int)this + 4*(1)) = iVar1;
  *(int *)((int)this + 4*(2)) = iVar1 + iVar2;
  iVar1 = func_0046796e(*(undefined4 *)(p2 + 0x28),*(undefined4 *)(p2 + 0x2c));
  *(int *)((int)this + 4*(1)) = iVar1;
  return ((int)this);
}

bool AchievementItemData::init()
{
  return 1;
}

AchievementItemData::~AchievementItemData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  if (*(int *)((int)this + 4*(0xd)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0xd)))));
  }
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 10)->~vector();
  func_0079e2bc(((int)this) + 9);
  func_0079e2bc(((int)this) + 8);
  func_0079e2bc(((int)this) + 7);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

AchievementItemData::AchievementItemData()
{
  int iVar1;
  int iVar2;
  
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar1 = g_00467b70;
  iVar2 = *(int *)(g_00467b6c + 0x467ae6) + 0xc;
  *(int *)((int)this + 4*(7)) = iVar2;
  *(int *)((int)this + 4*(8)) = iVar2;
  *(int *)((int)this + 4*(9)) = iVar2;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  *(int *)((int)this + 4*(0xf)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  func_0079e2dc(((int)this) + 7,iVar1 + 0x467b0a);
  func_0079e2dc(((int)this) + 8,g_00467b74 + 0x467b18);
  func_0079e2dc(((int)this) + 9,g_00467b78 + 0x467b22);
  *(int *)((int)this + 4*(0x12)) = 0;
  *(int *)((int)this + 4*(0x13)) = 0;
  *(undefined1 *)(((int)this) + 0x10) = 0;
  *(undefined1 *)((int)((int)this) + 0x41) = 0;
  return;
}

void AchievementItemData::setValues(std::vector<std::string, std::allocator<std::string>> p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void AchievementItemData::initWith(char** p1, int& p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void AchievementItemData::setRewards(std::vector<int, std::allocator<int>> p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int AchievementItemData::getRewards() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void AchievementItemData::updateStatus()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

#include "ZhancheData.h"
#include "BLDataForwards.h"
#include "GetChariotInfo.h"
#include <new>   // ghost_fix.js 自动补齐
// 兜底声明
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079eab4(...);
extern "C" unsigned long g_004bc52c;
extern "C" unsigned long g_004bc530;
extern "C" unsigned long g_004bc534;
extern "C" unsigned long g_004bccac;
extern "C" unsigned long g_004bccb0;

// R14: 重置为纯占位形态(原恢复体存在编译错误, 待后续逐函数修复)

int ZhancheData::getChariotNum() const
{
  return *(undefined4 *)(((int)this) + 4);
}

void ZhancheData::setChariotNum(int p1)
{
  *(undefined4 *)(((int)this) + 4) = p1;
  return;
}

int ZhancheData::getUserOwnChariotRank() const
{
  return *(undefined4 *)(((int)this) + 0xc);
}

void ZhancheData::setUserOwnChariotRank(int p1)
{
  *(undefined4 *)(((int)this) + 0xc) = p1;
  return;
}

undefined4 ZhancheData::getpastsearch() const
{
  return *(undefined4 *)(((int)this) + 0x58);
}

void ZhancheData::setpastsearch(int p1)
{
  *(undefined4 *)(((int)this) + 0x58) = p1;
  return;
}

int ZhancheData::getMyUserZCInfo() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void ZhancheData::setMyUserZCInfo(UserZCInfo * p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;
  undefined4 p5 = 0;

  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined4 *)(((int)this) + 0x74) = (undefined4)(intptr_t)p1;
  *(undefined4 *)(((int)this) + 0x78) = p3;
  *(undefined4 *)(((int)this) + 0x7c) = p4;
  *(undefined4 *)(((int)this) + 0x80) = p5;
                    /* WARNING: Could not recover jumptable at 0x004bc26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

void ZhancheData::setUserName(std::string * p1)
{
  func_0079e52c(((int)this) + 8);
  return;
}

void ZhancheData::setSearchZhanCheInfo(GetexploreChariotInfo * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ZhancheData::setMyFlightResult(FlightResult * p1)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(int *)p1);
  *(undefined4 *)(((int)this) + 0x84) = uVar1;
  func_0079e52c(((int)this) + 0x88,p1 + 1,uVar1,(undefined4 *)(((int)this) + 0x84),p4);
  return;
}

std::string ZhancheData::getUserName() const
{ return *(std::string *)(((int)this) + 8); }

int ZhancheData::getMyFlightResult() const
{
  undefined4 p2 = 0;

  *(int *)this = *(undefined4 *)(p2 + 0x84);
  func_0079e53c(((int)this) + 1,p2 + 0x88);
  return ((int)this);
}

int ZhancheData::getSearchZhanCheInfo() const
{
  undefined4 p2 = 0;

  *(int *)this = *(undefined4 *)(p2 + 0x5c);
  *(int *)((int)this + 4*(1)) = *(undefined4 *)(p2 + 0x60);
  *(int *)((int)this + 4*(2)) = *(undefined4 *)(p2 + 100);
  *(int *)((int)this + 4*(3)) = *(undefined4 *)(p2 + 0x68);
  *(int *)((int)this + 4*(4)) = *(undefined4 *)(p2 + 0x6c);
  func_0079e53c(((int)this) + 5,p2 + 0x70);
  return ((int)this);
}

void ZhancheData::clearData()
{
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x1c)->clear();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x28)->clear();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x34)->clear();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x40)->clear();
  ((std::vector<zcRankInfo, std::allocator<zcRankInfo>> *)((int)this) + 0x4c)->clear();
  return;
}

ZhancheData::~ZhancheData()
{
  int iVar1;
  int iVar2;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 0x22);
  func_0079e2bc(((int)this) + 0x1c);
  iVar2 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x14)));
  for (iVar1 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x13))); iVar1 != iVar2; iVar1 = iVar1 + 8) {
    func_0079e2bc(iVar1);
  }
  if (*(int *)((int)this + 4*(0x13)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x13)))));
  }
  ((GetChariotInfo *)((int)this) + 4)->~GetChariotInfo();
  func_0079e2bc(((int)this) + 2);
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_004bc534 + 0x4bc528) = 0;
  return;
}

void ZhancheData::setMyGetChariotInfo(GetChariotInfo * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int ZhancheData::getMyGetChariotInfo() const
{
  0 /* ctorZero */;
  return ((int)this);
}

void ZhancheData::GetDataFromNet(URL_ZC * p1, bool p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

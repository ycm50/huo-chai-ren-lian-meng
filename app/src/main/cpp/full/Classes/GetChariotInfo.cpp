#include "GetChariotInfo.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004bc48c;
extern "C" unsigned long _DAT_004bc490;
extern "C" unsigned long _DAT_004bc494;
extern "C" unsigned long g_004bc48c;
extern "C" unsigned long g_004bc490;
extern "C" unsigned long g_004bc494;
GetChariotInfo::GetChariotInfo()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  int iVar2;
  
  iVar1 = g_004bc490;
  iVar2 = *(int *)(g_004bc48c + 0x4bc41e) + 0xc;
  *(int *)this = iVar2;
  *(int *)((int)this + 4*(2)) = iVar2;
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(4)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  func_0079e2dc(((int)this),iVar1 + 0x4bc42e,p3,0,p4);
  func_0079e2dc(((int)this) + 2,g_004bc494 + 0x4bc452);
  *(int *)((int)this + 4*(1)) = 1;
  return;
}

GetChariotInfo::~GetChariotInfo()
{
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x30)->~vector();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x24)->~vector();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x18)->~vector();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0xc)->~vector();
  func_0079e2bc(((int)this) + 8);
  func_0079e2bc(((int)this));
  return;
}

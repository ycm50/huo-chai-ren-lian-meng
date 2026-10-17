#include "StringEx.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e954(...);
extern "C" long long func_0079eaa4(...);
extern "C" long long func_0079eb54(...);
extern "C" unsigned long UNK_005f34e8;
extern "C" unsigned long UNK_005f351c;
extern "C" unsigned long _UNK_005f35bc;
extern "C" unsigned long _UNK_005f35c0;
extern "C" unsigned long g_005f34e8;
extern "C" unsigned long g_005f351c;
extern "C" unsigned long g_005f35bc;
extern "C" unsigned long g_005f35c0;

// ===== 修复: 补回被误删的函数占位 (1) =====
bool StringEx::SerachStr(char const* p1, char const* p2, char const* p3)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  bVar6 = (undefined4)(intptr_t)(false);
  iStack_24 = 0;
  iStack_20 = 0;
  uStack_1c = (undefined4)(0);
  iVar5 = (undefined4)(intptr_t)(iStack_24);
  iVar3 = (undefined4)(intptr_t)(iStack_20);
  if (((int)this) == 0) {
    bVar6 = (undefined4)(intptr_t)(false);
  }
  else if ((int)(intptr_t)(int)(intptr_t)p1 == 0) {
    bVar6 = (undefined4)(intptr_t)(false);
  }
  else {
    uVar1 = (undefined4)(func_0079e954());
    iVar2 = (undefined4)(intptr_t)(func_0079e954(p1));
    iVar5 = (undefined4)(intptr_t)(iStack_24);
    iVar3 = (undefined4)(intptr_t)(iStack_20);
    if (uVar1 == 0) {
      bVar6 = (undefined4)(intptr_t)(false);
    }
    else if (iVar2 != 0) {
      iStack_28 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005f34e8 + (intptr_t)(g_005f35bc))) + 0xc);
      func_0079e934(&iStack_28,uVar1);
      uVar4 = (undefined4)(0);
      while (uVar4 < uVar1) {
        iVar3 = (undefined4)(intptr_t)(func_0079e60c((undefined1 *)(((int)this) + uVar4),p1,iVar2));
        if (iVar3 == 0) {
          ((std::vector<std::string, std::allocator<std::string>> *)(&iStack_24))->push_back(*(std::string const*)&iStack_28);
          func_0079e2dc(&iStack_28,(unsigned char *)((char *)&g_005f351c + (intptr_t)(g_005f35c0)));
          uVar4 = (undefined4)(uVar4 + iVar2);
        }
        else {
          func_0079eaa4(&iStack_28,*(undefined1 *)(((int)this) + uVar4));
          uVar4 = (undefined4)(uVar4 + 1);
        }
        if (uVar1 == uVar4) {
          ((std::vector<std::string, std::allocator<std::string>> *)(&iStack_24))->push_back(*(std::string const*)&iStack_28);
          uVar4 = (undefined4)(uVar1);
        }
      }
      func_0079e2bc(&iStack_28);
      iVar3 = func_0079eb54(*(undefined4 *)(((iStack_20 - iStack_24 >> 2) + -1) * 4 + iStack_24),
                              p2);
      bVar6 = (undefined4)(intptr_t)(iVar3 != 0);
      iVar5 = (undefined4)(intptr_t)(iStack_24);
      iVar3 = (undefined4)(intptr_t)(iStack_20);
    }
  }
  for (; iVar5 != iVar3; iVar5 = iVar5 + 4) {
    func_0079e2bc(iVar5);
  }
  if (iStack_24 != 0) {
    func_0079e2cc();
  }
  return bVar6;
}

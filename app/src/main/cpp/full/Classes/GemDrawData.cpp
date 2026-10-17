#include "GemDrawData.h"
#include "CCNotificationCenter.h"
#include "GemDrawItemInfo.h"
#include "BLLanguage.h"
#include "GemDrawDataGet.h"
#include "GemDrawInfo.h"
#include "PlatformHelp.h"
#include "Toast.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e33c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e38c(...);
extern "C" long long func_0079e39c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e954(...);
extern "C" long long func_0079eaa4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0047abce;
extern "C" unsigned long UNK_0047abd2;
extern "C" unsigned long _DAT_00479e58;
extern "C" unsigned long _DAT_00479e5c;
extern "C" unsigned long _DAT_00479e60;
extern "C" unsigned long _DAT_0047a274;
extern "C" unsigned long _DAT_0047a278;
extern "C" unsigned long _DAT_0047a27c;
extern "C" unsigned long _DAT_0047a280;
extern "C" unsigned long _DAT_0047a284;
extern "C" unsigned long _DAT_0047a288;
extern "C" unsigned long _DAT_0047a28c;
extern "C" unsigned long _DAT_0047a290;
extern "C" unsigned long _DAT_0047a294;
extern "C" unsigned long _DAT_0047a89c;
extern "C" unsigned long _DAT_0047a8a0;
extern "C" unsigned long _DAT_0047a8a4;
extern "C" unsigned long _DAT_0047a8f4;
extern "C" unsigned long _DAT_0047a8f8;
extern "C" unsigned long _DAT_0047a8fc;
extern "C" unsigned long _DAT_0047a900;
extern "C" unsigned long _DAT_0047a904;
extern "C" unsigned long _DAT_0047a908;
extern "C" unsigned long _DAT_0047a90c;
extern "C" unsigned long _DAT_0047a968;
extern "C" unsigned long _DAT_0047a96c;
extern "C" unsigned long _DAT_0047a970;
extern "C" unsigned long _DAT_0047a974;
extern "C" unsigned long _DAT_0047a978;
extern "C" unsigned long _DAT_0047a97c;
extern "C" unsigned long _DAT_0047a980;
extern "C" unsigned long _DAT_0047a984;
extern "C" unsigned long _DAT_0047aaa8;
extern "C" unsigned long _DAT_0047aaac;
extern "C" unsigned long _DAT_0047aab0;
extern "C" unsigned long _DAT_0047aab4;
extern "C" unsigned long _DAT_0047aab8;
extern "C" unsigned long _DAT_0047abc4;
extern "C" unsigned long _DAT_0047abc8;
extern "C" unsigned long _DAT_0047abcc;
extern "C" unsigned long _DAT_0047abd0;
extern "C" unsigned long _DAT_0047aebc;
extern "C" unsigned long _DAT_0047aec0;
extern "C" unsigned long _DAT_0047b38c;
extern "C" unsigned long _DAT_0047b390;
extern "C" unsigned long _DAT_0047b394;
extern "C" unsigned long g_00479e58;
extern "C" unsigned long g_00479e5c;
extern "C" unsigned long g_00479e60;
extern "C" unsigned long g_0047a274;
extern "C" unsigned long g_0047a278;
extern "C" unsigned long g_0047a27c;
extern "C" unsigned long g_0047a280;
extern "C" unsigned long g_0047a284;
extern "C" unsigned long g_0047a288;
extern "C" unsigned long g_0047a28c;
extern "C" unsigned long g_0047a290;
extern "C" unsigned long g_0047a294;
extern "C" unsigned long g_0047a89c;
extern "C" unsigned long g_0047a8a0;
extern "C" unsigned long g_0047a8a4;
extern "C" unsigned long g_0047a8f4;
extern "C" unsigned long g_0047a8f8;
extern "C" unsigned long g_0047a8fc;
extern "C" unsigned long g_0047a900;
extern "C" unsigned long g_0047a904;
extern "C" unsigned long g_0047a908;
extern "C" unsigned long g_0047a90c;
extern "C" unsigned long g_0047a968;
extern "C" unsigned long g_0047a96c;
extern "C" unsigned long g_0047a970;
extern "C" unsigned long g_0047a974;
extern "C" unsigned long g_0047a978;
extern "C" unsigned long g_0047a97c;
extern "C" unsigned long g_0047a980;
extern "C" unsigned long g_0047a984;
extern "C" unsigned long g_0047aaa8;
extern "C" unsigned long g_0047aaac;
extern "C" unsigned long g_0047aab0;
extern "C" unsigned long g_0047aab4;
extern "C" unsigned long g_0047aab8;
extern "C" unsigned long g_0047abc4;
extern "C" unsigned long g_0047abc8;
extern "C" unsigned long g_0047abcc;
extern "C" unsigned long g_0047abce;
extern "C" unsigned long g_0047abd0;
extern "C" unsigned long g_0047abd2;
extern "C" unsigned long g_0047aebc;
extern "C" unsigned long g_0047aec0;
extern "C" unsigned long g_0047b38c;
extern "C" unsigned long g_0047b390;
extern "C" unsigned long g_0047b394;
GemDrawData::~GemDrawData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

GemDrawData::GemDrawData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GemDrawData::ChangeNextVector()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar3 = *(int **)(((int)this) + 0x2c);
  do {
    piVar4 = piVar3;
    if (piVar4 == *(int **)(((int)this) + 0x30)) goto LAB_0047a872;
    if (*(int *)(((int)this) + 0x54) == 0) {
      iVar5 = *(int *)(((int)this) + 0x5c);
    }
    else {
      iVar5 = *(int *)(((int)this) + 0x60);
    }
    0 /* ctorZero */;
    iVar1 = g_0047a8a0;
    piVar3 = piVar4 + 6;
  } while (*piVar4 != iVar5);
  if (*(int *)(((int)this) + 0x54) == 0) {
    *(int *)(((int)this) + 0x5c) = piVar4[1];
    0 /* ctorZero */;
  }
  else {
    *(int *)(((int)this) + 0x60) = piVar4[1];
  }
LAB_0047a872:
  for (piVar3 = *(int **)(((int)this) + 8); piVar3 != *(int **)(((int)this) + 0xc); piVar3 = piVar3 + 9) {
    if (*piVar3 == *(int *)(((int)this) + 0x54)) {
      piVar3[1] = piVar3[1] + -1;
    }
  }
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)((intptr_t)"MSG_UPDATEGEMDRAW"));
  return;
}

void GemDrawData::PrintGemDrawinfo(GemDrawInfo * p1)
{
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  return;
}

void GemDrawData::PrintGemDrawIteminfo(GemDrawItemInfo * p1)
{
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  0 /* ctorZero */;
  return;
}

undefined4 GemDrawData::Getgemdrawinfo(int p1)
{
  undefined4 p3 = 0;

  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = g_0047aaa8;
  if (p3 == 10) {
    p3 = *(int *)(p1 + 0x54);
  }
  piVar2 = *(int **)(p1 + 8);
  do {
    piVar4 = piVar2;
    if (piVar4 == *(int **)(p1 + 0xc)) {
      if ((*(uint *)(((intptr_t)"CC: (GNU) 4.4.3")) & 1) == 0) {
        iVar5 = ((intptr_t)"CC: (GNU) 4.4.3");
        iVar3 = func_0079e33c(iVar5);
        if (iVar3 != 0) {
          iVar3 = *(int *)(g_0047aaac + 0x47aa6e);
          *(undefined4 *)(iVar1 + 0x47aa9c) = 0;
          *(undefined4 *)(iVar1 + 0x47aaa0) = 0;
          *(int *)(iVar1 + 0x47aa98) = iVar3 + 0xc;
          *(undefined4 *)(iVar1 + 0x47aaa4) = 0;
          *(undefined4 *)(iVar1 + 0x47aa84) = 0xffffffff;
          *(undefined4 *)(iVar1 + 0x47aa88) = 0;
          func_0079e38c(iVar5);
          func_0079e39c(iVar1 + 0x47aa84,*(undefined4 *)(g_0047aab0 + 0x47aa90),
                          g_0047aab4 + 0x47aa94);
        }
      }
      piVar4 = (int *)(((intptr_t)"(GNU) 4.4.3"));
      break;
    }
    piVar2 = piVar4 + 9;
  } while (*piVar4 != p3);
  0 /* ctorZero */;
  return ((int)this);
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void GemDrawData::Setgemdrawinfoidandinfo(GemDrawInfo * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 GemDrawData::Setviewstatus(int p1)
{
  undefined4 p3 = 0;

  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = (undefined4)(p1);
  uStack_8 = (undefined4)(p3);
  ((std::vector<int, std::allocator<int>> *)(((int)this) + 0x44))->push_back(*(int const*)&uStack_c);
  return ghidra_CONCAT44(uStack_c,((int)this));
}

undefined4 GemDrawData::Getgemdrawallitemid(int p1)
{
  undefined4 p3 = 0;

  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  
  for (piVar3 = *(int **)(p1 + 0x2c); piVar3 != *(int **)(p1 + 0x30); piVar3 = piVar3 + 6)
  {
    if (p3 == -1) {
      if (piVar3[2] == *(int *)(p1 + 0x54)) goto LAB_0047abbc;
    }
    else if (*piVar3 == p3) goto LAB_0047abbc;
  }
  if (*(undefined4 **)(p1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(p1 + 4))();
  }
  iVar1 = (undefined4)(intptr_t)(g_0047abc4);
  if ((*(uint *)((unsigned char *)((char *)&g_0047abce + (intptr_t)(g_0047abc4))) & 1) == 0) {
    puVar4 = (unsigned char *)((char *)&g_0047abce + (intptr_t)(g_0047abc4));
    iVar2 = (undefined4)(intptr_t)(func_0079e33c(puVar4));
    if (iVar2 != 0) {
      *(undefined4 *)(iVar1 + 0x47abde) = 0;
      *(undefined4 *)(iVar1 + 0x47abe2) = 0;
      *(undefined4 *)(iVar1 + 0x47abe6) = 0;
      *(undefined4 *)(&g_0047abd2 + iVar1) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x47abd6) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x47abda) = 0xffffffff;
      func_0079e38c(puVar4);
      func_0079e39c(&g_0047abd2 + iVar1,*(undefined4 *)(g_0047abc8 + 0x47abae),
                      g_0047abcc + 0x47abb2);
    }
  }
  piVar3 = (int *)(((intptr_t)") 4.4.3"));
LAB_0047abbc:
  0 /* ctorZero */;
  return ((int)this);
}

void GemDrawData::Setgemdrawalliteminfo(GemDrawItemInfo * p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GemDrawData::GetDataFromNet(URL_GEMDRAW * p1, int p2, bool p3, bool p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GemDrawData::Setgemdrawinfo(GemDrawInfo * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GemDrawData::Setgemdrawallitemid(std::vector<int, std::allocator<int>> * p1, bool p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

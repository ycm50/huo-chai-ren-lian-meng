#include "TalentDrawData.h"
#include "BLLanguage.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "PlatformHelp.h"
#include "TalentDrawDataGet.h"
#include "Toast.h"
#include "UserData.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e64c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long func_0079e924(...);
extern "C" unsigned long _DAT_004af474;
extern "C" unsigned long _DAT_004af478;
extern "C" unsigned long _DAT_004af47c;
extern "C" unsigned long _DAT_004af4d8;
extern "C" unsigned long _DAT_004af4dc;
extern "C" unsigned long _DAT_004af4e0;
extern "C" unsigned long _DAT_004af4e4;
extern "C" unsigned long _DAT_004af564;
extern "C" unsigned long _DAT_004af568;
extern "C" unsigned long _DAT_004af56c;
extern "C" unsigned long _DAT_004afaa8;
extern "C" unsigned long _DAT_004afaac;
extern "C" unsigned long _DAT_004afd5c;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_004af474;
extern "C" unsigned long g_004af478;
extern "C" unsigned long g_004af47c;
extern "C" unsigned long g_004af4d8;
extern "C" unsigned long g_004af4dc;
extern "C" unsigned long g_004af4e0;
extern "C" unsigned long g_004af4e4;
extern "C" unsigned long g_004af564;
extern "C" unsigned long g_004af568;
extern "C" unsigned long g_004af56c;
extern "C" unsigned long g_004afaa8;
extern "C" unsigned long g_004afaac;
extern "C" unsigned long g_004afd5c;
void TalentDrawData::setcurnum(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [4];
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  *(undefined4 *)(((int)this) + 8) = p1;
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))());
  func_0079e45c(auStack_e0,"talentnum",auStack_e8);
  uVar3 = (undefined4)(*(undefined4 *)(((int)this) + 8));
  func_0079e43c(auStack_d4,0x18);
  func_0079e44c(auStack_cc,uVar3);
  func_0079e45c(auStack_d8,g_004af478 + 0x4af3fe,auStack_dc);
  func_0079e46c(auStack_e4,auStack_c8);
  func_0079e2bc(auStack_d8);
  func_0079e47c(auStack_d4);
  func_0079e45c(auStack_dc,"TEXT",auStack_d4);
  ((UserData *)uVar2)->updateData((std::string *)(char *)auStack_e0, (std::string *)(char *)auStack_e4, (std::string *)(char *)auStack_dc);
  func_0079e2bc(auStack_dc);
  func_0079e2bc(auStack_e4);
  func_0079e2bc(auStack_e0);
  return;
}

void TalentDrawData::CheckItemInfo(OneTalentDraw * p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;
  undefined4 p5 = 0;
  undefined4 p6 = 0;
  undefined4 p7 = 0;

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = (undefined4)(((DataCacheManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((DataCacheManager *)(uVar1))->getItemDataByID(p3)),(intptr_t)0);
  uVar3 = (undefined4)(1);
  if (iVar2 != 0) {
    iVar2 = (undefined4)(intptr_t)(func_0079e64c(p5,p6,g_004af4d8,g_004af4dc,p4));
    uVar3 = (undefined4)(1);
    if (iVar2 == 0) {
      iVar2 = (undefined4)(intptr_t)(func_0079e924(p5,p6,g_004af4e0,g_004af4e4));
      uVar3 = (undefined4)(1);
      if (iVar2 == 0) {
        uVar3 = (undefined4)((p7 - 1 | p7) >> 0x1f);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004af4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}

TalentDrawData::~TalentDrawData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TalentDrawData::GetDataFromNet(int p1, bool p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TalentDrawData::SetItemInfo(OneTalentDraw * p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TalentDrawData::SetOtherInfo(OtherTalentDraw * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

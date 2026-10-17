#include "MineData.h"
#include "CCObject.h"
#include "CCNotificationCenter.h"
#include "BLLanguage.h"
#include "MineHttp.h"
#include "MineitemData.h"
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
extern "C" unsigned long g_0048f00c;
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e33c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e38c(...);
extern "C" long long func_0079e39c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e6f4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0048f83e;
extern "C" unsigned long UNK_0048f856;
extern "C" unsigned long _DAT_0048efcc;
extern "C" unsigned long _DAT_0048f194;
extern "C" unsigned long _DAT_0048f198;
extern "C" unsigned long _DAT_0048f19c;
extern "C" unsigned long _DAT_0048f1a0;
extern "C" unsigned long _DAT_0048f1a4;
extern "C" unsigned long _DAT_0048f1a8;
extern "C" unsigned long _DAT_0048f1ac;
extern "C" unsigned long _DAT_0048f1b0;
extern "C" unsigned long _DAT_0048f1b4;
extern "C" unsigned long _DAT_0048f1b8;
extern "C" unsigned long _DAT_0048f1bc;
extern "C" unsigned long _DAT_0048f1c0;
extern "C" unsigned long _DAT_0048f1c4;
extern "C" unsigned long _DAT_0048f1c8;
extern "C" unsigned long _DAT_0048f1cc;
extern "C" unsigned long _DAT_0048f1d0;
extern "C" unsigned long _DAT_0048f1d4;
extern "C" unsigned long _DAT_0048f1d8;
extern "C" unsigned long _DAT_0048f1dc;
extern "C" unsigned long _DAT_0048f1e0;
extern "C" unsigned long _DAT_0048f1e4;
extern "C" unsigned long _DAT_0048f1e8;
extern "C" unsigned long _DAT_0048f1ec;
extern "C" unsigned long _DAT_0048f1f0;
extern "C" unsigned long _DAT_0048f1f4;
extern "C" unsigned long _DAT_0048f1f8;
extern "C" unsigned long _DAT_0048f1fc;
extern "C" unsigned long _DAT_0048f200;
extern "C" unsigned long _DAT_0048f204;
extern "C" unsigned long _DAT_0048f208;
extern "C" unsigned long _DAT_0048f510;
extern "C" unsigned long _DAT_0048f84c;
extern "C" unsigned long _DAT_0048f850;
extern "C" unsigned long _DAT_0048f854;
extern "C" unsigned long _DAT_0048f858;
extern "C" unsigned long _DAT_0048f85c;
extern "C" unsigned long _DAT_0048f860;
extern "C" unsigned long _DAT_0048f864;
extern "C" unsigned long _DAT_0048f9dc;
extern "C" unsigned long _DAT_0048f9e0;
extern "C" unsigned long _DAT_0048f9e4;
extern "C" unsigned long _DAT_0048fad8;
extern "C" unsigned long _DAT_0048fadc;
extern "C" unsigned long _DAT_0048fbfc;
extern "C" unsigned long _DAT_0048fc00;
extern "C" unsigned long _DAT_0048fc04;
extern "C" unsigned long _DAT_0048fc08;
extern "C" unsigned long _DAT_00490020;
extern "C" unsigned long _DAT_00490024;
extern "C" unsigned long _DAT_00490028;
extern "C" unsigned long _DAT_004900c4;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r1_01;
extern "C" unsigned long extraout_r1_02;
extern "C" unsigned long extraout_r1_03;
extern "C" unsigned long extraout_r1_04;
extern "C" unsigned long extraout_r1_05;
extern "C" unsigned long extraout_r1_06;
extern "C" unsigned long extraout_r1_07;
extern "C" unsigned long extraout_r1_08;
extern "C" unsigned long extraout_r1_09;
extern "C" unsigned long g_0048efcc;
extern "C" unsigned long g_0048f194;
extern "C" unsigned long g_0048f198;
extern "C" unsigned long g_0048f19c;
extern "C" unsigned long g_0048f1a0;
extern "C" unsigned long g_0048f1a4;
extern "C" unsigned long g_0048f1a8;
extern "C" unsigned long g_0048f1ac;
extern "C" unsigned long g_0048f1b0;
extern "C" unsigned long g_0048f1b4;
extern "C" unsigned long g_0048f1b8;
extern "C" unsigned long g_0048f1bc;
extern "C" unsigned long g_0048f1c0;
extern "C" unsigned long g_0048f1c4;
extern "C" unsigned long g_0048f1c8;
extern "C" unsigned long g_0048f1cc;
extern "C" unsigned long g_0048f1d0;
extern "C" unsigned long g_0048f1d4;
extern "C" unsigned long g_0048f1d8;
extern "C" unsigned long g_0048f1dc;
extern "C" unsigned long g_0048f1e0;
extern "C" unsigned long g_0048f1e4;
extern "C" unsigned long g_0048f1e8;
extern "C" unsigned long g_0048f1ec;
extern "C" unsigned long g_0048f1f0;
extern "C" unsigned long g_0048f1f4;
extern "C" unsigned long g_0048f1f8;
extern "C" unsigned long g_0048f1fc;
extern "C" unsigned long g_0048f200;
extern "C" unsigned long g_0048f204;
extern "C" unsigned long g_0048f208;
extern "C" unsigned long g_0048f510;
extern "C" unsigned long g_0048f83e;
extern "C" unsigned long g_0048f84c;
extern "C" unsigned long g_0048f850;
extern "C" unsigned long g_0048f854;
extern "C" unsigned long g_0048f856;
extern "C" unsigned long g_0048f858;
extern "C" unsigned long g_0048f85c;
extern "C" unsigned long g_0048f860;
extern "C" unsigned long g_0048f864;
extern "C" unsigned long g_0048f9dc;
extern "C" unsigned long g_0048f9e0;
extern "C" unsigned long g_0048f9e4;
extern "C" unsigned long g_0048fad8;
extern "C" unsigned long g_0048fadc;
extern "C" unsigned long g_0048fbfc;
extern "C" unsigned long g_0048fc00;
extern "C" unsigned long g_0048fc04;
extern "C" unsigned long g_0048fc08;
extern "C" unsigned long g_00490020;
extern "C" unsigned long g_00490024;
extern "C" unsigned long g_00490028;
extern "C" unsigned long g_004900c4;
undefined4 MineData::CheckMineData()
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = (undefined4)(0);
  if (*(int *)(((int)this) + 0x18) == 5) {
    for (iVar3 = *(int *)(((int)this) + 0x10); iVar3 != ((int)this) + 8; iVar3 = func_0079e31c(iVar3)) {
      if ((*(int *)(iVar3 + 0x74) - *(int *)(iVar3 + 0x70) >> 3 == 0) &&
         (iVar1 = func_0079e4bc(iVar3 + 0x18,g_0048efcc + 0x48efb2), iVar1 != 0)) {
        return 0;
      }
    }
    uVar2 = (undefined4)(1);
  }
  return uVar2;
}

bool MineData::CheckSnatchData()
{
  return *(int *)(((int)this) + 0x48) - *(int *)(((int)this) + 0x44) >> 7 == 5;
}

void MineData::minussnatchplayerinfo()
{
  int iVar1;
  
  iVar1 = *(int *)(((int)this) + 0x84) + -1;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  *(int *)(((int)this) + 0x84) = iVar1;
  return;
}


void MineData::Setrecoverminehero(std::string * p1, int p2, std::vector<MineHeroInfo, std::allocator<MineHeroInfo>> p3)
{
  *(undefined4 *)(((int)this) + 0x34) = *(undefined4 *)(((int)this) + 0x30);
  0 /* ctorZero */;
  func_0079e52c(((int)this) + 0x28,p1);
  *(undefined4 *)(((int)this) + 0x2c) = p2;
  ((std::vector<MineHeroInfo, std::allocator<MineHeroInfo>> *)((int)this + 0x30))->operator=(p3);
  return;
}




MineData::~MineData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

MineData::MineData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (19) =====
void MineData::setMineBg(MINEBG_ENUM * p1)
{
  undefined4 p4 = 0;

  undefined4 *puVar1;
  
  *(undefined4 *)(((int)this) + 0x98) = (undefined4)(intptr_t)p1;
  puVar1 = *(undefined4 **)(((int)this) + 0x94);
  if (puVar1 != 0) {
    (**(code **)*puVar1)(puVar1,((int)this),*(code **)*puVar1,puVar1,p4);
  }
  return;
}

void MineData::CheckRefreshData()
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x1c));
  if (*(int *)(((int)this) + 0x20) - iVar3 >> 7 == 5) {
    for (; iVar3 != *(int *)(((int)this) + 0x20); iVar3 = iVar3 + 0x80) {
      if ((*(int *)(iVar3 + 0x5c) - *(int *)(iVar3 + 0x58) >> 3 == 0) &&
         (iVar2 = func_0079e4bc(iVar3,g_0048f00c + 0x48effc,*(int *)(iVar3 + 0x58),0,p4),
         iVar2 != 0)) goto LAB_0048efde;
    }
    uVar1 = (undefined4)(1);
  }
  else {
LAB_0048efde:
    uVar1 = (undefined4)(0);
  }
  return;
}

void MineData::PrintmineDatainfo(MineitemData * p1) const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MineData::ClearMineData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 MineData::getownminedatabypos(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 MineData::getrefreshminedata()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 MineData::getsnatchminedata()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void MineData::ClearRefreshData()
/* DESTROYAUX_V1: 1 处降级 */
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(((int)this) + 0x1c));
  (void)0; /* DESTROYAUX 降级 */
  *(undefined4 *)(((int)this) + 0x20) = uVar1;
  return;
}

void MineData::ClearSnatchData()
/* DESTROYAUX_V1: 1 处降级 */
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(((int)this) + 0x44));
  (void)0; /* DESTROYAUX 降级 */
  *(undefined4 *)(((int)this) + 0x48) = uVar1;
  return;
}

void MineData::GetDataFromNet(int p1, bool p2, int p3)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  iVar1 = (undefined4)(intptr_t)(((PlatformHelp *)this)->CheckNet());
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_24,"当前网络连接异常，请检查连接",auStack_2c);
    ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_20);
    func_0079e45c(auStack_1c,uStack_20,auStack_28);
    ((Toast *)(uVar2))->showSystemRemind((std::string *)(char *)auStack_1c);
    func_0079e2bc(auStack_1c);
    func_0079e2bc(&uStack_20);
    func_0079e2bc(auStack_24);
    uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)(uVar2))->postNotification((char const*)"MSG_MINEERROR");
    return;
  }
  if (p1 == 0) {
    ((MineData *)(((int)this)))->ClearMineData();
    goto LAB_0048fb9e;
  }
  if (p1 - 1U < 2) {
    ((MineData *)(((int)this)))->ClearRefreshData();
LAB_0048fb8c:
    if (p1 != 8) goto LAB_0048fb9e;
  }
  else {
    if (p1 == 7) {
      ((MineData *)(((int)this)))->ClearSnatchData();
      goto LAB_0048fb9e;
    }
    if (p1 != 0xb) goto LAB_0048fb8c;
  }
  cocos2d::CCLog((char const*)"debug====EURLMINE_HISTORY====");
  *(undefined1 *)(((int)this) + 0x7c) = 0;
LAB_0048fb9e:
  piVar4 = (int *)func_0079e2fc(0x20);
  0 /* ctorZero */;
  iVar1 = (undefined4)(intptr_t)(g_0048fc08);
  *(undefined1 *)(piVar4 + 5) = p2;
  piVar4[6] = p1;
  iVar1 = (undefined4)(intptr_t)(*(int *)(iVar1 + 0x48fbb4));
  piVar4[7] = p3;
  *piVar4 = iVar1 + 8;
  iVar1 = (undefined4)(intptr_t)(((MineHttp *)(piVar4))->init());
  if (iVar1 == 0) {
    (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
  }
  else {
    ((cocos2d::CCObject *)(piVar4))->autorelease();
  }
  return;
}

void MineData::Setminedata(MineitemData * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MineData::Setrecoverminenewinfo()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MineData::Setrewardminenewinfo(std::vector<MineRewardItemData, std::allocator<MineRewardItemData>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MineData::Setspecrewardminenewinfo(std::vector<MineRewardItemData, std::allocator<MineRewardItemData>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MineData::ClearOneMinebyid(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MineData::Setprotectminenewinfo()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MineData::Setpositionminenewinfo()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MineData::Setrefreshminedata(MineitemData * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MineData::Setsnatchminedata(MineitemData * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

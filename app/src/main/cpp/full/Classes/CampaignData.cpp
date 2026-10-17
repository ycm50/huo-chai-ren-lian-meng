#include "CampaignData.h"
#include "CCObject.h"
#include "CampaignChildInfo.h"
#include "BLCampaignManager.h"
#include "BLLanguage.h"
#include "CampaignHttp.h"
#include "CampaignInfo.h"
#include "CampaignTermSysFactory.h"
#include "DataManager.h"
#include "PlatformHelp.h"
#include "Ptime.h"
#include "StringEx.h"
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
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e33c(...);
extern "C" long long func_0079e38c(...);
extern "C" long long func_0079e39c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e774(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long DAT_00469d54;
extern "C" unsigned long UNK_00469d66;
extern "C" unsigned long _DAT_004240ac;
extern "C" unsigned long _DAT_004240b0;
extern "C" unsigned long _DAT_004240b4;
extern "C" unsigned long _DAT_00469290;
extern "C" unsigned long _DAT_00469294;
extern "C" unsigned long _DAT_00469298;
extern "C" unsigned long _DAT_004692b8;
extern "C" unsigned long _DAT_0046935c;
extern "C" unsigned long _DAT_00469360;
extern "C" unsigned long _DAT_00469364;
extern "C" unsigned long _DAT_00469368;
extern "C" unsigned long _DAT_0046936c;
extern "C" unsigned long _DAT_00469370;
extern "C" unsigned long _DAT_00469374;
extern "C" unsigned long _DAT_00469378;
extern "C" unsigned long _DAT_0046937c;
extern "C" unsigned long _DAT_00469380;
extern "C" unsigned long _DAT_00469384;
extern "C" unsigned long _DAT_00469388;
extern "C" unsigned long _DAT_004694ac;
extern "C" unsigned long _DAT_004694b0;
extern "C" unsigned long _DAT_004694b4;
extern "C" unsigned long _DAT_004694b8;
extern "C" unsigned long _DAT_004694bc;
extern "C" unsigned long _DAT_004694c0;
extern "C" unsigned long _DAT_004694c4;
extern "C" unsigned long _DAT_004694c8;
extern "C" unsigned long _DAT_004694cc;
extern "C" unsigned long _DAT_004694d0;
extern "C" unsigned long _DAT_004694d4;
extern "C" unsigned long _DAT_004694d8;
extern "C" unsigned long _DAT_004694dc;
extern "C" unsigned long _DAT_004694e0;
extern "C" unsigned long _DAT_004694e4;
extern "C" unsigned long _DAT_004694e8;
extern "C" unsigned long _DAT_004694ec;
extern "C" unsigned long _DAT_004694f0;
extern "C" unsigned long _DAT_004694f4;
extern "C" unsigned long _DAT_004694f8;
extern "C" unsigned long _DAT_004694fc;
extern "C" unsigned long _DAT_004696c8;
extern "C" unsigned long _DAT_004696cc;
extern "C" unsigned long _DAT_00469794;
extern "C" unsigned long _DAT_00469798;
extern "C" unsigned long _DAT_00469890;
extern "C" unsigned long _DAT_00469894;
extern "C" unsigned long _DAT_00469898;
extern "C" unsigned long _DAT_0046989c;
extern "C" unsigned long _DAT_0046993c;
extern "C" unsigned long _DAT_004699ac;
extern "C" unsigned long _DAT_004699b0;
extern "C" unsigned long _DAT_00469ac8;
extern "C" unsigned long _DAT_00469acc;
extern "C" unsigned long _DAT_00469ad0;
extern "C" unsigned long _DAT_00469d54;
extern "C" unsigned long _DAT_00469d58;
extern "C" unsigned long _DAT_00469d5c;
extern "C" unsigned long _DAT_00469d60;
extern "C" unsigned long _DAT_00469d64;
extern "C" unsigned long _DAT_00469f58;
extern "C" unsigned long _DAT_00469f5c;
extern "C" unsigned long _DAT_0046aa18;
extern "C" unsigned long _DAT_0046aa1c;
extern "C" unsigned long _DAT_0046aa20;
extern "C" unsigned long _DAT_0046aa24;
extern "C" unsigned long _DAT_0046aa28;
extern "C" unsigned long _DAT_0046ae60;
extern "C" unsigned long _DAT_0046ae64;
extern "C" unsigned long _DAT_0046ae68;
extern "C" unsigned long _DAT_0046ae6c;
extern "C" unsigned long _DAT_0046ae70;
extern "C" unsigned long _DAT_0046ae74;
extern "C" unsigned long _DAT_0046ae78;
extern "C" unsigned long _DAT_0046ae7c;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r1_01;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_004240ac;
extern "C" unsigned long g_004240b0;
extern "C" unsigned long g_004240b4;
extern "C" unsigned long g_00469290;
extern "C" unsigned long g_00469294;
extern "C" unsigned long g_00469298;
extern "C" unsigned long g_004692b8;
extern "C" unsigned long g_0046935c;
extern "C" unsigned long g_00469360;
extern "C" unsigned long g_00469364;
extern "C" unsigned long g_00469368;
extern "C" unsigned long g_0046936c;
extern "C" unsigned long g_00469370;
extern "C" unsigned long g_00469374;
extern "C" unsigned long g_00469378;
extern "C" unsigned long g_0046937c;
extern "C" unsigned long g_00469380;
extern "C" unsigned long g_00469384;
extern "C" unsigned long g_00469388;
extern "C" unsigned long g_004694ac;
extern "C" unsigned long g_004694b0;
extern "C" unsigned long g_004694b4;
extern "C" unsigned long g_004694b8;
extern "C" unsigned long g_004694bc;
extern "C" unsigned long g_004694c0;
extern "C" unsigned long g_004694c4;
extern "C" unsigned long g_004694c8;
extern "C" unsigned long g_004694cc;
extern "C" unsigned long g_004694d0;
extern "C" unsigned long g_004694d4;
extern "C" unsigned long g_004694d8;
extern "C" unsigned long g_004694dc;
extern "C" unsigned long g_004694e0;
extern "C" unsigned long g_004694e4;
extern "C" unsigned long g_004694e8;
extern "C" unsigned long g_004694ec;
extern "C" unsigned long g_004694f0;
extern "C" unsigned long g_004694f4;
extern "C" unsigned long g_004694f8;
extern "C" unsigned long g_004694fc;
extern "C" unsigned long g_004696c8;
extern "C" unsigned long g_004696cc;
extern "C" unsigned long g_00469794;
extern "C" unsigned long g_00469798;
extern "C" unsigned long g_00469890;
extern "C" unsigned long g_00469894;
extern "C" unsigned long g_00469898;
extern "C" unsigned long g_0046989c;
extern "C" unsigned long g_0046993c;
extern "C" unsigned long g_004699ac;
extern "C" unsigned long g_004699b0;
extern "C" unsigned long g_00469ac8;
extern "C" unsigned long g_00469acc;
extern "C" unsigned long g_00469ad0;
extern "C" unsigned long g_00469d54;
extern "C" unsigned long g_00469d58;
extern "C" unsigned long g_00469d5c;
extern "C" unsigned long g_00469d60;
extern "C" unsigned long g_00469d64;
extern "C" unsigned long g_00469d66;
extern "C" unsigned long g_00469f58;
extern "C" unsigned long g_00469f5c;
extern "C" unsigned long g_0046aa18;
extern "C" unsigned long g_0046aa1c;
extern "C" unsigned long g_0046aa20;
extern "C" unsigned long g_0046aa24;
extern "C" unsigned long g_0046aa28;
extern "C" unsigned long g_0046ae60;
extern "C" unsigned long g_0046ae64;
extern "C" unsigned long g_0046ae68;
extern "C" unsigned long g_0046ae6c;
extern "C" unsigned long g_0046ae70;
extern "C" unsigned long g_0046ae74;
extern "C" unsigned long g_0046ae78;
extern "C" unsigned long g_0046ae7c;
CampaignData::~CampaignData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}


undefined4 CampaignData::IsSpecialTermType(int p1)
{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    if (*(int *)(g_004692b8 + 0x4692a4 + iVar2) == p1) {
      return 1;
    }
    iVar2 = iVar1;
  } while (iVar1 != 0x1c);
  return 0;
}


void CampaignData::PrintCampaignChildInfo()
{
  undefined4 p3 = 0;

  int iVar1;
  undefined4 extraout_r2;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(((int)this) + 0x1c);
  while (iVar2 != ((int)this) + 0x14) {
    0 /* ctorZero */;
    0 /* ctorZero */;
    0 /* ctorZero */;
    puVar3 = *(undefined4 **)(iVar2 + 0x3c);
    0 /* ctorZero */;
    for (; iVar1 = g_004694cc, puVar3 != *(undefined4 **)(iVar2 + 0x40); puVar3 = puVar3 + 4) {
      0 /* ctorZero */;
      0 /* ctorZero */;
      0 /* ctorZero */;
      0 /* ctorZero */;
    }
    puVar3 = *(undefined4 **)(iVar2 + 0x20);
    0 /* ctorZero */;
    for (; puVar3 != *(undefined4 **)(iVar2 + 0x24); puVar3 = puVar3 + 5) {
      0 /* ctorZero */;
      0 /* ctorZero */;
      0 /* ctorZero */;
      0 /* ctorZero */;
      0 /* ctorZero */;
    }
    puVar3 = *(undefined4 **)(iVar2 + 0x2c);
    0 /* ctorZero */;
    for (; puVar3 != *(undefined4 **)(iVar2 + 0x30); puVar3 = puVar3 + 5) {
      0 /* ctorZero */;
      0 /* ctorZero */;
      0 /* ctorZero */;
      0 /* ctorZero */;
      0 /* ctorZero */;
    }
    iVar2 = func_0079e31c(iVar2);
    p3 = extraout_r2;
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (16) =====
void CampaignData::GetDataFromNet(URL_CAMPAIGN * p1, bool p2, int p3, int p4)
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
    if (p2 != 0) {
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      uVar3 = (undefined4)(((BLLanguage *)this)->share());
      func_0079e45c(auStack_24,"当前网络连接异常，请检查连接",auStack_2c);
      ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_20);
      func_0079e45c(auStack_1c,uStack_20,auStack_28);
      ((Toast *)(uVar2))->showSystemRemind((std::string *)(char *)auStack_1c);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(&uStack_20);
      func_0079e2bc(auStack_24);
    }
  }
  else {
    piVar4 = (int *)func_0079e2fc(0x24);
    0 /* ctorZero */;
    iVar1 = (undefined4)(intptr_t)(g_00469294);
    *(char *)(piVar4 + 5) = (char)p2;
    *piVar4 = *(int *)(iVar1 + 0x46923e) + 8;
    piVar4[6] = *(int *)(g_00469298 + 0x46924c) + 0xc;
    iVar1 = (undefined4)(intptr_t)(((CampaignHttp *)(piVar4))->init((URL_CAMPAIGN)p1, p3, p4));
    if (iVar1 == 0) {
      (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
    }
    else {
      ((cocos2d::CCObject *)(piVar4))->autorelease();
    }
  }
  return;
}

void CampaignData::PrintCampaignInfo(CampaignInfo * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int CampaignData::GetCampaignNowDataById(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void CampaignData::CompareWebAndLocalData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CampaignData::isCompleteCampaignChild(int p1, int p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CampaignData::CheckCampaignComInfo()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CampaignData::AddCampaignData(CampaignChildTerm * p1, int p2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    if (*(int *)(iVar4 + g_004699ac + 0x46996c) == (int)(intptr_t)p1) {
      for (puVar3 = *(undefined4 **)(((int)this) + 0x28); iVar1 = g_004699b0,
          puVar3 != *(undefined4 **)(((int)this) + 0x2c); puVar3 = puVar3 + 3) {
        if (puVar3[1] == (int)(intptr_t)p1) {
          puVar3[2] = p2 + puVar3[2];
          0 /* ctorZero */;
          uVar2 = (undefined4)(((BLCampaignManager *)this)->instance());
          ((BLCampaignManager *)uVar2)->modifyDBData(*puVar3, puVar3[1], puVar3[2]);
        }
      }
    }
    iVar4 = (undefined4)(intptr_t)(iVar4 + 4);
  } while (iVar4 != 0x3c);
  for (iVar4 = (undefined4)(intptr_t)(*(int *)(((int)this) + 4)); iVar4 != *(int *)(((int)this) + 8); iVar4 = iVar4 + 0x58) {
    if ((int)(intptr_t)p1 == *(int *)(iVar4 + 4)) {
      CampaignData::CheckCampaignComInfo();
    }
  }
  return;
}

undefined4 CampaignData::DealHeroOne(CampaignInfo * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void CampaignData::ClearCampaignData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined * CampaignData::GetChildCamInfoById(int p1) const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void CampaignData::ResolveCampaignComInfo()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CampaignData::SetLocalRewardData(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CampaignData::ReadLocalDbData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CampaignData::SetCampaignChildData(CampaignChildInfo * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CampaignData::DealCampaignInfo(CampaignInfo * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CampaignData::SetCampaignData(CampaignInfo * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

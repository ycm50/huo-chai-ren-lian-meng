#include "CampaignHttp.h"
#include "BLGameScene.h"
#include "CampaignChildInfo.h"
#include "CampaignData.h"
#include "CampaignInfo.h"
#include "DataManager.h"
#include "PlatformHelp.h"
#include "RewardInfo.h"
#include "StringJsonManager.h"
#include "Toast.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e54c(...);
extern "C" long long func_0079e5ac(...);
extern "C" long long func_0079e65c(...);
extern "C" long long func_0079e66c(...);
extern "C" long long func_0079e67c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e954(...);
extern "C" unsigned long _DAT_00468a04;
extern "C" unsigned long _DAT_0046afe0;
extern "C" unsigned long _DAT_0046afe4;
extern "C" unsigned long _DAT_0046afe8;
extern "C" unsigned long _DAT_0046afec;
extern "C" unsigned long _DAT_0046aff0;
extern "C" unsigned long _DAT_0046b3b8;
extern "C" unsigned long _DAT_0046b3bc;
extern "C" unsigned long _DAT_0046b3c0;
extern "C" unsigned long _DAT_0046b3c4;
extern "C" unsigned long _DAT_0046b3c8;
extern "C" unsigned long _DAT_0046b3cc;
extern "C" unsigned long _DAT_0046b3d0;
extern "C" unsigned long _DAT_0046b3d4;
extern "C" unsigned long _DAT_0046b3d8;
extern "C" unsigned long _DAT_0046b3dc;
extern "C" unsigned long _DAT_0046b3e0;
extern "C" unsigned long _DAT_0046b3e4;
extern "C" unsigned long _DAT_0046b3e8;
extern "C" unsigned long _DAT_0046b3ec;
extern "C" unsigned long _DAT_0046b3f0;
extern "C" unsigned long _DAT_0046b3f4;
extern "C" unsigned long _DAT_0046b3f8;
extern "C" unsigned long _DAT_0046b540;
extern "C" unsigned long _DAT_0046b544;
extern "C" unsigned long _DAT_0046b548;
extern "C" unsigned long _DAT_0046b54c;
extern "C" unsigned long _DAT_0046b550;
extern "C" unsigned long _DAT_0046b554;
extern "C" unsigned long _DAT_0046bbf4;
extern "C" unsigned long _DAT_0046bbf8;
extern "C" unsigned long _DAT_0046bbfc;
extern "C" unsigned long _DAT_0046bc00;
extern "C" unsigned long _DAT_0046bc04;
extern "C" unsigned long _DAT_0046bc08;
extern "C" unsigned long _DAT_0046bc0c;
extern "C" unsigned long _DAT_0046bc10;
extern "C" unsigned long _DAT_0046bc14;
extern "C" unsigned long _DAT_0046bc18;
extern "C" unsigned long _DAT_0046bc1c;
extern "C" unsigned long _DAT_0046bc20;
extern "C" unsigned long _DAT_0046bc24;
extern "C" unsigned long _DAT_0046bc28;
extern "C" unsigned long _DAT_0046bc2c;
extern "C" unsigned long _DAT_0046bc30;
extern "C" unsigned long _DAT_0046bc34;
extern "C" unsigned long _DAT_0046bc38;
extern "C" unsigned long _DAT_0046bd78;
extern "C" unsigned long _DAT_0046bd7c;
extern "C" unsigned long _DAT_0046bd80;
extern "C" unsigned long _DAT_0046bd84;
extern "C" unsigned long _DAT_0046bd88;
extern "C" unsigned long _DAT_0046bd8c;
extern "C" unsigned long _DAT_0046bd90;
extern "C" unsigned long _DAT_0046bfa0;
extern "C" unsigned long _DAT_0046bfa4;
extern "C" unsigned long _DAT_0046bfa8;
extern "C" unsigned long _DAT_0046bfac;
extern "C" unsigned long _DAT_0046bfb0;
extern "C" unsigned long _DAT_0046bfb4;
extern "C" unsigned long _DAT_0046bfb8;
extern "C" unsigned long _DAT_0046bfbc;
extern "C" unsigned long _DAT_0046bfc0;
extern "C" unsigned long _DAT_0046bfc4;
extern "C" unsigned long _DAT_0046c278;
extern "C" unsigned long _DAT_0046c27c;
extern "C" unsigned long _DAT_0046c280;
extern "C" unsigned long _DAT_0046c284;
extern "C" unsigned long _DAT_0046c288;
extern "C" unsigned long _DAT_0046c28c;
extern "C" unsigned long _DAT_0046c290;
extern "C" unsigned long _DAT_0046c294;
extern "C" unsigned long _DAT_0046c298;
extern "C" unsigned long _DAT_0046c29c;
extern "C" unsigned long _DAT_0046c2a0;
extern "C" unsigned long _DAT_0046c2a4;
extern "C" unsigned long _DAT_0046c2a8;
extern "C" unsigned long _DAT_0046c43c;
extern "C" unsigned long _DAT_0046c440;
extern "C" unsigned long _DAT_0046c444;
extern "C" unsigned long _DAT_0046c448;
extern "C" unsigned long _DAT_0046c44c;
extern "C" unsigned long _DAT_0046c450;
extern "C" unsigned long _DAT_0046c454;
extern "C" unsigned long _DAT_0046c458;
extern "C" unsigned long _DAT_0046c45c;
extern "C" unsigned long _DAT_0046c460;
extern "C" unsigned long _DAT_0046c464;
extern "C" unsigned long _DAT_0046c608;
extern "C" unsigned long _DAT_0046c60c;
extern "C" unsigned long _DAT_0046c610;
extern "C" unsigned long _DAT_0046c614;
extern "C" unsigned long _DAT_0046c618;
extern "C" unsigned long _DAT_0046c61c;
extern "C" unsigned long _DAT_0046c620;
extern "C" unsigned long _DAT_0046c624;
extern "C" unsigned long _DAT_0046c628;
extern "C" unsigned long _DAT_0046c62c;
extern "C" unsigned long _DAT_0046c630;
extern "C" unsigned long _DAT_0046c634;
extern "C" unsigned long g_00468a04;
extern "C" unsigned long g_0046afe0;
extern "C" unsigned long g_0046afe4;
extern "C" unsigned long g_0046afe8;
extern "C" unsigned long g_0046afec;
extern "C" unsigned long g_0046aff0;
extern "C" unsigned long g_0046b3b8;
extern "C" unsigned long g_0046b3bc;
extern "C" unsigned long g_0046b3c0;
extern "C" unsigned long g_0046b3c4;
extern "C" unsigned long g_0046b3c8;
extern "C" unsigned long g_0046b3cc;
extern "C" unsigned long g_0046b3d0;
extern "C" unsigned long g_0046b3d4;
extern "C" unsigned long g_0046b3d8;
extern "C" unsigned long g_0046b3dc;
extern "C" unsigned long g_0046b3e0;
extern "C" unsigned long g_0046b3e4;
extern "C" unsigned long g_0046b3e8;
extern "C" unsigned long g_0046b3ec;
extern "C" unsigned long g_0046b3f0;
extern "C" unsigned long g_0046b3f4;
extern "C" unsigned long g_0046b3f8;
extern "C" unsigned long g_0046b540;
extern "C" unsigned long g_0046b544;
extern "C" unsigned long g_0046b548;
extern "C" unsigned long g_0046b54c;
extern "C" unsigned long g_0046b550;
extern "C" unsigned long g_0046b554;
extern "C" unsigned long g_0046bbf4;
extern "C" unsigned long g_0046bbf8;
extern "C" unsigned long g_0046bbfc;
extern "C" unsigned long g_0046bc00;
extern "C" unsigned long g_0046bc04;
extern "C" unsigned long g_0046bc08;
extern "C" unsigned long g_0046bc0c;
extern "C" unsigned long g_0046bc10;
extern "C" unsigned long g_0046bc14;
extern "C" unsigned long g_0046bc18;
extern "C" unsigned long g_0046bc1c;
extern "C" unsigned long g_0046bc20;
extern "C" unsigned long g_0046bc24;
extern "C" unsigned long g_0046bc28;
extern "C" unsigned long g_0046bc2c;
extern "C" unsigned long g_0046bc30;
extern "C" unsigned long g_0046bc34;
extern "C" unsigned long g_0046bc38;
extern "C" unsigned long g_0046bd78;
extern "C" unsigned long g_0046bd7c;
extern "C" unsigned long g_0046bd80;
extern "C" unsigned long g_0046bd84;
extern "C" unsigned long g_0046bd88;
extern "C" unsigned long g_0046bd8c;
extern "C" unsigned long g_0046bd90;
extern "C" unsigned long g_0046bfa0;
extern "C" unsigned long g_0046bfa4;
extern "C" unsigned long g_0046bfa8;
extern "C" unsigned long g_0046bfac;
extern "C" unsigned long g_0046bfb0;
extern "C" unsigned long g_0046bfb4;
extern "C" unsigned long g_0046bfb8;
extern "C" unsigned long g_0046bfbc;
extern "C" unsigned long g_0046bfc0;
extern "C" unsigned long g_0046bfc4;
extern "C" unsigned long g_0046c278;
extern "C" unsigned long g_0046c27c;
extern "C" unsigned long g_0046c280;
extern "C" unsigned long g_0046c284;
extern "C" unsigned long g_0046c288;
extern "C" unsigned long g_0046c28c;
extern "C" unsigned long g_0046c290;
extern "C" unsigned long g_0046c294;
extern "C" unsigned long g_0046c298;
extern "C" unsigned long g_0046c29c;
extern "C" unsigned long g_0046c2a0;
extern "C" unsigned long g_0046c2a4;
extern "C" unsigned long g_0046c2a8;
extern "C" unsigned long g_0046c43c;
extern "C" unsigned long g_0046c440;
extern "C" unsigned long g_0046c444;
extern "C" unsigned long g_0046c448;
extern "C" unsigned long g_0046c44c;
extern "C" unsigned long g_0046c450;
extern "C" unsigned long g_0046c454;
extern "C" unsigned long g_0046c458;
extern "C" unsigned long g_0046c45c;
extern "C" unsigned long g_0046c460;
extern "C" unsigned long g_0046c464;
extern "C" unsigned long g_0046c608;
extern "C" unsigned long g_0046c60c;
extern "C" unsigned long g_0046c610;
extern "C" unsigned long g_0046c614;
extern "C" unsigned long g_0046c618;
extern "C" unsigned long g_0046c61c;
extern "C" unsigned long g_0046c620;
extern "C" unsigned long g_0046c624;
extern "C" unsigned long g_0046c628;
extern "C" unsigned long g_0046c62c;
extern "C" unsigned long g_0046c630;
extern "C" unsigned long g_0046c634;
CampaignHttp::~CampaignHttp()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

bool CampaignHttp::GetPutTemplate(int p1, int p2)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  iStack_28 = *(int *)(g_0046afe0 + 0x46af0a) + 0xc;
  func_0079e45c(&uStack_24,((intptr_t)"json/campaign/campaigntemplateput.json"),aiStack_1c);
  0 /* ctorZero */;
  piVar1 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  (**(code **)(*piVar1 + 0x18))(&uStack_20,piVar1,uStack_24);
  aiStack_1c[0] = 0;
  piVar1 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,uStack_20,((intptr_t)"rb"),aiStack_1c);
  if (iVar2 == 0) {
    0 /* ctorZero */;
  }
  else {
    func_0079e65c(&iStack_28,aiStack_1c[0] + 1,0);
    func_0079e66c(&iStack_28);
    (void)(((long long)::memcpy((void *)(iStack_28),(const void *)(iVar2),(size_t)(aiStack_1c[0]))));
    (void)(::operator delete[]((void *)(iVar2)));
    cocos2d::CCString::createWithFormat((char const*)iStack_28, p1, p2);
    uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    func_0079e2dc(((int)this) + 0x18,uVar3);
  }
  func_0079e2bc(&uStack_20);
  func_0079e2bc(&uStack_24);
  func_0079e2bc(&iStack_28);
  return iVar2 != 0;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
bool CampaignHttp::init(URL_CAMPAIGN p1, int p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void CampaignHttp::SysCampaignChildJson(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CampaignHttp::SysCampaignJson(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CampaignHttp::onGetCampaignData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CampaignHttp::onGetCampaignHuaWeiData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CampaignHttp::onPutCampaignData(cocos2d::extension::CCHttpClient* p1, cocos2d::extension::CCHttpResponse* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

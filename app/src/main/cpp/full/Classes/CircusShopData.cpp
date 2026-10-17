#include "CircusShopData.h"
#include "CCObject.h"
#include "BLLanguage.h"
#include "CircusData.h"
#include "CircusPlayerinfo.h"
#include "CircusShopDataGet.h"
#include "CircusShopItem.h"
#include "DataManager.h"
#include "MissionSelectHeroData.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e33c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e38c(...);
extern "C" long long func_0079e39c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e55c(...);
extern "C" unsigned long _DAT_004771d8;
extern "C" unsigned long _DAT_004771dc;
extern "C" unsigned long _DAT_004771e0;
extern "C" unsigned long _DAT_004771e4;
extern "C" unsigned long _DAT_00477274;
extern "C" unsigned long _DAT_00477278;
extern "C" unsigned long _DAT_0047727c;
extern "C" unsigned long _DAT_00477280;
extern "C" unsigned long _DAT_00477284;
extern "C" unsigned long _DAT_00477384;
extern "C" unsigned long _DAT_00477388;
extern "C" unsigned long _DAT_0047738c;
extern "C" unsigned long _DAT_00477438;
extern "C" unsigned long _DAT_0047743c;
extern "C" unsigned long _DAT_00477440;
extern "C" unsigned long _DAT_00477444;
extern "C" unsigned long _DAT_00477448;
extern "C" unsigned long _DAT_0047744c;
extern "C" unsigned long _DAT_00477450;
extern "C" unsigned long _DAT_00477454;
extern "C" unsigned long _DAT_00477458;
extern "C" unsigned long _DAT_0047745c;
extern "C" unsigned long _DAT_00477460;
extern "C" unsigned long _DAT_00477464;
extern "C" unsigned long _DAT_00477468;
extern "C" unsigned long _DAT_0047746c;
extern "C" unsigned long _DAT_00477470;
extern "C" unsigned long _DAT_00477af8;
extern "C" unsigned long _DAT_00477afc;
extern "C" unsigned long _DAT_00477b00;
extern "C" unsigned long _DAT_00477e70;
extern "C" unsigned long _DAT_00477e74;
extern "C" unsigned long _DAT_00477e78;
extern "C" unsigned long _DAT_00478148;
extern "C" unsigned long _DAT_00478694;
extern "C" unsigned long _DAT_00478940;
extern "C" unsigned long _DAT_00478944;
extern "C" unsigned long _DAT_00478948;
extern "C" unsigned long g_004771d8;
extern "C" unsigned long g_004771dc;
extern "C" unsigned long g_004771e0;
extern "C" unsigned long g_004771e4;
extern "C" unsigned long g_00477274;
extern "C" unsigned long g_00477278;
extern "C" unsigned long g_0047727c;
extern "C" unsigned long g_00477280;
extern "C" unsigned long g_00477284;
extern "C" unsigned long g_00477384;
extern "C" unsigned long g_00477388;
extern "C" unsigned long g_0047738c;
extern "C" unsigned long g_00477438;
extern "C" unsigned long g_0047743c;
extern "C" unsigned long g_00477440;
extern "C" unsigned long g_00477444;
extern "C" unsigned long g_00477448;
extern "C" unsigned long g_0047744c;
extern "C" unsigned long g_00477450;
extern "C" unsigned long g_00477454;
extern "C" unsigned long g_00477458;
extern "C" unsigned long g_0047745c;
extern "C" unsigned long g_00477460;
extern "C" unsigned long g_00477464;
extern "C" unsigned long g_00477468;
extern "C" unsigned long g_0047746c;
extern "C" unsigned long g_00477470;
extern "C" unsigned long g_00477af8;
extern "C" unsigned long g_00477afc;
extern "C" unsigned long g_00477b00;
extern "C" unsigned long g_00477e70;
extern "C" unsigned long g_00477e74;
extern "C" unsigned long g_00477e78;
extern "C" unsigned long g_00478148;
extern "C" unsigned long g_00478694;
extern "C" unsigned long g_00478940;
extern "C" unsigned long g_00478944;
extern "C" unsigned long g_00478948;

int CircusShopData::GetCircusShopItemById(int p1) const
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = g_00477274;
  iVar3 = *(int *)(((int)this) + 0x24);
  iVar2 = ((int)this) + 0x20;
  while (iVar4 = iVar3, iVar4 != 0) {
    if (*(int *)(iVar4 + 0x10) < p1) {
      iVar3 = *(int *)(iVar4 + 0xc);
    }
    else {
      iVar3 = *(int *)(iVar4 + 8);
      iVar2 = iVar4;
    }
  }
  if ((iVar2 == ((int)this) + 0x20) || (p1 < *(int *)(iVar2 + 0x10))) {
    if ((*(uint *)(((intptr_t)"(GNU) 4.4.3")) & 1) == 0) {
      iVar4 = ((intptr_t)"(GNU) 4.4.3");
      iVar2 = func_0079e33c(iVar4);
      iVar3 = g_0047727c;
      if (iVar2 != 0) {
        *(undefined4 *)(iVar1 + 0x477290) = 0;
        *(undefined4 *)(iVar1 + 0x477294) = 0;
        iVar3 = *(int *)(iVar3 + 0x477246);
        *(undefined4 *)(iVar1 + 0x477298) = 0;
        iVar3 = iVar3 + 0xc;
        *(int *)(iVar1 + 0x477264) = iVar3;
        *(int *)(iVar1 + 0x477268) = iVar3;
        *(int *)(iVar1 + 0x47726c) = iVar3;
        *(int *)(iVar1 + 0x477270) = iVar3;
        *(undefined4 *)(iVar1 + 0x47725c) = 0xffffffff;
        func_0079e38c(iVar4);
        func_0079e39c(iVar1 + 0x47725c,*(undefined4 *)(((intptr_t)")oF")),
                        g_00477284 + 0x47726e);
        return iVar1 + 0x47725c;
      }
    }
    iVar2 = (undefined4)(intptr_t)("4.3");
  }
  else {
    iVar2 = iVar2 + 0x14;
  }
  return iVar2;
}



CircusShopData::~CircusShopData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}



CircusShopData::CircusShopData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (7) =====
int CircusShopData::GetVecorderidbytype(CircusShopItemViewType * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void CircusShopData::BuyItemSuccessRefresh(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusShopData::PrintCircusShopIteminfo(CircusShopItem * p1) const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusShopData::ClearCircusShopData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusShopData::GetDataFromNet(URL_CIRCUSSHOP * p1, bool p2, int p3)
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
    piVar4 = (int *)func_0079e2fc(0x20);
    0 /* ctorZero */;
    iVar1 = (undefined4)(intptr_t)(g_00477e74);
    *(char *)(piVar4 + 5) = (char)p2;
    piVar4[6] = p3;
    *piVar4 = *(int *)(iVar1 + 0x477e1e) + 8;
    piVar4[7] = *(int *)(g_00477e78 + 0x477e2c) + 0xc;
    iVar1 = (undefined4)(intptr_t)(((CircusShopDataGet *)(piVar4))->init((URL_CIRCUSSHOP)p1));
    if (iVar1 == 0) {
      (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
    }
    else {
      ((cocos2d::CCObject *)(piVar4))->autorelease();
    }
  }
  return;
}

void CircusShopData::NoticeCircusShopDataSort()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CircusShopData::SetCircusShopData(CircusShopItem * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

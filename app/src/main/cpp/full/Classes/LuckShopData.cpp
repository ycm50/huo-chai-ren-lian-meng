#include "LuckShopData.h"
#include "CCObject.h"
#include "CCNotificationCenter.h"
#include "BLLanguage.h"
#include "LuckShopDataGet.h"
#include "LuckShopItem.h"
#include "PlatformHelp.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e33c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e38c(...);
extern "C" long long func_0079e39c(...);
extern "C" long long func_0079e3dc(...);
extern "C" long long func_0079e45c(...);
extern "C" unsigned long _DAT_0048af44;
extern "C" unsigned long _DAT_0048af48;
extern "C" unsigned long _DAT_0048af4c;
extern "C" unsigned long _DAT_0048af50;
extern "C" unsigned long _DAT_0048afe0;
extern "C" unsigned long _DAT_0048afe4;
extern "C" unsigned long _DAT_0048afe8;
extern "C" unsigned long _DAT_0048afec;
extern "C" unsigned long _DAT_0048aff0;
extern "C" unsigned long _DAT_0048b040;
extern "C" unsigned long _DAT_0048b044;
extern "C" unsigned long _DAT_0048b048;
extern "C" unsigned long _DAT_0048b0ec;
extern "C" unsigned long _DAT_0048b0f0;
extern "C" unsigned long _DAT_0048b0f4;
extern "C" unsigned long _DAT_0048b0f8;
extern "C" unsigned long _DAT_0048b0fc;
extern "C" unsigned long _DAT_0048b100;
extern "C" unsigned long _DAT_0048b104;
extern "C" unsigned long _DAT_0048b108;
extern "C" unsigned long _DAT_0048b10c;
extern "C" unsigned long _DAT_0048b110;
extern "C" unsigned long _DAT_0048b114;
extern "C" unsigned long _DAT_0048b118;
extern "C" unsigned long _DAT_0048b11c;
extern "C" unsigned long _DAT_0048b120;
extern "C" unsigned long _DAT_0048b828;
extern "C" unsigned long _DAT_0048b82c;
extern "C" unsigned long _DAT_0048b830;
extern "C" unsigned long _DAT_0048bd24;
extern "C" unsigned long _DAT_0048bd28;
extern "C" unsigned long _DAT_0048bd2c;
extern "C" unsigned long _DAT_0048bec8;
extern "C" unsigned long _DAT_0048c46c;
extern "C" unsigned long _DAT_0048c470;
extern "C" unsigned long g_0048af44;
extern "C" unsigned long g_0048af48;
extern "C" unsigned long g_0048af4c;
extern "C" unsigned long g_0048af50;
extern "C" unsigned long g_0048afe0;
extern "C" unsigned long g_0048afe4;
extern "C" unsigned long g_0048afe8;
extern "C" unsigned long g_0048afec;
extern "C" unsigned long g_0048aff0;
extern "C" unsigned long g_0048b040;
extern "C" unsigned long g_0048b044;
extern "C" unsigned long g_0048b048;
extern "C" unsigned long g_0048b0ec;
extern "C" unsigned long g_0048b0f0;
extern "C" unsigned long g_0048b0f4;
extern "C" unsigned long g_0048b0f8;
extern "C" unsigned long g_0048b0fc;
extern "C" unsigned long g_0048b100;
extern "C" unsigned long g_0048b104;
extern "C" unsigned long g_0048b108;
extern "C" unsigned long g_0048b10c;
extern "C" unsigned long g_0048b110;
extern "C" unsigned long g_0048b114;
extern "C" unsigned long g_0048b118;
extern "C" unsigned long g_0048b11c;
extern "C" unsigned long g_0048b120;
extern "C" unsigned long g_0048b828;
extern "C" unsigned long g_0048b82c;
extern "C" unsigned long g_0048b830;
extern "C" unsigned long g_0048bd24;
extern "C" unsigned long g_0048bd28;
extern "C" unsigned long g_0048bd2c;
extern "C" unsigned long g_0048bec8;
extern "C" unsigned long g_0048c46c;
extern "C" unsigned long g_0048c470;

int LuckShopData::GetLuckShopItemById(int p1) const
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = g_0048afe0;
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
    if ((*(uint *)(g_0048afe0 + 0x48b008) & 1) == 0) {
      iVar4 = g_0048afe0 + 0x48b008;
      iVar2 = func_0079e33c(iVar4);
      iVar3 = g_0048afe8;
      if (iVar2 != 0) {
        *(undefined4 *)(iVar1 + 0x48affc) = 0;
        *(undefined4 *)(iVar1 + 0x48b000) = 0;
        iVar3 = *(int *)(iVar3 + 0x48afb2);
        *(undefined4 *)(iVar1 + 0x48b004) = 0;
        iVar3 = iVar3 + 0xc;
        *(int *)(iVar1 + 0x48afd0) = iVar3;
        *(int *)(iVar1 + 0x48afd4) = iVar3;
        *(int *)(iVar1 + 0x48afd8) = iVar3;
        *(int *)(iVar1 + 0x48afdc) = iVar3;
        *(undefined4 *)(iVar1 + 0x48afc8) = 0xffffffff;
        func_0079e38c(iVar4);
        func_0079e39c(iVar1 + 0x48afc8,*(undefined4 *)(g_0048afec + 0x48afd4),
                        g_0048aff0 + 0x48afda);
        return iVar1 + 0x48afc8;
      }
    }
    iVar2 = g_0048afe4 + 0x48afd2;
  }
  else {
    iVar2 = iVar2 + 0x14;
  }
  return iVar2;
}

void LuckShopData::BuyItemSuccessRefresh(int p1, int p2)
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)((intptr_t)"MSG_LUCKSHOPBUYSUCCESS"));
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  piVar2 = (int *)((long long)::operator new((size_t)(0x18)));
  0 /* ctorZero */;
  *piVar2 = *(int *)("\u0010ܫ") + 8;
  piVar2[5] = 0;
  ((cocos2d::CCObject *)piVar2)->autorelease();
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)((intptr_t)"MSG_UPDATELUCKFEN"), (cocos2d::CCObject*)piVar2);
  return;
}


LuckShopData::~LuckShopData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}



LuckShopData::LuckShopData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (6) =====
int LuckShopData::GetVecorderidbytype(LuckShopItemViewType * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void LuckShopData::PrintLuckShopIteminfo(LuckShopItem * p1) const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void LuckShopData::ClearLuckShopData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void LuckShopData::GetDataFromNet(URL_LUCKSHOP * p1, bool p2, int p3)
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
    iVar1 = (undefined4)(intptr_t)(g_0048bd28);
    *(char *)(piVar4 + 5) = (char)p2;
    piVar4[6] = p3;
    *piVar4 = *(int *)(iVar1 + 0x48bcd2) + 8;
    piVar4[7] = *(int *)(g_0048bd2c + 0x48bce0) + 0xc;
    iVar1 = (undefined4)(intptr_t)(((LuckShopDataGet *)(piVar4))->init((URL_LUCKSHOP)p1));
    if (iVar1 == 0) {
      (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
    }
    else {
      ((cocos2d::CCObject *)(piVar4))->autorelease();
    }
  }
  return;
}

void LuckShopData::NoticeLuckShopDataSort()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void LuckShopData::SetLuckShopData(LuckShopItem * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
